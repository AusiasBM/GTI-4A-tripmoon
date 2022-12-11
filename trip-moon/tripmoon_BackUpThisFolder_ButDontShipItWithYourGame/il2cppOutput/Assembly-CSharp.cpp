#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.PlayerInput>
struct Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// System.Action`1<UnityEngine.InputSystem.PlayerInput>[]
struct Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.InputSystem.Gamepad[]
struct GamepadU5BU5D_t907383551E67ACF51B8B4ECCC0E399DAE2AB3762;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Distancia_camara
struct Distancia_camara_t8F11EDC71DC9CFDFA7E25E1761B680DE91B38463;
// UnityEngine.InputSystem.Controls.DpadControl
struct DpadControl_t517E87BF3EB22369B71EA1941648079B468A45AB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// StarterAssets.FirstPersonController
struct FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.UI.InputSystemUIInputModule
struct InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// ReceiveHit
struct ReceiveHit_tC76DA8EA6E20A9D39BE79C9A6F3CA34F8EAAC50C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657;
// UnityEngine.InputSystem.Controls.StickControl
struct StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Turn_Move
struct Turn_Move_t2461804B3D32A323C14A163767EFAED194D1C49D;
// System.Type
struct Type_t;
// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F;
// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5;
// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16;
// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// codeJoysticks
struct codeJoysticks_t9205015F0F662524511C320C9E0DAD350F185AA6;
// controlJ
struct controlJ_tDBFBE0EFA9730F57F10B23245C67A96E83C30FDC;
// instrucciones
struct instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA;
// objetoInteractivo
struct objetoInteractivo_tD0B0B54FD01AA36AEC1C5902C452B8C6A3D98BC9;
// playVideo
struct playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D;
// teleport
struct teleport_t83CFBEA53CFCE74528F2BF2427291F8C53D527EE;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent
struct ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48;
// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent
struct DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4;
// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent
struct DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A;
// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8;
// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3;
// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6;
// playVideo/<playPauseVideo>d__3
struct U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A;

IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03ACC9654667C7009AE09198C93C3F8AF4C1CBAA;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral39CADB925122CBF8C0B4CCBE3F9847ED677BC5E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACB897EA3DC7ABE28C77E03A5FEEDDDE6DDCC86;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral677983AF199EC712DFB01BAE0CAA79046569DA93;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240;
IL2CPP_EXTERN_C String_t* _stringLiteral812D026F7DEF23874CF9C51CC8D6E832190F5614;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral99FE6F84C49D301367E98710598C42D0F6C7516F;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralC69982864F912BD42DCA3C7272158808813D786C;
IL2CPP_EXTERN_C String_t* _stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA;
IL2CPP_EXTERN_C String_t* _stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A0DABA68E4C07BFB129833C6D60B7F6DBEDE0F;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CplayPauseVideoU3Ed__3_System_Collections_IEnumerator_Reset_m6CDFC3A7CFD7E553084F40C89EAEDC22C89904F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* controlJ_resetCar_m51E80475A7D3332E7901EAC3CA98741964DC365F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* instrucciones_CargarEscenaVehiculo_m8B53847BB294B82B36994D26505A70CECDE09AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* instrucciones_VolverInstrucciones_m53B100CDD82622AA54E93F23DBBB3D6614B4451B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* instrucciones_VolverTrailer_mEC7E525CA00AAEEC167245DD50CF1532484C9E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* instrucciones_abrirInstrucciones_mF6669E46F9F6C50CACA77649AB524439B354C2E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* instrucciones_abrirTrailer_m3F942512968BF09496192B5A99D98D90C83D47A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6  : public RuntimeObject
{
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// playVideo/<playPauseVideo>d__3
struct U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A  : public RuntimeObject
{
	// System.Int32 playVideo/<playPauseVideo>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object playVideo/<playPauseVideo>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// playVideo playVideo/<playPauseVideo>d__3::<>4__this
	playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* ___U3CU3E4__this_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD5FA47F50DE964EA177B87ABF2576790239219A3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tDDE8F0E5F72CDCC3C9228F7F50484C0B41BAF4E0* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Haptics.DualMotorRumble
struct DualMotorRumble_t7FF13D9599E8A574E5041726BD84CB8897E42701 
{
	// System.Single UnityEngine.InputSystem.Haptics.DualMotorRumble::<lowFrequencyMotorSpeed>k__BackingField
	float ___U3ClowFrequencyMotorSpeedU3Ek__BackingField_0;
	// System.Single UnityEngine.InputSystem.Haptics.DualMotorRumble::<highFrequencyMotorSpeed>k__BackingField
	float ___U3ChighFrequencyMotorSpeedU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>>
struct CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t8ACE9AAD82807AA2C2CD8030EB6420B3228CEF00 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92  : public RuntimeObject
{
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_pinvoke
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshaled_com
{
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_Controller_0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UIVirtualButton/BoolEvent
struct BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UIVirtualButton/Event
struct Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UIVirtualJoystick/Event
struct Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// UIVirtualTouchZone/Event
struct Event_t39EC29014C2EF54751D4079DD636172E90DCE53E  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonWest>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonWestU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonNorth>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonNorthU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonSouth>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonSouthU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonEast>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonEastU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftStickButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftStickButtonU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightStickButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightStickButtonU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<startButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CstartButtonU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<selectButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CselectButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.DpadControl UnityEngine.InputSystem.Gamepad::<dpad>k__BackingField
	DpadControl_t517E87BF3EB22369B71EA1941648079B468A45AB* ___U3CdpadU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftShoulder>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftShoulderU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightShoulder>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightShoulderU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::<leftStick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CleftStickU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::<rightStick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CrightStickU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftTrigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftTriggerU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightTrigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightTriggerU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Haptics.DualMotorRumble UnityEngine.InputSystem.Gamepad::m_Rumble
	DualMotorRumble_t7FF13D9599E8A574E5041726BD84CB8897E42701 ___m_Rumble_55;
};

struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_StaticFields
{
	// UnityEngine.InputSystem.Gamepad UnityEngine.InputSystem.Gamepad::<current>k__BackingField
	Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* ___U3CcurrentU3Ek__BackingField_54;
	// System.Int32 UnityEngine.InputSystem.Gamepad::s_GamepadCount
	int32_t ___s_GamepadCount_56;
	// UnityEngine.InputSystem.Gamepad[] UnityEngine.InputSystem.Gamepad::s_Gamepads
	GamepadU5BU5D_t907383551E67ACF51B8B4ECCC0E399DAE2AB3762* ___s_Gamepads_57;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// BasicRigidBodyPush
struct BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask BasicRigidBodyPush::pushLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___pushLayers_4;
	// System.Boolean BasicRigidBodyPush::canPush
	bool ___canPush_5;
	// System.Single BasicRigidBodyPush::strength
	float ___strength_6;
};

// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraPointer::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_5;
	// UnityEngine.GameObject CameraPointer::mira
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mira_6;
};

// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Distancia_camara
struct Distancia_camara_t8F11EDC71DC9CFDFA7E25E1761B680DE91B38463  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Distancia_camara::arcamara
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arcamara_4;
};

// StarterAssets.FirstPersonController
struct FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StarterAssets.FirstPersonController::MoveSpeed
	float ___MoveSpeed_4;
	// System.Single StarterAssets.FirstPersonController::SprintSpeed
	float ___SprintSpeed_5;
	// System.Single StarterAssets.FirstPersonController::RotationSpeed
	float ___RotationSpeed_6;
	// System.Single StarterAssets.FirstPersonController::SpeedChangeRate
	float ___SpeedChangeRate_7;
	// System.Single StarterAssets.FirstPersonController::JumpHeight
	float ___JumpHeight_8;
	// System.Single StarterAssets.FirstPersonController::Gravity
	float ___Gravity_9;
	// System.Single StarterAssets.FirstPersonController::JumpTimeout
	float ___JumpTimeout_10;
	// System.Single StarterAssets.FirstPersonController::FallTimeout
	float ___FallTimeout_11;
	// System.Boolean StarterAssets.FirstPersonController::Grounded
	bool ___Grounded_12;
	// System.Single StarterAssets.FirstPersonController::GroundedOffset
	float ___GroundedOffset_13;
	// System.Single StarterAssets.FirstPersonController::GroundedRadius
	float ___GroundedRadius_14;
	// UnityEngine.LayerMask StarterAssets.FirstPersonController::GroundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___GroundLayers_15;
	// UnityEngine.GameObject StarterAssets.FirstPersonController::CinemachineCameraTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CinemachineCameraTarget_16;
	// System.Single StarterAssets.FirstPersonController::TopClamp
	float ___TopClamp_17;
	// System.Single StarterAssets.FirstPersonController::BottomClamp
	float ___BottomClamp_18;
	// System.Single StarterAssets.FirstPersonController::_cinemachineTargetPitch
	float ____cinemachineTargetPitch_19;
	// System.Single StarterAssets.FirstPersonController::_speed
	float ____speed_20;
	// System.Single StarterAssets.FirstPersonController::_rotationVelocity
	float ____rotationVelocity_21;
	// System.Single StarterAssets.FirstPersonController::_verticalVelocity
	float ____verticalVelocity_22;
	// System.Single StarterAssets.FirstPersonController::_terminalVelocity
	float ____terminalVelocity_23;
	// System.Single StarterAssets.FirstPersonController::_jumpTimeoutDelta
	float ____jumpTimeoutDelta_24;
	// System.Single StarterAssets.FirstPersonController::_fallTimeoutDelta
	float ____fallTimeoutDelta_25;
	// UnityEngine.InputSystem.PlayerInput StarterAssets.FirstPersonController::_playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ____playerInput_26;
	// UnityEngine.CharacterController StarterAssets.FirstPersonController::_controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____controller_27;
	// StarterAssets.StarterAssetsInputs StarterAssets.FirstPersonController::_input
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ____input_28;
	// UnityEngine.GameObject StarterAssets.FirstPersonController::_mainCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mainCamera_29;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Menu::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_4;
	// UnityEngine.GameObject Menu::instrucciones
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instrucciones_5;
};

// MobileDisableAutoSwitchControls
struct MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.PlayerInput MobileDisableAutoSwitchControls::playerInput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___playerInput_4;
};

// MouseLook
struct MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 MouseLook::_mouseAbsolute
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____mouseAbsolute_4;
	// UnityEngine.Vector2 MouseLook::_smoothMouse
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____smoothMouse_5;
	// UnityEngine.Vector2 MouseLook::clampInDegrees
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___clampInDegrees_6;
	// UnityEngine.CursorLockMode MouseLook::lockCursor
	int32_t ___lockCursor_7;
	// UnityEngine.Vector2 MouseLook::sensitivity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sensitivity_8;
	// UnityEngine.Vector2 MouseLook::smoothing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___smoothing_9;
	// UnityEngine.Vector2 MouseLook::targetDirection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetDirection_10;
	// UnityEngine.Vector2 MouseLook::targetCharacterDirection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___targetCharacterDirection_11;
	// UnityEngine.GameObject MouseLook::characterBody
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___characterBody_12;
	// System.Single MouseLook::acceleration
	float ___acceleration_13;
	// System.Single MouseLook::maxSpeed
	float ___maxSpeed_14;
	// System.Single MouseLook::dampingSpeed
	float ___dampingSpeed_15;
	// UnityEngine.KeyCode MouseLook::fwdKey
	int32_t ___fwdKey_16;
	// UnityEngine.KeyCode MouseLook::leftKey
	int32_t ___leftKey_17;
	// UnityEngine.KeyCode MouseLook::backKey
	int32_t ___backKey_18;
	// UnityEngine.KeyCode MouseLook::rightKey
	int32_t ___rightKey_19;
	// System.Single MouseLook::speedX
	float ___speedX_20;
	// System.Single MouseLook::speedZ
	float ___speedZ_21;
};

// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_11;
};

// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.PlayerInput::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_7;
	// UnityEngine.InputSystem.PlayerNotifications UnityEngine.InputSystem.PlayerInput::m_NotificationBehavior
	int32_t ___m_NotificationBehavior_8;
	// UnityEngine.InputSystem.UI.InputSystemUIInputModule UnityEngine.InputSystem.PlayerInput::m_UIInputModule
	InputSystemUIInputModule_tB7D5B53F656D196BB5AF712FA16FEE22B2EE0C58* ___m_UIInputModule_9;
	// UnityEngine.InputSystem.PlayerInput/DeviceLostEvent UnityEngine.InputSystem.PlayerInput::m_DeviceLostEvent
	DeviceLostEvent_tDD8832F14B7DA15569261EFEBC47E67CF4E1B9D4* ___m_DeviceLostEvent_10;
	// UnityEngine.InputSystem.PlayerInput/DeviceRegainedEvent UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedEvent
	DeviceRegainedEvent_t24153E8876417F010AA4C0C1C25D6CB792EC01D1* ___m_DeviceRegainedEvent_11;
	// UnityEngine.InputSystem.PlayerInput/ControlsChangedEvent UnityEngine.InputSystem.PlayerInput::m_ControlsChangedEvent
	ControlsChangedEvent_t24A5BA4AB8034B3C662F956A4C85ECC6B8332B48* ___m_ControlsChangedEvent_12;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] UnityEngine.InputSystem.PlayerInput::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_13;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_NeverAutoSwitchControlSchemes
	bool ___m_NeverAutoSwitchControlSchemes_14;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultControlScheme
	String_t* ___m_DefaultControlScheme_15;
	// System.String UnityEngine.InputSystem.PlayerInput::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_16;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_SplitScreenIndex
	int32_t ___m_SplitScreenIndex_17;
	// UnityEngine.Camera UnityEngine.InputSystem.PlayerInput::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_18;
	// UnityEngine.InputSystem.InputValue UnityEngine.InputSystem.PlayerInput::m_InputValueObject
	InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___m_InputValueObject_19;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.PlayerInput::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_20;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::m_PlayerIndex
	int32_t ___m_PlayerIndex_21;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_InputActive
	bool ___m_InputActive_22;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_Enabled
	bool ___m_Enabled_23;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_ActionsInitialized
	bool ___m_ActionsInitialized_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.InputSystem.PlayerInput::m_ActionMessageNames
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_ActionMessageNames_25;
	// UnityEngine.InputSystem.Users.InputUser UnityEngine.InputSystem.PlayerInput::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_26;
	// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredDelegate
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___m_ActionTriggeredDelegate_27;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceLostCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceLostCallbacks_28;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_DeviceRegainedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_DeviceRegainedCallbacks_29;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.PlayerInput>> UnityEngine.InputSystem.PlayerInput::m_ControlsChangedCallbacks
	CallbackArray_1_tD7B9D623F367436CE09AE458AA7DEAA10888477F ___m_ControlsChangedCallbacks_30;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.PlayerInput::m_ActionTriggeredCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionTriggeredCallbacks_31;
	// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.PlayerInput::m_UnpairedDeviceUsedDelegate
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___m_UnpairedDeviceUsedDelegate_32;
	// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean> UnityEngine.InputSystem.PlayerInput::m_PreFilterUnpairedDeviceUsedDelegate
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___m_PreFilterUnpairedDeviceUsedDelegate_33;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnUnpairedDeviceUsedHooked
	bool ___m_OnUnpairedDeviceUsedHooked_34;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.PlayerInput::m_DeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___m_DeviceChangeDelegate_35;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::m_OnDeviceChangeHooked
	bool ___m_OnDeviceChangeHooked_36;
};

struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_AllActivePlayersCount
	int32_t ___s_AllActivePlayersCount_37;
	// UnityEngine.InputSystem.PlayerInput[] UnityEngine.InputSystem.PlayerInput::s_AllActivePlayers
	PlayerInputU5BU5D_t68A8570E76E18996F872BEEBA1C81ED2E4671080* ___s_AllActivePlayers_38;
	// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.PlayerInput::s_UserChangeDelegate
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___s_UserChangeDelegate_39;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevicesCount
	int32_t ___s_InitPairWithDevicesCount_40;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.PlayerInput::s_InitPairWithDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_InitPairWithDevices_41;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitPlayerIndex
	int32_t ___s_InitPlayerIndex_42;
	// System.Int32 UnityEngine.InputSystem.PlayerInput::s_InitSplitScreenIndex
	int32_t ___s_InitSplitScreenIndex_43;
	// System.String UnityEngine.InputSystem.PlayerInput::s_InitControlScheme
	String_t* ___s_InitControlScheme_44;
	// System.Boolean UnityEngine.InputSystem.PlayerInput::s_DestroyIfDeviceSetupUnsuccessful
	bool ___s_DestroyIfDeviceSetupUnsuccessful_45;
};

// ReceiveHit
struct ReceiveHit_tC76DA8EA6E20A9D39BE79C9A6F3CA34F8EAAC50C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent ReceiveHit::myEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___myEvent_4;
};

// StarterAssets.StarterAssetsInputs
struct StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___move_4;
	// UnityEngine.Vector2 StarterAssets.StarterAssetsInputs::look
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___look_5;
	// System.Boolean StarterAssets.StarterAssetsInputs::jump
	bool ___jump_6;
	// System.Boolean StarterAssets.StarterAssetsInputs::sprint
	bool ___sprint_7;
	// System.Boolean StarterAssets.StarterAssetsInputs::analogMovement
	bool ___analogMovement_8;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorLocked
	bool ___cursorLocked_9;
	// System.Boolean StarterAssets.StarterAssetsInputs::cursorInputForLook
	bool ___cursorInputForLook_10;
};

// UnityEngine.InputSystem.Controls.StickControl
struct StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B  : public Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.StickControl::<up>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CupU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.StickControl::<down>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CdownU3Ek__BackingField_25;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.StickControl::<left>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftU3Ek__BackingField_26;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Controls.StickControl::<right>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightU3Ek__BackingField_27;
};

// Turn_Move
struct Turn_Move_t2461804B3D32A323C14A163767EFAED194D1C49D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Turn_Move::TurnX
	int32_t ___TurnX_4;
	// System.Int32 Turn_Move::TurnY
	int32_t ___TurnY_5;
	// System.Int32 Turn_Move::TurnZ
	int32_t ___TurnZ_6;
	// System.Int32 Turn_Move::MoveX
	int32_t ___MoveX_7;
	// System.Int32 Turn_Move::MoveY
	int32_t ___MoveY_8;
	// System.Int32 Turn_Move::MoveZ
	int32_t ___MoveZ_9;
	// System.Boolean Turn_Move::World
	bool ___World_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StarterAssets.UICanvasControllerInput
struct UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StarterAssets.StarterAssetsInputs StarterAssets.UICanvasControllerInput::starterAssetsInputs
	StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* ___starterAssetsInputs_4;
};

// UIVirtualButton
struct UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UIVirtualButton/BoolEvent UIVirtualButton::buttonStateOutputEvent
	BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* ___buttonStateOutputEvent_4;
	// UIVirtualButton/Event UIVirtualButton::buttonClickOutputEvent
	Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* ___buttonClickOutputEvent_5;
};

// UIVirtualJoystick
struct UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualJoystick::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualJoystick::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Single UIVirtualJoystick::joystickRange
	float ___joystickRange_6;
	// System.Single UIVirtualJoystick::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualJoystick::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualJoystick::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UIVirtualJoystick/Event UIVirtualJoystick::joystickOutputEvent
	Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* ___joystickOutputEvent_10;
};

// UIVirtualTouchZone
struct UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform UIVirtualTouchZone::containerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___containerRect_4;
	// UnityEngine.RectTransform UIVirtualTouchZone::handleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handleRect_5;
	// System.Boolean UIVirtualTouchZone::clampToMagnitude
	bool ___clampToMagnitude_6;
	// System.Single UIVirtualTouchZone::magnitudeMultiplier
	float ___magnitudeMultiplier_7;
	// System.Boolean UIVirtualTouchZone::invertXOutputValue
	bool ___invertXOutputValue_8;
	// System.Boolean UIVirtualTouchZone::invertYOutputValue
	bool ___invertYOutputValue_9;
	// UnityEngine.Vector2 UIVirtualTouchZone::pointerDownPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerDownPosition_10;
	// UnityEngine.Vector2 UIVirtualTouchZone::currentPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currentPointerPosition_11;
	// UIVirtualTouchZone/Event UIVirtualTouchZone::touchZoneOutputEvent
	Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* ___touchZoneOutputEvent_12;
};

// VideoController
struct VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VideoController::video
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___video_4;
	// System.Double VideoController::duration
	double ___duration_5;
	// System.Double VideoController::time
	double ___time_6;
};

// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
};

// codeJoysticks
struct codeJoysticks_t9205015F0F662524511C320C9E0DAD350F185AA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI codeJoysticks::texto
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___texto_4;
};

// controlJ
struct controlJ_tDBFBE0EFA9730F57F10B23245C67A96E83C30FDC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single controlJ::speedForward
	float ___speedForward_4;
	// System.Single controlJ::speedTurn
	float ___speedTurn_5;
	// System.Single controlJ::deadZone
	float ___deadZone_6;
	// UnityEngine.Vector3 controlJ::homePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___homePosition_7;
	// UnityEngine.UI.Button controlJ::btnReset
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnReset_8;
};

// instrucciones
struct instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button instrucciones::btnInstruccioness
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnInstruccioness_4;
	// UnityEngine.UI.Button instrucciones::btnVideo
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnVideo_5;
	// UnityEngine.UI.Button instrucciones::btnCerrarInstruccioness
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnCerrarInstruccioness_6;
	// UnityEngine.UI.Button instrucciones::btnCerrarVideo
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnCerrarVideo_7;
	// UnityEngine.GameObject instrucciones::planoInstrucciones
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planoInstrucciones_8;
	// UnityEngine.GameObject instrucciones::planoTrailer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planoTrailer_9;
	// UnityEngine.GameObject instrucciones::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_10;
	// UnityEngine.UI.Button instrucciones::btnEscenaVehiculo
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btnEscenaVehiculo_11;
};

// objetoInteractivo
struct objetoInteractivo_tD0B0B54FD01AA36AEC1C5902C452B8C6A3D98BC9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// playVideo
struct playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Video.VideoPlayer playVideo::v
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___v_4;
};

// teleport
struct teleport_t83CFBEA53CFCE74528F2BF2427291F8C53D527EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform teleport::playerObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerObject_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_m506FC5C5D06CE7A15EBB9ACEC9DCF546E2DDCC0B (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m8FF175E92671A19466A7728FEB92EFB4E999EB56 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Gamepad UnityEngine.InputSystem.Gamepad::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* Gamepad_get_current_mAC9BE72710676EA54E760FFBA15404A81D7DEEB6_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::get_leftStick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* Gamepad_get_leftStick_m76F9D7D8766C9450C5E720ED481BDC4C3BFAE619_inline (Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541 (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared)(__this, method);
}
// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::get_rightStick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* Gamepad_get_rightStick_mC2074BA9B40116C6BAA3263B32E463DD23918714_inline (Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ControllerColliderHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::get_moveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93 (ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void MobileDisableAutoSwitchControls::DisableAutoSwitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.PlayerInput::set_neverAutoSwitchControlSchemes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_neverAutoSwitchControlSchemes_mC0702F30BCC29A161B667EF791B9B9A12FC6DF60 (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) ;
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
inline void UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0 (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) ;
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932*, const RuntimeMethod*))UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_gshared)(__this, method);
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9F174A6F7D2DBE4E1934892F3438405F379014E3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___gazedAt0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator playVideo::playPauseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* playVideo_playPauseVideo_m2B2A912E847491FE4A7B825C26B0B6509CC8CDDC (playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* __this, const RuntimeMethod* method) ;
// System.Void playVideo/<playPauseVideo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayPauseVideoU3Ed__3__ctor_m5859C0C8C66D3E0239DD82680FE8998719FE8BDF (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Double UnityEngine.Video.VideoPlayer::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.PlayerInput::get_currentControlScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C (PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<StarterAssets.StarterAssetsInputs>()
inline StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.InputSystem.PlayerInput>()
inline PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void StarterAssets.FirstPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_JumpAndGravity_mE8E57E5D89BE4289C81F1D668AB99588356FD44A (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.FirstPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GroundedCheck_mBD7B0C905A60ED82AD81BD5E8124C309688AB5D6 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.FirstPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Move_mD3B86419A063305FAF1598ED1FDE790B407A20F3 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.FirstPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_CameraRotation_m8D6B31A95A1DDF1B34ECD3806E6052F255781D8D (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean StarterAssets.FirstPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonController_get_IsCurrentDeviceMouse_mBD2A02E3A33E0A4074283C7CD2C40BAC507278B0 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) ;
// System.Single StarterAssets.FirstPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonController_ClampAngle_m2B9F299C2F735DBC14DD608696F8515B1428F5C8 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, float ___radius1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) ;
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void codeJoysticks::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void codeJoysticks_Start_m13FFD6259E4907CDCF2A75174282D336EA6E0F48 (codeJoysticks_t9205015F0F662524511C320C9E0DAD350F185AA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677983AF199EC712DFB01BAE0CAA79046569DA93);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// texto = this.GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___texto_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texto_4), (void*)L_0);
		// texto.text = "Joysticks: " + Input.GetJoystickNames().Length;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___texto_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Input_GetJoystickNames_m506FC5C5D06CE7A15EBB9ACEC9DCF546E2DDCC0B(NULL);
		NullCheck(L_2);
		V_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral677983AF199EC712DFB01BAE0CAA79046569DA93, L_3, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void codeJoysticks::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void codeJoysticks_Update_m04191119CAFD481D8038D766CF2C20C2327DAF86 (codeJoysticks_t9205015F0F662524511C320C9E0DAD350F185AA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// if(Input.GetButton("A"))
		bool L_0;
		L_0 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// print("A");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
	}

IL_0016:
	{
		// if(Input.GetButton("Fire1"))
		bool L_1;
		L_1 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// print("Fire 1");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37, NULL);
	}

IL_002c:
	{
		// System.Array values = System.Enum.GetValues(typeof(KeyCode));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_4;
		L_4 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_3, NULL);
		// foreach (KeyCode code in values)
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_4, NULL);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0081:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_7 = V_2;
					if (!L_7)
					{
						goto IL_0091;
					}
				}
				{
					RuntimeObject* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0091:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0077_1;
			}

