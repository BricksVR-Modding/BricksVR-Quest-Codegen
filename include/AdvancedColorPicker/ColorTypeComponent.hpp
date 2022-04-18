// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedColorPicker.ColorComponent
#include "AdvancedColorPicker/ColorComponent.hpp"
// Including type: AdvancedColorPicker.ColorValueType
#include "AdvancedColorPicker/ColorValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorTypeComponent
  class ColorTypeComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorTypeComponent);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorTypeComponent*, "AdvancedColorPicker", "ColorTypeComponent");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorTypeComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class ColorTypeComponent : public ::AdvancedColorPicker::ColorComponent {
    public:
    public:
    // private AdvancedColorPicker.ColorValueType type
    // Size: 0x4
    // Offset: 0x20
    ::AdvancedColorPicker::ColorValueType type;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorValueType) == 0x4);
    public:
    // Get instance field reference: private AdvancedColorPicker.ColorValueType type
    [[deprecated("Use field access instead!")]] ::AdvancedColorPicker::ColorValueType& dyn_type();
    // public AdvancedColorPicker.ColorValueType get_Type()
    // Offset: 0x217240
    ::AdvancedColorPicker::ColorValueType get_Type();
    // public System.Void set_Type(AdvancedColorPicker.ColorValueType value)
    // Offset: 0x5AE640
    void set_Type(::AdvancedColorPicker::ColorValueType value);
    // protected System.Void .ctor()
    // Offset: 0x5AD2B0
    // Implemented from: AdvancedColorPicker.ColorComponent
    // Base method: System.Void ColorComponent::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorTypeComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorTypeComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorTypeComponent*, creationType>()));
    }
  }; // AdvancedColorPicker.ColorTypeComponent
  #pragma pack(pop)
  static check_size<sizeof(ColorTypeComponent), 32 + sizeof(::AdvancedColorPicker::ColorValueType)> __AdvancedColorPicker_ColorTypeComponentSizeCheck;
  static_assert(sizeof(ColorTypeComponent) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorTypeComponent::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorValueType (AdvancedColorPicker::ColorTypeComponent::*)()>(&AdvancedColorPicker::ColorTypeComponent::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorTypeComponent*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorTypeComponent::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorTypeComponent::*)(::AdvancedColorPicker::ColorValueType)>(&AdvancedColorPicker::ColorTypeComponent::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorValueType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorTypeComponent*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorTypeComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
