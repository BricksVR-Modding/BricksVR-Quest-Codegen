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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0*, "ProfanityFilter", "ProfanityFilter/<>c__DisplayClass13_0");
// Type namespace: ProfanityFilter
namespace ProfanityFilter {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ProfanityFilter.ProfanityFilter/ProfanityFilter.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ProfanityFilter::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String term
    // Size: 0x8
    // Offset: 0x10
    ::StringW term;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return term;
    }
    // Get instance field reference: public System.String term
    [[deprecated("Use field access instead!")]] ::StringW& dyn_term();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfanityFilter::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfanityFilter::$$c__DisplayClass13_0*, creationType>()));
    }
    // System.Boolean <ContainsProfanity>b__0(System.String word)
    // Offset: 0x6DC1F0
    bool $ContainsProfanity$b__0(::StringW word);
  }; // ProfanityFilter.ProfanityFilter/ProfanityFilter.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(ProfanityFilter::$$c__DisplayClass13_0), 16 + sizeof(::StringW)> __ProfanityFilter_ProfanityFilter_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(ProfanityFilter::$$c__DisplayClass13_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0::$ContainsProfanity$b__0
// Il2CppName: <ContainsProfanity>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0::*)(::StringW)>(&ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0::$ContainsProfanity$b__0)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ProfanityFilter::ProfanityFilter::$$c__DisplayClass13_0*), "<ContainsProfanity>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word});
  }
};
