// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Math
  class TMP_Math;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Math);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Math*, "TMPro", "TMP_Math");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Math
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Math : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single FLOAT_MAX
    static constexpr const float FLOAT_MAX = 32767;
    // Get static field: static public System.Single FLOAT_MAX
    static float _get_FLOAT_MAX();
    // Set static field: static public System.Single FLOAT_MAX
    static void _set_FLOAT_MAX(float value);
    // static field const value: static public System.Single FLOAT_MIN
    static constexpr const float FLOAT_MIN = -32767;
    // Get static field: static public System.Single FLOAT_MIN
    static float _get_FLOAT_MIN();
    // Set static field: static public System.Single FLOAT_MIN
    static void _set_FLOAT_MIN(float value);
    // static field const value: static public System.Int32 INT_MAX
    static constexpr const int _INT_MAX = 2147483647;
    // Get static field: static public System.Int32 INT_MAX
    static int _get_INT_MAX();
    // Set static field: static public System.Int32 INT_MAX
    static void _set_INT_MAX(int value);
    // static field const value: static public System.Int32 INT_MIN
    static constexpr const int _INT_MIN = -2147483647;
    // Get static field: static public System.Int32 INT_MIN
    static int _get_INT_MIN();
    // Set static field: static public System.Int32 INT_MIN
    static void _set_INT_MIN(int value);
    // static field const value: static public System.Single FLOAT_UNSET
    static constexpr const float FLOAT_UNSET = -32767;
    // Get static field: static public System.Single FLOAT_UNSET
    static float _get_FLOAT_UNSET();
    // Set static field: static public System.Single FLOAT_UNSET
    static void _set_FLOAT_UNSET(float value);
    // static field const value: static public System.Int32 INT_UNSET
    static constexpr const int INT_UNSET = -32767;
    // Get static field: static public System.Int32 INT_UNSET
    static int _get_INT_UNSET();
    // Set static field: static public System.Int32 INT_UNSET
    static void _set_INT_UNSET(int value);
    // Get static field: static public UnityEngine.Vector2 MAX_16BIT
    static ::UnityEngine::Vector2 _get_MAX_16BIT();
    // Set static field: static public UnityEngine.Vector2 MAX_16BIT
    static void _set_MAX_16BIT(::UnityEngine::Vector2 value);
    // Get static field: static public UnityEngine.Vector2 MIN_16BIT
    static ::UnityEngine::Vector2 _get_MIN_16BIT();
    // Set static field: static public UnityEngine.Vector2 MIN_16BIT
    static void _set_MIN_16BIT(::UnityEngine::Vector2 value);
    // static private System.Void .cctor()
    // Offset: 0x27E0C0
    static void _cctor();
    // static public System.Boolean Approximately(System.Single a, System.Single b)
    // Offset: 0x27E070
    static bool Approximately(float a, float b);
    // static public System.Int32 Mod(System.Int32 a, System.Int32 b)
    // Offset: 0x27E0A0
    static int Mod(int a, int b);
  }; // TMPro.TMP_Math
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Math::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_Math::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Math*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Math::Approximately
// Il2CppName: Approximately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float)>(&TMPro::TMP_Math::Approximately)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Math*), "Approximately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Math::Mod
// Il2CppName: Mod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&TMPro::TMP_Math::Mod)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Math*), "Mod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
