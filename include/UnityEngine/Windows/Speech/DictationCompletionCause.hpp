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
  // Forward declaring type: DictationCompletionCause
  struct DictationCompletionCause;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::DictationCompletionCause, "UnityEngine.Windows.Speech", "DictationCompletionCause");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.DictationCompletionCause
  // [TokenAttribute] Offset: FFFFFFFF
  struct DictationCompletionCause/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DictationCompletionCause
    constexpr DictationCompletionCause(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause Complete
    static constexpr const int Complete = 0;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause Complete
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_Complete();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause Complete
    static void _set_Complete(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause AudioQualityFailure
    static constexpr const int AudioQualityFailure = 1;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause AudioQualityFailure
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_AudioQualityFailure();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause AudioQualityFailure
    static void _set_AudioQualityFailure(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause Canceled
    static constexpr const int Canceled = 2;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause Canceled
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_Canceled();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause Canceled
    static void _set_Canceled(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause TimeoutExceeded
    static constexpr const int TimeoutExceeded = 3;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause TimeoutExceeded
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_TimeoutExceeded();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause TimeoutExceeded
    static void _set_TimeoutExceeded(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause PauseLimitExceeded
    static constexpr const int PauseLimitExceeded = 4;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause PauseLimitExceeded
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_PauseLimitExceeded();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause PauseLimitExceeded
    static void _set_PauseLimitExceeded(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause NetworkFailure
    static constexpr const int NetworkFailure = 5;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause NetworkFailure
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_NetworkFailure();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause NetworkFailure
    static void _set_NetworkFailure(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause MicrophoneUnavailable
    static constexpr const int MicrophoneUnavailable = 6;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause MicrophoneUnavailable
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_MicrophoneUnavailable();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause MicrophoneUnavailable
    static void _set_MicrophoneUnavailable(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // static field const value: static public UnityEngine.Windows.Speech.DictationCompletionCause UnknownError
    static constexpr const int UnknownError = 7;
    // Get static field: static public UnityEngine.Windows.Speech.DictationCompletionCause UnknownError
    static ::UnityEngine::Windows::Speech::DictationCompletionCause _get_UnknownError();
    // Set static field: static public UnityEngine.Windows.Speech.DictationCompletionCause UnknownError
    static void _set_UnknownError(::UnityEngine::Windows::Speech::DictationCompletionCause value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.Windows.Speech.DictationCompletionCause
  #pragma pack(pop)
  static check_size<sizeof(DictationCompletionCause), 0 + sizeof(int)> __UnityEngine_Windows_Speech_DictationCompletionCauseSizeCheck;
  static_assert(sizeof(DictationCompletionCause) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
