// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Steamworks.Data.InventoryDefId
#include "Steamworks/Data/InventoryDefId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: InventoryDef
  class InventoryDef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::InventoryDef);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::InventoryDef*, "Steamworks", "InventoryDef");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.InventoryDef
  // [TokenAttribute] Offset: FFFFFFFF
  class InventoryDef : public ::Il2CppObject/*, public ::System::IEquatable_1<::Steamworks::InventoryDef*>*/ {
    public:
    public:
    // Steamworks.Data.InventoryDefId _id
    // Size: 0x4
    // Offset: 0x10
    ::Steamworks::Data::InventoryDefId id;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::InventoryDefId) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::InventoryDef*>
    operator ::System::IEquatable_1<::Steamworks::InventoryDef*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::InventoryDef*>*>(this);
    }
    // Creating conversion operator: operator ::Steamworks::Data::InventoryDefId
    constexpr operator ::Steamworks::Data::InventoryDefId() const noexcept {
      return id;
    }
    // Get instance field reference: Steamworks.Data.InventoryDefId _id
    [[deprecated]] ::Steamworks::Data::InventoryDefId& dyn__id();
    // public System.Int32 get_Id()
    // Offset: 0x1DD410
    int get_Id();
    // public System.Void .ctor(Steamworks.Data.InventoryDefId defId)
    // Offset: 0x5BFA60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InventoryDef* New_ctor(::Steamworks::Data::InventoryDefId defId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::InventoryDef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InventoryDef*, creationType>(defId)));
    }
    // public System.Boolean Equals(Steamworks.InventoryDef p)
    // Offset: 0x5BF9F0
    bool Equals(::Steamworks::InventoryDef* p);
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x5BF950
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5BFA40
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Steamworks.InventoryDef
  #pragma pack(pop)
  static check_size<sizeof(InventoryDef), 16 + sizeof(::Steamworks::Data::InventoryDefId)> __Steamworks_InventoryDefSizeCheck;
  static_assert(sizeof(InventoryDef) == 0x14);
  // static public System.Boolean op_Equality(Steamworks.InventoryDef a, Steamworks.InventoryDef b)
  // Offset: 0x5BFA90
  bool operator ==(::Steamworks::InventoryDef* a, ::Steamworks::InventoryDef& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::InventoryDef::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::InventoryDef::*)()>(&Steamworks::InventoryDef::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryDef*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryDef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::InventoryDef::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::InventoryDef::*)(::Steamworks::InventoryDef*)>(&Steamworks::InventoryDef::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks", "InventoryDef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryDef*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryDef::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::InventoryDef::*)(::Il2CppObject*)>(&Steamworks::InventoryDef::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryDef*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryDef::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::InventoryDef::*)()>(&Steamworks::InventoryDef::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryDef*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryDef::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
