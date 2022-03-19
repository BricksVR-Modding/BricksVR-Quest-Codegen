// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamInventory
#include "Steamworks/SteamInventory.hpp"
// Including type: Steamworks.Data.SteamInventoryFullUpdate_t
#include "Steamworks/Data/SteamInventoryFullUpdate_t.hpp"
// Including type: Steamworks.Data.SteamInventoryDefinitionUpdate_t
#include "Steamworks/Data/SteamInventoryDefinitionUpdate_t.hpp"
// Including type: Steamworks.Data.InventoryDefId
#include "Steamworks/Data/InventoryDefId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: InventoryDef
  class InventoryDef;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamInventory::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamInventory::$$c*, "Steamworks", "SteamInventory/<>c");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamInventory/Steamworks.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SteamInventory::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Steamworks.SteamInventory/Steamworks.<>c <>9
    static ::Steamworks::SteamInventory::$$c* _get_$$9();
    // Set static field: static public readonly Steamworks.SteamInventory/Steamworks.<>c <>9
    static void _set_$$9(::Steamworks::SteamInventory::$$c* value);
    // Get static field: static public System.Action`1<Steamworks.Data.SteamInventoryFullUpdate_t> <>9__3_0
    static ::System::Action_1<::Steamworks::Data::SteamInventoryFullUpdate_t>* _get_$$9__3_0();
    // Set static field: static public System.Action`1<Steamworks.Data.SteamInventoryFullUpdate_t> <>9__3_0
    static void _set_$$9__3_0(::System::Action_1<::Steamworks::Data::SteamInventoryFullUpdate_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.SteamInventoryDefinitionUpdate_t> <>9__3_1
    static ::System::Action_1<::Steamworks::Data::SteamInventoryDefinitionUpdate_t>* _get_$$9__3_1();
    // Set static field: static public System.Action`1<Steamworks.Data.SteamInventoryDefinitionUpdate_t> <>9__3_1
    static void _set_$$9__3_1(::System::Action_1<::Steamworks::Data::SteamInventoryDefinitionUpdate_t>* value);
    // Get static field: static public System.Func`2<Steamworks.Data.InventoryDefId,Steamworks.InventoryDef> <>9__29_0
    static ::System::Func_2<::Steamworks::Data::InventoryDefId, ::Steamworks::InventoryDef*>* _get_$$9__29_0();
    // Set static field: static public System.Func`2<Steamworks.Data.InventoryDefId,Steamworks.InventoryDef> <>9__29_0
    static void _set_$$9__29_0(::System::Func_2<::Steamworks::Data::InventoryDefId, ::Steamworks::InventoryDef*>* value);
    // static private System.Void .cctor()
    // Offset: 0xE3B348
    static void _cctor();
    // System.Void <InstallEvents>b__3_0(Steamworks.Data.SteamInventoryFullUpdate_t x)
    // Offset: 0xE3B3B4
    void $InstallEvents$b__3_0(::Steamworks::Data::SteamInventoryFullUpdate_t x);
    // System.Void <InstallEvents>b__3_1(Steamworks.Data.SteamInventoryDefinitionUpdate_t x)
    // Offset: 0xE3B3BC
    void $InstallEvents$b__3_1(::Steamworks::Data::SteamInventoryDefinitionUpdate_t x);
    // Steamworks.InventoryDef <GetDefinitions>b__29_0(Steamworks.Data.InventoryDefId x)
    // Offset: 0xE3B3C0
    ::Steamworks::InventoryDef* $GetDefinitions$b__29_0(::Steamworks::Data::InventoryDefId x);
    // public System.Void .ctor()
    // Offset: 0xE3B3AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamInventory::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamInventory::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamInventory::$$c*, creationType>()));
    }
  }; // Steamworks.SteamInventory/Steamworks.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamInventory::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamInventory::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::$$c::$InstallEvents$b__3_0
// Il2CppName: <InstallEvents>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamInventory::$$c::*)(::Steamworks::Data::SteamInventoryFullUpdate_t)>(&Steamworks::SteamInventory::$$c::$InstallEvents$b__3_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "SteamInventoryFullUpdate_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory::$$c*), "<InstallEvents>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::$$c::$InstallEvents$b__3_1
// Il2CppName: <InstallEvents>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamInventory::$$c::*)(::Steamworks::Data::SteamInventoryDefinitionUpdate_t)>(&Steamworks::SteamInventory::$$c::$InstallEvents$b__3_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "SteamInventoryDefinitionUpdate_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory::$$c*), "<InstallEvents>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::$$c::$GetDefinitions$b__29_0
// Il2CppName: <GetDefinitions>b__29_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::InventoryDef* (Steamworks::SteamInventory::$$c::*)(::Steamworks::Data::InventoryDefId)>(&Steamworks::SteamInventory::$$c::$GetDefinitions$b__29_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "InventoryDefId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory::$$c*), "<GetDefinitions>b__29_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
