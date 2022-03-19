// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IOAsyncResult
#include "System/IOAsyncResult.hpp"
// Including type: System.Net.Sockets.SocketOperation
#include "System/Net/Sockets/SocketOperation.hpp"
// Including type: System.Net.Sockets.SocketFlags
#include "System/Net/Sockets/SocketFlags.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IList`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketAsyncResult
  class SocketAsyncResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::SocketAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketAsyncResult*, "System.Net.Sockets", "SocketAsyncResult");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0xA4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.Sockets.SocketAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class SocketAsyncResult : public ::System::IOAsyncResult {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x30
    char ___base_padding[0x6] = {};
    // Nested type: ::System::Net::Sockets::SocketAsyncResult::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Net.Sockets.Socket socket
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::Sockets::Socket* socket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // public System.Net.Sockets.SocketOperation operation
    // Size: 0x4
    // Offset: 0x38
    ::System::Net::Sockets::SocketOperation operation;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketOperation) == 0x4);
    // Padding between fields: operation and: DelayedException
    char __padding1[0x4] = {};
    // private System.Exception DelayedException
    // Size: 0x8
    // Offset: 0x40
    ::System::Exception* DelayedException;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // public System.Net.EndPoint EndPoint
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::EndPoint* EndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::EndPoint*) == 0x8);
    // public System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 Offset
    // Size: 0x4
    // Offset: 0x58
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Size
    // Size: 0x4
    // Offset: 0x5C
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.Sockets.SocketFlags SockFlags
    // Size: 0x4
    // Offset: 0x60
    ::System::Net::Sockets::SocketFlags SockFlags;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::SocketFlags) == 0x4);
    // Padding between fields: SockFlags and: AcceptSocket
    char __padding7[0x4] = {};
    // public System.Net.Sockets.Socket AcceptSocket
    // Size: 0x8
    // Offset: 0x68
    ::System::Net::Sockets::Socket* AcceptSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // public System.Net.IPAddress[] Addresses
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::System::Net::IPAddress*> Addresses;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::IPAddress*>) == 0x8);
    // public System.Int32 Port
    // Size: 0x4
    // Offset: 0x78
    int Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Port and: Buffers
    char __padding10[0x4] = {};
    // public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> Buffers
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* Buffers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*) == 0x8);
    // public System.Boolean ReuseSocket
    // Size: 0x1
    // Offset: 0x88
    bool ReuseSocket;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ReuseSocket and: CurrentAddress
    char __padding12[0x3] = {};
    // public System.Int32 CurrentAddress
    // Size: 0x4
    // Offset: 0x8C
    int CurrentAddress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.Sockets.Socket AcceptedSocket
    // Size: 0x8
    // Offset: 0x90
    ::System::Net::Sockets::Socket* AcceptedSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // public System.Int32 Total
    // Size: 0x4
    // Offset: 0x98
    int Total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 error
    // Size: 0x4
    // Offset: 0x9C
    int error;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 EndCalled
    // Size: 0x4
    // Offset: 0xA0
    int EndCalled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Net.Sockets.Socket socket
    ::System::Net::Sockets::Socket*& dyn_socket();
    // Get instance field reference: public System.Net.Sockets.SocketOperation operation
    ::System::Net::Sockets::SocketOperation& dyn_operation();
    // Get instance field reference: private System.Exception DelayedException
    ::System::Exception*& dyn_DelayedException();
    // Get instance field reference: public System.Net.EndPoint EndPoint
    ::System::Net::EndPoint*& dyn_EndPoint();
    // Get instance field reference: public System.Byte[] Buffer
    ::ArrayW<uint8_t>& dyn_Buffer();
    // Get instance field reference: public System.Int32 Offset
    int& dyn_Offset();
    // Get instance field reference: public System.Int32 Size
    int& dyn_Size();
    // Get instance field reference: public System.Net.Sockets.SocketFlags SockFlags
    ::System::Net::Sockets::SocketFlags& dyn_SockFlags();
    // Get instance field reference: public System.Net.Sockets.Socket AcceptSocket
    ::System::Net::Sockets::Socket*& dyn_AcceptSocket();
    // Get instance field reference: public System.Net.IPAddress[] Addresses
    ::ArrayW<::System::Net::IPAddress*>& dyn_Addresses();
    // Get instance field reference: public System.Int32 Port
    int& dyn_Port();
    // Get instance field reference: public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> Buffers
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& dyn_Buffers();
    // Get instance field reference: public System.Boolean ReuseSocket
    bool& dyn_ReuseSocket();
    // Get instance field reference: public System.Int32 CurrentAddress
    int& dyn_CurrentAddress();
    // Get instance field reference: public System.Net.Sockets.Socket AcceptedSocket
    ::System::Net::Sockets::Socket*& dyn_AcceptedSocket();
    // Get instance field reference: public System.Int32 Total
    int& dyn_Total();
    // Get instance field reference: System.Int32 error
    int& dyn_error();
    // Get instance field reference: public System.Int32 EndCalled
    int& dyn_EndCalled();
    // public System.IntPtr get_Handle()
    // Offset: 0xA1E0E0
    ::System::IntPtr get_Handle();
    // public System.Net.Sockets.SocketError get_ErrorCode()
    // Offset: 0xA1E17C
    ::System::Net::Sockets::SocketError get_ErrorCode();
    // public System.Void .ctor(System.Net.Sockets.Socket socket, System.AsyncCallback callback, System.Object state, System.Net.Sockets.SocketOperation operation)
    // Offset: 0xA1E138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncResult* New_ctor(::System::Net::Sockets::Socket* socket, ::System::AsyncCallback* callback, ::Il2CppObject* state, ::System::Net::Sockets::SocketOperation operation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncResult*, creationType>(socket, callback, state, operation)));
    }
    // public System.Void CheckIfThrowDelayedException()
    // Offset: 0xA1E20C
    void CheckIfThrowDelayedException();
    // public System.Void Complete()
    // Offset: 0xA1E340
    void Complete();
    // public System.Void Complete(System.Boolean synch)
    // Offset: 0xA1E514
    void Complete(bool synch);
    // public System.Void Complete(System.Int32 total)
    // Offset: 0xA1E520
    void Complete(int total);
    // public System.Void Complete(System.Exception e, System.Boolean synch)
    // Offset: 0xA1E528
    void Complete(::System::Exception* e, bool synch);
    // public System.Void Complete(System.Exception e)
    // Offset: 0xA1E538
    void Complete(::System::Exception* e);
    // public System.Void Complete(System.Net.Sockets.Socket s)
    // Offset: 0xA1E540
    void Complete(::System::Net::Sockets::Socket* s);
    // public System.Void Complete(System.Net.Sockets.Socket s, System.Int32 total)
    // Offset: 0xA1E548
    void Complete(::System::Net::Sockets::Socket* s, int total);
    // override System.Void CompleteDisposed()
    // Offset: 0xA1E33C
    // Implemented from: System.IOAsyncResult
    // Base method: System.Void IOAsyncResult::CompleteDisposed()
    void CompleteDisposed();
  }; // System.Net.Sockets.SocketAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(SocketAsyncResult), 160 + sizeof(int)> __System_Net_Sockets_SocketAsyncResultSizeCheck;
  static_assert(sizeof(SocketAsyncResult) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::get_ErrorCode
// Il2CppName: get_ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::get_ErrorCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "get_ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException
// Il2CppName: CheckIfThrowDelayedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::CheckIfThrowDelayedException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "CheckIfThrowDelayedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(bool)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{synch});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(int)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* total = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{total});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*, bool)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* synch = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, synch});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(::System::Exception*)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)(::System::Net::Sockets::Socket*, int)>(&System::Net::Sockets::SocketAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    static auto* total = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, total});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::CompleteDisposed
// Il2CppName: CompleteDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::*)()>(&System::Net::Sockets::SocketAsyncResult::CompleteDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult*), "CompleteDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
