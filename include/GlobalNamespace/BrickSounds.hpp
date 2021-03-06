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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AdjustPlayerScale
  class AdjustPlayerScale;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickSounds
  class BrickSounds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickSounds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickSounds*, "", "BrickSounds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BrickSounds
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickSounds : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.AudioClip[] brickSnapClips
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::AudioClip*> brickSnapClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public UnityEngine.AudioClip[] brickCarpetClips
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::AudioClip*> brickCarpetClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public AdjustPlayerScale adjustPlayerScale
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AdjustPlayerScale* adjustPlayerScale;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdjustPlayerScale*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private BrickSounds _instance
    static ::GlobalNamespace::BrickSounds* _get__instance();
    // Set static field: static private BrickSounds _instance
    static void _set__instance(::GlobalNamespace::BrickSounds* value);
    // Get instance field reference: public UnityEngine.AudioClip[] brickSnapClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_brickSnapClips();
    // Get instance field reference: public UnityEngine.AudioClip[] brickCarpetClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_brickCarpetClips();
    // Get instance field reference: public AdjustPlayerScale adjustPlayerScale
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdjustPlayerScale*& dyn_adjustPlayerScale();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickSounds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickSounds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickSounds*, creationType>()));
    }
    // static public BrickSounds GetInstance()
    // Offset: 0x6F3E80
    static ::GlobalNamespace::BrickSounds* GetInstance();
    // private UnityEngine.AudioClip RandomBrickSnapSound()
    // Offset: 0x6F4070
    ::UnityEngine::AudioClip* RandomBrickSnapSound();
    // private UnityEngine.AudioClip RandomBrickCarpetSound()
    // Offset: 0x6F4020
    ::UnityEngine::AudioClip* RandomBrickCarpetSound();
    // public System.Void PlayBrickSnapSound(UnityEngine.Vector3 pos)
    // Offset: 0x6F3FB0
    void PlayBrickSnapSound(::UnityEngine::Vector3 pos);
    // public System.Void PlayBrickCarpetSound(UnityEngine.Vector3 pos)
    // Offset: 0x6F3F40
    void PlayBrickCarpetSound(::UnityEngine::Vector3 pos);
  }; // BrickSounds
  #pragma pack(pop)
  static check_size<sizeof(BrickSounds), 40 + sizeof(::GlobalNamespace::AdjustPlayerScale*)> __GlobalNamespace_BrickSoundsSizeCheck;
  static_assert(sizeof(BrickSounds) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickSounds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickSounds::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BrickSounds* (*)()>(&GlobalNamespace::BrickSounds::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSounds*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSounds::RandomBrickSnapSound
// Il2CppName: RandomBrickSnapSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::BrickSounds::*)()>(&GlobalNamespace::BrickSounds::RandomBrickSnapSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSounds*), "RandomBrickSnapSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSounds::RandomBrickCarpetSound
// Il2CppName: RandomBrickCarpetSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::BrickSounds::*)()>(&GlobalNamespace::BrickSounds::RandomBrickCarpetSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSounds*), "RandomBrickCarpetSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSounds::PlayBrickSnapSound
// Il2CppName: PlayBrickSnapSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSounds::*)(::UnityEngine::Vector3)>(&GlobalNamespace::BrickSounds::PlayBrickSnapSound)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSounds*), "PlayBrickSnapSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSounds::PlayBrickCarpetSound
// Il2CppName: PlayBrickCarpetSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSounds::*)(::UnityEngine::Vector3)>(&GlobalNamespace::BrickSounds::PlayBrickCarpetSound)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSounds*), "PlayBrickCarpetSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
