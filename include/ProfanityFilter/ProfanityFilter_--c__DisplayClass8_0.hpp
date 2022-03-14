// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ProfanityFilter.ProfanityFilter
#include "ProfanityFilter/ProfanityFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0*, "ProfanityFilter", "ProfanityFilter/<>c__DisplayClass8_0");
// Type namespace: ProfanityFilter
namespace ProfanityFilter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ProfanityFilter.ProfanityFilter/ProfanityFilter.<>c__DisplayClass8_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ProfanityFilter::$$c__DisplayClass8_0 : public ::Il2CppObject {
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
    // public System.Collections.Generic.List`1<System.String> swearList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::StringW>* swearList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::StringW>*
    constexpr operator ::System::Collections::Generic::List_1<::StringW>*() const noexcept {
      return swearList;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> swearList
    ::System::Collections::Generic::List_1<::StringW>*& dyn_swearList();
    // System.Boolean <DetectAllProfanities>b__0(System.String x)
    // Offset: 0x10B3224
    bool $DetectAllProfanities$b__0(::StringW x);
    // public System.Void .ctor()
    // Offset: 0x10B15B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfanityFilter::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfanityFilter::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // ProfanityFilter.ProfanityFilter/ProfanityFilter.<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(ProfanityFilter::$$c__DisplayClass8_0), 16 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __ProfanityFilter_ProfanityFilter_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(ProfanityFilter::$$c__DisplayClass8_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0::$DetectAllProfanities$b__0
// Il2CppName: <DetectAllProfanities>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0::*)(::StringW)>(&ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0::$DetectAllProfanities$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0*), "<DetectAllProfanities>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: ProfanityFilter::ProfanityFilter::$$c__DisplayClass8_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
