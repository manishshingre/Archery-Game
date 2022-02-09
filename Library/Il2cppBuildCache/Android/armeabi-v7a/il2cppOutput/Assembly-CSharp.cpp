#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BoxScript
struct BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LevelSelectionScript
struct LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// arrowScript
struct arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26;
// bowscript
struct bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4;
// boxBrake
struct boxBrake_t4077041FE6F4FC9B8D6BC1BE9C07BE53F617E3D2;
// changeScene
struct changeScene_t07EAA8665F38726D3EEF151E54FE987C9D9B8DD4;
// destroyparts
struct destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064;
// enemyScript
struct enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E;
// friendScript
struct friendScript_t03C5C174E40ABECE01E3E9B51F933E47CA7A1746;
// imageclearer
struct imageclearer_tC76943FF7A4DDDD67BA7CBC71AF6284321B0F7EE;
// levelsound
struct levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952;
// map2Script
struct map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818;
// music
struct music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04ED2D3A4736EE4142F523CABB97F77F19CE0794;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076;
IL2CPP_EXTERN_C String_t* _stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BoxScript
struct BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Object BoxScript::destructableRef
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___destructableRef_4;

public:
	inline static int32_t get_offset_of_destructableRef_4() { return static_cast<int32_t>(offsetof(BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467, ___destructableRef_4)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_destructableRef_4() const { return ___destructableRef_4; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_destructableRef_4() { return &___destructableRef_4; }
	inline void set_destructableRef_4(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___destructableRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destructableRef_4), (void*)value);
	}
};


// LevelSelectionScript
struct LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean LevelSelectionScript::unlocked
	bool ___unlocked_4;
	// UnityEngine.UI.Image LevelSelectionScript::unlockImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unlockImage_5;
	// UnityEngine.GameObject[] LevelSelectionScript::stars
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___stars_6;
	// UnityEngine.Sprite LevelSelectionScript::starSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___starSprite_7;

public:
	inline static int32_t get_offset_of_unlocked_4() { return static_cast<int32_t>(offsetof(LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855, ___unlocked_4)); }
	inline bool get_unlocked_4() const { return ___unlocked_4; }
	inline bool* get_address_of_unlocked_4() { return &___unlocked_4; }
	inline void set_unlocked_4(bool value)
	{
		___unlocked_4 = value;
	}

	inline static int32_t get_offset_of_unlockImage_5() { return static_cast<int32_t>(offsetof(LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855, ___unlockImage_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unlockImage_5() const { return ___unlockImage_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unlockImage_5() { return &___unlockImage_5; }
	inline void set_unlockImage_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unlockImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unlockImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_stars_6() { return static_cast<int32_t>(offsetof(LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855, ___stars_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_stars_6() const { return ___stars_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_stars_6() { return &___stars_6; }
	inline void set_stars_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___stars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_6), (void*)value);
	}

	inline static int32_t get_offset_of_starSprite_7() { return static_cast<int32_t>(offsetof(LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855, ___starSprite_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_starSprite_7() const { return ___starSprite_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_starSprite_7() { return &___starSprite_7; }
	inline void set_starSprite_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___starSprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starSprite_7), (void*)value);
	}
};


// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SceneManagement.Scene PlayerManager::m_Scene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___m_Scene_4;
	// UnityEngine.GameObject[] PlayerManager::enemy
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___enemy_5;
	// UnityEngine.AudioSource PlayerManager::GameOverSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___GameOverSound_6;
	// UnityEngine.AudioSource PlayerManager::LevelCompleteSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___LevelCompleteSound_7;
	// System.Int32 PlayerManager::panel_sound_Count
	int32_t ___panel_sound_Count_8;
	// UnityEngine.GameObject PlayerManager::gameOverScreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverScreen_11;
	// UnityEngine.GameObject PlayerManager::levelCompletescreen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelCompletescreen_12;
	// UnityEngine.GameObject PlayerManager::pausemenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pausemenu_13;
	// UnityEngine.UI.Text PlayerManager::levelno
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___levelno_14;
	// UnityEngine.GameObject[] PlayerManager::stars
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___stars_15;
	// System.Int32 PlayerManager::EnemyCount
	int32_t ___EnemyCount_16;
	// System.Int32 PlayerManager::BoxCount
	int32_t ___BoxCount_17;
	// System.Int32 PlayerManager::score
	int32_t ___score_18;
	// System.String PlayerManager::sceneName
	String_t* ___sceneName_19;
	// UnityEngine.GameObject PlayerManager::Pausemenupanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Pausemenupanel_20;

public:
	inline static int32_t get_offset_of_m_Scene_4() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___m_Scene_4)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_m_Scene_4() const { return ___m_Scene_4; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_m_Scene_4() { return &___m_Scene_4; }
	inline void set_m_Scene_4(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___m_Scene_4 = value;
	}

	inline static int32_t get_offset_of_enemy_5() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___enemy_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_enemy_5() const { return ___enemy_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_enemy_5() { return &___enemy_5; }
	inline void set_enemy_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___enemy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverSound_6() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___GameOverSound_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_GameOverSound_6() const { return ___GameOverSound_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_GameOverSound_6() { return &___GameOverSound_6; }
	inline void set_GameOverSound_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___GameOverSound_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverSound_6), (void*)value);
	}

	inline static int32_t get_offset_of_LevelCompleteSound_7() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___LevelCompleteSound_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_LevelCompleteSound_7() const { return ___LevelCompleteSound_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_LevelCompleteSound_7() { return &___LevelCompleteSound_7; }
	inline void set_LevelCompleteSound_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___LevelCompleteSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelCompleteSound_7), (void*)value);
	}

	inline static int32_t get_offset_of_panel_sound_Count_8() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___panel_sound_Count_8)); }
	inline int32_t get_panel_sound_Count_8() const { return ___panel_sound_Count_8; }
	inline int32_t* get_address_of_panel_sound_Count_8() { return &___panel_sound_Count_8; }
	inline void set_panel_sound_Count_8(int32_t value)
	{
		___panel_sound_Count_8 = value;
	}

	inline static int32_t get_offset_of_gameOverScreen_11() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___gameOverScreen_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverScreen_11() const { return ___gameOverScreen_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverScreen_11() { return &___gameOverScreen_11; }
	inline void set_gameOverScreen_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverScreen_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScreen_11), (void*)value);
	}

	inline static int32_t get_offset_of_levelCompletescreen_12() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___levelCompletescreen_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelCompletescreen_12() const { return ___levelCompletescreen_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelCompletescreen_12() { return &___levelCompletescreen_12; }
	inline void set_levelCompletescreen_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelCompletescreen_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelCompletescreen_12), (void*)value);
	}

	inline static int32_t get_offset_of_pausemenu_13() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___pausemenu_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pausemenu_13() const { return ___pausemenu_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pausemenu_13() { return &___pausemenu_13; }
	inline void set_pausemenu_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pausemenu_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pausemenu_13), (void*)value);
	}

	inline static int32_t get_offset_of_levelno_14() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___levelno_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_levelno_14() const { return ___levelno_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_levelno_14() { return &___levelno_14; }
	inline void set_levelno_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___levelno_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelno_14), (void*)value);
	}

	inline static int32_t get_offset_of_stars_15() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___stars_15)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_stars_15() const { return ___stars_15; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_stars_15() { return &___stars_15; }
	inline void set_stars_15(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___stars_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_15), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyCount_16() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___EnemyCount_16)); }
	inline int32_t get_EnemyCount_16() const { return ___EnemyCount_16; }
	inline int32_t* get_address_of_EnemyCount_16() { return &___EnemyCount_16; }
	inline void set_EnemyCount_16(int32_t value)
	{
		___EnemyCount_16 = value;
	}

	inline static int32_t get_offset_of_BoxCount_17() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___BoxCount_17)); }
	inline int32_t get_BoxCount_17() const { return ___BoxCount_17; }
	inline int32_t* get_address_of_BoxCount_17() { return &___BoxCount_17; }
	inline void set_BoxCount_17(int32_t value)
	{
		___BoxCount_17 = value;
	}

	inline static int32_t get_offset_of_score_18() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___score_18)); }
	inline int32_t get_score_18() const { return ___score_18; }
	inline int32_t* get_address_of_score_18() { return &___score_18; }
	inline void set_score_18(int32_t value)
	{
		___score_18 = value;
	}

	inline static int32_t get_offset_of_sceneName_19() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___sceneName_19)); }
	inline String_t* get_sceneName_19() const { return ___sceneName_19; }
	inline String_t** get_address_of_sceneName_19() { return &___sceneName_19; }
	inline void set_sceneName_19(String_t* value)
	{
		___sceneName_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_19), (void*)value);
	}

	inline static int32_t get_offset_of_Pausemenupanel_20() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___Pausemenupanel_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Pausemenupanel_20() const { return ___Pausemenupanel_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Pausemenupanel_20() { return &___Pausemenupanel_20; }
	inline void set_Pausemenupanel_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Pausemenupanel_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pausemenupanel_20), (void*)value);
	}
};

struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields
{
public:
	// System.Int32 PlayerManager::enemy_count
	int32_t ___enemy_count_9;
	// System.Boolean PlayerManager::isGameOver
	bool ___isGameOver_10;

public:
	inline static int32_t get_offset_of_enemy_count_9() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields, ___enemy_count_9)); }
	inline int32_t get_enemy_count_9() const { return ___enemy_count_9; }
	inline int32_t* get_address_of_enemy_count_9() { return &___enemy_count_9; }
	inline void set_enemy_count_9(int32_t value)
	{
		___enemy_count_9 = value;
	}

	inline static int32_t get_offset_of_isGameOver_10() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields, ___isGameOver_10)); }
	inline bool get_isGameOver_10() const { return ___isGameOver_10; }
	inline bool* get_address_of_isGameOver_10() { return &___isGameOver_10; }
	inline void set_isGameOver_10(bool value)
	{
		___isGameOver_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UIManager::starsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___starsText_4;
	// UnityEngine.UI.Text UIManager::starsText1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___starsText1_5;

public:
	inline static int32_t get_offset_of_starsText_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___starsText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_starsText_4() const { return ___starsText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_starsText_4() { return &___starsText_4; }
	inline void set_starsText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___starsText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starsText_4), (void*)value);
	}

	inline static int32_t get_offset_of_starsText1_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___starsText1_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_starsText1_5() const { return ___starsText1_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_starsText1_5() { return &___starsText1_5; }
	inline void set_starsText1_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___starsText1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___starsText1_5), (void*)value);
	}
};


// arrowScript
struct arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D arrowScript::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_4;
	// System.Boolean arrowScript::hasHit
	bool ___hasHit_5;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26, ___rb_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasHit_5() { return static_cast<int32_t>(offsetof(arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26, ___hasHit_5)); }
	inline bool get_hasHit_5() const { return ___hasHit_5; }
	inline bool* get_address_of_hasHit_5() { return &___hasHit_5; }
	inline void set_hasHit_5(bool value)
	{
		___hasHit_5 = value;
	}
};