IL_0043_1:
			{
				// foreach (KeyCode code in values)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var))));
				// if (Input.GetKeyDown(code)) { texto.text = (System.Enum.GetName(typeof(KeyCode), code)); }
				int32_t L_11 = V_1;
				bool L_12;
				L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_11, NULL);
				if (!L_12)
				{
					goto IL_0077_1;
				}
			}
			{
				// if (Input.GetKeyDown(code)) { texto.text = (System.Enum.GetName(typeof(KeyCode), code)); }
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___texto_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				int32_t L_16 = V_1;
				int32_t L_17 = L_16;
				RuntimeObject* L_18 = Box(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, &L_17);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				String_t* L_19;
				L_19 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_15, L_18, NULL);
				NullCheck(L_13);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_19);
			}

IL_0077_1:
			{
				// foreach (KeyCode code in values)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void codeJoysticks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void codeJoysticks__ctor_m312C5D848216C64E04497D07CEA691C40AEA8C73 (codeJoysticks_t9205015F0F662524511C320C9E0DAD350F185AA6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m08FD16A47A96624540CD1B8EBA5FFAA1FD75E686 (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// targetDirection = transform.localRotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		__this->___targetDirection_10 = L_3;
		// if (characterBody)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___characterBody_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// targetCharacterDirection = characterBody.transform.localRotation.eulerAngles;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___characterBody_12;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_7, NULL);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		__this->___targetCharacterDirection_11 = L_10;
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m18C0A114A78C19B888A9F74CA1FE5A837DF9E42A (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Cursor.lockState = lockCursor;
		int32_t L_0 = __this->___lockCursor_7;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(L_0, NULL);
		// var targetOrientation = Quaternion.Euler (targetDirection);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___targetDirection_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_2, NULL);
		V_0 = L_3;
		// var targetCharacterOrientation = Quaternion.Euler (targetCharacterDirection);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___targetCharacterDirection_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_5, NULL);
		V_1 = L_6;
		// var mouseDelta = new Vector2 (Input.GetAxisRaw ("Mouse X"), Input.GetAxisRaw ("Mouse Y"));
		float L_7;
		L_7 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_8;
		L_8 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_7, L_8, NULL);
		// mouseDelta = Vector2.Scale (mouseDelta, new Vector2 (sensitivity.x * smoothing.x, sensitivity.y * smoothing.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___sensitivity_8);
		float L_11 = L_10->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___smoothing_9);
		float L_13 = L_12->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___sensitivity_8);
		float L_15 = L_14->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___smoothing_9);
		float L_17 = L_16->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_15, L_17)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_9, L_18, NULL);
		V_2 = L_19;
		// _smoothMouse.x = Mathf.Lerp (_smoothMouse.x, mouseDelta.x, 1f / smoothing.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->____smoothMouse_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->____smoothMouse_5);
		float L_22 = L_21->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_2;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___smoothing_9);
		float L_26 = L_25->___x_0;
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_22, L_24, ((float)((1.0f)/L_26)), NULL);
		L_20->___x_0 = L_27;
		// _smoothMouse.y = Mathf.Lerp (_smoothMouse.y, mouseDelta.y, 1f / smoothing.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->____smoothMouse_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&__this->____smoothMouse_5);
		float L_30 = L_29->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_2;
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___smoothing_9);
		float L_34 = L_33->___y_1;
		float L_35;
		L_35 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_30, L_32, ((float)((1.0f)/L_34)), NULL);
		L_28->___y_1 = L_35;
		// _mouseAbsolute += _smoothMouse;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = __this->____mouseAbsolute_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = __this->____smoothMouse_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_36, L_37, NULL);
		__this->____mouseAbsolute_4 = L_38;
		// if (clampInDegrees.x < 360)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___clampInDegrees_6);
		float L_40 = L_39->___x_0;
		if ((!(((float)L_40) < ((float)(360.0f)))))
		{
			goto IL_014d;
		}
	}
	{
		// _mouseAbsolute.x = Mathf.Clamp (_mouseAbsolute.x, -clampInDegrees.x * 0.5f, clampInDegrees.x * 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&__this->____mouseAbsolute_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->____mouseAbsolute_4);
		float L_43 = L_42->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___clampInDegrees_6);
		float L_45 = L_44->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___clampInDegrees_6);
		float L_47 = L_46->___x_0;
		float L_48;
		L_48 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_43, ((float)il2cpp_codegen_multiply(((-L_45)), (0.5f))), ((float)il2cpp_codegen_multiply(L_47, (0.5f))), NULL);
		L_41->___x_0 = L_48;
	}

IL_014d:
	{
		// var xRotation = Quaternion.AngleAxis (-_mouseAbsolute.y, targetOrientation * Vector3.right);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&__this->____mouseAbsolute_4);
		float L_50 = L_49->___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_51, L_52, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((-L_50)), L_53, NULL);
		V_3 = L_54;
		// transform.localRotation = xRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = V_3;
		NullCheck(L_55);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_55, L_56, NULL);
		// if (clampInDegrees.y < 360)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___clampInDegrees_6);
		float L_58 = L_57->___y_1;
		if ((!(((float)L_58) < ((float)(360.0f)))))
		{
			goto IL_01c6;
		}
	}
	{
		// _mouseAbsolute.y = Mathf.Clamp (_mouseAbsolute.y, -clampInDegrees.y * 0.5f, clampInDegrees.y * 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&__this->____mouseAbsolute_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_60 = (&__this->____mouseAbsolute_4);
		float L_61 = L_60->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_62 = (&__this->___clampInDegrees_6);
		float L_63 = L_62->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64 = (&__this->___clampInDegrees_6);
		float L_65 = L_64->___y_1;
		float L_66;
		L_66 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_61, ((float)il2cpp_codegen_multiply(((-L_63)), (0.5f))), ((float)il2cpp_codegen_multiply(L_65, (0.5f))), NULL);
		L_59->___y_1 = L_66;
	}

IL_01c6:
	{
		// transform.localRotation *= targetOrientation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68 = L_67;
		NullCheck(L_68);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69;
		L_69 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_68, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71;
		L_71 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_69, L_70, NULL);
		NullCheck(L_68);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_68, L_71, NULL);
		// if (characterBody) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___characterBody_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_72, NULL);
		if (!L_73)
		{
			goto IL_023b;
		}
	}
	{
		// var yRotation = Quaternion.AngleAxis (_mouseAbsolute.x, characterBody.transform.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_74 = (&__this->____mouseAbsolute_4);
		float L_75 = L_74->___x_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___characterBody_12;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_77, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79;
		L_79 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_75, L_78, NULL);
		V_4 = L_79;
		// characterBody.transform.localRotation = yRotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___characterBody_12;
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82 = V_4;
		NullCheck(L_81);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_81, L_82, NULL);
		// characterBody.transform.localRotation *= targetCharacterOrientation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___characterBody_12;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = L_84;
		NullCheck(L_85);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86;
		L_86 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_85, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88;
		L_88 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_86, L_87, NULL);
		NullCheck(L_85);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_85, L_88, NULL);
		return;
	}

IL_023b:
	{
		// var yRotation = Quaternion.AngleAxis (_mouseAbsolute.x, transform.InverseTransformDirection (Vector3.up));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_89 = (&__this->____mouseAbsolute_4);
		float L_90 = L_89->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_91, L_92, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_94;
		L_94 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_90, L_93, NULL);
		V_5 = L_94;
		// transform.localRotation *= yRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_95;
		L_95 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96 = L_95;
		NullCheck(L_96);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_97;
		L_97 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_96, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_97, L_98, NULL);
		NullCheck(L_96);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_96, L_99, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_FixedUpdate_m6DD384F8D155E560A388F0DDAB18BD1B352B0D48 (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey (rightKey)) {
		int32_t L_0 = __this->___rightKey_19;
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_0, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// speedX += acceleration * Time.deltaTime;
		float L_2 = __this->___speedX_20;
		float L_3 = __this->___acceleration_13;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___speedX_20 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, L_4))));
		goto IL_004e;
	}

IL_0028:
	{
		// else if (Input.GetKey (leftKey)) {
		int32_t L_5 = __this->___leftKey_17;
		bool L_6;
		L_6 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_5, NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// speedX -= acceleration * Time.deltaTime;
		float L_7 = __this->___speedX_20;
		float L_8 = __this->___acceleration_13;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___speedX_20 = ((float)il2cpp_codegen_subtract(L_7, ((float)il2cpp_codegen_multiply(L_8, L_9))));
	}

IL_004e:
	{
		// if (Input.GetKey (backKey)) {
		int32_t L_10 = __this->___backKey_18;
		bool L_11;
		L_11 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_10, NULL);
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		// speedZ -= acceleration * Time.deltaTime;
		float L_12 = __this->___speedZ_21;
		float L_13 = __this->___acceleration_13;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___speedZ_21 = ((float)il2cpp_codegen_subtract(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14))));
		goto IL_009c;
	}

IL_0076:
	{
		// } else if (Input.GetKey (fwdKey)) {
		int32_t L_15 = __this->___fwdKey_16;
		bool L_16;
		L_16 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_15, NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// speedZ += acceleration * Time.deltaTime;
		float L_17 = __this->___speedZ_21;
		float L_18 = __this->___acceleration_13;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___speedZ_21 = ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(L_18, L_19))));
	}

