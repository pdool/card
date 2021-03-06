﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace Assets.XGame.NetWork
{
    internal class ProtoNetSerialize
    {
        [ThreadStatic]
        private static MemoryStream s_Stream = null;
        [ThreadStatic]
       
        private static Dictionary<int, Type> s_DicIDMsg = new Dictionary<int, Type>();
        private static Dictionary<Type, int> s_DicIDName = new Dictionary<Type, int>();
#pragma warning disable CS0414 // The field 'ProtoNetSerialize.s_Inited' is assigned but its value is never used
        private static bool s_Inited = false;
#pragma warning restore CS0414 // The field 'ProtoNetSerialize.s_Inited' is assigned but its value is never used

        public static void register(int id,Type type)
        {
            s_DicIDMsg.Add(id, type);
        }

        public static byte[] Encode(int socketId,object msg)
        {
           // if (s_DicIDName.ContainsKey(msg.GetType()))
           // {
               // MemoryStream ms = new MemoryStream();
                //ProtoBuf.Serializer.Serialize(ms, msg);

                //byte[] data = ms.ToArray();
                //int len = data.Length + 8;
                //Int32 id = 5;
                //byte[] lens = System.BitConverter.GetBytes(len);
                //byte[] ids = System.BitConverter.GetBytes(id);
                //byte[] sendData = new byte[len];

                //lens.CopyTo(sendData, 0);
                //ids.CopyTo(sendData, lens.Length);
                //data.CopyTo(sendData, lens.Length + ids.Length);

                //return sendData;

                DataStream.SetLength(0);
                ProtoBuf.Serializer.Serialize(DataStream, msg);
                byte[] ret = new byte[4 + DataStream.Length];
                int len = ret.Length;
                //int id = s_DicIDName[msg.GetType()];
                int id = socketId;
                ret[0] = (byte)(len >> 8);
                ret[1] = (byte)(len);
                ret[2] = (byte)(id >> 8);
                ret[3] = (byte)(id);
                DataStream.Position = 0;
                DataStream.Read(ret, 4, ret.Length - 4);

                return ret;
         
        }

        public static int readBodyLength = 0;
        public static int readId = 0;

        public static object Decode(byte[] msgbuf)
        {
            int length = (int)(((int)msgbuf[0] << 8) | ((int)msgbuf[1]));
            int val = (int)msgbuf[3];
            if (val < 0) val += 256;

            int id = (int)(((int)msgbuf[2] << 8) | (val));
            readBodyLength = length;
            readId = id;
            if (id < 0)
            {
                //LogSystem.Debug("decode message error:id({0}) len({1}) error !!!", id, msgbuf.Length - 2);
                return null;
            }

            //if (s_DicIDMsg.ContainsKey(id))
            //{
                NetProtocal.Respone sid = (NetProtocal.Respone)id;

            NetParam netPar;
            if(!NetDataMgr.Instance.Mrgs.TryGetValue(sid,out netPar))
            {
                UnityEngine.Debug.LogError("NetDataMgr.Instance.mMrgs  not have:" + sid);
                return null;
            }
                Type t = netPar.mType;
               // Type t = typeof(NetProtocal.LoginMsg2);
                DataStream.SetLength(0);
                DataStream.Write(msgbuf, 4, msgbuf.Length - 4);
                DataStream.Position = 0;
                try
                {
                //ProtoBuf.Meta.RuntimeTypeModel.Default.Deserialize(m_protoms, null, n.mType);
                //object msg = ProtoBuf.Serializer.Deserialize<Type>(DataStream);
                int bodyLen = length - 4;
               
                    object msg = ProtoBuf.Meta.RuntimeTypeModel.Default.Deserialize(DataStream, null, t,bodyLen);
                    if (msg == null)
                    {
                        //LogSystem.Debug("decode message error:can't find id {0} len({1}) !!!", id, msgbuf.Length - 2);
                        return null;
                    }
                    //LogSystem.Info("decode message:id {0} len({1})[{2}]", id, msgbuf.Length - 2, msg.GetType().Name);
                    return msg;
                }
                catch (Exception ex)
                {
                    //LogSystem.Error("decode message error:id({0}) len({1}) {2}\n{3}\nData:\n{4}", id, msgbuf.Length - 2, ex.Message, ex.StackTrace, Helper.BinToHex(msgbuf, 2));
                    throw ex;
                }
           // }
          //  return null;
        }
        private static MemoryStream DataStream
        {
            get
            {
                if (null == s_Stream)
                    s_Stream = new MemoryStream(4096);
                return s_Stream;
            }
        }


    }

}
