// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamSharedClass`1
#include "Steamworks/SteamSharedClass_1.hpp"
// Including type: Steamworks.InventoryResult
#include "Steamworks/InventoryResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: InventoryDef
  class InventoryDef;
  // Forward declaring type: ISteamInventory
  class ISteamInventory;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Steamworks::Data
namespace Steamworks::Data {
  // Forward declaring type: SteamInventoryFullUpdate_t
  struct SteamInventoryFullUpdate_t;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamInventory
  class SteamInventory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamInventory);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamInventory*, "Steamworks", "SteamInventory");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamInventory
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamInventory : public ::Steamworks::SteamSharedClass_1<::Steamworks::SteamInventory*> {
    public:
    // Nested type: ::Steamworks::SteamInventory::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<Steamworks.InventoryResult> OnInventoryUpdated
    static ::System::Action_1<::Steamworks::InventoryResult>* _get_OnInventoryUpdated();
    // Set static field: static private System.Action`1<Steamworks.InventoryResult> OnInventoryUpdated
    static void _set_OnInventoryUpdated(::System::Action_1<::Steamworks::InventoryResult>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action OnDefinitionsUpdated
    static ::System::Action* _get_OnDefinitionsUpdated();
    // Set static field: static private System.Action OnDefinitionsUpdated
    static void _set_OnDefinitionsUpdated(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private Steamworks.InventoryItem[] <Items>k__BackingField
    static ::ArrayW<::Steamworks::InventoryItem> _get_$Items$k__BackingField();
    // Set static field: static private Steamworks.InventoryItem[] <Items>k__BackingField
    static void _set_$Items$k__BackingField(::ArrayW<::Steamworks::InventoryItem> value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private Steamworks.InventoryDef[] <Definitions>k__BackingField
    static ::ArrayW<::Steamworks::InventoryDef*> _get_$Definitions$k__BackingField();
    // Set static field: static private Steamworks.InventoryDef[] <Definitions>k__BackingField
    static void _set_$Definitions$k__BackingField(::ArrayW<::Steamworks::InventoryDef*> value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,Steamworks.InventoryDef> _defMap
    static ::System::Collections::Generic::Dictionary_2<int, ::Steamworks::InventoryDef*>* _get__defMap();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,Steamworks.InventoryDef> _defMap
    static void _set__defMap(::System::Collections::Generic::Dictionary_2<int, ::Steamworks::InventoryDef*>* value);
    // static Steamworks.ISteamInventory get_Internal()
    // Offset: 0x5C2890
    static ::Steamworks::ISteamInventory* get_Internal();
    // static System.Void set_Items(Steamworks.InventoryItem[] value)
    // Offset: 0x5C2960
    static void set_Items(::ArrayW<::Steamworks::InventoryItem> value);
    // static public Steamworks.InventoryDef[] get_Definitions()
    // Offset: 0x5C2850
    static ::ArrayW<::Steamworks::InventoryDef*> get_Definitions();
    // static System.Void set_Definitions(Steamworks.InventoryDef[] value)
    // Offset: 0x5C2910
    static void set_Definitions(::ArrayW<::Steamworks::InventoryDef*> value);
    // static System.Void InstallEvents(System.Boolean server)
    // Offset: 0x5C23D0
    static void InstallEvents(bool server);
    // static private System.Void InventoryUpdated(Steamworks.Data.SteamInventoryFullUpdate_t x)
    // Offset: 0x5C25C0
    static void InventoryUpdated(::Steamworks::Data::SteamInventoryFullUpdate_t x);
    // static private System.Void LoadDefinitions()
    // Offset: 0x5C2680
    static void LoadDefinitions();
    // static Steamworks.InventoryDef[] GetDefinitions()
    // Offset: 0x5C20F0
    static ::ArrayW<::Steamworks::InventoryDef*> GetDefinitions();
    // public System.Void .ctor()
    // Offset: 0x5C2810
    // Implemented from: Steamworks.SteamSharedClass`1
    // Base method: System.Void SteamSharedClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamInventory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamInventory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamInventory*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C2340
    // Implemented from: Steamworks.SteamSharedClass`1
    // Base method: System.Void SteamSharedClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamInventory
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamInventory::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::ISteamInventory* (*)()>(&Steamworks::SteamInventory::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::set_Items
// Il2CppName: set_Items
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Steamworks::InventoryItem>)>(&Steamworks::SteamInventory::set_Items)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Steamworks", "InventoryItem"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "set_Items", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::get_Definitions
// Il2CppName: get_Definitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Steamworks::InventoryDef*> (*)()>(&Steamworks::SteamInventory::get_Definitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "get_Definitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::set_Definitions
// Il2CppName: set_Definitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::Steamworks::InventoryDef*>)>(&Steamworks::SteamInventory::set_Definitions)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Steamworks", "InventoryDef"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "set_Definitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Steamworks::SteamInventory::InstallEvents)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::InventoryUpdated
// Il2CppName: InventoryUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Steamworks::Data::SteamInventoryFullUpdate_t)>(&Steamworks::SteamInventory::InventoryUpdated)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "SteamInventoryFullUpdate_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "InventoryUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::LoadDefinitions
// Il2CppName: LoadDefinitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamInventory::LoadDefinitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "LoadDefinitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::GetDefinitions
// Il2CppName: GetDefinitions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Steamworks::InventoryDef*> (*)()>(&Steamworks::SteamInventory::GetDefinitions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "GetDefinitions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInventory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamInventory::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamInventory::*)(bool)>(&Steamworks::SteamInventory::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInventory*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