IL_009c:
	{
		// speedX = Mathf.Lerp( speedX,0,dampingSpeed * Time.deltaTime);
		float L_20 = __this->___speedX_20;
		float L_21 = __this->___dampingSpeed_15;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_23;
		L_23 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, (0.0f), ((float)il2cpp_codegen_multiply(L_21, L_22)), NULL);
		__this->___speedX_20 = L_23;
		// speedZ = Mathf.Lerp( speedZ,0,dampingSpeed * Time.deltaTime);
		float L_24 = __this->___speedZ_21;
		float L_25 = __this->___dampingSpeed_15;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_24, (0.0f), ((float)il2cpp_codegen_multiply(L_25, L_26)), NULL);
		__this->___speedZ_21 = L_27;
		// speedX = Mathf.Clamp( speedX,-maxSpeed*Time.deltaTime, maxSpeed*Time.deltaTime);
		float L_28 = __this->___speedX_20;
		float L_29 = __this->___maxSpeed_14;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_31 = __this->___maxSpeed_14;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_33;
		L_33 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_28, ((float)il2cpp_codegen_multiply(((-L_29)), L_30)), ((float)il2cpp_codegen_multiply(L_31, L_32)), NULL);
		__this->___speedX_20 = L_33;
		// speedZ = Mathf.Clamp( speedZ,-maxSpeed*Time.deltaTime, maxSpeed*Time.deltaTime);
		float L_34 = __this->___speedZ_21;
		float L_35 = __this->___maxSpeed_14;
		float L_36;
		L_36 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_37 = __this->___maxSpeed_14;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_39;
		L_39 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_34, ((float)il2cpp_codegen_multiply(((-L_35)), L_36)), ((float)il2cpp_codegen_multiply(L_37, L_38)), NULL);
		__this->___speedZ_21 = L_39;
		// transform.position = transform.TransformPoint( new Vector3( speedX,0,speedZ) );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_42 = __this->___speedX_20;
		float L_43 = __this->___speedZ_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_42, (0.0f), L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_41, L_44, NULL);
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_45, NULL);
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_m4C8A79A3CB8D46D3E22E3AB1F645D41ED589312B (MouseLook_t947FC47A9845723307BA11051D0530C21C4F0CD4* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2
		//     clampInDegrees = new Vector2 (360, 180);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (360.0f), (180.0f), /*hidden argument*/NULL);
		__this->___clampInDegrees_6 = L_0;
		// public Vector2 sensitivity = new Vector2 (2, 2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (2.0f), (2.0f), /*hidden argument*/NULL);
		__this->___sensitivity_8 = L_1;
		// public Vector2 smoothing = new Vector2 (3, 3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (3.0f), (3.0f), /*hidden argument*/NULL);
		__this->___smoothing_9 = L_2;
		// public float acceleration = 1.0f;
		__this->___acceleration_13 = (1.0f);
		// public float maxSpeed = 5;
		__this->___maxSpeed_14 = (5.0f);
		// public float dampingSpeed = 0.2f;
		__this->___dampingSpeed_15 = (0.200000003f);
		// public KeyCode fwdKey = KeyCode.W;
		__this->___fwdKey_16 = ((int32_t)119);
		// public KeyCode leftKey = KeyCode.A;
		__this->___leftKey_17 = ((int32_t)97);
		// public KeyCode backKey = KeyCode.S;
		__this->___backKey_18 = ((int32_t)115);
		// public KeyCode rightKey = KeyCode.D;
		__this->___rightKey_19 = ((int32_t)100);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Turn_Move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn_Move_Start_mB3C018938F109D98F8CE16C6BE7355FB188DE276 (Turn_Move_t2461804B3D32A323C14A163767EFAED194D1C49D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Turn_Move::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn_Move_Update_mA7D9707133B5A223DAFF68F6A371CCA37407BF10 (Turn_Move_t2461804B3D32A323C14A163767EFAED194D1C49D* __this, const RuntimeMethod* method) 
{
	{
		// if (World == true) {
		bool L_0 = __this->___World_10;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		// transform.Rotate(TurnX * Time.deltaTime,TurnY * Time.deltaTime,TurnZ * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_2 = __this->___TurnX_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_4 = __this->___TurnY_5;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_6 = __this->___TurnZ_6;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_1);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_1, ((float)il2cpp_codegen_multiply(((float)L_2), L_3)), ((float)il2cpp_codegen_multiply(((float)L_4), L_5)), ((float)il2cpp_codegen_multiply(((float)L_6), L_7)), 0, NULL);
		// transform.Translate(MoveX * Time.deltaTime, MoveY * Time.deltaTime, MoveZ * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_9 = __this->___MoveX_7;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_11 = __this->___MoveY_8;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_13 = __this->___MoveZ_9;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_8);
		Transform_Translate_m8FF175E92671A19466A7728FEB92EFB4E999EB56(L_8, ((float)il2cpp_codegen_multiply(((float)L_9), L_10)), ((float)il2cpp_codegen_multiply(((float)L_11), L_12)), ((float)il2cpp_codegen_multiply(((float)L_13), L_14)), 0, NULL);
		return;
	}

IL_006f:
	{
		// transform.Rotate(TurnX * Time.deltaTime,TurnY * Time.deltaTime,TurnZ * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_16 = __this->___TurnX_4;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_18 = __this->___TurnY_5;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_20 = __this->___TurnZ_6;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_15);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_15, ((float)il2cpp_codegen_multiply(((float)L_16), L_17)), ((float)il2cpp_codegen_multiply(((float)L_18), L_19)), ((float)il2cpp_codegen_multiply(((float)L_20), L_21)), 1, NULL);
		// transform.Translate(MoveX * Time.deltaTime, MoveY * Time.deltaTime, MoveZ * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_23 = __this->___MoveX_7;
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_25 = __this->___MoveY_8;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		int32_t L_27 = __this->___MoveZ_9;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_22);
		Transform_Translate_m8FF175E92671A19466A7728FEB92EFB4E999EB56(L_22, ((float)il2cpp_codegen_multiply(((float)L_23), L_24)), ((float)il2cpp_codegen_multiply(((float)L_25), L_26)), ((float)il2cpp_codegen_multiply(((float)L_27), L_28)), 1, NULL);
		// }
		return;
	}
}
// System.Void Turn_Move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turn_Move__ctor_mBDCD7D294C0363305AD9CB58297969C675C3544A (Turn_Move_t2461804B3D32A323C14A163767EFAED194D1C49D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void controlJ::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlJ_start_m20D88F8FB15876D5973C4783BE4C78FD242AA8A0 (controlJ_tDBFBE0EFA9730F57F10B23245C67A96E83C30FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&controlJ_resetCar_m51E80475A7D3332E7901EAC3CA98741964DC365F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button btn = btnReset.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnReset_8;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_0, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btn.onClick.AddListener(resetCar);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)controlJ_resetCar_m51E80475A7D3332E7901EAC3CA98741964DC365F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void controlJ::resetCar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlJ_resetCar_m51E80475A7D3332E7901EAC3CA98741964DC365F (controlJ_tDBFBE0EFA9730F57F10B23245C67A96E83C30FDC* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = homePosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___homePosition_7;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void controlJ::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlJ_Update_m5013E4C7135B833197D5801E8A605043A25D99EA (controlJ_tDBFBE0EFA9730F57F10B23245C67A96E83C30FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A0DABA68E4C07BFB129833C6D60B7F6DBEDE0F);
		s_Il2CppMethodInitialized = true;
	}
	Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("Menu_principal");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE1A0DABA68E4C07BFB129833C6D60B7F6DBEDE0F, NULL);
	}

