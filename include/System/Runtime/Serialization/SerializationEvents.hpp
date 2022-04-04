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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEvents
  class SerializationEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEvents);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEvents*, "System.Runtime.Serialization", "SerializationEvents");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationEvents : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializingMethods
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnSerializingMethods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializedMethods
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnSerializedMethods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializingMethods
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnDeserializingMethods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializedMethods
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* m_OnDeserializedMethods;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializingMethods
    [[deprecated]] ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& dyn_m_OnSerializingMethods();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializedMethods
    [[deprecated]] ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& dyn_m_OnSerializedMethods();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializingMethods
    [[deprecated]] ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& dyn_m_OnDeserializingMethods();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializedMethods
    [[deprecated]] ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*& dyn_m_OnDeserializedMethods();
    // System.Boolean get_HasOnSerializingEvents()
    // Offset: 0x2C8460
    bool get_HasOnSerializingEvents();
    // System.Void .ctor(System.Type t)
    // Offset: 0x2C8330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationEvents* New_ctor(::System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SerializationEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationEvents*, creationType>(t)));
    }
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> GetMethodsWithAttribute(System.Type attribute, System.Type t)
    // Offset: 0x2C7AD0
    ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* GetMethodsWithAttribute(::System::Type* attribute, ::System::Type* t);
    // System.Void InvokeOnSerializing(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2C8100
    void InvokeOnSerializing(::Il2CppObject* obj, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserializing(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2C7ED0
    void InvokeOnDeserializing(::Il2CppObject* obj, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserialized(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2C7CA0
    void InvokeOnDeserialized(::Il2CppObject* obj, ::System::Runtime::Serialization::StreamingContext context);
    // System.Runtime.Serialization.SerializationEventHandler AddOnSerialized(System.Object obj, System.Runtime.Serialization.SerializationEventHandler handler)
    // Offset: 0x2C78D0
    ::System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler);
    // System.Runtime.Serialization.SerializationEventHandler AddOnDeserialized(System.Object obj, System.Runtime.Serialization.SerializationEventHandler handler)
    // Offset: 0x2C76D0
    ::System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::Il2CppObject* obj, ::System::Runtime::Serialization::SerializationEventHandler* handler);
  }; // System.Runtime.Serialization.SerializationEvents
  #pragma pack(pop)
  static check_size<sizeof(SerializationEvents), 40 + sizeof(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)> __System_Runtime_Serialization_SerializationEventsSizeCheck;
  static_assert(sizeof(SerializationEvents) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents
// Il2CppName: get_HasOnSerializingEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::SerializationEvents::*)()>(&System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "get_HasOnSerializingEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute
// Il2CppName: GetMethodsWithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* (System::Runtime::Serialization::SerializationEvents::*)(::System::Type*, ::System::Type*)>(&System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "GetMethodsWithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute, t});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing
// Il2CppName: InvokeOnSerializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationEvents::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "InvokeOnSerializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing
// Il2CppName: InvokeOnDeserializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationEvents::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "InvokeOnDeserializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized
// Il2CppName: InvokeOnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationEvents::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "InvokeOnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::AddOnSerialized
// Il2CppName: AddOnSerialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (System::Runtime::Serialization::SerializationEvents::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationEventHandler*)>(&System::Runtime::Serialization::SerializationEvents::AddOnSerialized)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "AddOnSerialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, handler});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEvents::AddOnDeserialized
// Il2CppName: AddOnDeserialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (System::Runtime::Serialization::SerializationEvents::*)(::Il2CppObject*, ::System::Runtime::Serialization::SerializationEventHandler*)>(&System::Runtime::Serialization::SerializationEvents::AddOnDeserialized)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEvents*), "AddOnDeserialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, handler});
  }
};
