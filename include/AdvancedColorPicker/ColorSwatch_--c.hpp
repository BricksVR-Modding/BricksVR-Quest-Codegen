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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorPreset
  class ColorPreset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorSwatch::$$c);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorSwatch::$$c*, "AdvancedColorPicker", "ColorSwatch/<>c");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ColorSwatch::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.<>c <>9
    static ::AdvancedColorPicker::ColorSwatch::$$c* _get_$$9();
    // Set static field: static public readonly AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.<>c <>9
    static void _set_$$9(::AdvancedColorPicker::ColorSwatch::$$c* value);
    // Get static field: static public System.Func`2<AdvancedColorPicker.ColorPreset,UnityEngine.Color32> <>9__42_0
    static ::System::Func_2<::AdvancedColorPicker::ColorPreset*, ::UnityEngine::Color32>* _get_$$9__42_0();
    // Set static field: static public System.Func`2<AdvancedColorPicker.ColorPreset,UnityEngine.Color32> <>9__42_0
    static void _set_$$9__42_0(::System::Func_2<::AdvancedColorPicker::ColorPreset*, ::UnityEngine::Color32>* value);
    // static private System.Void .cctor()
    // Offset: 0xE1B370
    static void _cctor();
    // UnityEngine.Color32 <SaveSwatch>b__42_0(AdvancedColorPicker.ColorPreset x)
    // Offset: 0xE1B3DC
    ::UnityEngine::Color32 $SaveSwatch$b__42_0(::AdvancedColorPicker::ColorPreset* x);
    // public System.Void .ctor()
    // Offset: 0xE1B3D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSwatch::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorSwatch::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSwatch::$$c*, creationType>()));
    }
  }; // AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&AdvancedColorPicker::ColorSwatch::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::$$c::$SaveSwatch$b__42_0
// Il2CppName: <SaveSwatch>b__42_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (AdvancedColorPicker::ColorSwatch::$$c::*)(::AdvancedColorPicker::ColorPreset*)>(&AdvancedColorPicker::ColorSwatch::$$c::$SaveSwatch$b__42_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPreset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch::$$c*), "<SaveSwatch>b__42_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
