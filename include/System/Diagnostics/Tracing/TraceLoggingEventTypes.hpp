// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.ConcurrentSet`2
#include "System/Diagnostics/Tracing/ConcurrentSet_2.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: NameInfo
  class NameInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingEventTypes
  class TraceLoggingEventTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::TraceLoggingEventTypes);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::TraceLoggingEventTypes*, "System.Diagnostics.Tracing", "TraceLoggingEventTypes");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingEventTypes
  // [TokenAttribute] Offset: FFFFFFFF
  class TraceLoggingEventTypes : public ::Il2CppObject {
    public:
    public:
    // readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*> typeInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>) == 0x8);
    // readonly System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Size: 0x4
    // Offset: 0x20
    ::System::Diagnostics::Tracing::EventTags tags;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventTags) == 0x4);
    // readonly System.Byte level
    // Size: 0x1
    // Offset: 0x24
    uint8_t level;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // readonly System.Byte opcode
    // Size: 0x1
    // Offset: 0x25
    uint8_t opcode;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // readonly System.Diagnostics.Tracing.EventKeywords keywords
    // Size: 0x8
    // Offset: 0x28
    ::System::Diagnostics::Tracing::EventKeywords keywords;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventKeywords) == 0x8);
    // readonly System.Byte[] typeMetadata
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> typeMetadata;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // readonly System.Int32 scratchSize
    // Size: 0x4
    // Offset: 0x38
    int scratchSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 dataCount
    // Size: 0x4
    // Offset: 0x3C
    int dataCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 pinCount
    // Size: 0x4
    // Offset: 0x40
    int pinCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Diagnostics.Tracing.ConcurrentSet`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags>,System.Diagnostics.Tracing.NameInfo> nameInfos
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Diagnostics::Tracing::ConcurrentSet_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*> nameInfos;
    public:
    // Get instance field reference: readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos
    [[deprecated]] ::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>& dyn_typeInfos();
    // Get instance field reference: readonly System.String name
    [[deprecated]] ::StringW& dyn_name();
    // Get instance field reference: readonly System.Diagnostics.Tracing.EventTags tags
    [[deprecated]] ::System::Diagnostics::Tracing::EventTags& dyn_tags();
    // Get instance field reference: readonly System.Byte level
    [[deprecated]] uint8_t& dyn_level();
    // Get instance field reference: readonly System.Byte opcode
    [[deprecated]] uint8_t& dyn_opcode();
    // Get instance field reference: readonly System.Diagnostics.Tracing.EventKeywords keywords
    [[deprecated]] ::System::Diagnostics::Tracing::EventKeywords& dyn_keywords();
    // Get instance field reference: readonly System.Byte[] typeMetadata
    [[deprecated]] ::ArrayW<uint8_t>& dyn_typeMetadata();
    // Get instance field reference: readonly System.Int32 scratchSize
    [[deprecated]] int& dyn_scratchSize();
    // Get instance field reference: readonly System.Int32 dataCount
    [[deprecated]] int& dyn_dataCount();
    // Get instance field reference: readonly System.Int32 pinCount
    [[deprecated]] int& dyn_pinCount();
    // Get instance field reference: private System.Diagnostics.Tracing.ConcurrentSet`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags>,System.Diagnostics.Tracing.NameInfo> nameInfos
    [[deprecated]] ::System::Diagnostics::Tracing::ConcurrentSet_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::Diagnostics::Tracing::EventTags>, ::System::Diagnostics::Tracing::NameInfo*>& dyn_nameInfos();
    // System.String get_Name()
    // Offset: 0x1E1520
    ::StringW get_Name();
    // System.Diagnostics.Tracing.EventTags get_Tags()
    // Offset: 0x217240
    ::System::Diagnostics::Tracing::EventTags get_Tags();
    // System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    // Offset: 0x2F2520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(::StringW name, ::System::Diagnostics::Tracing::EventTags tags, ::ArrayW<::System::Type*> types) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::TraceLoggingEventTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingEventTypes*, creationType>(name, tags, types)));
    }
    // System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, System.Reflection.ParameterInfo[] paramInfos)
    // Offset: 0x2F2120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(::StringW name, ::System::Diagnostics::Tracing::EventTags tags, ::ArrayW<::System::Reflection::ParameterInfo*> paramInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::TraceLoggingEventTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingEventTypes*, creationType>(name, tags, paramInfos)));
    }
    // private System.Void .ctor(System.Diagnostics.Tracing.EventTags tags, System.String defaultName, System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos)
    // Offset: 0x2F1F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(::System::Diagnostics::Tracing::EventTags tags, ::StringW defaultName, ::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*> typeInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::TraceLoggingEventTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingEventTypes*, creationType>(tags, defaultName, typeInfos)));
    }
    // System.Diagnostics.Tracing.NameInfo GetNameInfo(System.String name, System.Diagnostics.Tracing.EventTags tags)
    // Offset: 0x2F19E0
    ::System::Diagnostics::Tracing::NameInfo* GetNameInfo(::StringW name, ::System::Diagnostics::Tracing::EventTags tags);
    // private System.Diagnostics.Tracing.TraceLoggingTypeInfo[] MakeArray(System.Reflection.ParameterInfo[] paramInfos)
    // Offset: 0x2F1C00
    ::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*> MakeArray(::ArrayW<::System::Reflection::ParameterInfo*> paramInfos);
    // static private System.Diagnostics.Tracing.TraceLoggingTypeInfo[] MakeArray(System.Type[] types)
    // Offset: 0x2F1DA0
    static ::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*> MakeArray(::ArrayW<::System::Type*> types);
  }; // System.Diagnostics.Tracing.TraceLoggingEventTypes
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::TraceLoggingEventTypes::*)()>(&System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingEventTypes*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Tags
// Il2CppName: get_Tags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::EventTags (System::Diagnostics::Tracing::TraceLoggingEventTypes::*)()>(&System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Tags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingEventTypes*), "get_Tags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::GetNameInfo
// Il2CppName: GetNameInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::NameInfo* (System::Diagnostics::Tracing::TraceLoggingEventTypes::*)(::StringW, ::System::Diagnostics::Tracing::EventTags)>(&System::Diagnostics::Tracing::TraceLoggingEventTypes::GetNameInfo)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tags = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventTags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingEventTypes*), "GetNameInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, tags});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray
// Il2CppName: MakeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*> (System::Diagnostics::Tracing::TraceLoggingEventTypes::*)(::ArrayW<::System::Reflection::ParameterInfo*>)>(&System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray)> {
  static const MethodInfo* get() {
    static auto* paramInfos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingEventTypes*), "MakeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paramInfos});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray
// Il2CppName: MakeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Diagnostics::Tracing::TraceLoggingTypeInfo*> (*)(::ArrayW<::System::Type*>)>(&System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray)> {
  static const MethodInfo* get() {
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::TraceLoggingEventTypes*), "MakeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
