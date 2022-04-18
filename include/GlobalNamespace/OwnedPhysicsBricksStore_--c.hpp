// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OwnedPhysicsBricksStore
#include "GlobalNamespace/OwnedPhysicsBricksStore.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OwnedPhysicsBricksStore::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OwnedPhysicsBricksStore::$$c*, "", "OwnedPhysicsBricksStore/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OwnedPhysicsBricksStore/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OwnedPhysicsBricksStore::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OwnedPhysicsBricksStore/<>c <>9
    static ::GlobalNamespace::OwnedPhysicsBricksStore::$$c* _get_$$9();
    // Set static field: static public readonly OwnedPhysicsBricksStore/<>c <>9
    static void _set_$$9(::GlobalNamespace::OwnedPhysicsBricksStore::$$c* value);
    // Get static field: static public System.Predicate`1<System.ValueTuple`2<UnityEngine.GameObject,Normal.Realtime.RealtimeTransform>> <>9__8_0
    static ::System::Predicate_1<::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*>>* _get_$$9__8_0();
    // Set static field: static public System.Predicate`1<System.ValueTuple`2<UnityEngine.GameObject,Normal.Realtime.RealtimeTransform>> <>9__8_0
    static void _set_$$9__8_0(::System::Predicate_1<::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*>>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__8_1
    static ::System::Func_2<::UnityEngine::GameObject*, bool>* _get_$$9__8_1();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__8_1
    static void _set_$$9__8_1(::System::Func_2<::UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x6A9BC0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OwnedPhysicsBricksStore::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OwnedPhysicsBricksStore::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OwnedPhysicsBricksStore::$$c*, creationType>()));
    }
    // System.Boolean <RemoveDeadBricks>b__8_0(System.ValueTuple`2<UnityEngine.GameObject,Normal.Realtime.RealtimeTransform> tuple)
    // Offset: 0x6A99E0
    bool $RemoveDeadBricks$b__8_0(::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*> tuple);
    // System.Boolean <RemoveDeadBricks>b__8_1(UnityEngine.GameObject o)
    // Offset: 0x6A9AB0
    bool $RemoveDeadBricks$b__8_1(::UnityEngine::GameObject* o);
  }; // OwnedPhysicsBricksStore/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OwnedPhysicsBricksStore::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::$$c::$RemoveDeadBricks$b__8_0
// Il2CppName: <RemoveDeadBricks>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OwnedPhysicsBricksStore::$$c::*)(::System::ValueTuple_2<::UnityEngine::GameObject*, ::Normal::Realtime::RealtimeTransform*>)>(&GlobalNamespace::OwnedPhysicsBricksStore::$$c::$RemoveDeadBricks$b__8_0)> {
  static const MethodInfo* get() {
    static auto* tuple = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ValueTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), ::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransform")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore::$$c*), "<RemoveDeadBricks>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tuple});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OwnedPhysicsBricksStore::$$c::$RemoveDeadBricks$b__8_1
// Il2CppName: <RemoveDeadBricks>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OwnedPhysicsBricksStore::$$c::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::OwnedPhysicsBricksStore::$$c::$RemoveDeadBricks$b__8_1)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OwnedPhysicsBricksStore::$$c*), "<RemoveDeadBricks>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
