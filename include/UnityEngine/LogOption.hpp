// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogOption
  struct LogOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LogOption, "UnityEngine", "LogOption");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LogOption
  // [TokenAttribute] Offset: FFFFFFFF
  struct LogOption/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LogOption
    constexpr LogOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.LogOption None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.LogOption None
    static ::UnityEngine::LogOption _get_None();
    // Set static field: static public UnityEngine.LogOption None
    static void _set_None(::UnityEngine::LogOption value);
    // static field const value: static public UnityEngine.LogOption NoStacktrace
    static constexpr const int NoStacktrace = 1;
    // Get static field: static public UnityEngine.LogOption NoStacktrace
    static ::UnityEngine::LogOption _get_NoStacktrace();
    // Set static field: static public UnityEngine.LogOption NoStacktrace
    static void _set_NoStacktrace(::UnityEngine::LogOption value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.LogOption
  #pragma pack(pop)
  static check_size<sizeof(LogOption), 0 + sizeof(int)> __UnityEngine_LogOptionSizeCheck;
  static_assert(sizeof(LogOption) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
