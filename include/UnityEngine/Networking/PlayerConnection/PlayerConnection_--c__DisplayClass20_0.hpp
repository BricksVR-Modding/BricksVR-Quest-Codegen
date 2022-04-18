// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerConnection
#include "UnityEngine/Networking/PlayerConnection/PlayerConnection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0*, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass20_0");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerConnection/UnityEngine.Networking.PlayerConnection.<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlayerConnection::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean msgReceived
    // Size: 0x1
    // Offset: 0x10
    bool msgReceived;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return msgReceived;
    }
    // Get instance field reference: public System.Boolean msgReceived
    [[deprecated("Use field access instead!")]] bool& dyn_msgReceived();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerConnection::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerConnection::$$c__DisplayClass20_0*, creationType>()));
    }
    // System.Void <BlockUntilRecvMsg>b__0(UnityEngine.Networking.PlayerConnection.MessageEventArgs args)
    // Offset: 0x3096B0
    void $BlockUntilRecvMsg$b__0(::UnityEngine::Networking::PlayerConnection::MessageEventArgs* args);
  }; // UnityEngine.Networking.PlayerConnection.PlayerConnection/UnityEngine.Networking.PlayerConnection.<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(PlayerConnection::$$c__DisplayClass20_0), 16 + sizeof(bool)> __UnityEngine_Networking_PlayerConnection_PlayerConnection_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(PlayerConnection::$$c__DisplayClass20_0) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0::$BlockUntilRecvMsg$b__0
// Il2CppName: <BlockUntilRecvMsg>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0::*)(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*)>(&UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0::$BlockUntilRecvMsg$b__0)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking.PlayerConnection", "MessageEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerConnection::$$c__DisplayClass20_0*), "<BlockUntilRecvMsg>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
