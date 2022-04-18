// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.ConcurrentSetItem`2
#include "System/Diagnostics/Tracing/ConcurrentSetItem_2.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: NameInfo
  class NameInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::NameInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::NameInfo*, "System.Diagnostics.Tracing", "NameInfo");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.NameInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class NameInfo : public ::System::Diagnostics::Tracing::ConcurrentSetItem_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*> {
    public:
    public:
    // readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Size: 0x4
    // Offset: 0x18
    ::System::Diagnostics::Tracing::EventTags tags;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventTags) == 0x4);
    // readonly System.Int32 identity
    // Size: 0x4
    // Offset: 0x1C
    int identity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Byte[] nameMetadata
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> nameMetadata;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get static field: static private System.Int32 lastIdentity
    static int _get_lastIdentity();
    // Set static field: static private System.Int32 lastIdentity
    static void _set_lastIdentity(int value);
    // Get instance field reference: readonly System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: readonly System.Diagnostics.Tracing.EventTags tags
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventTags& dyn_tags();
    // Get instance field reference: readonly System.Int32 identity
    [[deprecated("Use field access instead!")]] int& dyn_identity();
    // Get instance field reference: readonly System.Byte[] nameMetadata
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_nameMetadata();
    // public System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, System.Int32 typeMetadataSize)
    // Offset: 0x2EE260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameInfo* New_ctor(::StringW name, ::System::Diagnostics::Tracing::EventTags tags, int typeMetadataSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::NameInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameInfo*, creationType>(name, tags, typeMetadataSize)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2EE220
    static void _cctor();
    // static System.Void ReserveEventIDsBelow(System.Int32 eventId)
    // Offset: 0x2EE150
    static void ReserveEventIDsBelow(int eventId);
    // public System.Int32 Compare(System.Diagnostics.Tracing.NameInfo other)
    // Offset: 0x2EE0D0
    int Compare(::System::Diagnostics::Tracing::NameInfo* other);
    // public System.Int32 Compare(System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags> key)
    // Offset: 0x2EE100
    int Compare(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Diagnostics::Tracing::EventTags> key);
    // private System.Int32 Compare(System.String otherName, System.Diagnostics.Tracing.EventTags otherTags)
    // Offset: 0x2EDFD0
    int Compare(::StringW otherName, ::System::Diagnostics::Tracing::EventTags otherTags);
  }; // System.Diagnostics.Tracing.NameInfo
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::NameInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::NameInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Tracing::NameInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::NameInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::NameInfo::ReserveEventIDsBelow
// Il2CppName: ReserveEventIDsBelow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&System::Diagnostics::Tracing::NameInfo::ReserveEventIDsBelow)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::NameInfo*), "ReserveEventIDsBelow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::NameInfo::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::Tracing::NameInfo::*)(::System::Diagnostics::Tracing::NameInfo*)>(&System::Diagnostics::Tracing::NameInfo::Compare)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "NameInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::NameInfo*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::NameInfo::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::Tracing::NameInfo::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Diagnostics::Tracing::EventTags>)>(&System::Diagnostics::Tracing::NameInfo::Compare)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventTags")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::NameInfo*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::NameInfo::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::Tracing::NameInfo::*)(::StringW, ::System::Diagnostics::Tracing::EventTags)>(&System::Diagnostics::Tracing::NameInfo::Compare)> {
  static const MethodInfo* get() {
    static auto* otherName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* otherTags = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventTags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::NameInfo*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherName, otherTags});
  }
};