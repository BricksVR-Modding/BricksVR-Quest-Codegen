// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: MonoListItem
  class MonoListItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MonoListItem);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoListItem*, "System", "MonoListItem");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoListItem
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoListItem : public ::Il2CppObject {
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
    // private System.MonoListItem next
    // Size: 0x8
    // Offset: 0x10
    ::System::MonoListItem* next;
    // Field size check
    static_assert(sizeof(::System::MonoListItem*) == 0x8);
    // private System.Object data
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.MonoListItem next
    ::System::MonoListItem*& dyn_next();
    // Get instance field reference: private System.Object data
    ::Il2CppObject*& dyn_data();
    // public System.Void .ctor()
    // Offset: 0xBAC998
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MonoListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoListItem*, creationType>()));
    }
  }; // System.MonoListItem
  #pragma pack(pop)
  static check_size<sizeof(MonoListItem), 24 + sizeof(::Il2CppObject*)> __System_MonoListItemSizeCheck;
  static_assert(sizeof(MonoListItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