IL_0013:
	{
		// var gamepad = Gamepad.current;
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_1;
		L_1 = Gamepad_get_current_mAC9BE72710676EA54E760FFBA15404A81D7DEEB6_inline(NULL);
		V_0 = L_1;
		// if (gamepad == null)
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// Vector2 mi_pad_left = gamepad.leftStick.ReadValue();
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_3 = V_0;
		NullCheck(L_3);
		StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* L_4;
		L_4 = Gamepad_get_leftStick_m76F9D7D8766C9450C5E720ED481BDC4C3BFAE619_inline(L_3, NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_4, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		V_1 = L_5;
		// Vector2 mi_pad_right = gamepad.rightStick.ReadValue();
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_6 = V_0;
		NullCheck(L_6);
		StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* L_7;
		L_7 = Gamepad_get_rightStick_mC2074BA9B40116C6BAA3263B32E463DD23918714_inline(L_6, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_7, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		V_2 = L_8;
		// float moveX = 0;
		V_3 = (0.0f);
		// if (mi_pad_right.x > deadZone)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_2;
		float L_10 = L_9.___x_0;
		float L_11 = __this->___deadZone_6;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		// moveX = mi_pad_right.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___x_0;
		V_3 = L_13;
		goto IL_0068;
	}

IL_0052:
	{
		// else if (mi_pad_right.x < -deadZone)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = L_14.___x_0;
		float L_16 = __this->___deadZone_6;
		if ((!(((float)L_15) < ((float)((-L_16))))))
		{
			goto IL_0068;
		}
	}
	{
		// moveX = mi_pad_right.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
		float L_18 = L_17.___x_0;
		V_3 = L_18;
	}

IL_0068:
	{
		// transform.Translate(mi_pad_left.y * Vector3.forward * Time.deltaTime* speedForward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		float L_21 = L_20.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_22, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		float L_26 = __this->___speedForward_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_19);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_19, L_27, NULL);
		// transform.Rotate(Vector3.up, moveX* Time.deltaTime*speedTurn);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_30 = V_3;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_32 = __this->___speedTurn_5;
		NullCheck(L_28);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_28, L_29, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_30, L_31)), L_32)), NULL);
		// }
		return;
	}
}
// System.Void controlJ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlJ__ctor_mF7A6E1AA86CE320497B9DC7E38748BC40549F8FC (controlJ_tDBFBE0EFA9730F57F10B23245C67A96E83C30FDC* __this, const RuntimeMethod* method) 
{
	{
		// public float speedForward = 8.0f;
		__this->___speedForward_4 = (8.0f);
		// public float speedTurn = 30.0f;
		__this->___speedTurn_5 = (30.0f);
		// public float deadZone = 0.5f;
		__this->___deadZone_6 = (0.5f);
		// public Vector3 homePosition = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___homePosition_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Distancia_camara::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distancia_camara_Start_mCD531961D401DAFEFCD620978E483EF46209BF09 (Distancia_camara_t8F11EDC71DC9CFDFA7E25E1761B680DE91B38463* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Distancia_camara::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distancia_camara_Update_mC5689BD6943829C85CE2499513B8B5990DB221CB (Distancia_camara_t8F11EDC71DC9CFDFA7E25E1761B680DE91B38463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(Vector3.Distance(arcamara.transform.position, this.transform.position));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___arcamara_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// System.Void Distancia_camara::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Distancia_camara__ctor_mA1827CFE33FAF45FD23726C8EF482621DFE086C7 (Distancia_camara_t8F11EDC71DC9CFDFA7E25E1761B680DE91B38463* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BasicRigidBodyPush::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_OnControllerColliderHit_mAB4A1B5340D41961D9592034FE626BC8A8FC379E (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	{
		// if (canPush) PushRigidBodies(hit);
		bool L_0 = __this->___canPush_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (canPush) PushRigidBodies(hit);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_1 = ___hit0;
		BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13(__this, L_1, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::PushRigidBodies(UnityEngine.ControllerColliderHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush_PushRigidBodies_m21C4CA75FFF7646BCD91E9A673B18E6182377D13 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* ___hit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rigidbody body = hit.collider.attachedRigidbody;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_0 = ___hit0;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = ControllerColliderHit_get_collider_mA2CF90334AD1231C04452B2D99715A9E289691D6(L_0, NULL);
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Collider_get_attachedRigidbody_m060304DB909A1FACD260EBB619D64D39129739AD(L_1, NULL);
		V_0 = L_2;
		// if (body == null || body.isKinematic) return;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_5, NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// if (body == null || body.isKinematic) return;
		return;
	}

IL_001e:
	{
		// var bodyLayerMask = 1 << body.gameObject.layer;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_8, NULL);
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_10 = (&__this->___pushLayers_4);
		int32_t L_11;
		L_11 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_10, NULL);
		if (((int32_t)(((int32_t)(1<<((int32_t)(L_9&((int32_t)31)))))&L_11)))
		{
			goto IL_003d;
		}
	}
	{
		// if ((bodyLayerMask & pushLayers.value) == 0) return;
		return;
	}

IL_003d:
	{
		// if (hit.moveDirection.y < -0.3f) return;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_12 = ___hit0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_12, NULL);
		float L_14 = L_13.___y_3;
		if ((!(((float)L_14) < ((float)(-0.300000012f)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (hit.moveDirection.y < -0.3f) return;
		return;
	}

IL_0050:
	{
		// Vector3 pushDir = new Vector3(hit.moveDirection.x, 0.0f, hit.moveDirection.z);
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_15 = ___hit0;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_15, NULL);
		float L_17 = L_16.___x_2;
		ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92* L_18 = ___hit0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = ControllerColliderHit_get_moveDirection_mC4C6384C18B4DAE3D301D079AE2A30FCC2E78A93(L_18, NULL);
		float L_20 = L_19.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, (0.0f), L_20, NULL);
		// body.AddForce(pushDir * strength, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		float L_23 = __this->___strength_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		NullCheck(L_21);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_21, L_24, 1, NULL);
		// }
		return;
	}
}
// System.Void BasicRigidBodyPush::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicRigidBodyPush__ctor_mCD0033473AC08BFF32309E49AE95271C711099A9 (BasicRigidBodyPush_t5850829651FD13E9150BEDBB10880B1DC0FC53E0* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.5f, 5f)] public float strength = 1.1f;
		__this->___strength_6 = (1.10000002f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MobileDisableAutoSwitchControls::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_Start_m5E1CF874A11971B24762BC74EE94AB81CFF45368 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		// DisableAutoSwitchControls();
		MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4(__this, NULL);
		// }
		return;
	}
}
// System.Void MobileDisableAutoSwitchControls::DisableAutoSwitchControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls_DisableAutoSwitchControls_m156A87BFC0F55EC1BD438F032CB959A464A39AE4 (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		// playerInput.neverAutoSwitchControlSchemes = true;
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->___playerInput_4;
		NullCheck(L_0);
		PlayerInput_set_neverAutoSwitchControlSchemes_mC0702F30BCC29A161B667EF791B9B9A12FC6DF60(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MobileDisableAutoSwitchControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileDisableAutoSwitchControls__ctor_mF934985411953E473C075F0C8680F75C118E8FCC (MobileDisableAutoSwitchControls_t0A648011382F1B8F00CD89B26AB30777CCBB9FDA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIVirtualButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerDown_m1B73262454FA610913DA71F1C0792FD780787D56 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(true);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerUp_mD67F7DFB29033E7C84A2F41C31FA3CFDA1174C8B (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonStateValue(false);
		UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OnPointerClick_m3FEAAD559F8262DC2C8A8E91C85765E327CDB8FC (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OutputButtonClickEvent();
		UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonStateValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonStateValue_m9052A6A66D9BD3C47C6C5498AD55EB44BBF6BB9F (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, bool ___buttonState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonStateOutputEvent.Invoke(buttonState);
		BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* L_0 = __this->___buttonStateOutputEvent_4;
		bool L_1 = ___buttonState0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, L_1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualButton::OutputButtonClickEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton_OutputButtonClickEvent_m7DEA4C619F5DCCE273371E9D7B7760FC05D2DF32 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		// buttonClickOutputEvent.Invoke();
		Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* L_0 = __this->___buttonClickOutputEvent_5;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualButton__ctor_m2CF3E3351F342BF028B0B89C015137EDF0D1B8D7 (UIVirtualButton_t1CE3DDF62633C1C6EF55BD57606C84F9B9A276C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIVirtualButton/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_m42AA0406D1CB826FFD96A45AE4FFD71224A581D7 (BoolEvent_t81DF6CDEF90C1D7B2256C9310BCCE9D2D078480A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
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
// System.Void UIVirtualButton/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mF10E167E7BE71239919769A3884196FF8581BC95 (Event_tCD26C285BECBF219F0B786DA841165B26E05F0B8* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
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
// System.Void UIVirtualJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_Start_mD2D5C68628D62647018960CBF87655E0D13D845C (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_SetupHandle_m31819BE784870B9E54B3A50CA1956106F7BDB0C6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerDown_m2CADC0629A70249CC581C3DEF77A2D70558DF2B5 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnDrag_mB0E6B186E3567D9B4C37860E70DCA0B8DDB746C0 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out Vector2 position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		// position = ApplySizeDelta(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB(__this, L_6, NULL);
		V_0 = L_7;
		// Vector2 clampedPosition = ClampValuesToMagnitude(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E(__this, L_8, NULL);
		V_1 = L_9;
		// Vector2 outputPosition = ApplyInversionFilter(position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E(__this, L_10, NULL);
		V_2 = L_11;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_12, L_13, NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_14, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0063;
		}
	}
	{
		// UpdateHandleRectPosition(clampedPosition * joystickRange);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = __this->___joystickRange_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_17, L_18, NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_19, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OnPointerUp_m32B1B96876A1AD9636D7119CF428E8A9441379EA (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6(__this, L_0, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894(__this, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_OutputPointerEventValue_mB0CA7705B486C5BC44C8AB8D3135B37A19800DB6 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystickOutputEvent.Invoke(pointerPosition);
		Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* L_0 = __this->___joystickOutputEvent_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualJoystick::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick_UpdateHandleRectPosition_m97D65656CB77C55234824F8D7A65BD67F478E894 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplySizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplySizeDelta_mE401CB7F9B4D1E53DD878FE6D3B34DD98A8BBEDB (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float x = (position.x/containerRect.sizeDelta.x) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		float L_1 = L_0.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___containerRect_4;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_2, NULL);
		float L_4 = L_3.___x_0;
		// float y = (position.y/containerRect.sizeDelta.y) * 2.5f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___containerRect_4;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___y_1;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(L_6/L_9)), (2.5f)));
		// return new Vector2(x, y);
		float L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_multiply(((float)(L_1/L_4)), (2.5f))), L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ClampValuesToMagnitude_m136E1691A4EA6C3D59C18AF78CB3C790CCB8346E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualJoystick::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualJoystick_ApplyInversionFilter_m92C48D8832AAFB5BCFA8C5E0E279E44E76EAC03E (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualJoystick::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualJoystick_InvertValue_mDEBA6DFF3676133434C5152A72CB2BC125D3D507 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualJoystick__ctor_m8526A96A470D77A141CAD1D824FF8DC137B63415 (UIVirtualJoystick_t002665A6C930DCBF2E187C634754F27B47FB1B16* __this, const RuntimeMethod* method) 
{
	{
		// public float joystickRange = 50f;
		__this->___joystickRange_6 = (50.0f);
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIVirtualJoystick/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m89D370961FB9424418084FD7CC1FFF237A4606C5 (Event_tE8BCFAF6D3E261F47341C3DE8E539FF5C42E17C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void UIVirtualTouchZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_Start_m5178EDEC0B12F59242283DD29F480CFA00D77676 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// SetupHandle();
		UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894(__this, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetupHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetupHandle_m01D23F4128356836F9A12EAE5445227B24E8A894 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___handleRect_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_3, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerDown_m8FD8081376FC0AEEDDF7F4ADF1B9C6624D358DEE (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out pointerDownPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___pointerDownPosition_10);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, L_5, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handleRect_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_10, (bool)1, NULL);
		// UpdateHandleRectPosition(pointerDownPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___pointerDownPosition_10;
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_11, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnDrag_m018815333D4A45EC9288289C3230B446F86F522F (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(containerRect, eventData.position, eventData.pressEventCamera, out currentPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___containerRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___currentPointerPosition_11);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, L_5, NULL);
		// Vector2 positionDelta = GetDeltaBetweenPositions(pointerDownPosition, currentPointerPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___pointerDownPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___currentPointerPosition_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B(__this, L_7, L_8, NULL);
		V_0 = L_9;
		// Vector2 clampedPosition = ClampValuesToMagnitude(positionDelta);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95(__this, L_10, NULL);
		V_1 = L_11;
		// Vector2 outputPosition = ApplyInversionFilter(clampedPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823(__this, L_12, NULL);
		V_2 = L_13;
		// OutputPointerEventValue(outputPosition * magnitudeMultiplier);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = __this->___magnitudeMultiplier_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_15, NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OnPointerUp_m6572F60C16F6D09A07FDE778F69FD710E06315A5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerDownPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___pointerDownPosition_10 = L_0;
		// currentPointerPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currentPointerPosition_11 = L_1;
		// OutputPointerEventValue(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF(__this, L_2, NULL);
		// if(handleRect)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___handleRect_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// SetObjectActiveState(handleRect.gameObject, false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handleRect_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5(__this, L_6, (bool)0, NULL);
		// UpdateHandleRectPosition(Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E(__this, L_7, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::OutputPointerEventValue(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_OutputPointerEventValue_m53065FA2AD015F665E03E7CAE24703CFE1C4E2AF (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pointerPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchZoneOutputEvent.Invoke(pointerPosition);
		Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* L_0 = __this->___touchZoneOutputEvent_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pointerPosition0;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0(L_0, L_1, UnityEvent_1_Invoke_m756C9B879DDBE079CDE2D06DC231CE42C01C4AD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::UpdateHandleRectPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_UpdateHandleRectPosition_m859E4E9C7C76AA057603B2CAA49168BD0D5ACC9E (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition0, const RuntimeMethod* method) 
{
	{
		// handleRect.anchoredPosition = newPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___handleRect_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___newPosition0;
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UIVirtualTouchZone::SetObjectActiveState(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone_SetObjectActiveState_mA0ED9693131A0BC3AFACABC0D7C0370743C439F5 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, bool ___newState1, const RuntimeMethod* method) 
{
	{
		// targetObject.SetActive(newState);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		bool L_1 = ___newState1;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::GetDeltaBetweenPositions(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_GetDeltaBetweenPositions_mD54442DDF2D8B643801BDA01791C97D3658E0B5B (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstPosition0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondPosition1, const RuntimeMethod* method) 
{
	{
		// return secondPosition - firstPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___secondPosition1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___firstPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ClampValuesToMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ClampValuesToMagnitude_mA1619A6CBC35D212940A5D0AC1823AAFDA8FCC95 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// return Vector2.ClampMagnitude(position, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline(L_0, (1.0f), NULL);
		return L_1;
	}
}
// UnityEngine.Vector2 UIVirtualTouchZone::ApplyInversionFilter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIVirtualTouchZone_ApplyInversionFilter_mFE8FF2CCBE01FDAB1BB9FDEC163809B630173823 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	{
		// if(invertXOutputValue)
		bool L_0 = __this->___invertXOutputValue_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// position.x = InvertValue(position.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___position0;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_2, NULL);
		(&___position0)->___x_0 = L_3;
	}

IL_001b:
	{
		// if(invertYOutputValue)
		bool L_4 = __this->___invertYOutputValue_9;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// position.y = InvertValue(position.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___y_1;
		float L_7;
		L_7 = UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA(__this, L_6, NULL);
		(&___position0)->___y_1 = L_7;
	}

IL_0036:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___position0;
		return L_8;
	}
}
// System.Single UIVirtualTouchZone::InvertValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIVirtualTouchZone_InvertValue_m81A82AFD20813D467E3F71703E9A5EE11CAE99BA (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// return -value;
		float L_0 = ___value0;
		return ((-L_0));
	}
}
// System.Void UIVirtualTouchZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIVirtualTouchZone__ctor_m3FA22B25B88E7ECBBB54AF2464EFB9A978D76CC6 (UIVirtualTouchZone_t1A876DDEA85164FB2BA974D0146FF2D9FE36AB0A* __this, const RuntimeMethod* method) 
{
	{
		// public float magnitudeMultiplier = 1f;
		__this->___magnitudeMultiplier_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIVirtualTouchZone/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m5EC032D776C29C6281EF446F93420F4DB87B6728 (Event_t39EC29014C2EF54751D4079DD636172E90DCE53E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CameraPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer_Update_mF19D284A593E4627CD4F22A58C11FB87B6627FF4 (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACB897EA3DC7ABE28C77E03A5FEEDDDE6DDCC86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral812D026F7DEF23874CF9C51CC8D6E832190F5614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99FE6F84C49D301367E98710598C42D0F6C7516F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B15_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B14_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B19_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B18_0 = NULL;
	{
		// int layerMask = 1 << 6;
		V_0 = ((int32_t)64);
		// mira.transform.position = transform.position + transform.forward * _maxDistance;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mira_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, (10.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, Mathf.Infinity, layerMask))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_10, L_11, NULL);
		int32_t L_13 = V_0;
		bool L_14;
		L_14 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_9, L_12, (&V_1), (std::numeric_limits<float>::infinity()), L_13, NULL);
		if (!L_14)
		{
			goto IL_00d8;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->____gazedAtObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19;
		G_B3_0 = L_20;
		if (L_20)
		{
			G_B4_0 = L_20;
			goto IL_008a;
		}
	}
	{
		goto IL_0094;
	}

IL_008a:
	{
		NullCheck(G_B4_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B4_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_0094:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		__this->____gazedAtObject_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)L_22);
		// _gazedAtObject.SendMessage("OnPointerEnter");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->____gazedAtObject_5;
		NullCheck(L_23);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_23, _stringLiteral7892A84274C1DC4A2351A49903EB298DEA99C240, NULL);
		// mira.transform.GetChild(0).GetComponent<Animator>().SetTrigger("grande");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___mira_6;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_25, 0, NULL);
		NullCheck(L_26);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27;
		L_27 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_26, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_27);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteral99FE6F84C49D301367E98710598C42D0F6C7516F, NULL);
		goto IL_0123;
	}

IL_00d8:
	{
		// if(_gazedAtObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->____gazedAtObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_0106;
		}
	}
	{
		// mira.transform.GetChild(0).GetComponent<Animator>().SetTrigger("peque");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___mira_6;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_31, 0, NULL);
		NullCheck(L_32);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33;
		L_33 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_32, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		NullCheck(L_33);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_33, _stringLiteral4ACB897EA3DC7ABE28C77E03A5FEEDDDE6DDCC86, NULL);
	}

IL_0106:
	{
		// _gazedAtObject?.SendMessage("OnPointerExit");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34;
		G_B9_0 = L_35;
		if (L_35)
		{
			G_B10_0 = L_35;
			goto IL_0112;
		}
	}
	{
		goto IL_011c;
	}

IL_0112:
	{
		NullCheck(G_B10_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B10_0, _stringLiteralB81A1EDFC9FCE7D754F9199BAED4FF1E125B0C7E, NULL);
	}

IL_011c:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0123:
	{
		// if (Input.GetButton("A"))
		bool L_36;
		L_36 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
		if (!L_36)
		{
			goto IL_016f;
		}
	}
	{
		// Vector3 position = new Vector3(hit.point.x , 1.6f, hit.point.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		float L_38 = L_37.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		float L_40 = L_39.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_38, (1.60000002f), L_40, NULL);
		// _gazedAtObject?.SendMessage("OnPointerClick", position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_41;
		G_B14_0 = L_42;
		if (L_42)
		{
			G_B15_0 = L_42;
			goto IL_015f;
		}
	}
	{
		goto IL_016f;
	}

IL_015f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43;
		RuntimeObject* L_45 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_44);
		NullCheck(G_B15_0);
		GameObject_SendMessage_m9F174A6F7D2DBE4E1934892F3438405F379014E3(G_B15_0, _stringLiteralE4D1D91E707649742B086EDB3E0F4EFA9754545A, L_45, NULL);
	}

IL_016f:
	{
		// if(Input.GetButton("B"))
		bool L_46;
		L_46 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, NULL);
		if (!L_46)
		{
			goto IL_0190;
		}
	}
	{
		// _gazedAtObject?.SendMessage("OnPointerClick1");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->____gazedAtObject_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47;
		G_B18_0 = L_48;
		if (L_48)
		{
			G_B19_0 = L_48;
			goto IL_0186;
		}
	}
	{
		return;
	}

IL_0186:
	{
		NullCheck(G_B19_0);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(G_B19_0, _stringLiteral812D026F7DEF23874CF9C51CC8D6E832190F5614, NULL);
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void CameraPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer__ctor_m5C4B443EB7C8A518306BF27BD947D938FDF5162D (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m35E3138C09D62411C4C8503DD4D47DA2AF9BF6E2 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m4D4D770B4F4BA807AB64DB40B6730226BB821883 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_000c:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0018:
	{
		// if (Api.IsTriggerHeldPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F(NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Api.Recenter();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0(NULL);
	}

IL_0024:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0030:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m4C459294D28BDCFC64FECC657FB860844F52D9F7 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_m50CBBCE72AB6C2A5C8BC1977D520CF3856A91E89 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_11 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_10), (void*)L_3);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int sibIdx = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_0, NULL);
		V_0 = L_1;
		// int numSibs = transform.parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		V_1 = L_4;
		// sibIdx = (sibIdx + Random.Range(1, numSibs)) % numSibs;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, L_6, NULL);
		int32_t L_8 = V_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_7))%L_8));
		// GameObject randomSib = transform.parent.GetChild(sibIdx).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		// float angle = Random.Range(-Mathf.PI, Mathf.PI);
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-3.14159274f), (3.14159274f), NULL);
		V_2 = L_14;
		// float distance = Random.Range(_minObjectDistance, _maxObjectDistance);
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((2.5f), (3.5f), NULL);
		V_3 = L_15;
		// float height = Random.Range(_minObjectHeight, _maxObjectHeight);
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (3.5f), NULL);
		V_4 = L_16;
		// Vector3 newPos = new Vector3(Mathf.Cos(angle) * distance, height,
		//                              Mathf.Sin(angle) * distance);
		float L_17 = V_2;
		float L_18;
		L_18 = cosf(L_17);
		float L_19 = V_3;
		float L_20 = V_4;
		float L_21 = V_2;
		float L_22;
		L_22 = sinf(L_21);
		float L_23 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), ((float)il2cpp_codegen_multiply(L_18, L_19)), L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		// transform.parent.localPosition = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_25);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_26, NULL);
		// randomSib.SetActive(true);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerEnter_m5D028066A6B28C2770924AE0C5A2A926E807FC42 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(true);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerExit_mB2F968E3432A4B5E90ABFCE7E6B025A39041809F (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerClick_m42836A892DD52FE0C121F5E37231BF198052017E (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// TeleportRandomly();
		ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181(__this, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___gazedAt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B4_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B5_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___InactiveMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___GazedAtMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____myRenderer_10;
		bool L_5 = ___gazedAt0;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_002d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___InactiveMaterial_4;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0033;
	}

