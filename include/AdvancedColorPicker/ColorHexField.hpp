// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedColorPicker.ColorComponent
#include "AdvancedColorPicker/ColorComponent.hpp"
// Including type: AdvancedColorPicker.HexfieldType
#include "AdvancedColorPicker/HexfieldType.hpp"
// Including type: AdvancedColorPicker.RGBAType
#include "AdvancedColorPicker/RGBAType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: InputField
  class InputField;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: UIBehaviour because it is already included!
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorHexField
  class ColorHexField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorHexField);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorHexField*, "AdvancedColorPicker", "ColorHexField");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorHexField
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E2B70
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ColorHexField : public ::AdvancedColorPicker::ColorComponent {
    public:
    public:
    // private System.Boolean displayAlpha
    // Size: 0x1
    // Offset: 0x20
    bool displayAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean displayHashtag
    // Size: 0x1
    // Offset: 0x21
    bool displayHashtag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: displayHashtag and: acceptedInput
    char __padding1[0x2] = {};
    // private AdvancedColorPicker.HexfieldType acceptedInput
    // Size: 0x4
    // Offset: 0x24
    ::AdvancedColorPicker::HexfieldType acceptedInput;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::HexfieldType) == 0x4);
    // [TooltipAttribute] Offset: 0xE2E90
    // private AdvancedColorPicker.RGBAType editableChannels
    // Size: 0x4
    // Offset: 0x28
    ::AdvancedColorPicker::RGBAType editableChannels;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::RGBAType) == 0x4);
    // Padding between fields: editableChannels and: hexInputField
    char __padding3[0x4] = {};
    // private UnityEngine.UI.InputField hexInputField
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::InputField* hexInputField;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::InputField*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean displayAlpha
    [[deprecated]] bool& dyn_displayAlpha();
    // Get instance field reference: private System.Boolean displayHashtag
    [[deprecated]] bool& dyn_displayHashtag();
    // Get instance field reference: private AdvancedColorPicker.HexfieldType acceptedInput
    [[deprecated]] ::AdvancedColorPicker::HexfieldType& dyn_acceptedInput();
    // Get instance field reference: private AdvancedColorPicker.RGBAType editableChannels
    [[deprecated]] ::AdvancedColorPicker::RGBAType& dyn_editableChannels();
    // Get instance field reference: private UnityEngine.UI.InputField hexInputField
    [[deprecated]] ::UnityEngine::UI::InputField*& dyn_hexInputField();
    // public System.Boolean get_DisplayAlpha()
    // Offset: 0x29BC10
    bool get_DisplayAlpha();
    // public System.Void set_DisplayAlpha(System.Boolean value)
    // Offset: 0x630BF0
    void set_DisplayAlpha(bool value);
    // public System.Boolean get_DisplayHashtag()
    // Offset: 0x4DC060
    bool get_DisplayHashtag();
    // public System.Void set_DisplayHashtag(System.Boolean value)
    // Offset: 0x630C10
    void set_DisplayHashtag(bool value);
    // public AdvancedColorPicker.HexfieldType get_AcceptedInput()
    // Offset: 0x2512C0
    ::AdvancedColorPicker::HexfieldType get_AcceptedInput();
    // public System.Void set_AcceptedInput(AdvancedColorPicker.HexfieldType value)
    // Offset: 0x630BD0
    void set_AcceptedInput(::AdvancedColorPicker::HexfieldType value);
    // private System.Char ValidateHexField(System.String text, System.Int32 charIndex, System.Char addedChar)
    // Offset: 0x630B20
    ::Il2CppChar ValidateHexField(::StringW text, int charIndex, ::Il2CppChar addedChar);
    // private System.Void HexChanged(System.String newHex)
    // Offset: 0x65ADC0
    void HexChanged(::StringW newHex);
    // public System.Void .ctor()
    // Offset: 0x630BB0
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorHexField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorHexField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorHexField*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x65AC70
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x65B090
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x65AFF0
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::OnDisable()
    void OnDisable();
    // protected override System.Void DisplayNewColor()
    // Offset: 0x65ACD0
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::DisplayNewColor()
    void DisplayNewColor();
  }; // AdvancedColorPicker.ColorHexField
  #pragma pack(pop)
  static check_size<sizeof(ColorHexField), 48 + sizeof(::UnityEngine::UI::InputField*)> __AdvancedColorPicker_ColorHexFieldSizeCheck;
  static_assert(sizeof(ColorHexField) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::get_DisplayAlpha
// Il2CppName: get_DisplayAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::get_DisplayAlpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "get_DisplayAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::set_DisplayAlpha
// Il2CppName: set_DisplayAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)(bool)>(&AdvancedColorPicker::ColorHexField::set_DisplayAlpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "set_DisplayAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::get_DisplayHashtag
// Il2CppName: get_DisplayHashtag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::get_DisplayHashtag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "get_DisplayHashtag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::set_DisplayHashtag
// Il2CppName: set_DisplayHashtag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)(bool)>(&AdvancedColorPicker::ColorHexField::set_DisplayHashtag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "set_DisplayHashtag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::get_AcceptedInput
// Il2CppName: get_AcceptedInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::HexfieldType (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::get_AcceptedInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "get_AcceptedInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::set_AcceptedInput
// Il2CppName: set_AcceptedInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)(::AdvancedColorPicker::HexfieldType)>(&AdvancedColorPicker::ColorHexField::set_AcceptedInput)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "HexfieldType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "set_AcceptedInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::ValidateHexField
// Il2CppName: ValidateHexField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (AdvancedColorPicker::ColorHexField::*)(::StringW, int, ::Il2CppChar)>(&AdvancedColorPicker::ColorHexField::ValidateHexField)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addedChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "ValidateHexField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, charIndex, addedChar});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::HexChanged
// Il2CppName: HexChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)(::StringW)>(&AdvancedColorPicker::ColorHexField::HexChanged)> {
  static const MethodInfo* get() {
    static auto* newHex = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "HexChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newHex});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorHexField::DisplayNewColor
// Il2CppName: DisplayNewColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorHexField::*)()>(&AdvancedColorPicker::ColorHexField::DisplayNewColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorHexField*), "DisplayNewColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
