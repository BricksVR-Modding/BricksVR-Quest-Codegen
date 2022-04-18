// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BrickAttach
#include "GlobalNamespace/BrickAttach.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LegoConnectorScript
  class LegoConnectorScript;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickAttach::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickAttach::$$c*, "", "BrickAttach/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BrickAttach/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BrickAttach::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BrickAttach/<>c <>9
    static ::GlobalNamespace::BrickAttach::$$c* _get_$$9();
    // Set static field: static public readonly BrickAttach/<>c <>9
    static void _set_$$9(::GlobalNamespace::BrickAttach::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,BrickAttach> <>9__53_0
    static ::System::Func_2<::UnityEngine::GameObject*, ::GlobalNamespace::BrickAttach*>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,BrickAttach> <>9__53_0
    static void _set_$$9__53_0(::System::Func_2<::UnityEngine::GameObject*, ::GlobalNamespace::BrickAttach*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,BrickAttach> <>9__53_1
    static ::System::Func_2<::UnityEngine::GameObject*, ::GlobalNamespace::BrickAttach*>* _get_$$9__53_1();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,BrickAttach> <>9__53_1
    static void _set_$$9__53_1(::System::Func_2<::UnityEngine::GameObject*, ::GlobalNamespace::BrickAttach*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__55_0
    static ::System::Func_2<::UnityEngine::GameObject*, bool>* _get_$$9__55_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__55_0
    static void _set_$$9__55_0(::System::Func_2<::UnityEngine::GameObject*, bool>* value);
    // Get static field: static public System.Func`2<LegoConnectorScript,System.Boolean> <>9__58_0
    static ::System::Func_2<::GlobalNamespace::LegoConnectorScript*, bool>* _get_$$9__58_0();
    // Set static field: static public System.Func`2<LegoConnectorScript,System.Boolean> <>9__58_0
    static void _set_$$9__58_0(::System::Func_2<::GlobalNamespace::LegoConnectorScript*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x6F7E30
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickAttach::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickAttach::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickAttach::$$c*, creationType>()));
    }
    // BrickAttach <ConnectBricks>b__53_0(UnityEngine.GameObject b)
    // Offset: 0x6F7A20
    ::GlobalNamespace::BrickAttach* $ConnectBricks$b__53_0(::UnityEngine::GameObject* b);
    // BrickAttach <ConnectBricks>b__53_1(UnityEngine.GameObject b)
    // Offset: 0x6F7A70
    ::GlobalNamespace::BrickAttach* $ConnectBricks$b__53_1(::UnityEngine::GameObject* b);
    // System.Boolean <OverlappingBricksFromConnectors>b__55_0(UnityEngine.GameObject x)
    // Offset: 0x6F7C60
    bool $OverlappingBricksFromConnectors$b__55_0(::UnityEngine::GameObject* x);
    // System.Boolean <RecalculateRenderedGeometry>b__58_0(LegoConnectorScript s)
    // Offset: 0x6F7CC0
    bool $RecalculateRenderedGeometry$b__58_0(::GlobalNamespace::LegoConnectorScript* s);
  }; // BrickAttach/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickAttach::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::$$c::$ConnectBricks$b__53_0
// Il2CppName: <ConnectBricks>b__53_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BrickAttach* (GlobalNamespace::BrickAttach::$$c::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickAttach::$$c::$ConnectBricks$b__53_0)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach::$$c*), "<ConnectBricks>b__53_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::$$c::$ConnectBricks$b__53_1
// Il2CppName: <ConnectBricks>b__53_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BrickAttach* (GlobalNamespace::BrickAttach::$$c::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickAttach::$$c::$ConnectBricks$b__53_1)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach::$$c*), "<ConnectBricks>b__53_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::$$c::$OverlappingBricksFromConnectors$b__55_0
// Il2CppName: <OverlappingBricksFromConnectors>b__55_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttach::$$c::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickAttach::$$c::$OverlappingBricksFromConnectors$b__55_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach::$$c*), "<OverlappingBricksFromConnectors>b__55_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::$$c::$RecalculateRenderedGeometry$b__58_0
// Il2CppName: <RecalculateRenderedGeometry>b__58_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttach::$$c::*)(::GlobalNamespace::LegoConnectorScript*)>(&GlobalNamespace::BrickAttach::$$c::$RecalculateRenderedGeometry$b__58_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("", "LegoConnectorScript")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach::$$c*), "<RecalculateRenderedGeometry>b__58_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