IL_002d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___GazedAtMaterial_5;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0033:
	{
		NullCheck(G_B5_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B5_1, G_B5_0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_mA008C8DFDEF1B6A05926338921FE1FD30BCEA9BC (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_m10BF77FE8B825D9640800D5DF7EF791A391FA49B (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->____mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_5), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_m43F984D5BF13F2C545B508D93645C1C3AC9262D5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397(__this, NULL);
	}

IL_0015:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0021:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		return;
	}

IL_0027:
	{
		// if (_isScreenTouched)
		bool L_3;
		L_3 = VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5(__this, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB(__this, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		// StopXR();
		VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_0 = (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6*)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, NULL);
		// _mainCamera.ResetAspect();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____mainCamera_5;
		NullCheck(L_4);
		Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB(L_4, NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____mainCamera_5;
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, (60.0f), NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_m94505259847FB7C54346D7CF02AD85793393D141 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3DC1735AA5EC0D61A72803BB3B33B9499A373336 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m9A6340456306ACFADD0D458946C82448A862E68B (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Initializing XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6;
		L_6 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_6);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7;
		L_7 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_6, NULL);
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
		L_8 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, NULL);
		goto IL_0096;
	}

IL_0069:
	{
		// Debug.Log("XR initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_10;
		L_10 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_10);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_11;
		L_11 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_10, NULL);
		NullCheck(L_11);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_11, NULL);
		// Debug.Log("XR started.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, NULL);
	}

