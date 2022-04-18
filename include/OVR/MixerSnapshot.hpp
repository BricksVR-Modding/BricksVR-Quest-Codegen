// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerSnapshot
  class AudioMixerSnapshot;
}
// Completed forward declares
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: MixerSnapshot
  class MixerSnapshot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::MixerSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::MixerSnapshot*, "OVR", "MixerSnapshot");
// Type namespace: OVR
namespace OVR {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: OVR.MixerSnapshot
  // [TokenAttribute] Offset: FFFFFFFF
  class MixerSnapshot : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Audio.AudioMixerSnapshot snapshot
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Audio::AudioMixerSnapshot* snapshot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Audio::AudioMixerSnapshot*) == 0x8);
    // public System.Single transitionTime
    // Size: 0x4
    // Offset: 0x18
    float transitionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Audio.AudioMixerSnapshot snapshot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Audio::AudioMixerSnapshot*& dyn_snapshot();
    // Get instance field reference: public System.Single transitionTime
    [[deprecated("Use field access instead!")]] float& dyn_transitionTime();
    // public System.Void .ctor()
    // Offset: 0x72BF10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MixerSnapshot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::MixerSnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MixerSnapshot*, creationType>()));
    }
  }; // OVR.MixerSnapshot
  #pragma pack(pop)
  static check_size<sizeof(MixerSnapshot), 24 + sizeof(float)> __OVR_MixerSnapshotSizeCheck;
  static_assert(sizeof(MixerSnapshot) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::MixerSnapshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
