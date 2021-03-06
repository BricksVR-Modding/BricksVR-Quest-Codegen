// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BrickDestroyer
  class BrickDestroyer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeTransform
  class RealtimeTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OwnedPhysicsBricksStore
  class OwnedPhysicsBricksStore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OwnedPhysicsBricksStore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwnedPhysicsBricksStore*, "", "OwnedPhysicsBricksStore");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OwnedPhysicsBricksStore
  // [TokenAttribute] Offset: FFFFFFFF
  class OwnedPhysicsBricksStore : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OwnedPhysicsBricksStore::$$c
    class $$c;
    public:
    // private System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.GameObject,Normal.Realtime.RealtimeTransform>> _bricks
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*>>* bricks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*>>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Boolean> _bricksDict
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, bool>* bricksDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, bool>*) == 0x8);
    // private BrickDestroyer _brickDestroyer
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BrickDestroyer* brickDestroyer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickDestroyer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private OwnedPhysicsBricksStore _instance
    static ::GlobalNamespace::OwnedPhysicsBricksStore* _get__instance();
    // Set static field: static private OwnedPhysicsBricksStore _instance
    static void _set__instance(::GlobalNamespace::OwnedPhysicsBricksStore* value);
    // static field const value: static private System.Int32 MaxPhysicsBricks
    static constexpr const int MaxPhysicsBricks = 10;
    // Get static field: static private System.Int32 MaxPhysicsBricks
    static int _get_MaxPhysicsBricks();
    // Set static field: static private System.Int32 MaxPhysicsBricks
    static void _set_MaxPhysicsBricks(int value);
    // Get instance field reference: private System.Collections.Generic.List`1<System.ValueTuple`2<UnityEngine.GameObject,Normal.Realtime.RealtimeTransform>> _bricks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*>>*& dyn__bricks();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Boolean> _bricksDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, bool>*& dyn__bricksDict();
    // Get instance field reference: private BrickDestroyer _brickDestroyer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BrickDestroyer*& dyn__brickDestroyer();
    // public System.Void .ctor()
    // Offset: 0x677B40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OwnedPhysicsBricksStore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OwnedPhysicsBricksStore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OwnedPhysicsBricksStore*, creationType>()));
    }
    // static public OwnedPhysicsBricksStore GetInstance()
    // Offset: 0x677810
    static ::GlobalNamespace::OwnedPhysicsBricksStore* GetInstance();
    // private System.Void Start()
    // Offset: 0x677B10
    void Start();
    // public System.Void AddBrick(UnityEngine.GameObject o)
    // Offset: 0x6774F0
    void AddBrick(::UnityEngine::GameObject* o);
    // private System.Void RemoveDeadBricks()
    // Offset: 0x6778D0
    void RemoveDeadBricks();
    // private System.Void DeleteLastBrick()
    // Offset: 0x677730
    void DeleteLastBrick();
  }; // OwnedPhysicsBricksStore
  #pragma pack(pop)
  static check_size<sizeof(OwnedPhysicsBricksStore), 40 + sizeof(::GlobalNamespace::BrickDestroyer*)> __GlobalNamespace_OwnedPhysicsBricksStoreSizeCheck;
  static_assert(sizeof(OwnedPhysicsBricksStore) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OwnedPhysicsBricksStore* (*)()>(&GlobalNamespace::OwnedPhysicsBricksStore::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnedPhysicsBricksStore::*)()>(&GlobalNamespace::OwnedPhysicsBricksStore::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::AddBrick
// Il2CppName: AddBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnedPhysicsBricksStore::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::OwnedPhysicsBricksStore::AddBrick)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore*), "AddBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::RemoveDeadBricks
// Il2CppName: RemoveDeadBricks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnedPhysicsBricksStore::*)()>(&GlobalNamespace::OwnedPhysicsBricksStore::RemoveDeadBricks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore*), "RemoveDeadBricks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::DeleteLastBrick
// Il2CppName: DeleteLastBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OwnedPhysicsBricksStore::*)()>(&GlobalNamespace::OwnedPhysicsBricksStore::DeleteLastBrick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore*), "DeleteLastBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