IL_0096:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B4CE8CBE980FD132B19F40FF2172502B1D0566 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mD84D9ACDB0A04C619509BA51590975DB84C30B0F (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void instrucciones::abrirInstrucciones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_abrirInstrucciones_mF6669E46F9F6C50CACA77649AB524439B354C2E3 (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	{
		// planoInstrucciones.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___planoInstrucciones_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void instrucciones::VolverInstrucciones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_VolverInstrucciones_m53B100CDD82622AA54E93F23DBBB3D6614B4451B (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	{
		// planoInstrucciones.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___planoInstrucciones_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void instrucciones::abrirTrailer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_abrirTrailer_m3F942512968BF09496192B5A99D98D90C83D47A2 (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	{
		// planoTrailer.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___planoTrailer_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void instrucciones::VolverTrailer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_VolverTrailer_mEC7E525CA00AAEEC167245DD50CF1532484C9E1D (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	{
		// planoTrailer.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___planoTrailer_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_10;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void instrucciones::CargarEscenaVehiculo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_CargarEscenaVehiculo_m8B53847BB294B82B36994D26505A70CECDE09AA8 (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03ACC9654667C7009AE09198C93C3F8AF4C1CBAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC69982864F912BD42DCA3C7272158808813D786C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Entra en cargar escena vehiculo");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral03ACC9654667C7009AE09198C93C3F8AF4C1CBAA, NULL);
		// SceneManager.LoadScene("Coche");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC69982864F912BD42DCA3C7272158808813D786C, NULL);
		// }
		return;
	}
}
// System.Void instrucciones::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_Start_mBEFFCC140CE5B094E899F21F8B5DB2B69D9536F2 (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&instrucciones_CargarEscenaVehiculo_m8B53847BB294B82B36994D26505A70CECDE09AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&instrucciones_VolverInstrucciones_m53B100CDD82622AA54E93F23DBBB3D6614B4451B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&instrucciones_VolverTrailer_mEC7E525CA00AAEEC167245DD50CF1532484C9E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&instrucciones_abrirInstrucciones_mF6669E46F9F6C50CACA77649AB524439B354C2E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&instrucciones_abrirTrailer_m3F942512968BF09496192B5A99D98D90C83D47A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button btn = btnInstruccioness.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___btnInstruccioness_4;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_0, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btn.onClick.AddListener(abrirInstrucciones);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)instrucciones_abrirInstrucciones_mF6669E46F9F6C50CACA77649AB524439B354C2E3_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// Button btnCerrar = btnCerrarInstruccioness.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___btnCerrarInstruccioness_6;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5;
		L_5 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_4, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnCerrar.onClick.AddListener(VolverInstrucciones);
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)instrucciones_VolverInstrucciones_m53B100CDD82622AA54E93F23DBBB3D6614B4451B_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// Button btnTrailer = btnVideo.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___btnVideo_5;
		NullCheck(L_8);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9;
		L_9 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_8, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnTrailer.onClick.AddListener(abrirTrailer);
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)instrucciones_abrirTrailer_m3F942512968BF09496192B5A99D98D90C83D47A2_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// Button btnCerrarTrailer = btnCerrarVideo.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___btnCerrarVideo_7;
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_12, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnCerrarTrailer.onClick.AddListener(VolverTrailer);
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)instrucciones_VolverTrailer_mEC7E525CA00AAEEC167245DD50CF1532484C9E1D_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
		// Button btnVehiculo = btnEscenaVehiculo.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___btnEscenaVehiculo_11;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17;
		L_17 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_16, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// btnVehiculo.onClick.AddListener(CargarEscenaVehiculo);
		NullCheck(L_17);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_18;
		L_18 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_17, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, __this, (intptr_t)((void*)instrucciones_CargarEscenaVehiculo_m8B53847BB294B82B36994D26505A70CECDE09AA8_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void instrucciones::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones_Update_mCB19FB6BC66506258A5E7312D7BFE308DDF67FB5 (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void instrucciones::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void instrucciones__ctor_m16099C0FB21F8CBAF113AA814226323A584A9254 (instrucciones_t8535D1606A5F643867237C7FEC01DF4C2806DFCA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Menu::abrirInstrucciones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_abrirInstrucciones_mAF76E768BEEDCBA18CDDA48051482A103A15C15F (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// instrucciones.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instrucciones_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Menu::VolverInstrucciones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_VolverInstrucciones_mB36020D8F781D9811219347454D3C621E558BA18 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// instrucciones.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___instrucciones_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___menu_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Menu::abrirScenaTrailer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_abrirScenaTrailer_mF19FB069E7AD154A541F3D21AB3C4F7F88317C32 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Trailer");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD287833BBB7D5D15C278205064EAFF8ECF8A16AA, NULL);
		// }
		return;
	}
}
// System.Void Menu::volverDelTrailer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_volverDelTrailer_mF1BC13782857E4B1B1F29CD43EBAE4DB0345214E (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CADB925122CBF8C0B4CCBE3F9847ED677BC5E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Interior_Bunker");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral39CADB925122CBF8C0B4CCBE3F9847ED677BC5E4, NULL);
		// }
		return;
	}
}
// System.Void Menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Update_m664984862D794DB3E17B79AFC35D12A9ED961B5D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void objetoInteractivo::OnPointerEnter1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objetoInteractivo_OnPointerEnter1_m34173C2538E0C8695D95E8E37917691DF46DC121 (objetoInteractivo_tD0B0B54FD01AA36AEC1C5902C452B8C6A3D98BC9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void objetoInteractivo::OnPointerExit1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objetoInteractivo_OnPointerExit1_mE6E8F7E79529A25C7D67F5BCA05456C7CF8C9B4D (objetoInteractivo_tD0B0B54FD01AA36AEC1C5902C452B8C6A3D98BC9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void objetoInteractivo::OnPointerClick1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objetoInteractivo_OnPointerClick1_m384A0867CDF2C67AE9096B242CD717B20C63B63C (objetoInteractivo_tD0B0B54FD01AA36AEC1C5902C452B8C6A3D98BC9* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = new Vector3(transform.position.x + 2, transform.position.y, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_add(L_3, (2.0f))), L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_10, NULL);
		// }
		return;
	}
}
// System.Void objetoInteractivo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objetoInteractivo__ctor_m017A72993E32BC241385DF8C8CB63AA4D3E16D2C (objetoInteractivo_tD0B0B54FD01AA36AEC1C5902C452B8C6A3D98BC9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void playVideo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playVideo_Start_mE94E9D68C781CD9503911EF5ECEDD39643788CB4 (playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v = this.GetComponent<UnityEngine.Video.VideoPlayer>();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0;
		L_0 = Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA(__this, Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var);
		__this->___v_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void playVideo::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playVideo_OnMouseDown_m7AA5B29E5F9DFE6830C35829F52A9CC4342FB206 (playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(playPauseVideo());
		RuntimeObject* L_0;
		L_0 = playVideo_playPauseVideo_m2B2A912E847491FE4A7B825C26B0B6509CC8CDDC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator playVideo::playPauseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* playVideo_playPauseVideo_m2B2A912E847491FE4A7B825C26B0B6509CC8CDDC (playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* L_0 = (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A*)il2cpp_codegen_object_new(U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CplayPauseVideoU3Ed__3__ctor_m5859C0C8C66D3E0239DD82680FE8998719FE8BDF(L_0, 0, NULL);
		U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void playVideo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playVideo_Update_mB63A7BD509769ECA65F18FF4C8FF924083772E8F (playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void playVideo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void playVideo__ctor_m486F852EE9013A6EFC6104C663954F6D7BE46598 (playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void playVideo/<playPauseVideo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayPauseVideoU3Ed__3__ctor_m5859C0C8C66D3E0239DD82680FE8998719FE8BDF (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void playVideo/<playPauseVideo>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayPauseVideoU3Ed__3_System_IDisposable_Dispose_mDF08D0EFC6A7F6E2AB4857F802BC8A6F39449328 (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean playVideo/<playPauseVideo>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CplayPauseVideoU3Ed__3_MoveNext_m852FF254A3DE052965882A6D04D09E48821CBF29 (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_008f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// v.Prepare();
		playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* L_3 = V_1;
		NullCheck(L_3);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = L_3->___v_4;
		NullCheck(L_4);
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_4, NULL);
		goto IL_004d;
	}

IL_0036:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0046:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004d:
	{
		// while (!v.isPrepared)
		playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* L_5 = V_1;
		NullCheck(L_5);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = L_5->___v_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767(L_6, NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// if (v.isPlaying)
		playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* L_8 = V_1;
		NullCheck(L_8);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_9 = L_8->___v_4;
		NullCheck(L_9);
		bool L_10;
		L_10 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_9, NULL);
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// v.Pause();
		playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* L_11 = V_1;
		NullCheck(L_11);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_12 = L_11->___v_4;
		NullCheck(L_12);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_12, NULL);
		goto IL_007f;
	}

IL_0074:
	{
		// v.Play();
		playVideo_t59F6C2A7065ABE0C9EC76213A297FF08B3EC836D* L_13 = V_1;
		NullCheck(L_13);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_14 = L_13->___v_4;
		NullCheck(L_14);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_14, NULL);
	}

IL_007f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object playVideo/<playPauseVideo>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CplayPauseVideoU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE93867132AA576B1F569396E98A21B63A3757312 (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void playVideo/<playPauseVideo>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CplayPauseVideoU3Ed__3_System_Collections_IEnumerator_Reset_m6CDFC3A7CFD7E553084F40C89EAEDC22C89904F6 (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CplayPauseVideoU3Ed__3_System_Collections_IEnumerator_Reset_m6CDFC3A7CFD7E553084F40C89EAEDC22C89904F6_RuntimeMethod_var)));
	}
}
// System.Object playVideo/<playPauseVideo>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CplayPauseVideoU3Ed__3_System_Collections_IEnumerator_get_Current_mDFB5E26323C7BB3E3A4EC9FA17AA0A51FF31C5ED (U3CplayPauseVideoU3Ed__3_t893D4428751B1B63C7C28A0066DAA9D595AA9F9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ReceiveHit::OnPointerEnter1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveHit_OnPointerEnter1_m1153B2EAD5E3045446861D95610A9EAD4EA65970 (ReceiveHit_tC76DA8EA6E20A9D39BE79C9A6F3CA34F8EAAC50C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ReceiveHit::OnPointerExit1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveHit_OnPointerExit1_m0D18EA2B3F922B7FE6CE79F26D9853D437A6DC99 (ReceiveHit_tC76DA8EA6E20A9D39BE79C9A6F3CA34F8EAAC50C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ReceiveHit::OnPointerClick1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveHit_OnPointerClick1_m3B8333AD42D30A16AF530FBCDC432929840B9CE2 (ReceiveHit_tC76DA8EA6E20A9D39BE79C9A6F3CA34F8EAAC50C* __this, const RuntimeMethod* method) 
{
	{
		// myEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___myEvent_4;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void ReceiveHit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveHit__ctor_mB82019C326CC22E6FCF5B8AD117F7EE2EA15A23F (ReceiveHit_tC76DA8EA6E20A9D39BE79C9A6F3CA34F8EAAC50C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void teleport::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teleport_OnPointerEnter_m52CFEFCC9955EAC18AFE0F631320811A42C62819 (teleport_t83CFBEA53CFCE74528F2BF2427291F8C53D527EE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void teleport::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teleport_OnPointerExit_mACA7FB7A3201F566297EF03686BE016E34E74395 (teleport_t83CFBEA53CFCE74528F2BF2427291F8C53D527EE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void teleport::OnPointerClick(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teleport_OnPointerClick_m5B6750850D63A803991C8394828AF45E11EA557A (teleport_t83CFBEA53CFCE74528F2BF2427291F8C53D527EE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// playerObject.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerObject_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position0;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void teleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void teleport__ctor_m6BA29622B534EB6B6B782F8BA01D61169B154486 (teleport_t83CFBEA53CFCE74528F2BF2427291F8C53D527EE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VideoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Start_m61AD2CF792C1B5615D6837402CF12DE7F9587842 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// duration = video.GetComponent<VideoPlayer>().length;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___video_4;
		NullCheck(L_0);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_1;
		L_1 = GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451(L_0, GameObject_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m9BBCE64E708CE9AE201EDB598EBD30D79A145451_RuntimeMethod_var);
		NullCheck(L_1);
		double L_2;
		L_2 = VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E(L_1, NULL);
		__this->___duration_5 = L_2;
		// }
		return;
	}
}
// System.Void VideoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController_Update_mFC5171B82B3810F717DC3DB1CA0879B1A642F542 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CADB925122CBF8C0B4CCBE3F9847ED677BC5E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time += Time.deltaTime;
		double L_0 = __this->___time_6;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___time_6 = ((double)il2cpp_codegen_add(L_0, ((double)L_1)));
		// if(time > duration) SceneManager.LoadScene("Interior_Bunker");
		double L_2 = __this->___time_6;
		double L_3 = __this->___duration_5;
		if ((!(((double)L_2) > ((double)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		// if(time > duration) SceneManager.LoadScene("Interior_Bunker");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral39CADB925122CBF8C0B4CCBE3F9847ED677BC5E4, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void VideoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoController__ctor_m103EB9AC18E394EF526FBFAD32074E59551F3F06 (VideoController_t78C8E8AE6A5F68807542FBA9275DA9E50F95C7BC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean StarterAssets.FirstPersonController::get_IsCurrentDeviceMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirstPersonController_get_IsCurrentDeviceMouse_mBD2A02E3A33E0A4074283C7CD2C40BAC507278B0 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _playerInput.currentControlScheme == "KeyboardMouse";
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_0 = __this->____playerInput_26;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PlayerInput_get_currentControlScheme_mA70B5C50BA1A61D2E232F17730BAECD3F690204C(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4700B5BBCBF829BC28448CAB621CD8AEDB030940, NULL);
		return L_2;
	}
}
// System.Void StarterAssets.FirstPersonController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Awake_m97115C4294DCE20924F5649107DF575C3BF59A3F (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_mainCamera == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____mainCamera_29;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _mainCamera = GameObject.FindGameObjectWithTag("MainCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		__this->____mainCamera_29 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_29), (void*)L_2);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Start_m73BF516410ACFA61B3E3745C037FED856B180689 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->____controller_27 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____controller_27), (void*)L_0);
		// _input = GetComponent<StarterAssetsInputs>();
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_1;
		L_1 = Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC(__this, Component_GetComponent_TisStarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657_m5B09A1687F334779B458A531D5BE1260018B83DC_RuntimeMethod_var);
		__this->____input_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_28), (void*)L_1);
		// _playerInput = GetComponent<PlayerInput>();
		PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* L_2;
		L_2 = Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89(__this, Component_GetComponent_TisPlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F_m2EF321505CFAA666C32A7BF562B506898607DA89_RuntimeMethod_var);
		__this->____playerInput_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playerInput_26), (void*)L_2);
		// _jumpTimeoutDelta = JumpTimeout;
		float L_3 = __this->___JumpTimeout_10;
		__this->____jumpTimeoutDelta_24 = L_3;
		// _fallTimeoutDelta = FallTimeout;
		float L_4 = __this->___FallTimeout_11;
		__this->____fallTimeoutDelta_25 = L_4;
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Update_mA9100327050EDD5A4EDFC1F770FD65E9E4F44A64 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// JumpAndGravity();
		FirstPersonController_JumpAndGravity_mE8E57E5D89BE4289C81F1D668AB99588356FD44A(__this, NULL);
		// GroundedCheck();
		FirstPersonController_GroundedCheck_mBD7B0C905A60ED82AD81BD5E8124C309688AB5D6(__this, NULL);
		// Move();
		FirstPersonController_Move_mD3B86419A063305FAF1598ED1FDE790B407A20F3(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_LateUpdate_mDD87A9960299EB96B38E5DC1359C350B6F679A98 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// CameraRotation();
		FirstPersonController_CameraRotation_m8D6B31A95A1DDF1B34ECD3806E6052F255781D8D(__this, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::GroundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_GroundedCheck_mBD7B0C905A60ED82AD81BD5E8124C309688AB5D6 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 spherePosition = new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___y_3;
		float L_6 = __this->___GroundedOffset_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(L_5, L_6)), L_9, NULL);
		// Grounded = Physics.CheckSphere(spherePosition, GroundedRadius, GroundLayers, QueryTriggerInteraction.Ignore);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___GroundedRadius_14;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___GroundLayers_15;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		bool L_14;
		L_14 = Physics_CheckSphere_mC32BB961B0CF9D23EDDEEC3F30021FD1BE88E261(L_10, L_11, L_13, 1, NULL);
		__this->___Grounded_12 = L_14;
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::CameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_CameraRotation_m8D6B31A95A1DDF1B34ECD3806E6052F255781D8D (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (_input.look.sqrMagnitude >= _threshold)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_28;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&L_0->___look_5);
		float L_2;
		L_2 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(L_1, NULL);
		if ((!(((float)L_2) >= ((float)(0.00999999978f)))))
		{
			goto IL_00d1;
		}
	}
	{
		// float deltaTimeMultiplier = IsCurrentDeviceMouse ? 1.0f : Time.deltaTime;
		bool L_3;
		L_3 = FirstPersonController_get_IsCurrentDeviceMouse_mBD2A02E3A33E0A4074283C7CD2C40BAC507278B0(__this, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B4_0 = L_4;
		goto IL_002e;
	}

IL_0029:
	{
		G_B4_0 = (1.0f);
	}

IL_002e:
	{
		V_0 = G_B4_0;
		// _cinemachineTargetPitch += _input.look.y * RotationSpeed * deltaTimeMultiplier;
		float L_5 = __this->____cinemachineTargetPitch_19;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_6 = __this->____input_28;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&L_6->___look_5);
		float L_8 = L_7->___y_1;
		float L_9 = __this->___RotationSpeed_6;
		float L_10 = V_0;
		__this->____cinemachineTargetPitch_19 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), L_10))));
		// _rotationVelocity = _input.look.x * RotationSpeed * deltaTimeMultiplier;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_11 = __this->____input_28;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___look_5);
		float L_13 = L_12->___x_0;
		float L_14 = __this->___RotationSpeed_6;
		float L_15 = V_0;
		__this->____rotationVelocity_21 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15));
		// _cinemachineTargetPitch = ClampAngle(_cinemachineTargetPitch, BottomClamp, TopClamp);
		float L_16 = __this->____cinemachineTargetPitch_19;
		float L_17 = __this->___BottomClamp_18;
		float L_18 = __this->___TopClamp_17;
		float L_19;
		L_19 = FirstPersonController_ClampAngle_m2B9F299C2F735DBC14DD608696F8515B1428F5C8(L_16, L_17, L_18, NULL);
		__this->____cinemachineTargetPitch_19 = L_19;
		// CinemachineCameraTarget.transform.localRotation = Quaternion.Euler(_cinemachineTargetPitch, 0.0f, 0.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___CinemachineCameraTarget_16;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		float L_22 = __this->____cinemachineTargetPitch_19;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_22, (0.0f), (0.0f), NULL);
		NullCheck(L_21);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_21, L_23, NULL);
		// transform.Rotate(Vector3.up * _rotationVelocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_26 = __this->____rotationVelocity_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_24);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_24, L_27, NULL);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_Move_mD3B86419A063305FAF1598ED1FDE790B407A20F3 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B3_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// float targetSpeed = _input.sprint ? SprintSpeed : MoveSpeed;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->____input_28;
		NullCheck(L_0);
		bool L_1 = L_0->___sprint_7;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = __this->___MoveSpeed_4;
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		float L_3 = __this->___SprintSpeed_5;
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_4 = __this->____input_28;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = L_4->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_7;
		L_7 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// if (_input.move == Vector2.zero) targetSpeed = 0.0f;
		V_0 = (0.0f);
	}

IL_0039:
	{
		// float currentHorizontalSpeed = new Vector3(_controller.velocity.x, 0.0f, _controller.velocity.z).magnitude;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->____controller_27;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_8, NULL);
		float L_10 = L_9.___x_2;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->____controller_27;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CharacterController_get_velocity_mD385DA9478B1FDCB0E9B2D2CA3647B85F1928C8C(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_10, (0.0f), L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_5), NULL);
		V_1 = L_15;
		// float speedOffset = 0.1f;
		V_2 = (0.100000001f);
		// float inputMagnitude = _input.analogMovement ? _input.move.magnitude : 1f;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_28;
		NullCheck(L_16);
		bool L_17 = L_16->___analogMovement_8;
		if (L_17)
		{
			goto IL_0087;
		}
	}
	{
		G_B8_0 = (1.0f);
		goto IL_0097;
	}

IL_0087:
	{
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_18 = __this->____input_28;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&L_18->___move_4);
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_19, NULL);
		G_B8_0 = L_20;
	}

IL_0097:
	{
		V_3 = G_B8_0;
		// if (currentHorizontalSpeed < targetSpeed - speedOffset || currentHorizontalSpeed > targetSpeed + speedOffset)
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		if ((((float)L_21) < ((float)((float)il2cpp_codegen_subtract(L_22, L_23)))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_24 = V_1;
		float L_25 = V_0;
		float L_26 = V_2;
		if ((!(((float)L_24) > ((float)((float)il2cpp_codegen_add(L_25, L_26))))))
		{
			goto IL_00de;
		}
	}

IL_00a4:
	{
		// _speed = Mathf.Lerp(currentHorizontalSpeed, targetSpeed * inputMagnitude, Time.deltaTime * SpeedChangeRate);
		float L_27 = V_1;
		float L_28 = V_0;
		float L_29 = V_3;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_31 = __this->___SpeedChangeRate_7;
		float L_32;
		L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)), NULL);
		__this->____speed_20 = L_32;
		// _speed = Mathf.Round(_speed * 1000f) / 1000f;
		float L_33 = __this->____speed_20;
		float L_34;
		L_34 = bankers_roundf(((float)il2cpp_codegen_multiply(L_33, (1000.0f))));
		__this->____speed_20 = ((float)(L_34/(1000.0f)));
		goto IL_00e5;
	}

IL_00de:
	{
		// _speed = targetSpeed;
		float L_35 = V_0;
		__this->____speed_20 = L_35;
	}

