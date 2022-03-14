// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Native
namespace Normal::Realtime::Native {
  // Forward declaring type: AudioOutputStream
  class AudioOutputStream;
  // Forward declaring type: NetworkInfo
  struct NetworkInfo;
  // Forward declaring type: AudioInputStream
  class AudioInputStream;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Forward declaring type: Client
  class Client;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Native::Client);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::Client*, "Normal.Realtime.Native", "Client");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Native.Client
  // [TokenAttribute] Offset: FFFFFFFF
  class Client : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Normal::Realtime::Native::Client::ClientState
    struct ClientState;
    // Nested type: ::Normal::Realtime::Native::Client::PersistenceMessageReceived
    class PersistenceMessageReceived;
    // Nested type: ::Normal::Realtime::Native::Client::RPCMessageReceived
    class RPCMessageReceived;
    // Nested type: ::Normal::Realtime::Native::Client::AudioOutputStreamCreated
    class AudioOutputStreamCreated;
    // Nested type: ::Normal::Realtime::Native::Client::AudioOutputStreamClosed
    class AudioOutputStreamClosed;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Normal.Realtime.Native.Client/Normal.Realtime.Native.PersistenceMessageReceived persistenceMessageReceived
    // Size: 0x8
    // Offset: 0x10
    ::Normal::Realtime::Native::Client::PersistenceMessageReceived* persistenceMessageReceived;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Native::Client::PersistenceMessageReceived*) == 0x8);
    // private Normal.Realtime.Native.Client/Normal.Realtime.Native.RPCMessageReceived rpcMessageReceived
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::Native::Client::RPCMessageReceived* rpcMessageReceived;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Native::Client::RPCMessageReceived*) == 0x8);
    // private Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamCreated audioOutputStreamCreated
    // Size: 0x8
    // Offset: 0x20
    ::Normal::Realtime::Native::Client::AudioOutputStreamCreated* audioOutputStreamCreated;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Native::Client::AudioOutputStreamCreated*) == 0x8);
    // private Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamClosed audioOutputStreamClosed
    // Size: 0x8
    // Offset: 0x28
    ::Normal::Realtime::Native::Client::AudioOutputStreamClosed* audioOutputStreamClosed;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Native::Client::AudioOutputStreamClosed*) == 0x8);
    // private System.IntPtr _nativeClient
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr nativeClient;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Collections.Generic.List`1<Normal.Realtime.Native.AudioOutputStream> _audioOutputStreams
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Normal::Realtime::Native::AudioOutputStream*>* audioOutputStreams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Normal::Realtime::Native::AudioOutputStream*>*) == 0x8);
    // private System.Byte[] _persistenceMessageBuffer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> persistenceMessageBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _rpcMessageBuffer
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> rpcMessageBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.Int32 __numberOfClients
    static int _get___numberOfClients();
    // Set static field: static private System.Int32 __numberOfClients
    static void _set___numberOfClients(int value);
    // Get static field: static private readonly System.Object __numberOfClientsLock
    static ::Il2CppObject* _get___numberOfClientsLock();
    // Set static field: static private readonly System.Object __numberOfClientsLock
    static void _set___numberOfClientsLock(::Il2CppObject* value);
    // Get instance field reference: private Normal.Realtime.Native.Client/Normal.Realtime.Native.PersistenceMessageReceived persistenceMessageReceived
    ::Normal::Realtime::Native::Client::PersistenceMessageReceived*& dyn_persistenceMessageReceived();
    // Get instance field reference: private Normal.Realtime.Native.Client/Normal.Realtime.Native.RPCMessageReceived rpcMessageReceived
    ::Normal::Realtime::Native::Client::RPCMessageReceived*& dyn_rpcMessageReceived();
    // Get instance field reference: private Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamCreated audioOutputStreamCreated
    ::Normal::Realtime::Native::Client::AudioOutputStreamCreated*& dyn_audioOutputStreamCreated();
    // Get instance field reference: private Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamClosed audioOutputStreamClosed
    ::Normal::Realtime::Native::Client::AudioOutputStreamClosed*& dyn_audioOutputStreamClosed();
    // Get instance field reference: private System.IntPtr _nativeClient
    ::System::IntPtr& dyn__nativeClient();
    // Get instance field reference: private System.Collections.Generic.List`1<Normal.Realtime.Native.AudioOutputStream> _audioOutputStreams
    ::System::Collections::Generic::List_1<::Normal::Realtime::Native::AudioOutputStream*>*& dyn__audioOutputStreams();
    // Get instance field reference: private System.Byte[] _persistenceMessageBuffer
    ::ArrayW<uint8_t>& dyn__persistenceMessageBuffer();
    // Get instance field reference: private System.Byte[] _rpcMessageBuffer
    ::ArrayW<uint8_t>& dyn__rpcMessageBuffer();
    // public System.Void add_persistenceMessageReceived(Normal.Realtime.Native.Client/Normal.Realtime.Native.PersistenceMessageReceived value)
    // Offset: 0xAEB824
    void add_persistenceMessageReceived(::Normal::Realtime::Native::Client::PersistenceMessageReceived* value);
    // public System.Void remove_persistenceMessageReceived(Normal.Realtime.Native.Client/Normal.Realtime.Native.PersistenceMessageReceived value)
    // Offset: 0xAEB8C8
    void remove_persistenceMessageReceived(::Normal::Realtime::Native::Client::PersistenceMessageReceived* value);
    // public System.Void add_rpcMessageReceived(Normal.Realtime.Native.Client/Normal.Realtime.Native.RPCMessageReceived value)
    // Offset: 0xAEB96C
    void add_rpcMessageReceived(::Normal::Realtime::Native::Client::RPCMessageReceived* value);
    // public System.Void remove_rpcMessageReceived(Normal.Realtime.Native.Client/Normal.Realtime.Native.RPCMessageReceived value)
    // Offset: 0xAEBA10
    void remove_rpcMessageReceived(::Normal::Realtime::Native::Client::RPCMessageReceived* value);
    // public System.Void add_audioOutputStreamCreated(Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamCreated value)
    // Offset: 0xAEBAB4
    void add_audioOutputStreamCreated(::Normal::Realtime::Native::Client::AudioOutputStreamCreated* value);
    // public System.Void remove_audioOutputStreamCreated(Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamCreated value)
    // Offset: 0xAEBB58
    void remove_audioOutputStreamCreated(::Normal::Realtime::Native::Client::AudioOutputStreamCreated* value);
    // public System.Void add_audioOutputStreamClosed(Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamClosed value)
    // Offset: 0xAEBBFC
    void add_audioOutputStreamClosed(::Normal::Realtime::Native::Client::AudioOutputStreamClosed* value);
    // public System.Void remove_audioOutputStreamClosed(Normal.Realtime.Native.Client/Normal.Realtime.Native.AudioOutputStreamClosed value)
    // Offset: 0xAEBCA0
    void remove_audioOutputStreamClosed(::Normal::Realtime::Native::Client::AudioOutputStreamClosed* value);
    // static private System.Void .cctor()
    // Offset: 0xAEEB58
    static void _cctor();
    // static private System.Boolean SetUpNetworkStackIfNeeded()
    // Offset: 0xAEB430
    static bool SetUpNetworkStackIfNeeded();
    // static private System.Boolean TearDownNetworkStackIfNeeded()
    // Offset: 0xAEB644
    static bool TearDownNetworkStackIfNeeded();
    // public System.Void Dispose()
    // Offset: 0xAEC10C
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0xAEBF50
    void Dispose(bool disposing);
    // public Normal.Realtime.Native.NetworkInfo GetNetworkStatistics()
    // Offset: 0xAEC200
    ::Normal::Realtime::Native::NetworkInfo GetNetworkStatistics();
    // public System.String StartConnection()
    // Offset: 0xAEC28C
    ::StringW StartConnection();
    // public System.Void Connect(System.String serverAnswer)
    // Offset: 0xAEC3B8
    void Connect(::StringW serverAnswer);
    // public System.Void Disconnect()
    // Offset: 0xAEC508
    void Disconnect();
    // public System.Void ReceiveIncomingMessages()
    // Offset: 0xAEC624
    void ReceiveIncomingMessages();
    // public System.Void BumpAutoDisconnectTime()
    // Offset: 0xAEC658
    void BumpAutoDisconnectTime();
    // public Normal.Realtime.Native.Client/Normal.Realtime.Native.ClientState State()
    // Offset: 0xAECBF0
    ::Normal::Realtime::Native::Client::ClientState State();
    // public System.Int32 ClientID()
    // Offset: 0xAECD08
    int ClientID();
    // public System.Double RoomTime()
    // Offset: 0xAECE24
    double RoomTime();
    // public Normal.Realtime.Native.AudioInputStream CreateAudioInputStream(System.Boolean voice, System.Int32 sampleRate, System.Int32 channels)
    // Offset: 0xAECF40
    ::Normal::Realtime::Native::AudioInputStream* CreateAudioInputStream(bool voice, int sampleRate, int channels);
    // public System.Void ReceiveAudioEventMessages()
    // Offset: 0xAEC6F4
    void ReceiveAudioEventMessages();
    // private System.Void ReceiveAudioOutputStreamCreated(System.IntPtr nativeAudioOutputStream, System.IntPtr nativeAudioOutputStreamIdentifier)
    // Offset: 0xAED174
    void ReceiveAudioOutputStreamCreated(::System::IntPtr nativeAudioOutputStream, ::System::IntPtr nativeAudioOutputStreamIdentifier);
    // private System.Void ReceivedAudioOutputStreamClosed(System.IntPtr nativeAudioOutputStreamIdentifier)
    // Offset: 0xAED224
    void ReceivedAudioOutputStreamClosed(::System::IntPtr nativeAudioOutputStreamIdentifier);
    // public Normal.Realtime.Native.AudioOutputStream GetAudioOutputStream(System.Int32 clientID, System.Int32 streamID)
    // Offset: 0xAEDBE4
    ::Normal::Realtime::Native::AudioOutputStream* GetAudioOutputStream(int clientID, int streamID);
    // public System.Boolean SendPersistenceMessage(System.Byte[] data, System.Int32 dataLength, System.Boolean reliable)
    // Offset: 0xAEDD18
    bool SendPersistenceMessage(::ArrayW<uint8_t> data, int dataLength, bool reliable);
    // private System.Void ReceivePersistenceMessages()
    // Offset: 0xAEC7F8
    void ReceivePersistenceMessages();
    // public System.Boolean SendRPCMessage(System.Byte[] data, System.Int32 dataLength, System.Boolean reliable)
    // Offset: 0xAEE438
    bool SendRPCMessage(::ArrayW<uint8_t> data, int dataLength, bool reliable);
    // private System.Void ReceiveRPCMessages()
    // Offset: 0xAEC9B4
    void ReceiveRPCMessages();
    // public System.Void .ctor()
    // Offset: 0xAEBD44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Client* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Native::Client::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Client*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xAEBEE4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Normal.Realtime.Native.Client
  #pragma pack(pop)
  static check_size<sizeof(Client), 72 + sizeof(::ArrayW<uint8_t>)> __Normal_Realtime_Native_ClientSizeCheck;
  static_assert(sizeof(Client) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::add_persistenceMessageReceived
// Il2CppName: add_persistenceMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::PersistenceMessageReceived*)>(&Normal::Realtime::Native::Client::add_persistenceMessageReceived)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/PersistenceMessageReceived")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "add_persistenceMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::remove_persistenceMessageReceived
// Il2CppName: remove_persistenceMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::PersistenceMessageReceived*)>(&Normal::Realtime::Native::Client::remove_persistenceMessageReceived)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/PersistenceMessageReceived")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "remove_persistenceMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::add_rpcMessageReceived
// Il2CppName: add_rpcMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::RPCMessageReceived*)>(&Normal::Realtime::Native::Client::add_rpcMessageReceived)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/RPCMessageReceived")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "add_rpcMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::remove_rpcMessageReceived
// Il2CppName: remove_rpcMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::RPCMessageReceived*)>(&Normal::Realtime::Native::Client::remove_rpcMessageReceived)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/RPCMessageReceived")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "remove_rpcMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::add_audioOutputStreamCreated
// Il2CppName: add_audioOutputStreamCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::AudioOutputStreamCreated*)>(&Normal::Realtime::Native::Client::add_audioOutputStreamCreated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/AudioOutputStreamCreated")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "add_audioOutputStreamCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::remove_audioOutputStreamCreated
// Il2CppName: remove_audioOutputStreamCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::AudioOutputStreamCreated*)>(&Normal::Realtime::Native::Client::remove_audioOutputStreamCreated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/AudioOutputStreamCreated")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "remove_audioOutputStreamCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::add_audioOutputStreamClosed
// Il2CppName: add_audioOutputStreamClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::AudioOutputStreamClosed*)>(&Normal::Realtime::Native::Client::add_audioOutputStreamClosed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/AudioOutputStreamClosed")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "add_audioOutputStreamClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::remove_audioOutputStreamClosed
// Il2CppName: remove_audioOutputStreamClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::Normal::Realtime::Native::Client::AudioOutputStreamClosed*)>(&Normal::Realtime::Native::Client::remove_audioOutputStreamClosed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Native", "Client/AudioOutputStreamClosed")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "remove_audioOutputStreamClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Normal::Realtime::Native::Client::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::SetUpNetworkStackIfNeeded
// Il2CppName: SetUpNetworkStackIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Normal::Realtime::Native::Client::SetUpNetworkStackIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "SetUpNetworkStackIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::TearDownNetworkStackIfNeeded
// Il2CppName: TearDownNetworkStackIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Normal::Realtime::Native::Client::TearDownNetworkStackIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "TearDownNetworkStackIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(bool)>(&Normal::Realtime::Native::Client::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::GetNetworkStatistics
// Il2CppName: GetNetworkStatistics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Native::NetworkInfo (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::GetNetworkStatistics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "GetNetworkStatistics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::StartConnection
// Il2CppName: StartConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::StartConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "StartConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::StringW)>(&Normal::Realtime::Native::Client::Connect)> {
  static const MethodInfo* get() {
    static auto* serverAnswer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverAnswer});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ReceiveIncomingMessages
