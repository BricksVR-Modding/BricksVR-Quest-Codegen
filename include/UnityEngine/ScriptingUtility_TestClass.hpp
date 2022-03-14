// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptingUtility
#include "UnityEngine/ScriptingUtility.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingUtility::TestClass, "UnityEngine", "ScriptingUtility/TestClass");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ScriptingUtility/UnityEngine.TestClass
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScriptingUtility::TestClass/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TestClass
    constexpr TestClass(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Int32 value
    int& dyn_value();
  }; // UnityEngine.ScriptingUtility/UnityEngine.TestClass
  #pragma pack(pop)
  static check_size<sizeof(ScriptingUtility::TestClass), 0 + sizeof(int)> __UnityEngine_ScriptingUtility_TestClassSizeCheck;
  static_assert(sizeof(ScriptingUtility::TestClass) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
