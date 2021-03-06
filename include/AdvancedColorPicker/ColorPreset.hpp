// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorPicker
  class ColorPicker;
  // Forward declaring type: ColorSwatch
  class ColorSwatch;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorPreset
  class ColorPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorPreset);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorPreset*, "AdvancedColorPicker", "ColorPreset");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorPreset
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E7A60
  // [RequireComponent] Offset: E7A60
  class ColorPreset : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private AdvancedColorPicker.ColorPicker _picker
    // Size: 0x8
    // Offset: 0x18
    ::AdvancedColorPicker::ColorPicker* picker;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorPicker*) == 0x8);
    // private AdvancedColorPicker.ColorSwatch <Swatch>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::AdvancedColorPicker::ColorSwatch* Swatch;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorSwatch*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AdvancedColorPicker.ColorPicker _picker
    [[deprecated("Use field access instead!")]] ::AdvancedColorPicker::ColorPicker*& dyn__picker();
    // Get instance field reference: private AdvancedColorPicker.ColorSwatch <Swatch>k__BackingField
    [[deprecated("Use field access instead!")]] ::AdvancedColorPicker::ColorSwatch*& dyn_$Swatch$k__BackingField();
    // public UnityEngine.Color32 get_Color()
    // Offset: 0x5ACE90
    ::UnityEngine::Color32 get_Color();
    // public System.Void set_Color(UnityEngine.Color32 value)
    // Offset: 0x5ACEE0
    void set_Color(::UnityEngine::Color32 value);
    // public AdvancedColorPicker.ColorSwatch get_Swatch()
    // Offset: 0x1E1950
    ::AdvancedColorPicker::ColorSwatch* get_Swatch();
    // public System.Void set_Swatch(AdvancedColorPicker.ColorSwatch value)
    // Offset: 0x1E49F0
    void set_Swatch(::AdvancedColorPicker::ColorSwatch* value);
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorPreset*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x5ACE40
    void Awake();
    // public System.Void ApplyColorToOriginalPicker()
    // Offset: 0x5ACDB0
    void ApplyColorToOriginalPicker();
  }; // AdvancedColorPicker.ColorPreset
  #pragma pack(pop)
  static check_size<sizeof(ColorPreset), 32 + sizeof(::AdvancedColorPicker::ColorSwatch*)> __AdvancedColorPicker_ColorPresetSizeCheck;
  static_assert(sizeof(ColorPreset) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (AdvancedColorPicker::ColorPreset::*)()>(&AdvancedColorPicker::ColorPreset::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorPreset*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorPreset::*)(::UnityEngine::Color32)>(&AdvancedColorPicker::ColorPreset::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorPreset*), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::get_Swatch
// Il2CppName: get_Swatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorSwatch* (AdvancedColorPicker::ColorPreset::*)()>(&AdvancedColorPicker::ColorPreset::get_Swatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorPreset*), "get_Swatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::set_Swatch
// Il2CppName: set_Swatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorPreset::*)(::AdvancedColorPicker::ColorSwatch*)>(&AdvancedColorPicker::ColorPreset::set_Swatch)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorSwatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorPreset*), "set_Swatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorPreset::*)()>(&AdvancedColorPicker::ColorPreset::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorPreset*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPreset::ApplyColorToOriginalPicker
// Il2CppName: ApplyColorToOriginalPicker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorPreset::*)()>(&AdvancedColorPicker::ColorPreset::ApplyColorToOriginalPicker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorPreset*), "ApplyColorToOriginalPicker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
