// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketAsyncEventArgs
  class SocketAsyncEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncEventArgs*, "System.Net.Sockets", "SocketAsyncEventArgs");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketAsyncEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class SocketAsyncEventArgs : public ::System::EventArgs/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: in_progress
    char __padding0[0x3] = {};
    // System.Int32 in_progress
    // Size: 0x4
    // Offset: 0x14
    int in_progress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Net.EndPoint remote_ep
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::EndPoint* remote_ep;
    // Field size check
    static_assert(sizeof(::System::Net::EndPoint*) == 0x8);
    // System.Net.Sockets.Socket current_socket
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Sockets::Socket* current_socket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private System.Net.Sockets.Socket <AcceptSocket>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::Sockets::Socket* AcceptSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private System.Int32 <BytesTransferred>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int BytesTransferred;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.Sockets.SocketError <SocketError>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    ::System::Net::Sockets::SocketError SocketError;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketError) == 0x4);
    // private System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> Completed
    // Size: 0x8
    // Offset: 0x38
    ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* Completed;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: System.Int32 in_progress
    [[deprecated("Use field access instead!")]] int& dyn_in_progress();
    // Get instance field reference: System.Net.EndPoint remote_ep
    [[deprecated("Use field access instead!")]] ::System::Net::EndPoint*& dyn_remote_ep();
    // Get instance field reference: System.Net.Sockets.Socket current_socket
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_current_socket();
    // Get instance field reference: private System.Net.Sockets.Socket <AcceptSocket>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::Socket*& dyn_$AcceptSocket$k__BackingField();
    // Get instance field reference: private System.Int32 <BytesTransferred>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$BytesTransferred$k__BackingField();
    // Get instance field reference: private System.Net.Sockets.SocketError <SocketError>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::SocketError& dyn_$SocketError$k__BackingField();
    // Get instance field reference: private System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> Completed
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*& dyn_Completed();
    // public System.Net.Sockets.Socket get_AcceptSocket()
    // Offset: 0x1E1930
    ::System::Net::Sockets::Socket* get_AcceptSocket();
    // public System.Void set_AcceptSocket(System.Net.Sockets.Socket value)
    // Offset: 0x217290
    void set_AcceptSocket(::System::Net::Sockets::Socket* value);
    // System.Void set_BytesTransferred(System.Int32 value)
    // Offset: 0x41ABE0
    void set_BytesTransferred(int value);
    // public System.Void set_SocketError(System.Net.Sockets.SocketError value)
    // Offset: 0x217260
    void set_SocketError(::System::Net::Sockets::SocketError value);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x41AB20
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x41AB30
    void Dispose();
    // System.Void Complete()
    // Offset: 0x41AB00
    void Complete();
    // protected System.Void OnCompleted(System.Net.Sockets.SocketAsyncEventArgs e)
    // Offset: 0x41AB90
    void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* e);
  }; // System.Net.Sockets.SocketAsyncEventArgs
  #pragma pack(pop)
  static check_size<sizeof(SocketAsyncEventArgs), 56 + sizeof(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)> __System_Net_Sockets_SocketAsyncEventArgsSizeCheck;
  static_assert(sizeof(SocketAsyncEventArgs) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket
// Il2CppName: get_AcceptSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_AcceptSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket
// Il2CppName: set_AcceptSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_AcceptSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred
// Il2CppName: set_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(int)>(&System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_SocketError
// Il2CppName: set_SocketError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&System::Net::Sockets::SocketAsyncEventArgs::set_SocketError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_SocketError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Complete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&System::Net::Sockets::SocketAsyncEventArgs::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
