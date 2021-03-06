// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NormcoreRPC
#include "GlobalNamespace/NormcoreRPC.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarManager
  class RealtimeAvatarManager;
  // Forward declaring type: Realtime
  class Realtime;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickSwapper
  class BrickSwapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickSwapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickSwapper*, "", "BrickSwapper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BrickSwapper
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickSwapper : public ::Il2CppObject {
    public:
    // static public UnityEngine.GameObject SwapToRealBrick(UnityEngine.GameObject brick)
    // Offset: 0x6F5180
    static ::UnityEngine::GameObject* SwapToRealBrick(::UnityEngine::GameObject* brick);
    // static public UnityEngine.GameObject SwapToFakeBrick(UnityEngine.GameObject brick, System.Int32 headClientId, Normal.Realtime.RealtimeAvatarManager avatarManager)
    // Offset: 0x6F4CF0
    static ::UnityEngine::GameObject* SwapToFakeBrick(::UnityEngine::GameObject* brick, int headClientId, ::Normal::Realtime::RealtimeAvatarManager* avatarManager);
    // static private System.Void CreateBrickOverRPC(NormcoreRPC/Brick brick, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F4AE0
    static void CreateBrickOverRPC(::GlobalNamespace::NormcoreRPC::Brick* brick, ::Normal::Realtime::Realtime* realtime);
    // static private System.Void DestroyBrickOverRPC(NormcoreRPC/Brick brick, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F4B80
    static void DestroyBrickOverRPC(::GlobalNamespace::NormcoreRPC::Brick* brick, ::Normal::Realtime::Realtime* realtime);
    // static private System.Void SendMessageOverRPC(NormcoreRPC/RPCMessage rpcMessage, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F4C20
    static void SendMessageOverRPC(::GlobalNamespace::NormcoreRPC::RPCMessage* rpcMessage, ::Normal::Realtime::Realtime* realtime);
  }; // BrickSwapper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickSwapper::SwapToRealBrick
// Il2CppName: SwapToRealBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickSwapper::SwapToRealBrick)> {
  static const MethodInfo* get() {
    static auto* brick = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSwapper*), "SwapToRealBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brick});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSwapper::SwapToFakeBrick
// Il2CppName: SwapToFakeBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (*)(::UnityEngine::GameObject*, int, ::Normal::Realtime::RealtimeAvatarManager*)>(&GlobalNamespace::BrickSwapper::SwapToFakeBrick)> {
  static const MethodInfo* get() {
    static auto* brick = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* headClientId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* avatarManager = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSwapper*), "SwapToFakeBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brick, headClientId, avatarManager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSwapper::CreateBrickOverRPC
// Il2CppName: CreateBrickOverRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::NormcoreRPC::Brick*, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickSwapper::CreateBrickOverRPC)> {
  static const MethodInfo* get() {
    static auto* brick = &::il2cpp_utils::GetClassFromName("", "NormcoreRPC/Brick")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSwapper*), "CreateBrickOverRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brick, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSwapper::DestroyBrickOverRPC
// Il2CppName: DestroyBrickOverRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::NormcoreRPC::Brick*, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickSwapper::DestroyBrickOverRPC)> {
  static const MethodInfo* get() {
    static auto* brick = &::il2cpp_utils::GetClassFromName("", "NormcoreRPC/Brick")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSwapper*), "DestroyBrickOverRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brick, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSwapper::SendMessageOverRPC
// Il2CppName: SendMessageOverRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::NormcoreRPC::RPCMessage*, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickSwapper::SendMessageOverRPC)> {
  static const MethodInfo* get() {
    static auto* rpcMessage = &::il2cpp_utils::GetClassFromName("", "NormcoreRPC/RPCMessage")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSwapper*), "SendMessageOverRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rpcMessage, realtime});
  }
};
