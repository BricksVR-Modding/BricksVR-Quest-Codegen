// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message/Oculus.Platform.MessageType
#include "Oculus/Platform/Message.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Callback
  class Callback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Callback*, "Oculus.Platform", "Callback");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Callback
  // [TokenAttribute] Offset: FFFFFFFF
  class Callback : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Platform::Callback::RequestCallback
    class RequestCallback;
    // Nested type: ::Oculus::Platform::Callback::RequestCallback_1<T>
    template<typename T>
    class RequestCallback_1;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Request> requestIDsToRequests
    static ::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* _get_requestIDsToRequests();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Request> requestIDsToRequests
    static void _set_requestIDsToRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::Oculus::Platform::Request*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<Oculus.Platform.Message/Oculus.Platform.MessageType,Oculus.Platform.Callback/Oculus.Platform.RequestCallback> notificationCallbacks
    static ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message::MessageType, ::Oculus::Platform::Callback::RequestCallback*>* _get_notificationCallbacks();
    // Set static field: static private System.Collections.Generic.Dictionary`2<Oculus.Platform.Message/Oculus.Platform.MessageType,Oculus.Platform.Callback/Oculus.Platform.RequestCallback> notificationCallbacks
    static void _set_notificationCallbacks(::System::Collections::Generic::Dictionary_2<::Oculus::Platform::Message::MessageType, ::Oculus::Platform::Callback::RequestCallback*>* value);
    // Get static field: static private System.Boolean hasRegisteredRoomInviteNotificationHandler
    static bool _get_hasRegisteredRoomInviteNotificationHandler();
    // Set static field: static private System.Boolean hasRegisteredRoomInviteNotificationHandler
    static void _set_hasRegisteredRoomInviteNotificationHandler(bool value);
    // Get static field: static private System.Collections.Generic.List`1<Oculus.Platform.Message> pendingRoomInviteNotifications
    static ::System::Collections::Generic::List_1<::Oculus::Platform::Message*>* _get_pendingRoomInviteNotifications();
    // Set static field: static private System.Collections.Generic.List`1<Oculus.Platform.Message> pendingRoomInviteNotifications
    static void _set_pendingRoomInviteNotifications(::System::Collections::Generic::List_1<::Oculus::Platform::Message*>* value);
    // static private System.Void .cctor()
    // Offset: 0x945414
    static void _cctor();
    // static System.Void SetNotificationCallback(Oculus.Platform.Message/Oculus.Platform.MessageType type, Oculus.Platform.Message`1/Oculus.Platform.Callback<T> callback)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void SetNotificationCallback(::Oculus::Platform::Message::MessageType type, typename ::Oculus::Platform::Message_1<T>::Callback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Callback::SetNotificationCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "SetNotificationCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, type, callback);
    }
    // static System.Void SetNotificationCallback(Oculus.Platform.Message/Oculus.Platform.MessageType type, Oculus.Platform.Message/Oculus.Platform.Callback callback)
    // Offset: 0x944C68
    static void SetNotificationCallback(::Oculus::Platform::Message::MessageType type, ::Oculus::Platform::Message::Callback* callback);
    // static System.Void AddRequest(Oculus.Platform.Request request)
    // Offset: 0x944D8C
    static void AddRequest(::Oculus::Platform::Request* request);
    // static System.Void RunCallbacks()
    // Offset: 0x944E5C
    static void RunCallbacks();
    // static System.Void RunLimitedCallbacks(System.UInt32 limit)
    // Offset: 0x94516C
    static void RunLimitedCallbacks(uint limit);
    // static System.Void OnApplicationQuit()
    // Offset: 0x945204
    static void OnApplicationQuit();
    // static private System.Void FlushRoomInviteNotificationQueue()
    // Offset: 0x9452A0
    static void FlushRoomInviteNotificationQueue();
    // static System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0x944FCC
    static void HandleMessage(::Oculus::Platform::Message* msg);
  }; // Oculus.Platform.Callback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Callback::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::SetNotificationCallback
// Il2CppName: SetNotificationCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Oculus::Platform::Callback::SetNotificationCallback
// Il2CppName: SetNotificationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message::MessageType, ::Oculus::Platform::Message::Callback*)>(&Oculus::Platform::Callback::SetNotificationCallback)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message/MessageType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message/Callback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "SetNotificationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, callback});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::AddRequest
// Il2CppName: AddRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Request*)>(&Oculus::Platform::Callback::AddRequest)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Request")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "AddRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::RunCallbacks
// Il2CppName: RunCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::RunCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "RunCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::RunLimitedCallbacks
// Il2CppName: RunLimitedCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&Oculus::Platform::Callback::RunLimitedCallbacks)> {
  static const MethodInfo* get() {
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "RunLimitedCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{limit});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::FlushRoomInviteNotificationQueue
// Il2CppName: FlushRoomInviteNotificationQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Callback::FlushRoomInviteNotificationQueue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "FlushRoomInviteNotificationQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Callback::HandleMessage
// Il2CppName: HandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Callback::HandleMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback*), "HandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
