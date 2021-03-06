// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioPlayableOutput
  struct AudioPlayableOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Audio.AudioPlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: F8BC0
  // [StaticAccessorAttribute] Offset: F8BC0
  // [NativeHeaderAttribute] Offset: F8BC0
  // [RequiredByNativeCodeAttribute] Offset: F8BC0
  // [NativeHeaderAttribute] Offset: F8BC0
  struct AudioPlayableOutput/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    public:
    // Creating value type constructor for type: AudioPlayableOutput
    constexpr AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableOutputHandle
    constexpr operator ::UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableOutputHandle m_Handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableOutputHandle& dyn_m_Handle();
  }; // UnityEngine.Audio.AudioPlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(AudioPlayableOutput), 0 + sizeof(::UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Audio_AudioPlayableOutputSizeCheck;
  static_assert(sizeof(AudioPlayableOutput) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
