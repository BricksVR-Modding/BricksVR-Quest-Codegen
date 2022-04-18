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
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: SpeechSystemStatus
  struct SpeechSystemStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::SpeechSystemStatus, "UnityEngine.Windows.Speech", "SpeechSystemStatus");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.SpeechSystemStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpeechSystemStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SpeechSystemStatus
    constexpr SpeechSystemStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Windows.Speech.SpeechSystemStatus Stopped
    static constexpr const int Stopped = 0;
    // Get static field: static public UnityEngine.Windows.Speech.SpeechSystemStatus Stopped
    static ::UnityEngine::Windows::Speech::SpeechSystemStatus _get_Stopped();
    // Set static field: static public UnityEngine.Windows.Speech.SpeechSystemStatus Stopped
    static void _set_Stopped(::UnityEngine::Windows::Speech::SpeechSystemStatus value);
    // static field const value: static public UnityEngine.Windows.Speech.SpeechSystemStatus Running
    static constexpr const int Running = 1;
    // Get static field: static public UnityEngine.Windows.Speech.SpeechSystemStatus Running
    static ::UnityEngine::Windows::Speech::SpeechSystemStatus _get_Running();
    // Set static field: static public UnityEngine.Windows.Speech.SpeechSystemStatus Running
    static void _set_Running(::UnityEngine::Windows::Speech::SpeechSystemStatus value);
    // static field const value: static public UnityEngine.Windows.Speech.SpeechSystemStatus Failed
    static constexpr const int Failed = 2;
    // Get static field: static public UnityEngine.Windows.Speech.SpeechSystemStatus Failed
    static ::UnityEngine::Windows::Speech::SpeechSystemStatus _get_Failed();
    // Set static field: static public UnityEngine.Windows.Speech.SpeechSystemStatus Failed
    static void _set_Failed(::UnityEngine::Windows::Speech::SpeechSystemStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Windows.Speech.SpeechSystemStatus
  #pragma pack(pop)
  static check_size<sizeof(SpeechSystemStatus), 0 + sizeof(int)> __UnityEngine_Windows_Speech_SpeechSystemStatusSizeCheck;
  static_assert(sizeof(SpeechSystemStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
