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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::LocalDataStoreHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreHolder*, "System", "LocalDataStoreHolder");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStoreHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalDataStoreHolder : public ::Il2CppObject {
    public:
    public:
    // private System.LocalDataStore m_Store
    // Size: 0x8
    // Offset: 0x10
    ::System::LocalDataStore* m_Store;
    // Field size check
    static_assert(sizeof(::System::LocalDataStore*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::LocalDataStore*
    constexpr operator ::System::LocalDataStore*() const noexcept {
      return m_Store;
    }
    // Get instance field reference: private System.LocalDataStore m_Store
    [[deprecated]] ::System::LocalDataStore*& dyn_m_Store();
    // public System.LocalDataStore get_Store()
    // Offset: 0x1E1920
    ::System::LocalDataStore* get_Store();
    // public System.Void .ctor(System.LocalDataStore store)
    // Offset: 0x2CC970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStoreHolder* New_ctor(::System::LocalDataStore* store) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::LocalDataStoreHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStoreHolder*, creationType>(store)));
    }
    // protected override System.Void Finalize()
    // Offset: 0x326070
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.LocalDataStoreHolder
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStoreHolder), 16 + sizeof(::System::LocalDataStore*)> __System_LocalDataStoreHolderSizeCheck;
  static_assert(sizeof(LocalDataStoreHolder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalDataStoreHolder::get_Store
// Il2CppName: get_Store
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStore* (System::LocalDataStoreHolder::*)()>(&System::LocalDataStoreHolder::get_Store)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreHolder*), "get_Store", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::LocalDataStoreHolder::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreHolder::*)()>(&System::LocalDataStoreHolder::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreHolder*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
