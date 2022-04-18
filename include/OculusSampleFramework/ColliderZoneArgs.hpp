// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: OculusSampleFramework.InteractionType
#include "OculusSampleFramework/InteractionType.hpp"
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
  // Forward declaring type: ColliderZoneArgs
  class ColliderZoneArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::ColliderZoneArgs);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::ColliderZoneArgs*, "OculusSampleFramework", "ColliderZoneArgs");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.ColliderZoneArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class ColliderZoneArgs : public ::System::EventArgs {
    public:
    public:
    // public readonly OculusSampleFramework.ColliderZone Collider
    // Size: 0x8
    // Offset: 0x10
    ::OculusSampleFramework::ColliderZone* Collider;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::ColliderZone*) == 0x8);
    // public readonly System.Single FrameTime
    // Size: 0x4
    // Offset: 0x18
    float FrameTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: FrameTime and: CollidingTool
    char __padding1[0x4] = {};
    // public readonly OculusSampleFramework.InteractableTool CollidingTool
    // Size: 0x8
    // Offset: 0x20
    ::OculusSampleFramework::InteractableTool* CollidingTool;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::InteractableTool*) == 0x8);
    // public readonly OculusSampleFramework.InteractionType InteractionT
    // Size: 0x4
    // Offset: 0x28
    ::OculusSampleFramework::InteractionType InteractionT;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::InteractionType) == 0x4);
    public:
    // Get instance field reference: public readonly OculusSampleFramework.ColliderZone Collider
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::ColliderZone*& dyn_Collider();
    // Get instance field reference: public readonly System.Single FrameTime
    [[deprecated("Use field access instead!")]] float& dyn_FrameTime();
    // Get instance field reference: public readonly OculusSampleFramework.InteractableTool CollidingTool
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::InteractableTool*& dyn_CollidingTool();
    // Get instance field reference: public readonly OculusSampleFramework.InteractionType InteractionT
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::InteractionType& dyn_InteractionT();
    // public System.Void .ctor(OculusSampleFramework.ColliderZone collider, System.Single frameTime, OculusSampleFramework.InteractableTool collidingTool, OculusSampleFramework.InteractionType interactionType)
    // Offset: 0x284D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColliderZoneArgs* New_ctor(::OculusSampleFramework::ColliderZone* collider, float frameTime, ::OculusSampleFramework::InteractableTool* collidingTool, ::OculusSampleFramework::InteractionType interactionType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::ColliderZoneArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColliderZoneArgs*, creationType>(collider, frameTime, collidingTool, interactionType)));
    }
  }; // OculusSampleFramework.ColliderZoneArgs
  #pragma pack(pop)
  static check_size<sizeof(ColliderZoneArgs), 40 + sizeof(::OculusSampleFramework::InteractionType)> __OculusSampleFramework_ColliderZoneArgsSizeCheck;
  static_assert(sizeof(ColliderZoneArgs) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::ColliderZoneArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
