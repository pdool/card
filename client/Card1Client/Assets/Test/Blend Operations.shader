﻿Shader "Unity Shaders/BlendShader/Blend Operations" {
	Properties{
		_Color("Color Tint", Color) = (1, 1, 1, 1)
		_MainTex("Main Tex", 2D) = "white" {}
	_AlphaScale("Alpha Scale", Range(0, 1)) = 1
	}
		SubShader{
		Tags{ "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }

		Pass{
		Tags{ "LightMode" = "ForwardBase" }

		ZWrite Off
		//          正常，透明度混合
		//          // Normal
		//          Blend SrcAlpha OneMinusSrcAlpha

		//          柔和叠加
		//          // Soft Additive
		//          Blend OneMinusDstColor One

		//          正片叠底 相乘         
		//          // Multiply
		Blend DstColor Zero

		//          两倍叠加 相加
		//          // 2x Multiply
		//          Blend DstColor SrcColor

		//          变暗
		//          // Darken
		//          BlendOp Min
		//          Blend One One   // When using Min operation, these factors are ignored

		//          变亮
		//          //  Lighten
		//          BlendOp Max
		//          Blend One One // When using Max operation, these factors are ignored

		//          滤色
		//          // Screen
		//          Blend OneMinusDstColor One
		// Or
		//          Blend One OneMinusSrcColor

		//          线性减淡
		//          // Linear Dodge
		//          Blend One One

		CGPROGRAM

#pragma vertex vert
#pragma fragment frag

#include "Lighting.cginc"

		fixed4 _Color;
	sampler2D _MainTex;
	float4 _MainTex_ST;
	fixed _AlphaScale;

	struct a2v {
		float4 vertex : POSITION;
		float3 normal : NORMAL;
		float4 texcoord : TEXCOORD0;
	};

	struct v2f {
		float4 pos : SV_POSITION;
		float2 uv : TEXCOORD0;
	};

	v2f vert(a2v v) {
		v2f o;
		o.pos = mul(UNITY_MATRIX_MVP, v.vertex);

		o.uv = TRANSFORM_TEX(v.texcoord, _MainTex);


		return o;
	}

	fixed4 frag(v2f i) : SV_Target{
		fixed4 texColor = tex2D(_MainTex, i.uv);

	return fixed4(texColor.rgb * _Color.rgb, texColor.a * _AlphaScale);
	}

		ENDCG
	}
	}
		FallBack "Transparent/VertexLit"
}