// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusSampleFramework.InteractableCollisionDepth
#include "OculusSampleFramework/InteractableCollisionDepth.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: ColliderZone
  class ColliderZone;
  // Forward declaring type: InteractableTool
  class InteractableTool;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: InteractableCollisionInfo
  class InteractableCollisionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::InteractableCollisionInfo);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::InteractableCollisionInfo*, "OculusSampleFramework", "InteractableCollisionInfo");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.InteractableCollisionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractableCollisionInfo : public ::Il2CppObject {
    public:
    public:
    // public OculusSampleFramework.ColliderZone InteractableCollider
    // Size: 0x8
    // Offset: 0x10
    ::OculusSampleFramework::ColliderZone* InteractableCollider;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::ColliderZone*) == 0x8);
    // public OculusSampleFramework.InteractableCollisionDepth CollisionDepth
    // Size: 0x4
    // Offset: 0x18
    ::OculusSampleFramework::InteractableCollisionDepth CollisionDepth;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::InteractableCollisionDepth) == 0x4);
    // Padding between fields: CollisionDepth and: CollidingTool
    char __padding1[0x4] = {};
    // public OculusSampleFramework.InteractableTool CollidingTool
    // Size: 0x8
    // Offset: 0x20
    ::OculusSampleFramework::InteractableTool* CollidingTool;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::InteractableTool*) == 0x8);
    public:
    // Get instance field reference: public OculusSampleFramework.ColliderZone InteractableCollider
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::ColliderZone*& dyn_InteractableCollider();
    // Get instance field reference: public OculusSampleFramework.InteractableCollisionDepth CollisionDepth
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::InteractableCollisionDepth& dyn_CollisionDepth();
    // Get instance field reference: public OculusSampleFramework.InteractableTool CollidingTool
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::InteractableTool*& dyn_CollidingTool();
    // public System.Void .ctor(OculusSampleFramework.ColliderZone collider, OculusSampleFramework.InteractableCollisionDepth collisionDepth, OculusSampleFramework.InteractableTool collidingTool)
    // Offset: 0x28CB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractableCollisionInfo* New_ctor(::OculusSampleFramework::ColliderZone* collider, ::OculusSampleFramework::InteractableCollisionDepth collisionDepth, ::OculusSampleFramework::InteractableTool* collidingTool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::InteractableCollisionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractableCollisionInfo*, creationType>(collider, collisionDepth, collidingTool)));
    }
  }; // OculusSampleFramework.InteractableCollisionInfo
  #pragma pack(pop)
  static check_size<sizeof(InteractableCollisionInfo), 32 + sizeof(::OculusSampleFramework::InteractableTool*)> __OculusSampleFramework_InteractableCollisionInfoSizeCheck;
  static_assert(sizeof(InteractableCollisionInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::InteractableCollisionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