// bowscript
struct bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 bowscript::direction
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction_4;
	// UnityEngine.LineRenderer bowscript::lr
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lr_5;
	// UnityEngine.Vector2 bowscript::dragStartPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___dragStartPos_6;
	// UnityEngine.Touch bowscript::touch
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  ___touch_7;
	// System.Single bowscript::LaunchForce
	float ___LaunchForce_8;
	// UnityEngine.GameObject bowscript::Arrow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Arrow_9;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4, ___direction_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_direction_4() const { return ___direction_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_lr_5() { return static_cast<int32_t>(offsetof(bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4, ___lr_5)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lr_5() const { return ___lr_5; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lr_5() { return &___lr_5; }
	inline void set_lr_5(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lr_5), (void*)value);
	}

	inline static int32_t get_offset_of_dragStartPos_6() { return static_cast<int32_t>(offsetof(bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4, ___dragStartPos_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_dragStartPos_6() const { return ___dragStartPos_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_dragStartPos_6() { return &___dragStartPos_6; }
	inline void set_dragStartPos_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___dragStartPos_6 = value;
	}

	inline static int32_t get_offset_of_touch_7() { return static_cast<int32_t>(offsetof(bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4, ___touch_7)); }
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  get_touch_7() const { return ___touch_7; }
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * get_address_of_touch_7() { return &___touch_7; }
	inline void set_touch_7(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		___touch_7 = value;
	}

	inline static int32_t get_offset_of_LaunchForce_8() { return static_cast<int32_t>(offsetof(bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4, ___LaunchForce_8)); }
	inline float get_LaunchForce_8() const { return ___LaunchForce_8; }
	inline float* get_address_of_LaunchForce_8() { return &___LaunchForce_8; }
	inline void set_LaunchForce_8(float value)
	{
		___LaunchForce_8 = value;
	}

	inline static int32_t get_offset_of_Arrow_9() { return static_cast<int32_t>(offsetof(bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4, ___Arrow_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Arrow_9() const { return ___Arrow_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Arrow_9() { return &___Arrow_9; }
	inline void set_Arrow_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Arrow_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Arrow_9), (void*)value);
	}
};


// boxBrake
struct boxBrake_t4077041FE6F4FC9B8D6BC1BE9C07BE53F617E3D2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource boxBrake::boxBraking
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___boxBraking_4;

public:
	inline static int32_t get_offset_of_boxBraking_4() { return static_cast<int32_t>(offsetof(boxBrake_t4077041FE6F4FC9B8D6BC1BE9C07BE53F617E3D2, ___boxBraking_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_boxBraking_4() const { return ___boxBraking_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_boxBraking_4() { return &___boxBraking_4; }
	inline void set_boxBraking_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___boxBraking_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxBraking_4), (void*)value);
	}
};


// changeScene
struct changeScene_t07EAA8665F38726D3EEF151E54FE987C9D9B8DD4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// destroyparts
struct destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 destroyparts::forceDirection
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___forceDirection_4;
	// System.Single destroyparts::torque
	float ___torque_5;
	// UnityEngine.Rigidbody2D destroyparts::rb2
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2_6;

public:
	inline static int32_t get_offset_of_forceDirection_4() { return static_cast<int32_t>(offsetof(destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064, ___forceDirection_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_forceDirection_4() const { return ___forceDirection_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_forceDirection_4() { return &___forceDirection_4; }
	inline void set_forceDirection_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___forceDirection_4 = value;
	}

	inline static int32_t get_offset_of_torque_5() { return static_cast<int32_t>(offsetof(destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064, ___torque_5)); }
	inline float get_torque_5() const { return ___torque_5; }
	inline float* get_address_of_torque_5() { return &___torque_5; }
	inline void set_torque_5(float value)
	{
		___torque_5 = value;
	}

	inline static int32_t get_offset_of_rb2_6() { return static_cast<int32_t>(offsetof(destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064, ___rb2_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2_6() const { return ___rb2_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2_6() { return &___rb2_6; }
	inline void set_rb2_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2_6), (void*)value);
	}
};


// enemyScript
struct enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Object enemyScript::destructableRef
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___destructableRef_4;

public:
	inline static int32_t get_offset_of_destructableRef_4() { return static_cast<int32_t>(offsetof(enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E, ___destructableRef_4)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_destructableRef_4() const { return ___destructableRef_4; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_destructableRef_4() { return &___destructableRef_4; }
	inline void set_destructableRef_4(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___destructableRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destructableRef_4), (void*)value);
	}
};


// friendScript
struct friendScript_t03C5C174E40ABECE01E3E9B51F933E47CA7A1746  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// imageclearer
struct imageclearer_tC76943FF7A4DDDD67BA7CBC71AF6284321B0F7EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// levelsound
struct levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single levelsound::backgroundFloat
	float ___backgroundFloat_6;
	// System.Single levelsound::soundEffectsFloat
	float ___soundEffectsFloat_7;
	// UnityEngine.AudioSource levelsound::backgroundAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___backgroundAudio_8;
	// UnityEngine.AudioSource[] levelsound::soundEffectsAudio
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ___soundEffectsAudio_9;

public:
	inline static int32_t get_offset_of_backgroundFloat_6() { return static_cast<int32_t>(offsetof(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952, ___backgroundFloat_6)); }
	inline float get_backgroundFloat_6() const { return ___backgroundFloat_6; }
	inline float* get_address_of_backgroundFloat_6() { return &___backgroundFloat_6; }
	inline void set_backgroundFloat_6(float value)
	{
		___backgroundFloat_6 = value;
	}

	inline static int32_t get_offset_of_soundEffectsFloat_7() { return static_cast<int32_t>(offsetof(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952, ___soundEffectsFloat_7)); }
	inline float get_soundEffectsFloat_7() const { return ___soundEffectsFloat_7; }
	inline float* get_address_of_soundEffectsFloat_7() { return &___soundEffectsFloat_7; }
	inline void set_soundEffectsFloat_7(float value)
	{
		___soundEffectsFloat_7 = value;
	}

	inline static int32_t get_offset_of_backgroundAudio_8() { return static_cast<int32_t>(offsetof(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952, ___backgroundAudio_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_backgroundAudio_8() const { return ___backgroundAudio_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_backgroundAudio_8() { return &___backgroundAudio_8; }
	inline void set_backgroundAudio_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___backgroundAudio_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundAudio_8), (void*)value);
	}

	inline static int32_t get_offset_of_soundEffectsAudio_9() { return static_cast<int32_t>(offsetof(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952, ___soundEffectsAudio_9)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get_soundEffectsAudio_9() const { return ___soundEffectsAudio_9; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of_soundEffectsAudio_9() { return &___soundEffectsAudio_9; }
	inline void set_soundEffectsAudio_9(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		___soundEffectsAudio_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundEffectsAudio_9), (void*)value);
	}
};

struct levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields
{
public:
	// System.String levelsound::BackgrounPref
	String_t* ___BackgrounPref_4;
	// System.String levelsound::SoundEffectsPref
	String_t* ___SoundEffectsPref_5;

public:
	inline static int32_t get_offset_of_BackgrounPref_4() { return static_cast<int32_t>(offsetof(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields, ___BackgrounPref_4)); }
	inline String_t* get_BackgrounPref_4() const { return ___BackgrounPref_4; }
	inline String_t** get_address_of_BackgrounPref_4() { return &___BackgrounPref_4; }
	inline void set_BackgrounPref_4(String_t* value)
	{
		___BackgrounPref_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgrounPref_4), (void*)value);
	}

	inline static int32_t get_offset_of_SoundEffectsPref_5() { return static_cast<int32_t>(offsetof(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields, ___SoundEffectsPref_5)); }
	inline String_t* get_SoundEffectsPref_5() const { return ___SoundEffectsPref_5; }
	inline String_t** get_address_of_SoundEffectsPref_5() { return &___SoundEffectsPref_5; }
	inline void set_SoundEffectsPref_5(String_t* value)
	{
		___SoundEffectsPref_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundEffectsPref_5), (void*)value);
	}
};


// map2Script
struct map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean map2Script::unlocked
	bool ___unlocked_4;
	// UnityEngine.UI.Image map2Script::unlockImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unlockImage_5;
	// UnityEngine.GameObject[] map2Script::stars
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___stars_6;

public:
	inline static int32_t get_offset_of_unlocked_4() { return static_cast<int32_t>(offsetof(map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818, ___unlocked_4)); }
	inline bool get_unlocked_4() const { return ___unlocked_4; }
	inline bool* get_address_of_unlocked_4() { return &___unlocked_4; }
	inline void set_unlocked_4(bool value)
	{
		___unlocked_4 = value;
	}

	inline static int32_t get_offset_of_unlockImage_5() { return static_cast<int32_t>(offsetof(map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818, ___unlockImage_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unlockImage_5() const { return ___unlockImage_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unlockImage_5() { return &___unlockImage_5; }
	inline void set_unlockImage_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unlockImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unlockImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_stars_6() { return static_cast<int32_t>(offsetof(map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818, ___stars_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_stars_6() const { return ___stars_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_stars_6() { return &___stars_6; }
	inline void set_stars_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___stars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_6), (void*)value);
	}
};


// music
struct music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 music::firstPlayInt
	int32_t ___firstPlayInt_7;
	// UnityEngine.UI.Slider music::backgroundSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___backgroundSlider_8;
	// UnityEngine.UI.Slider music::soundEffectsSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___soundEffectsSlider_9;
	// System.Single music::backgroundFloat
	float ___backgroundFloat_10;
	// System.Single music::soundEffectsFloat
	float ___soundEffectsFloat_11;
	// UnityEngine.AudioSource music::backgroundAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___backgroundAudio_12;
	// UnityEngine.AudioSource[] music::soundEffectsAudio
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ___soundEffectsAudio_13;

public:
	inline static int32_t get_offset_of_firstPlayInt_7() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___firstPlayInt_7)); }
	inline int32_t get_firstPlayInt_7() const { return ___firstPlayInt_7; }
	inline int32_t* get_address_of_firstPlayInt_7() { return &___firstPlayInt_7; }
	inline void set_firstPlayInt_7(int32_t value)
	{
		___firstPlayInt_7 = value;
	}

	inline static int32_t get_offset_of_backgroundSlider_8() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___backgroundSlider_8)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_backgroundSlider_8() const { return ___backgroundSlider_8; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_backgroundSlider_8() { return &___backgroundSlider_8; }
	inline void set_backgroundSlider_8(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___backgroundSlider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundSlider_8), (void*)value);
	}

	inline static int32_t get_offset_of_soundEffectsSlider_9() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___soundEffectsSlider_9)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_soundEffectsSlider_9() const { return ___soundEffectsSlider_9; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_soundEffectsSlider_9() { return &___soundEffectsSlider_9; }
	inline void set_soundEffectsSlider_9(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___soundEffectsSlider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundEffectsSlider_9), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundFloat_10() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___backgroundFloat_10)); }
	inline float get_backgroundFloat_10() const { return ___backgroundFloat_10; }
	inline float* get_address_of_backgroundFloat_10() { return &___backgroundFloat_10; }
	inline void set_backgroundFloat_10(float value)
	{
		___backgroundFloat_10 = value;
	}

	inline static int32_t get_offset_of_soundEffectsFloat_11() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___soundEffectsFloat_11)); }
	inline float get_soundEffectsFloat_11() const { return ___soundEffectsFloat_11; }
	inline float* get_address_of_soundEffectsFloat_11() { return &___soundEffectsFloat_11; }
	inline void set_soundEffectsFloat_11(float value)
	{
		___soundEffectsFloat_11 = value;
	}

	inline static int32_t get_offset_of_backgroundAudio_12() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___backgroundAudio_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_backgroundAudio_12() const { return ___backgroundAudio_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_backgroundAudio_12() { return &___backgroundAudio_12; }
	inline void set_backgroundAudio_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___backgroundAudio_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundAudio_12), (void*)value);
	}

	inline static int32_t get_offset_of_soundEffectsAudio_13() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733, ___soundEffectsAudio_13)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get_soundEffectsAudio_13() const { return ___soundEffectsAudio_13; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of_soundEffectsAudio_13() { return &___soundEffectsAudio_13; }
	inline void set_soundEffectsAudio_13(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		___soundEffectsAudio_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundEffectsAudio_13), (void*)value);
	}
};

