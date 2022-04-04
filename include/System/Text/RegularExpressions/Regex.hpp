// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunnerFactory
  class RegexRunnerFactory;
  // Forward declaring type: ExclusiveReference
  class ExclusiveReference;
  // Forward declaring type: SharedReference
  class SharedReference;
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: CachedCodeEntry
  class CachedCodeEntry;
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: MatchCollection
  class MatchCollection;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::Regex);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Regex*, "System.Text.RegularExpressions", "Regex");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Regex
  // [TokenAttribute] Offset: FFFFFFFF
  class Regex : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // protected internal System.String pattern
    // Size: 0x8
    // Offset: 0x10
    ::StringW pattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected internal System.Text.RegularExpressions.RegexRunnerFactory factory
    // Size: 0x8
    // Offset: 0x18
    ::System::Text::RegularExpressions::RegexRunnerFactory* factory;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexRunnerFactory*) == 0x8);
    // protected internal System.Text.RegularExpressions.RegexOptions roptions
    // Size: 0x4
    // Offset: 0x20
    ::System::Text::RegularExpressions::RegexOptions roptions;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexOptions) == 0x4);
    // Padding between fields: roptions and: internalMatchTimeout
    char __padding2[0x4] = {};
    // [OptionalFieldAttribute] Offset: 0xCBCE0
    // protected internal System.TimeSpan internalMatchTimeout
    // Size: 0x8
    // Offset: 0x28
    ::System::TimeSpan internalMatchTimeout;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // protected internal System.Collections.Hashtable caps
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // protected internal System.Collections.Hashtable capnames
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Hashtable* capnames;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // protected internal System.String[] capslist
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::StringW> capslist;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // protected internal System.Int32 capsize
    // Size: 0x4
    // Offset: 0x48
    int capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capsize and: runnerref
    char __padding7[0x4] = {};
    // System.Text.RegularExpressions.ExclusiveReference runnerref
    // Size: 0x8
    // Offset: 0x50
    ::System::Text::RegularExpressions::ExclusiveReference* runnerref;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::ExclusiveReference*) == 0x8);
    // System.Text.RegularExpressions.SharedReference replref
    // Size: 0x8
    // Offset: 0x58
    ::System::Text::RegularExpressions::SharedReference* replref;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::SharedReference*) == 0x8);
    // System.Text.RegularExpressions.RegexCode code
    // Size: 0x8
    // Offset: 0x60
    ::System::Text::RegularExpressions::RegexCode* code;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexCode*) == 0x8);
    // System.Boolean refsInitialized
    // Size: 0x1
    // Offset: 0x68
    bool refsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private readonly System.TimeSpan MaximumMatchTimeout
    static ::System::TimeSpan _get_MaximumMatchTimeout();
    // Set static field: static private readonly System.TimeSpan MaximumMatchTimeout
    static void _set_MaximumMatchTimeout(::System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan InfiniteMatchTimeout
    static ::System::TimeSpan _get_InfiniteMatchTimeout();
    // Set static field: static public readonly System.TimeSpan InfiniteMatchTimeout
    static void _set_InfiniteMatchTimeout(::System::TimeSpan value);
    // Get static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
    static ::System::TimeSpan _get_FallbackDefaultMatchTimeout();
    // Set static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
    static void _set_FallbackDefaultMatchTimeout(::System::TimeSpan value);
    // Get static field: static readonly System.TimeSpan DefaultMatchTimeout
    static ::System::TimeSpan _get_DefaultMatchTimeout();
    // Set static field: static readonly System.TimeSpan DefaultMatchTimeout
    static void _set_DefaultMatchTimeout(::System::TimeSpan value);
    // Get static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
    static ::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>* _get_livecode();
    // Set static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
    static void _set_livecode(::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>* value);
    // Get static field: static System.Int32 cacheSize
    static int _get_cacheSize();
    // Set static field: static System.Int32 cacheSize
    static void _set_cacheSize(int value);
    // Get instance field reference: protected internal System.String pattern
    [[deprecated]] ::StringW& dyn_pattern();
    // Get instance field reference: protected internal System.Text.RegularExpressions.RegexRunnerFactory factory
    [[deprecated]] ::System::Text::RegularExpressions::RegexRunnerFactory*& dyn_factory();
    // Get instance field reference: protected internal System.Text.RegularExpressions.RegexOptions roptions
    [[deprecated]] ::System::Text::RegularExpressions::RegexOptions& dyn_roptions();
    // Get instance field reference: protected internal System.TimeSpan internalMatchTimeout
    [[deprecated]] ::System::TimeSpan& dyn_internalMatchTimeout();
    // Get instance field reference: protected internal System.Collections.Hashtable caps
    [[deprecated]] ::System::Collections::Hashtable*& dyn_caps();
    // Get instance field reference: protected internal System.Collections.Hashtable capnames
    [[deprecated]] ::System::Collections::Hashtable*& dyn_capnames();
    // Get instance field reference: protected internal System.String[] capslist
    [[deprecated]] ::ArrayW<::StringW>& dyn_capslist();
    // Get instance field reference: protected internal System.Int32 capsize
    [[deprecated]] int& dyn_capsize();
    // Get instance field reference: System.Text.RegularExpressions.ExclusiveReference runnerref
    [[deprecated]] ::System::Text::RegularExpressions::ExclusiveReference*& dyn_runnerref();
    // Get instance field reference: System.Text.RegularExpressions.SharedReference replref
    [[deprecated]] ::System::Text::RegularExpressions::SharedReference*& dyn_replref();
    // Get instance field reference: System.Text.RegularExpressions.RegexCode code
    [[deprecated]] ::System::Text::RegularExpressions::RegexCode*& dyn_code();
    // Get instance field reference: System.Boolean refsInitialized
    [[deprecated]] bool& dyn_refsInitialized();
    // public System.Text.RegularExpressions.RegexOptions get_Options()
    // Offset: 0x217240
    ::System::Text::RegularExpressions::RegexOptions get_Options();
    // public System.TimeSpan get_MatchTimeout()
    // Offset: 0x1E1930
    ::System::TimeSpan get_MatchTimeout();
    // public System.Boolean get_RightToLeft()
    // Offset: 0x419ED0
    bool get_RightToLeft();
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x41A180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::StringW pattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(pattern)));
    }
    // public System.Void .ctor(System.String pattern, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x41A820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(pattern, options)));
    }
    // private System.Void .ctor(System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout, System.Boolean useCache)
    // Offset: 0x41A210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, bool useCache) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(pattern, options, matchTimeout, useCache)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x41A8C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x41A050
    static void _cctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x419E10
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext context);
    // static protected internal System.Void ValidateMatchTimeout(System.TimeSpan matchTimeout)
    // Offset: 0x419EE0
    static void ValidateMatchTimeout(::System::TimeSpan matchTimeout);
    // static private System.TimeSpan InitDefaultMatchTimeout()
    // Offset: 0x418690
    static ::System::TimeSpan InitDefaultMatchTimeout();
    // public System.String GroupNameFromNumber(System.Int32 i)
    // Offset: 0x418520
    ::StringW GroupNameFromNumber(int i);
    // static public System.Boolean IsMatch(System.String input, System.String pattern)
    // Offset: 0x418A30
    static bool IsMatch(::StringW input, ::StringW pattern);
    // static public System.Boolean IsMatch(System.String input, System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout)
    // Offset: 0x418C90
    static bool IsMatch(::StringW input, ::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);
    // public System.Boolean IsMatch(System.String input)
    // Offset: 0x418BB0
    bool IsMatch(::StringW input);
    // public System.Boolean IsMatch(System.String input, System.Int32 startat)
    // Offset: 0x418980
    bool IsMatch(::StringW input, int startat);
    // public System.Text.RegularExpressions.Match Match(System.String input)
    // Offset: 0x4190B0
    ::System::Text::RegularExpressions::Match* Match(::StringW input);
    // public System.Text.RegularExpressions.Match Match(System.String input, System.Int32 startat)
    // Offset: 0x419010
    ::System::Text::RegularExpressions::Match* Match(::StringW input, int startat);
    // public System.Text.RegularExpressions.MatchCollection Matches(System.String input)
    // Offset: 0x419180
    ::System::Text::RegularExpressions::MatchCollection* Matches(::StringW input);
    // public System.Text.RegularExpressions.MatchCollection Matches(System.String input, System.Int32 startat)
    // Offset: 0x419330
    ::System::Text::RegularExpressions::MatchCollection* Matches(::StringW input, int startat);
    // static public System.String Replace(System.String input, System.String pattern, System.String replacement)
    // Offset: 0x419570
    static ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement);
    // static public System.String Replace(System.String input, System.String pattern, System.String replacement, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout)
    // Offset: 0x4196D0
    static ::StringW Replace(::StringW input, ::StringW pattern, ::StringW replacement, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout);
    // public System.String Replace(System.String input, System.String replacement)
    // Offset: 0x4194C0
    ::StringW Replace(::StringW input, ::StringW replacement);
    // public System.String Replace(System.String input, System.String replacement, System.Int32 count, System.Int32 startat)
    // Offset: 0x4197F0
    ::StringW Replace(::StringW input, ::StringW replacement, int count, int startat);
    // protected System.Void InitializeReferences()
    // Offset: 0x4188B0
    void InitializeReferences();
    // System.Text.RegularExpressions.Match Run(System.Boolean quick, System.Int32 prevlen, System.String input, System.Int32 beginning, System.Int32 length, System.Int32 startat)
    // Offset: 0x4199B0
    ::System::Text::RegularExpressions::Match* Run(bool quick, int prevlen, ::StringW input, int beginning, int length, int startat);
    // static private System.Text.RegularExpressions.CachedCodeEntry LookupCachedAndUpdate(System.String key)
    // Offset: 0x418DE0
    static ::System::Text::RegularExpressions::CachedCodeEntry* LookupCachedAndUpdate(::StringW key);
    // private System.Text.RegularExpressions.CachedCodeEntry CacheCode(System.String key)
    // Offset: 0x418110
    ::System::Text::RegularExpressions::CachedCodeEntry* CacheCode(::StringW key);
    // protected System.Boolean UseOptionR()
    // Offset: 0x419ED0
    bool UseOptionR();
    // System.Boolean UseOptionInvariant()
    // Offset: 0x419EC0
    bool UseOptionInvariant();
    // protected System.Void .ctor()
    // Offset: 0x41AA10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Regex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1E1920
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Text.RegularExpressions.Regex
  #pragma pack(pop)
  static check_size<sizeof(Regex), 104 + sizeof(bool)> __System_Text_RegularExpressions_RegexSizeCheck;
  static_assert(sizeof(Regex) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::get_Options
// Il2CppName: get_Options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexOptions (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::get_Options)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "get_Options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::get_MatchTimeout
// Il2CppName: get_MatchTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::get_MatchTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "get_MatchTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::get_RightToLeft
// Il2CppName: get_RightToLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::get_RightToLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "get_RightToLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::RegularExpressions::Regex::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Regex::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::RegularExpressions::Regex::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{si, context});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::ValidateMatchTimeout
// Il2CppName: ValidateMatchTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::TimeSpan)>(&System::Text::RegularExpressions::Regex::ValidateMatchTimeout)> {
  static const MethodInfo* get() {
    static auto* matchTimeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "ValidateMatchTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matchTimeout});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::InitDefaultMatchTimeout
// Il2CppName: InitDefaultMatchTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)()>(&System::Text::RegularExpressions::Regex::InitDefaultMatchTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "InitDefaultMatchTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::GroupNameFromNumber
// Il2CppName: GroupNameFromNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Regex::*)(int)>(&System::Text::RegularExpressions::Regex::GroupNameFromNumber)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "GroupNameFromNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::IsMatch
// Il2CppName: IsMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&System::Text::RegularExpressions::Regex::IsMatch)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "IsMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, pattern});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::IsMatch
// Il2CppName: IsMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan)>(&System::Text::RegularExpressions::Regex::IsMatch)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexOptions")->byval_arg;
    static auto* matchTimeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "IsMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, pattern, options, matchTimeout});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::IsMatch
// Il2CppName: IsMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Regex::*)(::StringW)>(&System::Text::RegularExpressions::Regex::IsMatch)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "IsMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::IsMatch
// Il2CppName: IsMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Regex::*)(::StringW, int)>(&System::Text::RegularExpressions::Regex::IsMatch)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "IsMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, startat});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::Regex::*)(::StringW)>(&System::Text::RegularExpressions::Regex::Match)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::Regex::*)(::StringW, int)>(&System::Text::RegularExpressions::Regex::Match)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, startat});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::MatchCollection* (System::Text::RegularExpressions::Regex::*)(::StringW)>(&System::Text::RegularExpressions::Regex::Matches)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::MatchCollection* (System::Text::RegularExpressions::Regex::*)(::StringW, int)>(&System::Text::RegularExpressions::Regex::Matches)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, startat});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&System::Text::RegularExpressions::Regex::Replace)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* replacement = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, pattern, replacement});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan)>(&System::Text::RegularExpressions::Regex::Replace)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* replacement = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexOptions")->byval_arg;
    static auto* matchTimeout = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, pattern, replacement, options, matchTimeout});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Regex::*)(::StringW, ::StringW)>(&System::Text::RegularExpressions::Regex::Replace)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* replacement = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, replacement});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Regex::*)(::StringW, ::StringW, int, int)>(&System::Text::RegularExpressions::Regex::Replace)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* replacement = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, replacement, count, startat});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::InitializeReferences
// Il2CppName: InitializeReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::InitializeReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "InitializeReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::Regex::*)(bool, int, ::StringW, int, int, int)>(&System::Text::RegularExpressions::Regex::Run)> {
  static const MethodInfo* get() {
    static auto* quick = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* prevlen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* beginning = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{quick, prevlen, input, beginning, length, startat});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::LookupCachedAndUpdate
// Il2CppName: LookupCachedAndUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::CachedCodeEntry* (*)(::StringW)>(&System::Text::RegularExpressions::Regex::LookupCachedAndUpdate)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "LookupCachedAndUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::CacheCode
// Il2CppName: CacheCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::CachedCodeEntry* (System::Text::RegularExpressions::Regex::*)(::StringW)>(&System::Text::RegularExpressions::Regex::CacheCode)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "CacheCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::UseOptionR
// Il2CppName: UseOptionR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::UseOptionR)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "UseOptionR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::UseOptionInvariant
// Il2CppName: UseOptionInvariant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::UseOptionInvariant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "UseOptionInvariant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::Regex::*)()>(&System::Text::RegularExpressions::Regex::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::Regex*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
