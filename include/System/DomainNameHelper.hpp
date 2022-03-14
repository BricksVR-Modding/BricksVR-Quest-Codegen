// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: DomainNameHelper
  class DomainNameHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::DomainNameHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::DomainNameHelper*, "System", "DomainNameHelper");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DomainNameHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class DomainNameHelper : public ::Il2CppObject {
    public:
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, ref System.Boolean loopback)
    // Offset: 0xC7DA18
    static ::StringW ParseCanonicalName(::StringW str, int start, int end, ByRef<bool> loopback);
    // static System.Boolean IsValid(System.Char* name, System.UInt16 pos, ref System.Int32 returnedEnd, ref System.Boolean notCanonical, System.Boolean notImplicitFile)
    // Offset: 0xC7DBB0
    static bool IsValid(::Il2CppChar* name, uint16_t pos, ByRef<int> returnedEnd, ByRef<bool> notCanonical, bool notImplicitFile);
    // static System.Boolean IsValidByIri(System.Char* name, System.UInt16 pos, ref System.Int32 returnedEnd, ref System.Boolean notCanonical, System.Boolean notImplicitFile)
    // Offset: 0xC7DDDC
    static bool IsValidByIri(::Il2CppChar* name, uint16_t pos, ByRef<int> returnedEnd, ByRef<bool> notCanonical, bool notImplicitFile);
    // static System.String IdnEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, ref System.Boolean allAscii, ref System.Boolean atLeastOneValidIdn)
    // Offset: 0xC7DFC4
    static ::StringW IdnEquivalent(::Il2CppChar* hostname, int start, int end, ByRef<bool> allAscii, ByRef<bool> atLeastOneValidIdn);
    // static System.String IdnEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, ref System.Boolean allAscii, ref System.String bidiStrippedHost)
    // Offset: 0xC7E244
    static ::StringW IdnEquivalent(::Il2CppChar* hostname, int start, int end, ByRef<bool> allAscii, ByRef<::StringW> bidiStrippedHost);
    // static private System.Boolean IsIdnAce(System.String input, System.Int32 index)
    // Offset: 0xC7E480
    static bool IsIdnAce(::StringW input, int index);
    // static private System.Boolean IsIdnAce(System.Char* input, System.Int32 index)
    // Offset: 0xC7E434
    static bool IsIdnAce(::Il2CppChar* input, int index);
    // static System.String UnicodeEquivalent(System.String idnHost, System.Char* hostname, System.Int32 start, System.Int32 end)
    // Offset: 0xC7E51C
    static ::StringW UnicodeEquivalent(::StringW idnHost, ::Il2CppChar* hostname, int start, int end);
    // static System.String UnicodeEquivalent(System.Char* hostname, System.Int32 start, System.Int32 end, ref System.Boolean allAscii, ref System.Boolean atLeastOneValidIdn)
    // Offset: 0xC7E644
    static ::StringW UnicodeEquivalent(::Il2CppChar* hostname, int start, int end, ByRef<bool> allAscii, ByRef<bool> atLeastOneValidIdn);
    // static private System.Boolean IsASCIILetterOrDigit(System.Char character, ref System.Boolean notCanonical)
    // Offset: 0xC7DD2C
    static bool IsASCIILetterOrDigit(::Il2CppChar character, ByRef<bool> notCanonical);
    // static private System.Boolean IsValidDomainLabelCharacter(System.Char character, ref System.Boolean notCanonical)
    // Offset: 0xC7DD78
    static bool IsValidDomainLabelCharacter(::Il2CppChar character, ByRef<bool> notCanonical);
  }; // System.DomainNameHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DomainNameHelper::ParseCanonicalName
// Il2CppName: ParseCanonicalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, int, ByRef<bool>)>(&System::DomainNameHelper::ParseCanonicalName)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loopback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "ParseCanonicalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, start, end, loopback});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, uint16_t, ByRef<int>, ByRef<bool>, bool)>(&System::DomainNameHelper::IsValid)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* returnedEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pos, returnedEnd, notCanonical, notImplicitFile});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsValidByIri
// Il2CppName: IsValidByIri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, uint16_t, ByRef<int>, ByRef<bool>, bool)>(&System::DomainNameHelper::IsValidByIri)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* returnedEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsValidByIri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pos, returnedEnd, notCanonical, notImplicitFile});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IdnEquivalent
// Il2CppName: IdnEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppChar*, int, int, ByRef<bool>, ByRef<bool>)>(&System::DomainNameHelper::IdnEquivalent)> {
  static const MethodInfo* get() {
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* atLeastOneValidIdn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IdnEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, start, end, allAscii, atLeastOneValidIdn});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IdnEquivalent
// Il2CppName: IdnEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppChar*, int, int, ByRef<bool>, ByRef<::StringW>)>(&System::DomainNameHelper::IdnEquivalent)> {
  static const MethodInfo* get() {
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* bidiStrippedHost = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IdnEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, start, end, allAscii, bidiStrippedHost});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsIdnAce
// Il2CppName: IsIdnAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int)>(&System::DomainNameHelper::IsIdnAce)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsIdnAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, index});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsIdnAce
// Il2CppName: IsIdnAce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int)>(&System::DomainNameHelper::IsIdnAce)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsIdnAce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, index});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::UnicodeEquivalent
// Il2CppName: UnicodeEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::Il2CppChar*, int, int)>(&System::DomainNameHelper::UnicodeEquivalent)> {
  static const MethodInfo* get() {
    static auto* idnHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "UnicodeEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idnHost, hostname, start, end});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::UnicodeEquivalent
// Il2CppName: UnicodeEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppChar*, int, int, ByRef<bool>, ByRef<bool>)>(&System::DomainNameHelper::UnicodeEquivalent)> {
  static const MethodInfo* get() {
    static auto* hostname = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* allAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* atLeastOneValidIdn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "UnicodeEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostname, start, end, allAscii, atLeastOneValidIdn});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsASCIILetterOrDigit
// Il2CppName: IsASCIILetterOrDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, ByRef<bool>)>(&System::DomainNameHelper::IsASCIILetterOrDigit)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsASCIILetterOrDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, notCanonical});
  }
};
// Writing MetadataGetter for method: System::DomainNameHelper::IsValidDomainLabelCharacter
// Il2CppName: IsValidDomainLabelCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, ByRef<bool>)>(&System::DomainNameHelper::IsValidDomainLabelCharacter)> {
  static const MethodInfo* get() {
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* notCanonical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DomainNameHelper*), "IsValidDomainLabelCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{character, notCanonical});
  }
};