IL_00e5:
	{
		// Vector3 inputDirection = new Vector3(_input.move.x, 0.0f, _input.move.y).normalized;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_36 = __this->____input_28;
		NullCheck(L_36);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = (&L_36->___move_4);
		float L_38 = L_37->___x_0;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_39 = __this->____input_28;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&L_39->___move_4);
		float L_41 = L_40->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), L_38, (0.0f), L_41, /*hidden argument*/NULL);
		V_5 = L_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_4 = L_43;
		// if (_input.move != Vector2.zero)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_44 = __this->____input_28;
		NullCheck(L_44);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = L_44->___move_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_47;
		L_47 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_0178;
		}
	}
	{
		// inputDirection = transform.right * _input.move.x + transform.forward * _input.move.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_48, NULL);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_50 = __this->____input_28;
		NullCheck(L_50);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_51 = (&L_50->___move_4);
		float L_52 = L_51->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_52, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_54, NULL);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_56 = __this->____input_28;
		NullCheck(L_56);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&L_56->___move_4);
		float L_58 = L_57->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_55, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_59, NULL);
		V_4 = L_60;
	}

IL_0178:
	{
		// _controller.Move(inputDirection.normalized * (_speed * Time.deltaTime) + new Vector3(0.0f, _verticalVelocity, 0.0f) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_61 = __this->____controller_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		float L_63 = __this->____speed_20;
		float L_64;
		L_64 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, ((float)il2cpp_codegen_multiply(L_63, L_64)), NULL);
		float L_66 = __this->____verticalVelocity_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_67), (0.0f), L_66, (0.0f), /*hidden argument*/NULL);
		float L_68;
		L_68 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_69, NULL);
		NullCheck(L_61);
		int32_t L_71;
		L_71 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_61, L_70, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_JumpAndGravity_mE8E57E5D89BE4289C81F1D668AB99588356FD44A (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// if (Grounded)
		bool L_0 = __this->___Grounded_12;
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		// _fallTimeoutDelta = FallTimeout;
		float L_1 = __this->___FallTimeout_11;
		__this->____fallTimeoutDelta_25 = L_1;
		// if (_verticalVelocity < 0.0f)
		float L_2 = __this->____verticalVelocity_22;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// _verticalVelocity = -2f;
		__this->____verticalVelocity_22 = (-2.0f);
	}

IL_002c:
	{
		// if (_input.jump && _jumpTimeoutDelta <= 0.0f)
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_3 = __this->____input_28;
		NullCheck(L_3);
		bool L_4 = L_3->___jump_6;
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		float L_5 = __this->____jumpTimeoutDelta_24;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// _verticalVelocity = Mathf.Sqrt(JumpHeight * -2f * Gravity);
		float L_6 = __this->___JumpHeight_8;
		float L_7 = __this->___Gravity_9;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, (-2.0f))), L_7)));
		__this->____verticalVelocity_22 = L_8;
	}

IL_0064:
	{
		// if (_jumpTimeoutDelta >= 0.0f)
		float L_9 = __this->____jumpTimeoutDelta_24;
		if ((!(((float)L_9) >= ((float)(0.0f)))))
		{
			goto IL_00bc;
		}
	}
	{
		// _jumpTimeoutDelta -= Time.deltaTime;
		float L_10 = __this->____jumpTimeoutDelta_24;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____jumpTimeoutDelta_24 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		goto IL_00bc;
	}

IL_0085:
	{
		// _jumpTimeoutDelta = JumpTimeout;
		float L_12 = __this->___JumpTimeout_10;
		__this->____jumpTimeoutDelta_24 = L_12;
		// if (_fallTimeoutDelta >= 0.0f)
		float L_13 = __this->____fallTimeoutDelta_25;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_00b0;
		}
	}
	{
		// _fallTimeoutDelta -= Time.deltaTime;
		float L_14 = __this->____fallTimeoutDelta_25;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____fallTimeoutDelta_25 = ((float)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_00b0:
	{
		// _input.jump = false;
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_16 = __this->____input_28;
		NullCheck(L_16);
		L_16->___jump_6 = (bool)0;
	}

IL_00bc:
	{
		// if (_verticalVelocity < _terminalVelocity)
		float L_17 = __this->____verticalVelocity_22;
		float L_18 = __this->____terminalVelocity_23;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_00e3;
		}
	}
	{
		// _verticalVelocity += Gravity * Time.deltaTime;
		float L_19 = __this->____verticalVelocity_22;
		float L_20 = __this->___Gravity_9;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____verticalVelocity_22 = ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_20, L_21))));
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Single StarterAssets.FirstPersonController::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FirstPersonController_ClampAngle_m2B9F299C2F735DBC14DD608696F8515B1428F5C8 (float ___lfAngle0, float ___lfMin1, float ___lfMax2, const RuntimeMethod* method) 
{
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_0 = ___lfAngle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (lfAngle < -360f) lfAngle += 360f;
		float L_1 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_2 = ___lfAngle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// if (lfAngle > 360f) lfAngle -= 360f;
		float L_3 = ___lfAngle0;
		___lfAngle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(lfAngle, lfMin, lfMax);
		float L_4 = ___lfAngle0;
		float L_5 = ___lfMin1;
		float L_6 = ___lfMax2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StarterAssets.FirstPersonController::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController_OnDrawGizmosSelected_m99F84F3AB717811D6824B6E38099E4B39811D2D7 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Color transparentGreen = new Color(0.0f, 1.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_0), (0.0f), (1.0f), (0.0f), (0.349999994f), NULL);
		// Color transparentRed = new Color(1.0f, 0.0f, 0.0f, 0.35f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), (1.0f), (0.0f), (0.0f), (0.349999994f), NULL);
		// if (Grounded) Gizmos.color = transparentGreen;
		bool L_0 = __this->___Grounded_12;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (Grounded) Gizmos.color = transparentGreen;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_1, NULL);
		goto IL_004c;
	}

IL_0046:
	{
		// else Gizmos.color = transparentRed;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_1;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_2, NULL);
	}

IL_004c:
	{
		// Gizmos.DrawSphere(new Vector3(transform.position.x, transform.position.y - GroundedOffset, transform.position.z), GroundedRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___GroundedOffset_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_5, ((float)il2cpp_codegen_subtract(L_8, L_9)), L_12, /*hidden argument*/NULL);
		float L_14 = __this->___GroundedRadius_14;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.FirstPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirstPersonController__ctor_mF29161500094F25943059DAFCA9CABCC1F1BA3A5 (FirstPersonController_tF81D3F7AF92C369E80A400527EC8B8166CD7E906* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed = 4.0f;
		__this->___MoveSpeed_4 = (4.0f);
		// public float SprintSpeed = 6.0f;
		__this->___SprintSpeed_5 = (6.0f);
		// public float RotationSpeed = 1.0f;
		__this->___RotationSpeed_6 = (1.0f);
		// public float SpeedChangeRate = 10.0f;
		__this->___SpeedChangeRate_7 = (10.0f);
		// public float JumpHeight = 1.2f;
		__this->___JumpHeight_8 = (1.20000005f);
		// public float Gravity = -15.0f;
		__this->___Gravity_9 = (-15.0f);
		// public float JumpTimeout = 0.1f;
		__this->___JumpTimeout_10 = (0.100000001f);
		// public float FallTimeout = 0.15f;
		__this->___FallTimeout_11 = (0.150000006f);
		// public bool Grounded = true;
		__this->___Grounded_12 = (bool)1;
		// public float GroundedOffset = -0.14f;
		__this->___GroundedOffset_13 = (-0.140000001f);
		// public float GroundedRadius = 0.5f;
		__this->___GroundedRadius_14 = (0.5f);
		// public float TopClamp = 90.0f;
		__this->___TopClamp_17 = (90.0f);
		// public float BottomClamp = -90.0f;
		__this->___BottomClamp_18 = (-90.0f);
		// private float _terminalVelocity = 53.0f;
		__this->____terminalVelocity_23 = (53.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StarterAssets.StarterAssetsInputs::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnMove_m1037EAE12A06BEF9F73CAF4A3127C6A9CF4D6532 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnLook(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnLook_m457792363F0A68571BD7A917C44B1A0B1C5D7EC4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cursorInputForLook)
		bool L_0 = __this->___cursorInputForLook_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// LookInput(value.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_1 = ___value0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_1, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(__this, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnJump(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnJump_m077D720656D5B78D423A5D7E0194BA2D9DE089E4 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// JumpInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnSprint(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnSprint_m8FF0D36964527B10A1A14E55A9EE4025C1AFF0EF (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	{
		// SprintInput(value.isPressed);
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_0, NULL);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::MoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::LookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::JumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_OnApplicationFocus_m461C49F2AC387B76D98B87A98BA38A0289C34EA9 (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	{
		// SetCursorState(cursorLocked);
		bool L_0 = __this->___cursorLocked_9;
		StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::SetCursorState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs_SetCursorState_m7D2F57E935DE40673700B1994EFA6C4BF9573D0E (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newState0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// Cursor.lockState = newState ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_0 = ___newState0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.StarterAssetsInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StarterAssetsInputs__ctor_m1A0CAEE3381A63077E196B7C815859617C9BCDBA (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, const RuntimeMethod* method) 
{
	{
		// public bool cursorLocked = true;
		__this->___cursorLocked_9 = (bool)1;
		// public bool cursorInputForLook = true;
		__this->___cursorInputForLook_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StarterAssets.UICanvasControllerInput::VirtualMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualMoveInput_m56E41472A26B3A6B517D63844304F7196FFF449C (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualMoveDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.MoveInput(virtualMoveDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualMoveDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualLookInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualLookInput_m88A9B7AC7F338CFBEC98FBBBD2EC8793C1C8288E (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___virtualLookDirection0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.LookInput(virtualLookDirection);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___virtualLookDirection0;
		NullCheck(L_0);
		StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualJumpInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualJumpInput_m45600335B430348707B730FFA2FCB334E8D807FE (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualJumpState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.JumpInput(virtualJumpState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualJumpState0;
		NullCheck(L_0);
		StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::VirtualSprintInput(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput_VirtualSprintInput_m80CBF3433D8C053AB55A0D3F01B26070F1799759 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, bool ___virtualSprintState0, const RuntimeMethod* method) 
{
	{
		// starterAssetsInputs.SprintInput(virtualSprintState);
		StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* L_0 = __this->___starterAssetsInputs_4;
		bool L_1 = ___virtualSprintState0;
		NullCheck(L_0);
		StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void StarterAssets.UICanvasControllerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasControllerInput__ctor_m3B7626E7C92128BC984ABE40C9C250720F352017 (UICanvasControllerInput_t70B570B8D362800A345FA81C516A266A2FE5318F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* Gamepad_get_current_mAC9BE72710676EA54E760FFBA15404A81D7DEEB6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Gamepad current { get; private set; }
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_0 = ((Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_StaticFields*)il2cpp_codegen_static_fields_for(Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_54;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* Gamepad_get_leftStick_m76F9D7D8766C9450C5E720ED481BDC4C3BFAE619_inline (Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* __this, const RuntimeMethod* method) 
{
	{
		// public StickControl leftStick { get; protected set; }
		StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* L_0 = __this->___U3CleftStickU3Ek__BackingField_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* Gamepad_get_rightStick_mC2074BA9B40116C6BAA3263B32E463DD23918714_inline (Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* __this, const RuntimeMethod* method) 
{
	{
		// public StickControl rightStick { get; protected set; }
		StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* L_0 = __this->___U3CrightStickU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_ClampMagnitude_m9BF093877BD11282C41088022FE4AE70A3A0ECA9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, float ___maxLength1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___vector0), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___vector0;
		float L_8 = L_7.___x_0;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___vector0;
		float L_11 = L_10.___y_1;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		float L_13 = V_3;
		float L_14 = ___maxLength1;
		float L_15 = V_4;
		float L_16 = ___maxLength1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_0045;
	}

IL_0040:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___vector0;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->___m_InitializationComplete_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_MoveInput_m3553E545D85710A8A35A09A0A624E9BC348169C5_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newMoveDirection0, const RuntimeMethod* method) 
{
	{
		// move = newMoveDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newMoveDirection0;
		__this->___move_4 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_LookInput_m5682ACA7D0052E2ACDE0EA0C3BFDB7F954F838EE_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newLookDirection0, const RuntimeMethod* method) 
{
	{
		// look = newLookDirection;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___newLookDirection0;
		__this->___look_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_JumpInput_mE2329C36E72EBF6402D6EB5A98157D6CFB86FD3F_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newJumpState0, const RuntimeMethod* method) 
{
	{
		// jump = newJumpState;
		bool L_0 = ___newJumpState0;
		__this->___jump_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StarterAssetsInputs_SprintInput_mDF94C59888EE49486AC87435D3EC2C1776045A20_inline (StarterAssetsInputs_t133BB053DB5E88FF96AD7A46722CFDD182A8B657* __this, bool ___newSprintState0, const RuntimeMethod* method) 
{
	{
		// sprint = newSprintState;
		bool L_0 = ___newSprintState0;
		__this->___sprint_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
