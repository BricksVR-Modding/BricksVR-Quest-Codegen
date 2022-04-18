// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RealtimePropertyAttribute
  class RealtimePropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RealtimePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RealtimePropertyAttribute*, "", "RealtimePropertyAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x16
  #pragma pack(push, 1)
  // Autogenerated type: RealtimePropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FA8E0
  class RealtimePropertyAttribute : public ::System::Attribute {
    public:
    public:
    // public readonly System.UInt32 propertyID
    // Size: 0x4
    // Offset: 0x10
    uint propertyID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.Boolean reliable
    // Size: 0x1
    // Offset: 0x14
    bool reliable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean createDidChangeEvent
    // Size: 0x1
    // Offset: 0x15
    bool createDidChangeEvent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.UInt32 propertyID
    [[deprecated("Use field access instead!")]] uint& dyn_propertyID();
    // Get instance field reference: public readonly System.Boolean reliable
    [[deprecated("Use field access instead!")]] bool& dyn_reliable();
    // Get instance field reference: public readonly System.Boolean createDidChangeEvent
    [[deprecated("Use field access instead!")]] bool& dyn_createDidChangeEvent();
    // public System.Void .ctor(System.UInt32 propertyID, System.Boolean reliable, System.Boolean createDidChangeEvent)
    // Offset: 0x891390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimePropertyAttribute* New_ctor(uint propertyID, bool reliable, bool createDidChangeEvent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RealtimePropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimePropertyAttribute*, creationType>(propertyID, reliable, createDidChangeEvent)));
    }
  }; // RealtimePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(RealtimePropertyAttribute), 21 + sizeof(bool)> __GlobalNamespace_RealtimePropertyAttributeSizeCheck;
  static_assert(sizeof(RealtimePropertyAttribute) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RealtimePropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
