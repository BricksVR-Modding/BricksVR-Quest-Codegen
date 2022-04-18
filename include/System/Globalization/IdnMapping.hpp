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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Punycode
  class Punycode;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: IdnMapping
  class IdnMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::IdnMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::IdnMapping*, "System.Globalization", "IdnMapping");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.IdnMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class IdnMapping : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean allow_unassigned
    // Size: 0x1
    // Offset: 0x10
    bool allow_unassigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean use_std3
    // Size: 0x1
    // Offset: 0x11
    bool use_std3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: use_std3 and: puny
    char __padding1[0x6] = {};
    // private System.Globalization.Punycode puny
    // Size: 0x8
    // Offset: 0x18
    ::System::Globalization::Punycode* puny;
    // Field size check
    static_assert(sizeof(::System::Globalization::Punycode*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean allow_unassigned
    [[deprecated("Use field access instead!")]] bool& dyn_allow_unassigned();
    // Get instance field reference: private System.Boolean use_std3
    [[deprecated("Use field access instead!")]] bool& dyn_use_std3();
    // Get instance field reference: private System.Globalization.Punycode puny
    [[deprecated("Use field access instead!")]] ::System::Globalization::Punycode*& dyn_puny();
    // public System.String GetAscii(System.String unicode)
    // Offset: 0x51CB10
    ::StringW GetAscii(::StringW unicode);
    // public System.String GetAscii(System.String unicode, System.Int32 index, System.Int32 count)
    // Offset: 0x51C9F0
    ::StringW GetAscii(::StringW unicode, int index, int count);
    // private System.String Convert(System.String input, System.Int32 index, System.Int32 count, System.Boolean toAscii)
    // Offset: 0x51C720
    ::StringW Convert(::StringW input, int index, int count, bool toAscii);
    // private System.String ToAscii(System.String s, System.Int32 offset)
    // Offset: 0x51CF60
    ::StringW ToAscii(::StringW s, int offset);
    // private System.Void VerifyLength(System.String s, System.Int32 offset)
    // Offset: 0x51D410
    void VerifyLength(::StringW s, int offset);
    // private System.String NamePrep(System.String s, System.Int32 offset)
    // Offset: 0x51CE30
    ::StringW NamePrep(::StringW s, int offset);
    // private System.Void VerifyProhibitedCharacters(System.String s, System.Int32 offset)
    // Offset: 0x51D510
    void VerifyProhibitedCharacters(::StringW s, int offset);
    // private System.Void VerifyStd3AsciiRules(System.String s, System.Int32 offset)
    // Offset: 0x51D710
    void VerifyStd3AsciiRules(::StringW s, int offset);
    // public System.String GetUnicode(System.String ascii)
    // Offset: 0x51CD40
    ::StringW GetUnicode(::StringW ascii);
    // public System.String GetUnicode(System.String ascii, System.Int32 index, System.Int32 count)
    // Offset: 0x51CC20
    ::StringW GetUnicode(::StringW ascii, int index, int count);
    // private System.String ToUnicode(System.String s, System.Int32 offset)
    // Offset: 0x51D270
    ::StringW ToUnicode(::StringW s, int offset);
    // public System.Void .ctor()
    // Offset: 0x51D930
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdnMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::IdnMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdnMapping*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x51C970
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x51CC00
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Globalization.IdnMapping
  #pragma pack(pop)
  static check_size<sizeof(IdnMapping), 24 + sizeof(::System::Globalization::Punycode*)> __System_Globalization_IdnMappingSizeCheck;
  static_assert(sizeof(IdnMapping) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetAscii
// Il2CppName: GetAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW)>(&System::Globalization::IdnMapping::GetAscii)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetAscii
// Il2CppName: GetAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW, int, int)>(&System::Globalization::IdnMapping::GetAscii)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, index, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW, int, int, bool)>(&System::Globalization::IdnMapping::Convert)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* toAscii = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, index, count, toAscii});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::ToAscii
// Il2CppName: ToAscii
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW, int)>(&System::Globalization::IdnMapping::ToAscii)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "ToAscii", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::VerifyLength
// Il2CppName: VerifyLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::IdnMapping::*)(::StringW, int)>(&System::Globalization::IdnMapping::VerifyLength)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "VerifyLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::NamePrep
// Il2CppName: NamePrep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW, int)>(&System::Globalization::IdnMapping::NamePrep)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "NamePrep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::VerifyProhibitedCharacters
// Il2CppName: VerifyProhibitedCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::IdnMapping::*)(::StringW, int)>(&System::Globalization::IdnMapping::VerifyProhibitedCharacters)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "VerifyProhibitedCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::VerifyStd3AsciiRules
// Il2CppName: VerifyStd3AsciiRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::IdnMapping::*)(::StringW, int)>(&System::Globalization::IdnMapping::VerifyStd3AsciiRules)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "VerifyStd3AsciiRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetUnicode
// Il2CppName: GetUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW)>(&System::Globalization::IdnMapping::GetUnicode)> {
  static const MethodInfo* get() {
    static auto* ascii = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ascii});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetUnicode
// Il2CppName: GetUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW, int, int)>(&System::Globalization::IdnMapping::GetUnicode)> {
  static const MethodInfo* get() {
    static auto* ascii = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ascii, index, count});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::ToUnicode
// Il2CppName: ToUnicode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::IdnMapping::*)(::StringW, int)>(&System::Globalization::IdnMapping::ToUnicode)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "ToUnicode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, offset});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::IdnMapping::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::IdnMapping::*)(::Il2CppObject*)>(&System::Globalization::IdnMapping::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Globalization::IdnMapping::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::IdnMapping::*)()>(&System::Globalization::IdnMapping::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::IdnMapping*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
