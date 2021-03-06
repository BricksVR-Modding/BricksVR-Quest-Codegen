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
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorLabel
  class ColorLabel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorLabel);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorLabel*, "AdvancedColorPicker", "ColorLabel");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorLabel
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E3240
  class ColorLabel : public ::AdvancedColorPicker::ColorTypeComponent {
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
    // private UnityEngine.UI.Text label
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Text* label;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    public:
    // Get instance field reference: private System.Single minValue
    [[deprecated("Use field access instead!")]] float& dyn_minValue();
    // Get instance field reference: private System.Single maxValue
    [[deprecated("Use field access instead!")]] float& dyn_maxValue();
    // Get instance field reference: private System.String formatter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_formatter();
    // Get instance field reference: private UnityEngine.UI.Text label
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_label();
    // public System.Single get_MinValue()
    // Offset: 0x4CC750
    float get_MinValue();
    // public System.Void set_MinValue(System.Single value)
    // Offset: 0x65BE80
    void set_MinValue(float value);
    // public System.Single get_MaxValue()
    // Offset: 0x245FE0
    float get_MaxValue();
    // public System.Void set_MaxValue(System.Single value)
    // Offset: 0x65BDE0
    void set_MaxValue(float value);
    // public System.String get_Formatter()
    // Offset: 0x1E0EB0
    ::StringW get_Formatter();
    // public System.Void set_Formatter(System.String value)
    // Offset: 0x65BD30
    void set_Formatter(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x65BCE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorLabel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorLabel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorLabel*, creationType>()));
    }
    // private System.String ConvertToDisplayString(System.Single value)
    // Offset: 0x630C90
    ::StringW ConvertToDisplayString(float value);
    // public System.Void SetDefaultValuesForType()
    // Offset: 0x65BAE0
    void SetDefaultValuesForType();
    // protected override System.Void Awake()
    // Offset: 0x65B980
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void DisplayNewColor()
    // Offset: 0x65B9E0
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::DisplayNewColor()
    void DisplayNewColor();
  }; // AdvancedColorPicker.ColorLabel
  #pragma pack(pop)
  static check_size<sizeof(ColorLabel), 56 + sizeof(::UnityEngine::UI::Text*)> __AdvancedColorPicker_ColorLabelSizeCheck;
  static_assert(sizeof(ColorLabel) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::get_MinValue
// Il2CppName: get_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::ColorLabel::*)()>(&AdvancedColorPicker::ColorLabel::get_MinValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "get_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::set_MinValue
// Il2CppName: set_MinValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorLabel::*)(float)>(&AdvancedColorPicker::ColorLabel::set_MinValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "set_MinValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::get_MaxValue
// Il2CppName: get_MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::ColorLabel::*)()>(&AdvancedColorPicker::ColorLabel::get_MaxValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "get_MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::set_MaxValue
// Il2CppName: set_MaxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorLabel::*)(float)>(&AdvancedColorPicker::ColorLabel::set_MaxValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "set_MaxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::get_Formatter
// Il2CppName: get_Formatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::ColorLabel::*)()>(&AdvancedColorPicker::ColorLabel::get_Formatter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "get_Formatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::set_Formatter
// Il2CppName: set_Formatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorLabel::*)(::StringW)>(&AdvancedColorPicker::ColorLabel::set_Formatter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "set_Formatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::ConvertToDisplayString
// Il2CppName: ConvertToDisplayString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::ColorLabel::*)(float)>(&AdvancedColorPicker::ColorLabel::ConvertToDisplayString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "ConvertToDisplayString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::SetDefaultValuesForType
// Il2CppName: SetDefaultValuesForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorLabel::*)()>(&AdvancedColorPicker::ColorLabel::SetDefaultValuesForType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "SetDefaultValuesForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorLabel::*)()>(&AdvancedColorPicker::ColorLabel::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorLabel::DisplayNewColor
// Il2CppName: DisplayNewColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorLabel::*)()>(&AdvancedColorPicker::ColorLabel::DisplayNewColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorLabel*), "DisplayNewColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
