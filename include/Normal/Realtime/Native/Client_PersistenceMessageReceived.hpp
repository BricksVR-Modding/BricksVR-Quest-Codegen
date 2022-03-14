// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Native.Client
#include "Normal/Realtime/Native/Client.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Native::Client::PersistenceMessageReceived);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::Client::PersistenceMessageReceived*, "Normal.Realtime.Native", "Client/PersistenceMessageReceived");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Native.Client/Normal.Realtime.Native.PersistenceMessageReceived
  // [TokenAttribute] Offset: FFFFFFFF
  class Client::PersistenceMessageReceived : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xAEEC6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Client::PersistenceMessageReceived* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Native::Client::PersistenceMessageReceived::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Client::PersistenceMessageReceived*, creationType>(object, method)));
    }
    // public System.Void Invoke(Normal.Realtime.Native.Client client, System.Int32 senderID, System.Byte[] data, System.Boolean reliable)
    // Offset: 0xAEDF3C
    void Invoke(::Normal::Realtime::Native::Client* client, int senderID, ::ArrayW<uint8_t> data, bool reliable);
    // public System.IAsyncResult BeginInvoke(Normal.Realtime.Native.Client client, System.Int32 senderID, System.Byte[] data, System.Boolean reliable, System.AsyncCallback callback, System.Object object)
    // Offset: 0xAEEC7C
    ::System::IAsyncResult* BeginInvoke(::Normal::Realtime::Native::Client* client, int senderID, ::ArrayW<uint8_t> data, bool reliable, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xAEED40
    void EndInvoke(::System::IAsyncResult* result);
  }; // Normal.Realtime.Native.Client/Normal.Realtime.Native.PersistenceMessageReceived
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::PersistenceMessageReceived::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::PersistenceMessageReceived::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::PersistenceMessageReceived::*)(::Normal::Realtime::Native::Client*, int, ::ArrayW<uint8_t>, bool)>(&Normal::Realtime::Native::Client::PersistenceMessageReceived::Invoke)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client")->byval_arg;
    static auto* senderID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* reliable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client::PersistenceMessageReceived*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, senderID, data, reliable});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::PersistenceMessageReceived::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Normal::Realtime::Native::Client::PersistenceMessageReceived::*)(::Normal::Realtime::Native::Client*, int, ::ArrayW<uint8_t>, bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&Normal::Realtime::Native::Client::PersistenceMessageReceived::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client")->byval_arg;
    static auto* senderID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* reliable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client::PersistenceMessageReceived*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, senderID, data, reliable, callback, object});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::PersistenceMessageReceived::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::PersistenceMessageReceived::*)(::System::IAsyncResult*)>(&Normal::Realtime::Native::Client::PersistenceMessageReceived::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client::PersistenceMessageReceived*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
