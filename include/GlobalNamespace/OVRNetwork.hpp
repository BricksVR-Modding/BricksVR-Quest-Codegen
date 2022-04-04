// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRNetwork
  class OVRNetwork;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRNetwork);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork*, "", "OVRNetwork");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRNetwork
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRNetwork : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRNetwork::FrameHeader
    struct FrameHeader;
    // Nested type: ::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer
    class OVRNetworkTcpServer;
    // Nested type: ::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient
    class OVRNetworkTcpClient;
    // static field const value: static public System.Int32 MaxBufferLength
    static constexpr const int MaxBufferLength = 65536;
    // Get static field: static public System.Int32 MaxBufferLength
    static int _get_MaxBufferLength();
    // Set static field: static public System.Int32 MaxBufferLength
    static void _set_MaxBufferLength(int value);
    // static field const value: static public System.Int32 MaxPayloadLength
    static constexpr const int MaxPayloadLength = 65524;
    // Get static field: static public System.Int32 MaxPayloadLength
    static int _get_MaxPayloadLength();
    // Set static field: static public System.Int32 MaxPayloadLength
    static void _set_MaxPayloadLength(int value);
    // static field const value: static public System.UInt32 FrameHeaderMagicIdentifier
    static constexpr const uint FrameHeaderMagicIdentifier = 1384359787u;
    // Get static field: static public System.UInt32 FrameHeaderMagicIdentifier
    static uint _get_FrameHeaderMagicIdentifier();
    // Set static field: static public System.UInt32 FrameHeaderMagicIdentifier
    static void _set_FrameHeaderMagicIdentifier(uint value);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNetwork* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRNetwork::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNetwork*, creationType>()));
    }
  }; // OVRNetwork
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
