// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedColorPicker.ColorTypeComponent
#include "AdvancedColorPicker/ColorTypeComponent.hpp"
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
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorInput
  class ColorInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorInput);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorInput*, "AdvancedColorPicker", "ColorInput");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorInput
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E2EE0
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ColorInput : public ::AdvancedColorPicker::ColorTypeComponent {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // private System.Single minValue
    // Size: 0x4
    // Offset: 0x28
    float minValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxValue
    // Size: 0x4
    // Offset: 0x2C
    float maxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.String formatter
    // Size: 0x8
    // Offset: 0x30
    ::StringW formatter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.UI.InputField input
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::InputField* input;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::InputField*) == 0x8);
    // private System.Boolean dontListenToInput
    // Size: 0x1
    // Offset: 0x40
    bool dontListenToInput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean dontListenToColor
    // Size: 0x1
    // Offset: 0x41
    bool dontListenToColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Single minValue
    [[deprecated("Use field access instead!")]] float& dyn_minValue();
    // Get instance field reference: private System.Single maxValue
    [[deprecated("Use field access instead!")]] float& dyn_maxValue();
    // Get instance field reference: private System.String formatter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_formatter();
    // Get instance field reference: private UnityEngine.UI.InputField input
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::InputField*& dyn_input();
    // Get instance field reference: private System.Boolean dontListenToInput
    [[deprecated("Use field access instead!")]] bool& dyn_dontListenToInput();
    // Get instance field reference: private System.Boolean dontListenToColor
    [[deprecated("Use field access instead!")]] bool& dyn_dontListenToColor();
    // public System.Single get_MinValue()
    // Offset: 0x4CC750
    float get_MinValue();
    // public System.Void set_MinValue(System.Single value)
    // Offset: 0x65B8E0
    void set_MinValue(float value);
    // public System.Single get_MaxValue()
    // Offset: 0x245FE0
    float get_MaxValue();
    // public System.Void set_MaxValue(System.Single value)
    // Offset: 0x65B840
    void set_MaxValue(float value);
    // public System.String get_Formatter()
    // Offset: 0x1E0EB0
    ::StringW get_Formatter();
    // public System.Void set_Formatter(System.String value)
    // Offset: 0x65B790
    void set_Formatter(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x65B740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorInput*, creationType>()));
    }
    // private System.Void InputChanged(System.String value)
    // Offset: 0x65B2E0
    void InputChanged(::StringW value);
    // private System.Void InputFinished(System.String value)
    // Offset: 0x30BCF0
    void InputFinished(::StringW value);
    // private System.String ConvertToDisplayString(System.Single value)
    // Offset: 0x630C90
    ::StringW ConvertToDisplayString(float value);
    // public System.Void SetDefaultMinMax()
    // Offset: 0x65B610
    void SetDefaultMinMax();
    // protected override System.Void Awake()
    // Offset: 0x65B180
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x65B520
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x65B430
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::OnDisable()
    void OnDisable();
    // protected override System.Void DisplayNewColor()
    // Offset: 0x65B1E0
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::DisplayNewColor()
    void DisplayNewColor();
  }; // AdvancedColorPicker.ColorInput
  #pragma pack(pop)
  static check_size<sizeof(ColorInput), 65 + sizeof(bool)> __AdvancedColorPicker_ColorInputSizeCheck;
  static_assert(sizeof(ColorInput) == 0x42);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::get_MinValue
// Il2CppName: get_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::get_MinValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "get_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::set_MinValue
// Il2CppName: set_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)(float)>(&AdvancedColorPicker::ColorInput::set_MinValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "set_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::get_MaxValue
// Il2CppName: get_MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::get_MaxValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "get_MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::set_MaxValue
// Il2CppName: set_MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)(float)>(&AdvancedColorPicker::ColorInput::set_MaxValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "set_MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::get_Formatter
// Il2CppName: get_Formatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::get_Formatter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "get_Formatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::set_Formatter
// Il2CppName: set_Formatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)(::StringW)>(&AdvancedColorPicker::ColorInput::set_Formatter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "set_Formatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::InputChanged
// Il2CppName: InputChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)(::StringW)>(&AdvancedColorPicker::ColorInput::InputChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "InputChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::InputFinished
// Il2CppName: InputFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)(::StringW)>(&AdvancedColorPicker::ColorInput::InputFinished)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "InputFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::ConvertToDisplayString
// Il2CppName: ConvertToDisplayString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::ColorInput::*)(float)>(&AdvancedColorPicker::ColorInput::ConvertToDisplayString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "ConvertToDisplayString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::SetDefaultMinMax
// Il2CppName: SetDefaultMinMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::SetDefaultMinMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "SetDefaultMinMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorInput::DisplayNewColor
// Il2CppName: DisplayNewColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorInput::*)()>(&AdvancedColorPicker::ColorInput::DisplayNewColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorInput*), "DisplayNewColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
