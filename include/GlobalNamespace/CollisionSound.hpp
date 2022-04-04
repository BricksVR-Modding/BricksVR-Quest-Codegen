// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
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
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CollisionSound
  class CollisionSound;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CollisionSound);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CollisionSound*, "", "CollisionSound");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CollisionSound
  // [TokenAttribute] Offset: FFFFFFFF
  class CollisionSound : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CollisionSound::MaterialType
    struct MaterialType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: CollisionSound/MaterialType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MaterialType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MaterialType
      constexpr MaterialType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public CollisionSound/MaterialType Metal
      static constexpr const int Metal = 0;
      // Get static field: static public CollisionSound/MaterialType Metal
      static ::GlobalNamespace::CollisionSound::MaterialType _get_Metal();
      // Set static field: static public CollisionSound/MaterialType Metal
      static void _set_Metal(::GlobalNamespace::CollisionSound::MaterialType value);
      // static field const value: static public CollisionSound/MaterialType Floor
      static constexpr const int Floor = 1;
      // Get static field: static public CollisionSound/MaterialType Floor
      static ::GlobalNamespace::CollisionSound::MaterialType _get_Floor();
      // Set static field: static public CollisionSound/MaterialType Floor
      static void _set_Floor(::GlobalNamespace::CollisionSound::MaterialType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // CollisionSound/MaterialType
    #pragma pack(pop)
    static check_size<sizeof(CollisionSound::MaterialType), 0 + sizeof(int)> __GlobalNamespace_CollisionSound_MaterialTypeSizeCheck;
    static_assert(sizeof(CollisionSound::MaterialType) == 0x4);
    public:
    // public CollisionSound/MaterialType material
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::CollisionSound::MaterialType material;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CollisionSound::MaterialType) == 0x4);
    // Padding between fields: material and: metalOnMetalClips
    char __padding0[0x4] = {};
    // public UnityEngine.AudioClip[] metalOnMetalClips
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::AudioClip*> metalOnMetalClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private System.Single _nextSoundTime
    // Size: 0x4
    // Offset: 0x28
    float nextSoundTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeBetweenSounds
    // Size: 0x4
    // Offset: 0x2C
    float timeBetweenSounds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.AudioSource _source
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AudioSource* source;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public CollisionSound/MaterialType material
    [[deprecated]] ::GlobalNamespace::CollisionSound::MaterialType& dyn_material();
    // Get instance field reference: public UnityEngine.AudioClip[] metalOnMetalClips
    [[deprecated]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_metalOnMetalClips();
    // Get instance field reference: private System.Single _nextSoundTime
    [[deprecated]] float& dyn__nextSoundTime();
    // Get instance field reference: private System.Single _timeBetweenSounds
    [[deprecated]] float& dyn__timeBetweenSounds();
    // Get instance field reference: private UnityEngine.AudioSource _source
    [[deprecated]] ::UnityEngine::AudioSource*& dyn__source();
    // private System.Void Start()
    // Offset: 0x6B1540
    void Start();
    // private System.Single NextSoundTime()
    // Offset: 0x4CC750
    float NextSoundTime();
    // private System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x6B1300
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // private System.Void MetalOnMetalCollision(System.Single volume)
    // Offset: 0x6B1280
    void MetalOnMetalCollision(float volume);
    // static private System.Single CollisionVelocityToVolume(System.Single velocity)
    // Offset: 0x6B1260
    static float CollisionVelocityToVolume(float velocity);
    // public System.Void .ctor()
    // Offset: 0x6B1590
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollisionSound* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CollisionSound::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollisionSound*, creationType>()));
    }
  }; // CollisionSound
  #pragma pack(pop)
  static check_size<sizeof(CollisionSound), 48 + sizeof(::UnityEngine::AudioSource*)> __GlobalNamespace_CollisionSoundSizeCheck;
  static_assert(sizeof(CollisionSound) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CollisionSound::MaterialType, "", "CollisionSound/MaterialType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CollisionSound::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CollisionSound::*)()>(&GlobalNamespace::CollisionSound::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CollisionSound*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CollisionSound::NextSoundTime
// Il2CppName: NextSoundTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CollisionSound::*)()>(&GlobalNamespace::CollisionSound::NextSoundTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CollisionSound*), "NextSoundTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CollisionSound::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CollisionSound::*)(::UnityEngine::Collision*)>(&GlobalNamespace::CollisionSound::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CollisionSound*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CollisionSound::MetalOnMetalCollision
// Il2CppName: MetalOnMetalCollision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CollisionSound::*)(float)>(&GlobalNamespace::CollisionSound::MetalOnMetalCollision)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CollisionSound*), "MetalOnMetalCollision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CollisionSound::CollisionVelocityToVolume
// Il2CppName: CollisionVelocityToVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::CollisionSound::CollisionVelocityToVolume)> {
  static const MethodInfo* get() {
    static auto* velocity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CollisionSound*), "CollisionVelocityToVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{velocity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CollisionSound::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
