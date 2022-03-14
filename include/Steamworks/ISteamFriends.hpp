// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamInterface
#include "Steamworks/SteamInterface.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: Utf8StringPointer
  struct Utf8StringPointer;
  // Forward declaring type: SteamId
  struct SteamId;
  // Forward declaring type: ChatEntryType
  struct ChatEntryType;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ISteamFriends
  class ISteamFriends;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::ISteamFriends);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::ISteamFriends*, "Steamworks", "ISteamFriends");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.ISteamFriends
  // [TokenAttribute] Offset: FFFFFFFF
  class ISteamFriends : public ::Steamworks::SteamInterface {
    public:
    // System.Void .ctor(System.Boolean IsGameServer)
    // Offset: 0xE36D00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISteamFriends* New_ctor(bool IsGameServer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::ISteamFriends::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISteamFriends*, creationType>(IsGameServer)));
    }
    // static System.IntPtr SteamAPI_SteamFriends_v017()
    // Offset: 0xE36D30
    static ::System::IntPtr SteamAPI_SteamFriends_v017();
    // static private Steamworks.Utf8StringPointer _GetFriendPersonaName(System.IntPtr self, Steamworks.SteamId steamIDFriend)
    // Offset: 0xE36DA8
    static ::Steamworks::Utf8StringPointer _GetFriendPersonaName(::System::IntPtr self, ::Steamworks::SteamId steamIDFriend);
    // System.String GetFriendPersonaName(Steamworks.SteamId steamIDFriend)
    // Offset: 0xE366B0
    ::StringW GetFriendPersonaName(::Steamworks::SteamId steamIDFriend);
    // static private System.Int32 _GetFriendMessage(System.IntPtr self, Steamworks.SteamId steamIDFriend, System.Int32 iMessageID, System.IntPtr pvData, System.Int32 cubData, ref Steamworks.ChatEntryType peChatEntryType)
    // Offset: 0xE36EF0
    static int _GetFriendMessage(::System::IntPtr self, ::Steamworks::SteamId steamIDFriend, int iMessageID, ::System::IntPtr pvData, int cubData, ByRef<::Steamworks::ChatEntryType> peChatEntryType);
    // System.Int32 GetFriendMessage(Steamworks.SteamId steamIDFriend, System.Int32 iMessageID, System.IntPtr pvData, System.Int32 cubData, ref Steamworks.ChatEntryType peChatEntryType)
    // Offset: 0xE36FB0
    int GetFriendMessage(::Steamworks::SteamId steamIDFriend, int iMessageID, ::System::IntPtr pvData, int cubData, ByRef<::Steamworks::ChatEntryType> peChatEntryType);
    // public override System.IntPtr GetUserInterfacePointer()
    // Offset: 0xE36DA4
    // Implemented from: Steamworks.SteamInterface
    // Base method: System.IntPtr SteamInterface::GetUserInterfacePointer()
    ::System::IntPtr GetUserInterfacePointer();
  }; // Steamworks.ISteamFriends
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::ISteamFriends::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::ISteamFriends::SteamAPI_SteamFriends_v017
// Il2CppName: SteamAPI_SteamFriends_v017
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Steamworks::ISteamFriends::SteamAPI_SteamFriends_v017)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamFriends*), "SteamAPI_SteamFriends_v017", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::ISteamFriends::_GetFriendPersonaName
// Il2CppName: _GetFriendPersonaName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::Utf8StringPointer (*)(::System::IntPtr, ::Steamworks::SteamId)>(&Steamworks::ISteamFriends::_GetFriendPersonaName)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* steamIDFriend = &::il2cpp_utils::GetClassFromName("Steamworks", "SteamId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamFriends*), "_GetFriendPersonaName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, steamIDFriend});
  }
};
// Writing MetadataGetter for method: Steamworks::ISteamFriends::GetFriendPersonaName
// Il2CppName: GetFriendPersonaName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::ISteamFriends::*)(::Steamworks::SteamId)>(&Steamworks::ISteamFriends::GetFriendPersonaName)> {
  static const MethodInfo* get() {
    static auto* steamIDFriend = &::il2cpp_utils::GetClassFromName("Steamworks", "SteamId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamFriends*), "GetFriendPersonaName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{steamIDFriend});
  }
};
// Writing MetadataGetter for method: Steamworks::ISteamFriends::_GetFriendMessage
// Il2CppName: _GetFriendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::Steamworks::SteamId, int, ::System::IntPtr, int, ByRef<::Steamworks::ChatEntryType>)>(&Steamworks::ISteamFriends::_GetFriendMessage)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* steamIDFriend = &::il2cpp_utils::GetClassFromName("Steamworks", "SteamId")->byval_arg;
    static auto* iMessageID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pvData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* cubData = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* peChatEntryType = &::il2cpp_utils::GetClassFromName("Steamworks", "ChatEntryType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamFriends*), "_GetFriendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self, steamIDFriend, iMessageID, pvData, cubData, peChatEntryType});
  }
};
// Writing MetadataGetter for method: Steamworks::ISteamFriends::GetFriendMessage
// Il2CppName: GetFriendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::ISteamFriends::*)(::Steamworks::SteamId, int, ::System::IntPtr, int, ByRef<::Steamworks::ChatEntryType>)>(&Steamworks::ISteamFriends::GetFriendMessage)> {
  static const MethodInfo* get() {
    static auto* steamIDFriend = &::il2cpp_utils::GetClassFromName("Steamworks", "SteamId")->byval_arg;
    static auto* iMessageID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pvData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* cubData = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* peChatEntryType = &::il2cpp_utils::GetClassFromName("Steamworks", "ChatEntryType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamFriends*), "GetFriendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{steamIDFriend, iMessageID, pvData, cubData, peChatEntryType});
  }
};
// Writing MetadataGetter for method: Steamworks::ISteamFriends::GetUserInterfacePointer
// Il2CppName: GetUserInterfacePointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Steamworks::ISteamFriends::*)()>(&Steamworks::ISteamFriends::GetUserInterfacePointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::ISteamFriends*), "GetUserInterfacePointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
