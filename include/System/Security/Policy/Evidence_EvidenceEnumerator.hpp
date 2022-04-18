// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Policy.Evidence
#include "System/Security/Policy/Evidence.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Policy::Evidence::EvidenceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Policy::Evidence::EvidenceEnumerator*, "System.Security.Policy", "Evidence/EvidenceEnumerator");
// Type namespace: System.Security.Policy
namespace System::Security::Policy {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Policy.Evidence/System.Security.Policy.EvidenceEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class Evidence::EvidenceEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Collections.IEnumerator currentEnum
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IEnumerator* currentEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // private System.Collections.IEnumerator hostEnum
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IEnumerator* hostEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // private System.Collections.IEnumerator assemblyEnum
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::IEnumerator* assemblyEnum;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Collections.IEnumerator currentEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_currentEnum();
    // Get instance field reference: private System.Collections.IEnumerator hostEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_hostEnum();
    // Get instance field reference: private System.Collections.IEnumerator assemblyEnum
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_assemblyEnum();
    // public System.Object get_Current()
    // Offset: 0x5219C0
    ::Il2CppObject* get_Current();
    // public System.Void .ctor(System.Collections.IEnumerator hostenum, System.Collections.IEnumerator assemblyenum)
    // Offset: 0x521950
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Evidence::EvidenceEnumerator* New_ctor(::System::Collections::IEnumerator* hostenum, ::System::Collections::IEnumerator* assemblyenum) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Policy::Evidence::EvidenceEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Evidence::EvidenceEnumerator*, creationType>(hostenum, assemblyenum)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x521830
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x5218D0
    void Reset();
  }; // System.Security.Policy.Evidence/System.Security.Policy.EvidenceEnumerator
  #pragma pack(pop)
  static check_size<sizeof(Evidence::EvidenceEnumerator), 32 + sizeof(::System::Collections::IEnumerator*)> __System_Security_Policy_Evidence_EvidenceEnumeratorSizeCheck;
  static_assert(sizeof(Evidence::EvidenceEnumerator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Policy::Evidence::EvidenceEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Security::Policy::Evidence::EvidenceEnumerator::*)()>(&System::Security::Policy::Evidence::EvidenceEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence::EvidenceEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Policy::Evidence::EvidenceEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Policy::Evidence::EvidenceEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Policy::Evidence::EvidenceEnumerator::*)()>(&System::Security::Policy::Evidence::EvidenceEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence::EvidenceEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Policy::Evidence::EvidenceEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Policy::Evidence::EvidenceEnumerator::*)()>(&System::Security::Policy::Evidence::EvidenceEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Policy::Evidence::EvidenceEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
