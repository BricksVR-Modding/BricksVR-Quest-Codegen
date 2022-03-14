// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedColorPicker.ColorSwatch
#include "AdvancedColorPicker/ColorSwatch.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorPreset
  class ColorPreset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0*, "AdvancedColorPicker", "ColorSwatch/<>c__DisplayClass37_0");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.<>c__DisplayClass37_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ColorSwatch::$$c__DisplayClass37_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::Color32
    constexpr operator ::UnityEngine::Color32() const noexcept {
      return color;
    }
    // Get instance field reference: public UnityEngine.Color32 color
    ::UnityEngine::Color32& dyn_color();
    // System.Boolean <Contains>b__0(AdvancedColorPicker.ColorPreset x)
    // Offset: 0xE1B400
    bool $Contains$b__0(::AdvancedColorPicker::ColorPreset* x);
    // public System.Void .ctor()
    // Offset: 0xE1A9E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSwatch::$$c__DisplayClass37_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSwatch::$$c__DisplayClass37_0*, creationType>()));
    }
  }; // AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.<>c__DisplayClass37_0
  #pragma pack(pop)
  static check_size<sizeof(ColorSwatch::$$c__DisplayClass37_0), 16 + sizeof(::UnityEngine::Color32)> __AdvancedColorPicker_ColorSwatch_$$c__DisplayClass37_0SizeCheck;
  static_assert(sizeof(ColorSwatch::$$c__DisplayClass37_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0::$Contains$b__0
// Il2CppName: <Contains>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0::*)(::AdvancedColorPicker::ColorPreset*)>(&AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0::$Contains$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPreset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0*), "<Contains>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
