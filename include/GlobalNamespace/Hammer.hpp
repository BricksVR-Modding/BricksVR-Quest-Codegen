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
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Hammer
  class Hammer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Hammer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Hammer*, "", "Hammer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Hammer
  // [TokenAttribute] Offset: FFFFFFFF
  class Hammer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single explosionRadius
    // Size: 0x4
    // Offset: 0x18
    float explosionRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single explositonPower
    // Size: 0x4
    // Offset: 0x1C
    float explositonPower;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Collider[] _results
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Collider*> results;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Int32 _lastExplosionFrame
    // Size: 0x4
    // Offset: 0x28
    int lastExplosionFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single explosionRadius
    [[deprecated("Use field access instead!")]] float& dyn_explosionRadius();
    // Get instance field reference: public System.Single explositonPower
    [[deprecated("Use field access instead!")]] float& dyn_explositonPower();
    // Get instance field reference: private UnityEngine.Collider[] _results
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn__results();
    // Get instance field reference: private System.Int32 _lastExplosionFrame
    [[deprecated("Use field access instead!")]] int& dyn__lastExplosionFrame();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hammer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Hammer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hammer*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x6B5A60
    void Awake();
    // private System.Void OnCollisionEnter(UnityEngine.Collision mainCollision)
    // Offset: 0x6B5AB0
    void OnCollisionEnter(::UnityEngine::Collision* mainCollision);
  }; // Hammer
  #pragma pack(pop)
  static check_size<sizeof(Hammer), 40 + sizeof(int)> __GlobalNamespace_HammerSizeCheck;
  static_assert(sizeof(Hammer) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Hammer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Hammer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Hammer::*)()>(&GlobalNamespace::Hammer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Hammer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Hammer::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Hammer::*)(::UnityEngine::Collision*)>(&GlobalNamespace::Hammer::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* mainCollision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Hammer*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCollision});
  }
};
