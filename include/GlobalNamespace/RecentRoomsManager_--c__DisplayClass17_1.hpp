// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RecentRoomsManager
#include "GlobalNamespace/RecentRoomsManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1*, "", "RecentRoomsManager/<>c__DisplayClass17_1");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RecentRoomsManager/<>c__DisplayClass17_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RecentRoomsManager::$$c__DisplayClass17_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 i1
    // Size: 0x4
    // Offset: 0x10
    int i1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: i1 and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public RecentRoomsManager/<>c__DisplayClass17_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 i1
    int& dyn_i1();
    // Get instance field reference: public RecentRoomsManager/<>c__DisplayClass17_0 CS$<>8__locals1
    ::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_0*& dyn_CS$$$8__locals1();
    // System.Void <InitializeRecentRoomsList>b__0()
    // Offset: 0x10B4C14
    void $InitializeRecentRoomsList$b__0();
    // public System.Void .ctor()
    // Offset: 0x10B44A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecentRoomsManager::$$c__DisplayClass17_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecentRoomsManager::$$c__DisplayClass17_1*, creationType>()));
    }
  }; // RecentRoomsManager/<>c__DisplayClass17_1
  #pragma pack(pop)
  static check_size<sizeof(RecentRoomsManager::$$c__DisplayClass17_1), 24 + sizeof(::GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_0*)> __GlobalNamespace_RecentRoomsManager_$$c__DisplayClass17_1SizeCheck;
  static_assert(sizeof(RecentRoomsManager::$$c__DisplayClass17_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1::$InitializeRecentRoomsList$b__0
// Il2CppName: <InitializeRecentRoomsList>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1::*)()>(&GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1::$InitializeRecentRoomsList$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1*), "<InitializeRecentRoomsList>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecentRoomsManager::$$c__DisplayClass17_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
