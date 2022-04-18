// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BrickAttachDetector
#include "GlobalNamespace/BrickAttachDetector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickAttachDetector::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickAttachDetector::$$c*, "", "BrickAttachDetector/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BrickAttachDetector/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BrickAttachDetector::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BrickAttachDetector/<>c <>9
    static ::GlobalNamespace::BrickAttachDetector::$$c* _get_$$9();
    // Set static field: static public readonly BrickAttachDetector/<>c <>9
    static void _set_$$9(::GlobalNamespace::BrickAttachDetector::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__32_0
    static ::System::Func_2<::UnityEngine::GameObject*, bool>* _get_$$9__32_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__32_0
    static void _set_$$9__32_0(::System::Func_2<::UnityEngine::GameObject*, bool>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__33_0
    static ::System::Func_2<::UnityEngine::GameObject*, bool>* _get_$$9__33_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__33_0
    static void _set_$$9__33_0(::System::Func_2<::UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x6F7EF0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickAttachDetector::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickAttachDetector::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickAttachDetector::$$c*, creationType>()));
    }
    // System.Boolean <GetFemaleConnectorsWithConnections>b__32_0(UnityEngine.GameObject c)
    // Offset: 0x6F7AC0
    bool $GetFemaleConnectorsWithConnections$b__32_0(::UnityEngine::GameObject* c);
    // System.Boolean <GetMaleConnectorsWithConnections>b__33_0(UnityEngine.GameObject c)
    // Offset: 0x6F7B60
    bool $GetMaleConnectorsWithConnections$b__33_0(::UnityEngine::GameObject* c);
  }; // BrickAttachDetector/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickAttachDetector::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickAttachDetector::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttachDetector::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttachDetector::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickAttachDetector::$$c::$GetFemaleConnectorsWithConnections$b__32_0
// Il2CppName: <GetFemaleConnectorsWithConnections>b__32_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttachDetector::$$c::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickAttachDetector::$$c::$GetFemaleConnectorsWithConnections$b__32_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttachDetector::$$c*), "<GetFemaleConnectorsWithConnections>b__32_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttachDetector::$$c::$GetMaleConnectorsWithConnections$b__33_0
// Il2CppName: <GetMaleConnectorsWithConnections>b__33_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttachDetector::$$c::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickAttachDetector::$$c::$GetMaleConnectorsWithConnections$b__33_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttachDetector::$$c*), "<GetMaleConnectorsWithConnections>b__33_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