// Il2CppName: ReceiveIncomingMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::ReceiveIncomingMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ReceiveIncomingMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::BumpAutoDisconnectTime
// Il2CppName: BumpAutoDisconnectTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::BumpAutoDisconnectTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "BumpAutoDisconnectTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::State
// Il2CppName: State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Native::Client::ClientState (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ClientID
// Il2CppName: ClientID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::ClientID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ClientID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::RoomTime
// Il2CppName: RoomTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::RoomTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "RoomTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::CreateAudioInputStream
// Il2CppName: CreateAudioInputStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Native::AudioInputStream* (Normal::Realtime::Native::Client::*)(bool, int, int)>(&Normal::Realtime::Native::Client::CreateAudioInputStream)> {
  static const MethodInfo* get() {
    static auto* voice = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "CreateAudioInputStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voice, sampleRate, channels});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ReceiveAudioEventMessages
// Il2CppName: ReceiveAudioEventMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::ReceiveAudioEventMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ReceiveAudioEventMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ReceiveAudioOutputStreamCreated
// Il2CppName: ReceiveAudioOutputStreamCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::System::IntPtr, ::System::IntPtr)>(&Normal::Realtime::Native::Client::ReceiveAudioOutputStreamCreated)> {
  static const MethodInfo* get() {
    static auto* nativeAudioOutputStream = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* nativeAudioOutputStreamIdentifier = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ReceiveAudioOutputStreamCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeAudioOutputStream, nativeAudioOutputStreamIdentifier});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ReceivedAudioOutputStreamClosed
// Il2CppName: ReceivedAudioOutputStreamClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)(::System::IntPtr)>(&Normal::Realtime::Native::Client::ReceivedAudioOutputStreamClosed)> {
  static const MethodInfo* get() {
    static auto* nativeAudioOutputStreamIdentifier = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ReceivedAudioOutputStreamClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeAudioOutputStreamIdentifier});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::GetAudioOutputStream
// Il2CppName: GetAudioOutputStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Native::AudioOutputStream* (Normal::Realtime::Native::Client::*)(int, int)>(&Normal::Realtime::Native::Client::GetAudioOutputStream)> {
  static const MethodInfo* get() {
    static auto* clientID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* streamID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "GetAudioOutputStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientID, streamID});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::SendPersistenceMessage
// Il2CppName: SendPersistenceMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::Native::Client::*)(::ArrayW<uint8_t>, int, bool)>(&Normal::Realtime::Native::Client::SendPersistenceMessage)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reliable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "SendPersistenceMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, reliable});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ReceivePersistenceMessages
// Il2CppName: ReceivePersistenceMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::ReceivePersistenceMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ReceivePersistenceMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::SendRPCMessage
// Il2CppName: SendRPCMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::Native::Client::*)(::ArrayW<uint8_t>, int, bool)>(&Normal::Realtime::Native::Client::SendRPCMessage)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reliable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "SendRPCMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, reliable});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::ReceiveRPCMessages
// Il2CppName: ReceiveRPCMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::ReceiveRPCMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "ReceiveRPCMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Native::Client::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Native::Client::*)()>(&Normal::Realtime::Native::Client::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::Client*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