struct music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields
{
public:
	// System.String music::FirstPlay
	String_t* ___FirstPlay_4;
	// System.String music::BackgrounPref
	String_t* ___BackgrounPref_5;
	// System.String music::SoundEffectsPref
	String_t* ___SoundEffectsPref_6;

public:
	inline static int32_t get_offset_of_FirstPlay_4() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields, ___FirstPlay_4)); }
	inline String_t* get_FirstPlay_4() const { return ___FirstPlay_4; }
	inline String_t** get_address_of_FirstPlay_4() { return &___FirstPlay_4; }
	inline void set_FirstPlay_4(String_t* value)
	{
		___FirstPlay_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstPlay_4), (void*)value);
	}

	inline static int32_t get_offset_of_BackgrounPref_5() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields, ___BackgrounPref_5)); }
	inline String_t* get_BackgrounPref_5() const { return ___BackgrounPref_5; }
	inline String_t** get_address_of_BackgrounPref_5() { return &___BackgrounPref_5; }
	inline void set_BackgrounPref_5(String_t* value)
	{
		___BackgrounPref_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgrounPref_5), (void*)value);
	}

	inline static int32_t get_offset_of_SoundEffectsPref_6() { return static_cast<int32_t>(offsetof(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields, ___SoundEffectsPref_6)); }
	inline String_t* get_SoundEffectsPref_6() const { return ___SoundEffectsPref_6; }
	inline String_t** get_address_of_SoundEffectsPref_6() { return &___SoundEffectsPref_6; }
	inline void set_SoundEffectsPref_6(String_t* value)
	{
		___SoundEffectsPref_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundEffectsPref_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * m_Items[1];

public:
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void BoxScript::ExplodeBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_ExplodeBox_m7863B0CACAEFC0CE6E1C5B1613AAC8FCEA77FEEC (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void LevelSelectionScript::UpdateLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_UpdateLevelImage_m9B7E7B0DC4BC1900A6489BB190A9FE2BAB7D0C8F (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method);
// System.Void LevelSelectionScript::UpdateLevelStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_UpdateLevelStatus_m370CF674478E3E059538AE71CBD51F8EAB842F41 (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void PlayerManager::starsAchieved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_starsAchieved_m37EF49B689AF2ECBA072D27E323E77D0B7A6AED3 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UIManager::updateStarsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_updateStarsUI_mDD67EB7E6D6DFA6E5C7771CD0138D7D2414434FA (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void arrowScript::trackMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arrowScript_trackMovement_m9EF5ADC9DB94BE6929E01072BFD54217545BC710 (arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void bowscript::FaceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_FaceMouse_m48AC939599555FB8CA150335C8420D4EAB141BF6 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void bowscript::DragStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_DragStart_mD883458CE14EBB9902832FCCE825A8F91AFC7DA0 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method);
// System.Void bowscript::Dragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_Dragging_mC423B16CE134A7CFDEA054CD36B947A3245206E6 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method);
// System.Void bowscript::DragRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_DragRelease_m0152FC05EDCB0328589F41936B94832629A080E8 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method);
// System.Void bowscript::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_Shoot_m97BB066E98FCA72EA259B74BCD088D66619B6DA0 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_right(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_right_m2BD2600E354493BDBFCBA5A888C4B5B970E25EE1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___torque0, const RuntimeMethod* method);
// System.Void enemyScript::ExplodeBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyScript_ExplodeBox_mED1B479F8AE4CCAFA3529234FA0E87AE52D51D97 (enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Sprite_get_bounds_m364F852DE78702F755D1414FF4465F61F3F238EF (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void levelsound::ContinueSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelsound_ContinueSettings_m51E08FBFFE4423A039052DBC7A6EC5D74BE8F086 (levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void map2Script::UpdateLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_UpdateLevelImage_m4982340A562F9C0CEEF86BAEB83CD5EF1261725F (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method);
// System.Void map2Script::UpdateLevelStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_UpdateLevelStatus_m4B207B5C9F68B9FC320D9B7F36E87F38AB84E8CB (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Void music::SaveSoundSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_SaveSoundSettings_mF579FC4C42BB792351BCFE4C31FB3F67B110AC36 (music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoxScript::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_OnCollisionEnter2D_m3B4469DCD60B3E26B9D3C946915517D5CA146A19 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.CompareTag("Weapon")){
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// ExplodeBox();
		BoxScript_ExplodeBox_m7863B0CACAEFC0CE6E1C5B1613AAC8FCEA77FEEC(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void BoxScript::ExplodeBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript_ExplodeBox_m7863B0CACAEFC0CE6E1C5B1613AAC8FCEA77FEEC (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject destructable = (GameObject)Instantiate(destructableRef);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_destructableRef_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_0, /*hidden argument*/NULL);
		// destructable.transform.position = transform.position;
		NullCheck(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoxScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxScript__ctor_m5F95661E10422938C2CF6592B2C0A56E24B53B25 (BoxScript_t7C5FC6C49A63D5E207EB3E21B0C07B4D833C6467 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelSelectionScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_Update_m119BD6DF7C7AA127C4E5AEA65104C4781C245AAD (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateLevelImage();
		LevelSelectionScript_UpdateLevelImage_m9B7E7B0DC4BC1900A6489BB190A9FE2BAB7D0C8F(__this, /*hidden argument*/NULL);
		// UpdateLevelStatus();
		LevelSelectionScript_UpdateLevelStatus_m370CF674478E3E059538AE71CBD51F8EAB842F41(__this, /*hidden argument*/NULL);
		// if(gameObject.name=="1"){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// unlocked = true;
		__this->set_unlocked_4((bool)1);
	}

IL_002a:
	{
		// if(gameObject.name=="14"){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// unlocked = true;
		__this->set_unlocked_4((bool)1);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void LevelSelectionScript::UpdateLevelStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_UpdateLevelStatus_m370CF674478E3E059538AE71CBD51F8EAB842F41 (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int previousLevelNum = int.Parse(gameObject.name) - 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		// if(PlayerPrefs.GetInt("Level "+ previousLevelNum) > 0){
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// unlocked= true;
		__this->set_unlocked_4((bool)1);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void LevelSelectionScript::UpdateLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_UpdateLevelImage_m9B7E7B0DC4BC1900A6489BB190A9FE2BAB7D0C8F (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if(unlocked==false){
		bool L_0 = __this->get_unlocked_4();
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		// unlockImage.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_unlockImage_5();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		V_0 = 0;
		goto IL_0034;
	}

IL_001d:
	{
		// stars[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_stars_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_stars_6();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}

IL_0040:
	{
		// unlockImage.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_unlockImage_5();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		V_1 = 0;
		goto IL_006c;
	}

IL_0055:
	{
		// stars[i].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_stars_6();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006c:
	{
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_19 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = __this->get_stars_6();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		// for(int i = 0; i < PlayerPrefs.GetInt("Level " + gameObject.name); i++ ){
		V_2 = 0;
		goto IL_009c;
	}

IL_007b:
	{
		// stars[i].gameObject.GetComponent<Image>().sprite = starSprite;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = __this->get_stars_6();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26;
		L_26 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_25, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_27 = __this->get_starSprite_7();
		NullCheck(L_26);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_26, L_27, /*hidden argument*/NULL);
		// for(int i = 0; i < PlayerPrefs.GetInt("Level " + gameObject.name); i++ ){
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_009c:
	{
		// for(int i = 0; i < PlayerPrefs.GetInt("Level " + gameObject.name); i++ ){
		int32_t L_29 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_30, /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_31, /*hidden argument*/NULL);
		int32_t L_33;
		L_33 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_29) < ((int32_t)L_33)))
		{
			goto IL_007b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LevelSelectionScript::PressSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_PressSelection_m2FD6A52527F587108B182F340DDF12B3E1B1BEB6 (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, String_t* ___LevelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(unlocked){
		bool L_0 = __this->get_unlocked_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SceneManager.LoadScene(LevelName);
		String_t* L_1 = ___LevelName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void LevelSelectionScript::clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript_clear_m774998DE215BA73A6B98A26A843BA7687FE39BCF (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelSelectionScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelSelectionScript__ctor_m6DBBAED5E06B4047A20ACA133D93BA15974BFCC2 (LevelSelectionScript_t235D421A2D138B063F273202A50A087A2E4C8855 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Awake_m4E0FE19C5F34114E28F28F04CCF33C2E34C743E7 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGameOver = false;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->set_isGameOver_10((bool)0);
		// }
		return;
	}
}
// System.Void PlayerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Start_mA587FD881326FC1FBCEE2699E54A8A0ACCF83455 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// m_Scene = SceneManager.GetActiveScene();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		__this->set_m_Scene_4(L_0);
		// sceneName = m_Scene.name;
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * L_1 = __this->get_address_of_m_Scene_4();
		String_t* L_2;
		L_2 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)L_1, /*hidden argument*/NULL);
		__this->set_sceneName_19(L_2);
		// levelno.text = sceneName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_levelno_14();
		String_t* L_4 = __this->get_sceneName_19();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// EnemyCount = GameObject.FindGameObjectsWithTag("Enemy").Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5;
		L_5 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		NullCheck(L_5);
		__this->set_EnemyCount_16(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))));
		// BoxCount = GameObject.FindGameObjectsWithTag("Box").Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6;
		L_6 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		NullCheck(L_6);
		__this->set_BoxCount_17(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		// enemy = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7;
		L_7 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		__this->set_enemy_5(L_7);
		// foreach(GameObject e in enemy){
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_enemy_5();
		V_0 = L_8;
		V_1 = 0;
		goto IL_0080;
	}

IL_006c:
	{
		// foreach(GameObject e in enemy){
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// enemy_count += 1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		int32_t L_13 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_enemy_count_9();
		((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->set_enemy_count_9(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0080:
	{
		// foreach(GameObject e in enemy){
		int32_t L_15 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_006c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerManager::starsAchieved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_starsAchieved_m37EF49B689AF2ECBA072D27E323E77D0B7A6AED3 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// int EnemyLeft=GameObject.FindGameObjectsWithTag("Enemy").Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// int BoxLeft=GameObject.FindGameObjectsWithTag("Box").Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		NullCheck(L_1);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		// int EnemyKilled = EnemyCount-EnemyLeft;
		int32_t L_2 = __this->get_EnemyCount_16();
		// int BoxDestroyed = BoxCount-BoxLeft;
		int32_t L_3 = __this->get_BoxCount_17();
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		// float percentage=(float.Parse(BoxDestroyed.ToString())/float.Parse((BoxCount).ToString())*100f);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		float L_6;
		L_6 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_5, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_BoxCount_17();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_8, /*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_6/(float)L_9)), (float)(100.0f)));
		// print(percentage+"%");
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_3), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_10, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_11, /*hidden argument*/NULL);
		// if (EnemyLeft==0){
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_00f0;
		}
	}
	{
		// if(percentage>0f && percentage<=50f){
		float L_13 = V_3;
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(50.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// stars[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_stars_15();
		NullCheck(L_15);
		int32_t L_16 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// stars[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = __this->get_stars_15();
		NullCheck(L_18);
		int32_t L_19 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// score = 2;
		__this->set_score_18(2);
		// }
		return;
	}

IL_009e:
	{
		// else if (percentage>50f){
		float L_21 = V_3;
		if ((!(((float)L_21) > ((float)(50.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		// stars[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get_stars_15();
		NullCheck(L_22);
		int32_t L_23 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
		// stars[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_stars_15();
		NullCheck(L_25);
		int32_t L_26 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)1, /*hidden argument*/NULL);
		// stars[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = __this->get_stars_15();
		NullCheck(L_28);
		int32_t L_29 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)1, /*hidden argument*/NULL);
		// score = 3;
		__this->set_score_18(3);
		// }
		return;
	}

IL_00d8:
	{
		// else if( EnemyLeft==0){
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00f0;
		}
	}
	{
		// stars[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = __this->get_stars_15();
		NullCheck(L_32);
		int32_t L_33 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
		// score=1;
		__this->set_score_18(1);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Update_mA0EE0A117D34258508935E958CF715FD930D066A (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int EnemyLeft=GameObject.FindGameObjectsWithTag("Enemy").Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// if (isGameOver){
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_isGameOver_10();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// gameOverScreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_gameOverScreen_11();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// pausemenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_pausemenu_13();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_004f;
	}

IL_002e:
	{
		// else if (EnemyLeft == 0){
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		// starsAchieved();
		PlayerManager_starsAchieved_m37EF49B689AF2ECBA072D27E323E77D0B7A6AED3(__this, /*hidden argument*/NULL);
		// levelCompletescreen.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_levelCompletescreen_12();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// pausemenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_pausemenu_13();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// if (isGameOver && panel_sound_Count==0){
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		bool L_7 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_isGameOver_10();
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_8 = __this->get_panel_sound_Count_8();
		if (L_8)
		{
			goto IL_0077;
		}
	}
	{
		// GameOverSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = __this->get_GameOverSound_6();
		NullCheck(L_9);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_9, /*hidden argument*/NULL);
		// panel_sound_Count += 1;
		int32_t L_10 = __this->get_panel_sound_Count_8();
		__this->set_panel_sound_Count_8(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0077:
	{
		// if (EnemyLeft == 0 && panel_sound_Count==0){
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_12 = __this->get_panel_sound_Count_8();
		if (L_12)
		{
			goto IL_009b;
		}
	}
	{
		// LevelCompleteSound.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = __this->get_LevelCompleteSound_7();
		NullCheck(L_13);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_13, /*hidden argument*/NULL);
		// panel_sound_Count += 1;
		int32_t L_14 = __this->get_panel_sound_Count_8();
		__this->set_panel_sound_Count_8(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_009b:
	{
		// if(score > PlayerPrefs.GetInt(sceneName, 0)){
		int32_t L_15 = __this->get_score_18();
		String_t* L_16 = __this->get_sceneName_19();
		int32_t L_17;
		L_17 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_16, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_00c0;
		}
	}
	{
		// PlayerPrefs.SetInt(sceneName, score);
		String_t* L_18 = __this->get_sceneName_19();
		int32_t L_19 = __this->get_score_18();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_18, L_19, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void PlayerManager::PressSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_PressSelection_mD386FB8E48074BF824E0AAF83F19E7D29C47F807 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, String_t* ___LevelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale=1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(LevelName);
		String_t* L_0 = ___LevelName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerManager::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_PauseGame_mDAE5976C60DB415476AD272FEB02CF1399B468D8 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale=0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// Pausemenupanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Pausemenupanel_20();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerManager::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_ResumeGame_m635A5FA2F538B6DFF34D01D1A8857634D70892D8 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale=1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// Pausemenupanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Pausemenupanel_20();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__ctor_m4C7CA12A8243D6CA73C1EA65B361E7B717070471 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__cctor_m2EC1F5B2C2925183D4E7C971268CDFF5ACCFADE8 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// updateStarsUI();
		UIManager_updateStarsUI_mDD67EB7E6D6DFA6E5C7771CD0138D7D2414434FA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::updateStarsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_updateStarsUI_mDD67EB7E6D6DFA6E5C7771CD0138D7D2414434FA (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int sum1 = 0;
		V_0 = 0;
		// int sum2 = 0;
		V_1 = 0;
		// for(int i = 14; i < 27; i++){
		V_2 = ((int32_t)14);
		goto IL_0026;
	}

IL_0009:
	{
		// sum2 += PlayerPrefs.GetInt("Level " + i.ToString());
		int32_t L_0 = V_1;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// for(int i = 14; i < 27; i++){
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0026:
	{
		// for(int i = 14; i < 27; i++){
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)27))))
		{
			goto IL_0009;
		}
	}
	{
		// starsText.text = sum2 + "/" + 39;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_starsText_4();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_3 = ((int32_t)39);
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// for(int j = 1; j < 14; j++){
		V_4 = 1;
		goto IL_0075;
	}

IL_0056:
	{
		// sum1 += PlayerPrefs.GetInt("Level " + j.ToString());
		int32_t L_10 = V_0;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_11, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_12, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13));
		// for(int j = 1; j < 14; j++){
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0075:
	{
		// for(int j = 1; j < 14; j++){
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)14))))
		{
			goto IL_0056;
		}
	}
	{
		// starsText1.text = sum1 + "/" + 39;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_starsText1_5();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		V_3 = ((int32_t)39);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_17, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void arrowScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arrowScript_Start_m148846DA60C70ED2F2671AD9DD2E8878ED2FADDB (arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// rb.tag = "Weapon";
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_4();
		NullCheck(L_1);
		Component_set_tag_m6E921BD86BD4A0B5114725FFF0CCD62F26BD7E81(L_1, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void arrowScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arrowScript_Update_m33928A043EB3DEB6262F1E06703E86DAD6C34C35 (arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26 * __this, const RuntimeMethod* method)
{
	{
		// if(hasHit == false)
		bool L_0 = __this->get_hasHit_5();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// trackMovement();
		arrowScript_trackMovement_m9EF5ADC9DB94BE6929E01072BFD54217545BC710(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void arrowScript::trackMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arrowScript_trackMovement_m9EF5ADC9DB94BE6929E01072BFD54217545BC710 (arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2 direction = rb.velocity;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_4();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = V_0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		float L_6;
		L_6 = atan2f(L_3, L_5);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_6, (float)(57.2957802f)));
		// transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void arrowScript::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arrowScript_OnCollisionEnter2D_mCF41B8DAE2AE0ACFCA20B4D5ECB8249272AEFBF7 (arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hasHit = true;
		__this->set_hasHit_5((bool)1);
		// rb.velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_1, /*hidden argument*/NULL);
		// Destroy(gameObject, 0.1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_2, (0.100000001f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void arrowScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arrowScript__ctor_m5B7C0AD4CC39AF0CA12C579FF4A5A8D2BABE15BF (arrowScript_tACC08E001ED4496E2C4BDA2DEA30F81F78E6DF26 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bowscript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_Start_m3779CA0D32412A1DE155C108F2F2D36E506BDDA7 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void bowscript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_Update_m10B1FBC30005D3638C45CB1179627AFEC913A1F0 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 MousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Vector2 bowPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// direction = bowPos - MousePos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_7, L_8, /*hidden argument*/NULL);
		__this->set_direction_4(L_9);
		// FaceMouse();
		bowscript_FaceMouse_m48AC939599555FB8CA150335C8420D4EAB141BF6(__this, /*hidden argument*/NULL);
		// if(Input.touchCount > 0){
		int32_t L_10;
		L_10 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		// touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_11;
		L_11 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		__this->set_touch_7(L_11);
		// if(touch.phase == TouchPhase.Began){
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_12 = __this->get_address_of_touch_7();
		int32_t L_13;
		L_13 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		// DragStart();
		bowscript_DragStart_mD883458CE14EBB9902832FCCE825A8F91AFC7DA0(__this, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// if (touch.phase == TouchPhase.Moved){
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_14 = __this->get_address_of_touch_7();
		int32_t L_15;
		L_15 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0074;
		}
	}
	{
		// Dragging();
		bowscript_Dragging_mC423B16CE134A7CFDEA054CD36B947A3245206E6(__this, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// if(touch.phase == TouchPhase.Ended){
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_16 = __this->get_address_of_touch_7();
		int32_t L_17;
		L_17 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_008e;
		}
	}
	{
		// DragRelease();
		bowscript_DragRelease_m0152FC05EDCB0328589F41936B94832629A080E8(__this, /*hidden argument*/NULL);
		// Shoot();
		bowscript_Shoot_m97BB066E98FCA72EA259B74BCD088D66619B6DA0(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void bowscript::FaceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_FaceMouse_m48AC939599555FB8CA150335C8420D4EAB141BF6 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	{
		// transform.right = direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_right_m2BD2600E354493BDBFCBA5A888C4B5B970E25EE1(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void bowscript::DragStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_DragStart_mD883458CE14EBB9902832FCCE825A8F91AFC7DA0 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	{
		// dragStartPos = Camera.main.ScreenToWorldPoint(touch.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_1 = __this->get_address_of_touch_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		__this->set_dragStartPos_6(L_5);
		// lr.positionCount = 1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lr_5();
		NullCheck(L_6);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_6, 1, /*hidden argument*/NULL);
		// lr.SetPosition(0, dragStartPos);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_lr_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = __this->get_dragStartPos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_7, 0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void bowscript::Dragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_Dragging_mC423B16CE134A7CFDEA054CD36B947A3245206E6 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 draggingPos = Camera.main.ScreenToWorldPoint(touch.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_1 = __this->get_address_of_touch_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// lr.positionCount = 2;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lr_5();
		NullCheck(L_6);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_6, 2, /*hidden argument*/NULL);
		// lr.SetPosition(1, draggingPos);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = __this->get_lr_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_7, 1, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void bowscript::DragRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_DragRelease_m0152FC05EDCB0328589F41936B94832629A080E8 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	{
		// lr.positionCount = 0;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lr_5();
		NullCheck(L_0);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_0, 0, /*hidden argument*/NULL);
		// Vector2 dragReleasePos = Camera.main.ScreenToWorldPoint(touch.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * L_2 = __this->get_address_of_touch_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void bowscript::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript_Shoot_m97BB066E98FCA72EA259B74BCD088D66619B6DA0 (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerManager.isGameOver==false && PlayerManager.enemy_count>0){
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_isGameOver_10();
		if (L_0)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_enemy_count_9();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// GameObject ArrowIns = Instantiate(Arrow, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Arrow_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_4, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// ArrowIns.GetComponent<Rigidbody2D>().AddForce(transform.right * LaunchForce);
		NullCheck(L_7);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8;
		L_8 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_LaunchForce_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_8, L_13, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void bowscript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bowscript__ctor_m0FADDAA7C984C9385FC93E458CDACD29C55B38AE (bowscript_tDD7271B509C39ECAA90574129DA6CC2F46CFB4C4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void boxBrake::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void boxBrake_Start_m86C7780165308A1E0B7D334B552FCA3F0FEFCEA7 (boxBrake_t4077041FE6F4FC9B8D6BC1BE9C07BE53F617E3D2 * __this, const RuntimeMethod* method)
{
	{
		// boxBraking.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_boxBraking_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void boxBrake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void boxBrake_Update_m357F086A2BD27CCF3FD31FFA557EF5F4CEB39DF3 (boxBrake_t4077041FE6F4FC9B8D6BC1BE9C07BE53F617E3D2 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void boxBrake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void boxBrake__ctor_mD2F89E40AAD205CEFEFDB0433D0A06A9BAC4AAD1 (boxBrake_t4077041FE6F4FC9B8D6BC1BE9C07BE53F617E3D2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void changeScene::PressSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changeScene_PressSelection_m9824170C35B958E982908778A7D467DDCFA7AAE4 (changeScene_t07EAA8665F38726D3EEF151E54FE987C9D9B8DD4 * __this, String_t* ___LevelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(LevelName);
		String_t* L_0 = ___LevelName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void changeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void changeScene__ctor_m1BDAE05E383D670BA1BF847F6E2A6B0F8573BF98 (changeScene_t07EAA8665F38726D3EEF151E54FE987C9D9B8DD4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void destroyparts::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void destroyparts_Start_mF3BF3C399922F42B2AD36334A4E37E31ADC346E4 (destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb2 = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb2_6(L_0);
		// rb2.AddForce(forceDirection);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb2_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_forceDirection_4();
		NullCheck(L_1);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_1, L_2, /*hidden argument*/NULL);
		// rb2.AddTorque(torque);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb2_6();
		float L_4 = __this->get_torque_5();
		NullCheck(L_3);
		Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901(L_3, L_4, /*hidden argument*/NULL);
		// Destroy(gameObject, 2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_5, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void destroyparts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void destroyparts__ctor_mE7E6B56D8C8101A966B9CEFD00CBCB8E3C54F56C (destroyparts_tFA6CCE2CC2C02DBE6D730282AF76BE19A5069064 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void enemyScript::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyScript_OnCollisionEnter2D_mBED4FD7BE0705A791D658A9242BDBE0CCA86C4A1 (enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.CompareTag("Weapon")){
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// ExplodeBox();
		enemyScript_ExplodeBox_mED1B479F8AE4CCAFA3529234FA0E87AE52D51D97(__this, /*hidden argument*/NULL);
		// PlayerManager.enemy_count -= 1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_enemy_count_9();
		((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->set_enemy_count_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void enemyScript::ExplodeBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyScript_ExplodeBox_mED1B479F8AE4CCAFA3529234FA0E87AE52D51D97 (enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject destructable = (GameObject)Instantiate(destructableRef);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get_destructableRef_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_0, /*hidden argument*/NULL);
		// destructable.transform.position = transform.position;
		NullCheck(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_4, /*hidden argument*/NULL);
		// Destroy(gameObject,0.1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_5, (0.100000001f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyScript__ctor_m005BF5D19D66C34D0784565FC12349A72D391E0F (enemyScript_t8F8E8D6936BC3E84B699614D01301E29EBA4BE6E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void friendScript::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void friendScript_OnCollisionEnter2D_m53E729F2A055CAD8BA8B5F13DBEB5CCFA9375278 (friendScript_t03C5C174E40ABECE01E3E9B51F933E47CA7A1746 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.tag == "Weapon"){
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral0BA8F1D53932FD657D0A9C4823DA5685609DD076, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// PlayerManager.isGameOver = true;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var);
		((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->set_isGameOver_10((bool)1);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void friendScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void friendScript__ctor_m2B2D28F1FFBDE0CF6F70AA6782F3952322D7AB56 (friendScript_t03C5C174E40ABECE01E3E9B51F933E47CA7A1746 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void imageclearer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void imageclearer_Awake_m6528A75B7547326495CD7519CCF3102C278AA99E (imageclearer_tC76943FF7A4DDDD67BA7CBC71AF6284321B0F7EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// SpriteRenderer sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		V_0 = L_0;
		// if (sr == null) return;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (sr == null) return;
		return;
	}

IL_0011:
	{
		// transform.localScale = new Vector3(1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_3, L_4, /*hidden argument*/NULL);
		// float width = sr.sprite.bounds.size.x;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = V_0;
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6;
		L_6 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_7;
		L_7 = Sprite_get_bounds_m364F852DE78702F755D1414FF4465F61F3F238EF(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_3), /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		V_1 = L_9;
		// float height = sr.sprite.bounds.size.y;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10 = V_0;
		NullCheck(L_10);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_11;
		L_11 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_12;
		L_12 = Sprite_get_bounds_m364F852DE78702F755D1414FF4465F61F3F238EF(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_3), /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		V_2 = L_14;
		// transform.localScale = new Vector2(Screen.width / width, Screen.height / height);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_16;
		L_16 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_17 = V_1;
		int32_t L_18;
		L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_19 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), ((float)((float)((float)((float)L_16))/(float)L_17)), ((float)((float)((float)((float)L_18))/(float)L_19)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_15, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void imageclearer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void imageclearer__ctor_mFB92B9F9D429FD31D41D25F236B7A97ACFAC31FC (imageclearer_tC76943FF7A4DDDD67BA7CBC71AF6284321B0F7EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void levelsound::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelsound_Awake_m482858EFCCCFFC03B7A29A26915BC1E859E7E461 (levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952 * __this, const RuntimeMethod* method)
{
	{
		// ContinueSettings();
		levelsound_ContinueSettings_m51E08FBFFE4423A039052DBC7A6EC5D74BE8F086(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void levelsound::ContinueSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelsound_ContinueSettings_m51E08FBFFE4423A039052DBC7A6EC5D74BE8F086 (levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// backgroundFloat = PlayerPrefs.GetFloat(BackgrounPref);
		IL2CPP_RUNTIME_CLASS_INIT(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var);
		String_t* L_0 = ((levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields*)il2cpp_codegen_static_fields_for(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var))->get_BackgrounPref_4();
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(L_0, /*hidden argument*/NULL);
		__this->set_backgroundFloat_6(L_1);
		// soundEffectsFloat = PlayerPrefs.GetFloat(SoundEffectsPref);
		String_t* L_2 = ((levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields*)il2cpp_codegen_static_fields_for(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var))->get_SoundEffectsPref_5();
		float L_3;
		L_3 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(L_2, /*hidden argument*/NULL);
		__this->set_soundEffectsFloat_7(L_3);
		// backgroundAudio.volume = backgroundFloat;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_backgroundAudio_8();
		float L_5 = __this->get_backgroundFloat_6();
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, L_5, /*hidden argument*/NULL);
		// for(int i = 0; i < soundEffectsAudio.Length; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_0035:
	{
		// soundEffectsAudio[i].volume =soundEffectsFloat ;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_6 = __this->get_soundEffectsAudio_9();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = __this->get_soundEffectsFloat_7();
		NullCheck(L_9);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_9, L_10, /*hidden argument*/NULL);
		// for(int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004c:
	{
		// for(int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_12 = V_0;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_13 = __this->get_soundEffectsAudio_9();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void levelsound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelsound__ctor_m9BBFEDB03B3E927DF90852372EC60C8DBAB87DFF (levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void levelsound::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelsound__cctor_m8B2D0B08BEBB6E4D913ADA6132DF5E46731B6C74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04ED2D3A4736EE4142F523CABB97F77F19CE0794);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string BackgrounPref = "BackgrounPref";
		((levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields*)il2cpp_codegen_static_fields_for(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var))->set_BackgrounPref_4(_stringLiteral04ED2D3A4736EE4142F523CABB97F77F19CE0794);
		// private static readonly string SoundEffectsPref = "SoundEffectsPref";
		((levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_StaticFields*)il2cpp_codegen_static_fields_for(levelsound_tB65B9198D496D871DDF70D188A1D9C69075A1952_il2cpp_TypeInfo_var))->set_SoundEffectsPref_5(_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void map2Script::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_Start_mDA5003634554DCED69319DDF1DA7EB26FBC62730 (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void map2Script::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_Update_m82902C764AA4807E49A1F633F9778A4BBEF4C361 (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method)
{
	{
		// UpdateLevelImage();
		map2Script_UpdateLevelImage_m4982340A562F9C0CEEF86BAEB83CD5EF1261725F(__this, /*hidden argument*/NULL);
		// UpdateLevelStatus();
		map2Script_UpdateLevelStatus_m4B207B5C9F68B9FC320D9B7F36E87F38AB84E8CB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void map2Script::UpdateLevelStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_UpdateLevelStatus_m4B207B5C9F68B9FC320D9B7F36E87F38AB84E8CB (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int previousLevelNum = 13;
		V_0 = ((int32_t)13);
		// if(PlayerPrefs.GetInt("Level "+ previousLevelNum) > 0){
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// unlocked= true;
		__this->set_unlocked_4((bool)1);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void map2Script::UpdateLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_UpdateLevelImage_m4982340A562F9C0CEEF86BAEB83CD5EF1261725F (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(unlocked==false){
		bool L_0 = __this->get_unlocked_4();
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		// unlockImage.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_unlockImage_5();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		V_0 = 0;
		goto IL_0034;
	}

IL_001d:
	{
		// stars[i].gameObject.SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_stars_6();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_9 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = __this->get_stars_6();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}

IL_0040:
	{
		// unlockImage.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_unlockImage_5();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		V_1 = 0;
		goto IL_006c;
	}

IL_0055:
	{
		// stars[i].gameObject.SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_stars_6();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006c:
	{
		// for(int i = 0; i < stars.Length; i++)
		int32_t L_19 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = __this->get_stars_6();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		// }
		return;
	}
}
// System.Void map2Script::PressSelection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script_PressSelection_mD06B9C412AFC125DDFC7EC494FA19F337B5F7A07 (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, String_t* ___LevelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(unlocked){
		bool L_0 = __this->get_unlocked_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SceneManager.LoadScene(LevelName);
		String_t* L_1 = ___LevelName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void map2Script::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void map2Script__ctor_m56A5D2C99754D449FA2BAF1CEC28823CAEBDE109 (map2Script_t2BF63D0EB874EB6DC96183EF4F038563880D1818 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void music::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_Start_m12F3BD8B621802BF95E2F99F4B2D987883669A31 (music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firstPlayInt = PlayerPrefs.GetInt(FirstPlay);
		IL2CPP_RUNTIME_CLASS_INIT(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		String_t* L_0 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_FirstPlay_4();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_0, /*hidden argument*/NULL);
		__this->set_firstPlayInt_7(L_1);
		// if(firstPlayInt == 0)
		int32_t L_2 = __this->get_firstPlayInt_7();
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		// backgroundFloat = .25f;
		__this->set_backgroundFloat_10((0.25f));
		// soundEffectsFloat = .75f;
		__this->set_soundEffectsFloat_11((0.75f));
		// backgroundSlider.value = backgroundFloat;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_backgroundSlider_8();
		float L_4 = __this->get_backgroundFloat_10();
		NullCheck(L_3);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, L_4);
		// soundEffectsSlider.value = soundEffectsFloat;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_soundEffectsSlider_9();
		float L_6 = __this->get_soundEffectsFloat_11();
		NullCheck(L_5);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_5, L_6);
		// PlayerPrefs.SetFloat(BackgrounPref, backgroundFloat);
		IL2CPP_RUNTIME_CLASS_INIT(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		String_t* L_7 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_BackgrounPref_5();
		float L_8 = __this->get_backgroundFloat_10();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(L_7, L_8, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat(SoundEffectsPref, soundEffectsFloat);
		String_t* L_9 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_SoundEffectsPref_6();
		float L_10 = __this->get_soundEffectsFloat_11();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(L_9, L_10, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(FirstPlay, -1);
		String_t* L_11 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_FirstPlay_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_11, (-1), /*hidden argument*/NULL);
		// }
		return;
	}

IL_007c:
	{
		// backgroundFloat = PlayerPrefs.GetFloat(BackgrounPref);
		IL2CPP_RUNTIME_CLASS_INIT(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		String_t* L_12 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_BackgrounPref_5();
		float L_13;
		L_13 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(L_12, /*hidden argument*/NULL);
		__this->set_backgroundFloat_10(L_13);
		// backgroundSlider.value = backgroundFloat;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_14 = __this->get_backgroundSlider_8();
		float L_15 = __this->get_backgroundFloat_10();
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, L_15);
		// soundEffectsFloat = PlayerPrefs.GetFloat(SoundEffectsPref);
		String_t* L_16 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_SoundEffectsPref_6();
		float L_17;
		L_17 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(L_16, /*hidden argument*/NULL);
		__this->set_soundEffectsFloat_11(L_17);
		// soundEffectsSlider.value = soundEffectsFloat;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_18 = __this->get_soundEffectsSlider_9();
		float L_19 = __this->get_soundEffectsFloat_11();
		NullCheck(L_18);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_19);
		// }
		return;
	}
}
// System.Void music::SaveSoundSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_SaveSoundSettings_mF579FC4C42BB792351BCFE4C31FB3F67B110AC36 (music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat(BackgrounPref, backgroundSlider.value);
		IL2CPP_RUNTIME_CLASS_INIT(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		String_t* L_0 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_BackgrounPref_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_backgroundSlider_8();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(L_0, L_2, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat(SoundEffectsPref, soundEffectsSlider.value);
		String_t* L_3 = ((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->get_SoundEffectsPref_6();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_soundEffectsSlider_9();
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void music::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_OnApplicationFocus_m4A6029C0C44863FEEEB1A315A49A3B80FF1774D3 (music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733 * __this, bool ___inFocus0, const RuntimeMethod* method)
{
	{
		// if(!inFocus)
		bool L_0 = ___inFocus0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// SaveSoundSettings();
		music_SaveSoundSettings_mF579FC4C42BB792351BCFE4C31FB3F67B110AC36(__this, /*hidden argument*/NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void music::UpdateSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_UpdateSound_m6F91FBB18E7ED8D1DB6629EDCAF72C902FFCEA72 (music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// backgroundAudio.volume = backgroundSlider.value;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_backgroundAudio_12();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_backgroundSlider_8();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, L_2, /*hidden argument*/NULL);
		// for(int i = 0; i < soundEffectsAudio.Length; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_001a:
	{
		// soundEffectsAudio[i].volume = soundEffectsSlider.value;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_3 = __this->get_soundEffectsAudio_13();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_7 = __this->get_soundEffectsSlider_9();
		NullCheck(L_7);
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_7);
		NullCheck(L_6);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_6, L_8, /*hidden argument*/NULL);
		// for(int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		// for(int i = 0; i < soundEffectsAudio.Length; i++)
		int32_t L_10 = V_0;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_11 = __this->get_soundEffectsAudio_13();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void music::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music__ctor_m57E5C4DDA844049D0A50D7E3C8969B8708A7678E (music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void music::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music__cctor_mB4D2F1D883B44B7FC4F122D65ECD087050BA6332 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04ED2D3A4736EE4142F523CABB97F77F19CE0794);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string FirstPlay = "FirstPlay";
		((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->set_FirstPlay_4(_stringLiteral229CDED9AC619C543D598B5CBC5C390B78B6F2D9);
		// private static readonly string BackgrounPref = "BackgrounPref";
		((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->set_BackgrounPref_5(_stringLiteral04ED2D3A4736EE4142F523CABB97F77F19CE0794);
		// private static readonly string SoundEffectsPref = "SoundEffectsPref";
		((music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_StaticFields*)il2cpp_codegen_static_fields_for(music_t86AD1BF1FF7E82DD60F315CC86EF7F109FE87733_il2cpp_TypeInfo_var))->set_SoundEffectsPref_6(_stringLiteral6F31962DB2831ACD42A73DDA5DC7AA3CA4F5B31B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
