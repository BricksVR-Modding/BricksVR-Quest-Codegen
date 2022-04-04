// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.IPlayerEditorConnectionNative
#include "UnityEngine/IPlayerEditorConnectionNative.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PlayerConnectionInternal
  class PlayerConnectionInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::PlayerConnectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerConnectionInternal*, "UnityEngine", "PlayerConnectionInternal");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.PlayerConnectionInternal
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 106DE0
  class PlayerConnectionInternal : public ::Il2CppObject/*, public ::UnityEngine::IPlayerEditorConnectionNative*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::IPlayerEditorConnectionNative
    operator ::UnityEngine::IPlayerEditorConnectionNative() noexcept {
      return *reinterpret_cast<::UnityEngine::IPlayerEditorConnectionNative*>(this);
    }
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.SendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x974170
    void UnityEngine_IPlayerEditorConnectionNative_SendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int playerId);
    // private System.Boolean UnityEngine.IPlayerEditorConnectionNative.TrySendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x974290
    bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(::System::Guid messageId, ::ArrayW<uint8_t> data, int playerId);
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.Poll()
    // Offset: 0x973FD0
    void UnityEngine_IPlayerEditorConnectionNative_Poll();
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.RegisterInternal(System.Guid messageId)
    // Offset: 0x974100
    void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(::System::Guid messageId);
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal(System.Guid messageId)
    // Offset: 0x9743B0
    void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(::System::Guid messageId);
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.Initialize()
    // Offset: 0x973F70
    void UnityEngine_IPlayerEditorConnectionNative_Initialize();
    // private System.Boolean UnityEngine.IPlayerEditorConnectionNative.IsConnected()
    // Offset: 0x973FA0
    bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.DisconnectAll()
    // Offset: 0x973F40
    void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();
    // static private System.Boolean IsConnected()
    // Offset: 0x973FA0
    static bool IsConnected();
    // static private System.Void Initialize()
    // Offset: 0x973F70
    static void Initialize();
    // static private System.Void RegisterInternal(System.String messageId)
    // Offset: 0x974000
    static void RegisterInternal(::StringW messageId);
    // static private System.Void UnregisterInternal(System.String messageId)
    // Offset: 0x974420
    static void UnregisterInternal(::StringW messageId);
    // static private System.Void SendMessage(System.String messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x974040
    static void SendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int playerId);
    // static private System.Boolean TrySendMessage(System.String messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x9740A0
    static bool TrySendMessage(::StringW messageId, ::ArrayW<uint8_t> data, int playerId);
    // static private System.Void PollInternal()
    // Offset: 0x973FD0
    static void PollInternal();
    // static private System.Void DisconnectAll()
    // Offset: 0x973F40
    static void DisconnectAll();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerConnectionInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::PlayerConnectionInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerConnectionInternal*, creationType>()));
    }
  }; // UnityEngine.PlayerConnectionInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.SendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerConnectionInternal::*)(::System::Guid, ::ArrayW<uint8_t>, int)>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_SendMessage)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.SendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, data, playerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.TrySendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PlayerConnectionInternal::*)(::System::Guid, ::ArrayW<uint8_t>, int)>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_TrySendMessage)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.TrySendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, data, playerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.Poll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerConnectionInternal::*)()>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Poll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.Poll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.RegisterInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerConnectionInternal::*)(::System::Guid)>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_RegisterInternal)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.RegisterInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerConnectionInternal::*)(::System::Guid)>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerConnectionInternal::*)()>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PlayerConnectionInternal::*)()>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_IsConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll
// Il2CppName: UnityEngine.IPlayerEditorConnectionNative.DisconnectAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PlayerConnectionInternal::*)()>(&UnityEngine::PlayerConnectionInternal::UnityEngine_IPlayerEditorConnectionNative_DisconnectAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnityEngine.IPlayerEditorConnectionNative.DisconnectAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::IsConnected
// Il2CppName: IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::PlayerConnectionInternal::IsConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::PlayerConnectionInternal::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::RegisterInternal
// Il2CppName: RegisterInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::PlayerConnectionInternal::RegisterInternal)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "RegisterInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::UnregisterInternal
// Il2CppName: UnregisterInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::PlayerConnectionInternal::UnregisterInternal)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "UnregisterInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::SendMessage
// Il2CppName: SendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, int)>(&UnityEngine::PlayerConnectionInternal::SendMessage)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "SendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, data, playerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::TrySendMessage
// Il2CppName: TrySendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t>, int)>(&UnityEngine::PlayerConnectionInternal::TrySendMessage)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "TrySendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, data, playerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::PollInternal
// Il2CppName: PollInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::PlayerConnectionInternal::PollInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "PollInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::DisconnectAll
// Il2CppName: DisconnectAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::PlayerConnectionInternal::DisconnectAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PlayerConnectionInternal*), "DisconnectAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PlayerConnectionInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
