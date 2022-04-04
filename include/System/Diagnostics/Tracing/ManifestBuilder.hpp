// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.EventManifestOptions
#include "System/Diagnostics/Tracing/EventManifestOptions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
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
  // Forward declaring type: EventAttribute
  class EventAttribute;
  // Forward declaring type: EventLevel
  struct EventLevel;
  // Forward declaring type: EventTask
  struct EventTask;
  // Forward declaring type: EventOpcode
  struct EventOpcode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ManifestBuilder
  class ManifestBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::ManifestBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::ManifestBuilder*, "System.Diagnostics.Tracing", "ManifestBuilder");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ManifestBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class ManifestBuilder : public ::Il2CppObject {
    public:
    // Nested type: ::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: ::System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1
    class $$c__DisplayClass22_1;
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> opcodeTab
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<int, ::StringW>* opcodeTab;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::StringW>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> taskTab
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::StringW>* taskTab;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::StringW>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.UInt64,System.String> keywordTab
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::StringW>* keywordTab;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<uint64_t, ::StringW>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Type> mapsTab
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>* mapsTab;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> stringTab
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* stringTab;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // private System.Text.StringBuilder sb
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::StringBuilder* sb;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Text.StringBuilder events
    // Size: 0x8
    // Offset: 0x40
    ::System::Text::StringBuilder* events;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Text.StringBuilder templates
    // Size: 0x8
    // Offset: 0x48
    ::System::Text::StringBuilder* templates;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Resources.ResourceManager resources
    // Size: 0x8
    // Offset: 0x50
    ::System::Resources::ResourceManager* resources;
    // Field size check
    static_assert(sizeof(::System::Resources::ResourceManager*) == 0x8);
    // private System.Diagnostics.Tracing.EventManifestOptions flags
    // Size: 0x4
    // Offset: 0x58
    ::System::Diagnostics::Tracing::EventManifestOptions flags;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventManifestOptions) == 0x4);
    // Padding between fields: flags and: errors
    char __padding9[0x4] = {};
    // private System.Collections.Generic.IList`1<System.String> errors
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::IList_1<::StringW>* errors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> perEventByteArrayArgIndices
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int>*>* perEventByteArrayArgIndices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int>*>*) == 0x8);
    // private System.String eventName
    // Size: 0x8
    // Offset: 0x70
    ::StringW eventName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 numParams
    // Size: 0x4
    // Offset: 0x78
    int numParams;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numParams and: byteArrArgIndices
    char __padding13[0x4] = {};
    // private System.Collections.Generic.List`1<System.Int32> byteArrArgIndices
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<int>* byteArrArgIndices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.String> opcodeTab
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<int, ::StringW>*& dyn_opcodeTab();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.String> taskTab
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<int, ::StringW>*& dyn_taskTab();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.UInt64,System.String> keywordTab
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<uint64_t, ::StringW>*& dyn_keywordTab();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Type> mapsTab
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*& dyn_mapsTab();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.String> stringTab
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_stringTab();
    // Get instance field reference: private System.Text.StringBuilder sb
    [[deprecated]] ::System::Text::StringBuilder*& dyn_sb();
    // Get instance field reference: private System.Text.StringBuilder events
    [[deprecated]] ::System::Text::StringBuilder*& dyn_events();
    // Get instance field reference: private System.Text.StringBuilder templates
    [[deprecated]] ::System::Text::StringBuilder*& dyn_templates();
    // Get instance field reference: private System.Resources.ResourceManager resources
    [[deprecated]] ::System::Resources::ResourceManager*& dyn_resources();
    // Get instance field reference: private System.Diagnostics.Tracing.EventManifestOptions flags
    [[deprecated]] ::System::Diagnostics::Tracing::EventManifestOptions& dyn_flags();
    // Get instance field reference: private System.Collections.Generic.IList`1<System.String> errors
    [[deprecated]] ::System::Collections::Generic::IList_1<::StringW>*& dyn_errors();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> perEventByteArrayArgIndices
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int>*>*& dyn_perEventByteArrayArgIndices();
    // Get instance field reference: private System.String eventName
    [[deprecated]] ::StringW& dyn_eventName();
    // Get instance field reference: private System.Int32 numParams
    [[deprecated]] int& dyn_numParams();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> byteArrArgIndices
    [[deprecated]] ::System::Collections::Generic::List_1<int>*& dyn_byteArrArgIndices();
    // public System.Collections.Generic.IList`1<System.String> get_Errors()
    // Offset: 0x290600
    ::System::Collections::Generic::IList_1<::StringW>* get_Errors();
    // public System.Void .ctor(System.String providerName, System.Guid providerGuid, System.String dllName, System.Resources.ResourceManager resources, System.Diagnostics.Tracing.EventManifestOptions flags)
    // Offset: 0x2EDC30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBuilder* New_ctor(::StringW providerName, ::System::Guid providerGuid, ::StringW dllName, ::System::Resources::ResourceManager* resources, ::System::Diagnostics::Tracing::EventManifestOptions flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ManifestBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBuilder*, creationType>(providerName, providerGuid, dllName, resources, flags)));
    }
    // public System.Void AddOpcode(System.String name, System.Int32 value)
    // Offset: 0x2E9A30
    void AddOpcode(::StringW name, int value);
    // public System.Void AddTask(System.String name, System.Int32 value)
    // Offset: 0x2E9D70
    void AddTask(::StringW name, int value);
    // public System.Void AddKeyword(System.String name, System.UInt64 value)
    // Offset: 0x2E94C0
    void AddKeyword(::StringW name, uint64_t value);
    // public System.Void StartEvent(System.String eventName, System.Diagnostics.Tracing.EventAttribute eventAttribute)
    // Offset: 0x2EC870
    void StartEvent(::StringW eventName, ::System::Diagnostics::Tracing::EventAttribute* eventAttribute);
    // public System.Void AddEventParameter(System.Type type, System.String name)
    // Offset: 0x2E8F70
    void AddEventParameter(::System::Type* type, ::StringW name);
    // public System.Void EndEvent()
    // Offset: 0x2EB700
    void EndEvent();
    // public System.Byte[] CreateManifest()
    // Offset: 0x2EB6C0
    ::ArrayW<uint8_t> CreateManifest();
    // public System.Void ManifestError(System.String msg, System.Boolean runtimeCritical)
    // Offset: 0x2EC760
    void ManifestError(::StringW msg, bool runtimeCritical);
    // private System.String CreateManifestString()
    // Offset: 0x2EA0F0
    ::StringW CreateManifestString();
    // private System.Void WriteNameAndMessageAttribs(System.Text.StringBuilder stringBuilder, System.String elementName, System.String name)
    // Offset: 0x2EDB70
    void WriteNameAndMessageAttribs(::System::Text::StringBuilder* stringBuilder, ::StringW elementName, ::StringW name);
    // private System.Void WriteMessageAttrib(System.Text.StringBuilder stringBuilder, System.String elementName, System.String name, System.String value)
    // Offset: 0x2ED950
    void WriteMessageAttrib(::System::Text::StringBuilder* stringBuilder, ::StringW elementName, ::StringW name, ::StringW value);
    // System.String GetLocalizedMessage(System.String key, System.Globalization.CultureInfo ci, System.Boolean etwFormat)
    // Offset: 0x2EBC30
    ::StringW GetLocalizedMessage(::StringW key, ::System::Globalization::CultureInfo* ci, bool etwFormat);
    // static private System.Collections.Generic.List`1<System.Globalization.CultureInfo> GetSupportedCultures(System.Resources.ResourceManager resources)
    // Offset: 0x2EC000
    static ::System::Collections::Generic::List_1<::System::Globalization::CultureInfo*>* GetSupportedCultures(::System::Resources::ResourceManager* resources);
    // static private System.String GetLevelName(System.Diagnostics.Tracing.EventLevel level)
    // Offset: 0x2EBB80
    static ::StringW GetLevelName(::System::Diagnostics::Tracing::EventLevel level);
    // private System.String GetTaskName(System.Diagnostics.Tracing.EventTask task, System.String eventName)
    // Offset: 0x2EC1B0
    ::StringW GetTaskName(::System::Diagnostics::Tracing::EventTask task, ::StringW eventName);
    // private System.String GetOpcodeName(System.Diagnostics.Tracing.EventOpcode opcode, System.String eventName)
    // Offset: 0x2EBD40
    ::StringW GetOpcodeName(::System::Diagnostics::Tracing::EventOpcode opcode, ::StringW eventName);
    // private System.String GetKeywords(System.UInt64 keywords, System.String eventName)
    // Offset: 0x2EB8F0
    ::StringW GetKeywords(uint64_t keywords, ::StringW eventName);
    // private System.String GetTypeName(System.Type type)
    // Offset: 0x2EC2C0
    ::StringW GetTypeName(::System::Type* type);
    // static private System.Void UpdateStringBuilder(ref System.Text.StringBuilder stringBuilder, System.String eventMessage, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x2ED8A0
    static void UpdateStringBuilder(ByRef<::System::Text::StringBuilder*> stringBuilder, ::StringW eventMessage, int startIndex, int count);
    // private System.String TranslateToManifestConvention(System.String eventMessage, System.String evtName)
    // Offset: 0x2ECE20
    ::StringW TranslateToManifestConvention(::StringW eventMessage, ::StringW evtName);
    // private System.Int32 TranslateIndexToManifestConvention(System.Int32 idx, System.String evtName)
    // Offset: 0x2ECCF0
    int TranslateIndexToManifestConvention(int idx, ::StringW evtName);
  }; // System.Diagnostics.Tracing.ManifestBuilder
  #pragma pack(pop)
  static check_size<sizeof(ManifestBuilder), 128 + sizeof(::System::Collections::Generic::List_1<int>*)> __System_Diagnostics_Tracing_ManifestBuilderSizeCheck;
  static_assert(sizeof(ManifestBuilder) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::get_Errors
// Il2CppName: get_Errors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::StringW>* (System::Diagnostics::Tracing::ManifestBuilder::*)()>(&System::Diagnostics::Tracing::ManifestBuilder::get_Errors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "get_Errors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::AddOpcode
// Il2CppName: AddOpcode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, int)>(&System::Diagnostics::Tracing::ManifestBuilder::AddOpcode)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "AddOpcode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::AddTask
// Il2CppName: AddTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, int)>(&System::Diagnostics::Tracing::ManifestBuilder::AddTask)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "AddTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::AddKeyword
// Il2CppName: AddKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, uint64_t)>(&System::Diagnostics::Tracing::ManifestBuilder::AddKeyword)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "AddKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::StartEvent
// Il2CppName: StartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, ::System::Diagnostics::Tracing::EventAttribute*)>(&System::Diagnostics::Tracing::ManifestBuilder::StartEvent)> {
  static const MethodInfo* get() {
    static auto* eventName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventAttribute = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "StartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventName, eventAttribute});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::AddEventParameter
// Il2CppName: AddEventParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::System::Type*, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::AddEventParameter)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "AddEventParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, name});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::EndEvent
// Il2CppName: EndEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)()>(&System::Diagnostics::Tracing::ManifestBuilder::EndEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "EndEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::CreateManifest
// Il2CppName: CreateManifest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Diagnostics::Tracing::ManifestBuilder::*)()>(&System::Diagnostics::Tracing::ManifestBuilder::CreateManifest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "CreateManifest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::ManifestError
// Il2CppName: ManifestError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, bool)>(&System::Diagnostics::Tracing::ManifestBuilder::ManifestError)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* runtimeCritical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "ManifestError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, runtimeCritical});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::CreateManifestString
// Il2CppName: CreateManifestString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)()>(&System::Diagnostics::Tracing::ManifestBuilder::CreateManifestString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "CreateManifestString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::WriteNameAndMessageAttribs
// Il2CppName: WriteNameAndMessageAttribs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::System::Text::StringBuilder*, ::StringW, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::WriteNameAndMessageAttribs)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* elementName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "WriteNameAndMessageAttribs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder, elementName, name});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::WriteMessageAttrib
// Il2CppName: WriteMessageAttrib
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ManifestBuilder::*)(::System::Text::StringBuilder*, ::StringW, ::StringW, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::WriteMessageAttrib)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* elementName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "WriteMessageAttrib", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder, elementName, name, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetLocalizedMessage
// Il2CppName: GetLocalizedMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, ::System::Globalization::CultureInfo*, bool)>(&System::Diagnostics::Tracing::ManifestBuilder::GetLocalizedMessage)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ci = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* etwFormat = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetLocalizedMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, ci, etwFormat});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetSupportedCultures
// Il2CppName: GetSupportedCultures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Globalization::CultureInfo*>* (*)(::System::Resources::ResourceManager*)>(&System::Diagnostics::Tracing::ManifestBuilder::GetSupportedCultures)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetSupportedCultures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetLevelName
// Il2CppName: GetLevelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Diagnostics::Tracing::EventLevel)>(&System::Diagnostics::Tracing::ManifestBuilder::GetLevelName)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetLevelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetTaskName
// Il2CppName: GetTaskName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)(::System::Diagnostics::Tracing::EventTask, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::GetTaskName)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventTask")->byval_arg;
    static auto* eventName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetTaskName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, eventName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetOpcodeName
// Il2CppName: GetOpcodeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)(::System::Diagnostics::Tracing::EventOpcode, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::GetOpcodeName)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventOpcode")->byval_arg;
    static auto* eventName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetOpcodeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, eventName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetKeywords
// Il2CppName: GetKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)(uint64_t, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::GetKeywords)> {
  static const MethodInfo* get() {
    static auto* keywords = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eventName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keywords, eventName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::GetTypeName
// Il2CppName: GetTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)(::System::Type*)>(&System::Diagnostics::Tracing::ManifestBuilder::GetTypeName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "GetTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::UpdateStringBuilder
// Il2CppName: UpdateStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Text::StringBuilder*>, ::StringW, int, int)>(&System::Diagnostics::Tracing::ManifestBuilder::UpdateStringBuilder)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* eventMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "UpdateStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder, eventMessage, startIndex, count});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::TranslateToManifestConvention
// Il2CppName: TranslateToManifestConvention
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ManifestBuilder::*)(::StringW, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::TranslateToManifestConvention)> {
  static const MethodInfo* get() {
    static auto* eventMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* evtName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "TranslateToManifestConvention", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventMessage, evtName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ManifestBuilder::TranslateIndexToManifestConvention
// Il2CppName: TranslateIndexToManifestConvention
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::Tracing::ManifestBuilder::*)(int, ::StringW)>(&System::Diagnostics::Tracing::ManifestBuilder::TranslateIndexToManifestConvention)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* evtName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ManifestBuilder*), "TranslateIndexToManifestConvention", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, evtName});
  }
};
