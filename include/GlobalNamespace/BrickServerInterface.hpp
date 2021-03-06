// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NormcoreRPC
#include "GlobalNamespace/NormcoreRPC.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RoomOwnershipSync
  class RoomOwnershipSync;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: Realtime
  class Realtime;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickServerInterface
  class BrickServerInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickServerInterface);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickServerInterface*, "", "BrickServerInterface");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BrickServerInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickServerInterface : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BrickServerInterface::$SendException$d__44
    class $SendException$d__44;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$SendBrickIEnum$d__45
    class $SendBrickIEnum$d__45;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$RemoveBrickIEnum$d__46
    class $RemoveBrickIEnum$d__46;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$SetLockedIEnum$d__47
    class $SetLockedIEnum$d__47;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$CreateRoom$d__48
    class $CreateRoom$d__48;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$StartExport$d__49
    class $StartExport$d__49;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$RoomInfo$d__50
    class $RoomInfo$d__50;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$SetNicknameIEnum$d__51
    class $SetNicknameIEnum$d__51;
    // Nested type: ::GlobalNamespace::BrickServerInterface::$GetIsVersionSupported$d__52
    class $GetIsVersionSupported$d__52;
    public:
    // public RoomOwnershipSync roomOwnershipSync
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::RoomOwnershipSync* roomOwnershipSync;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RoomOwnershipSync*) == 0x8);
    // private System.Int32 _failedBricks
    // Size: 0x4
    // Offset: 0x20
    int failedBricks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private BrickServerInterface _instance
    static ::GlobalNamespace::BrickServerInterface* _get__instance();
    // Set static field: static private BrickServerInterface _instance
    static void _set__instance(::GlobalNamespace::BrickServerInterface* value);
    // static field const value: static private System.String ExceptionURL
    static constexpr const char* ExceptionURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/report-exception";
    // Get static field: static private System.String ExceptionURL
    static ::StringW _get_ExceptionURL();
    // Set static field: static private System.String ExceptionURL
    static void _set_ExceptionURL(::StringW value);
    // static field const value: static private System.String BrickSubmitURL
    static constexpr const char* BrickSubmitURL = "https://us-east1-bricksvr-unity.cloudfunctions.net/brick-submit2";
    // Get static field: static private System.String BrickSubmitURL
    static ::StringW _get_BrickSubmitURL();
    // Set static field: static private System.String BrickSubmitURL
    static void _set_BrickSubmitURL(::StringW value);
    // static field const value: static private System.String RemoveBricksURL
    static constexpr const char* RemoveBricksURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/remove-bricks";
    // Get static field: static private System.String RemoveBricksURL
    static ::StringW _get_RemoveBricksURL();
    // Set static field: static private System.String RemoveBricksURL
    static void _set_RemoveBricksURL(::StringW value);
    // static field const value: static private System.String SetLockedURL
    static constexpr const char* SetLockedURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/set-locked";
    // Get static field: static private System.String SetLockedURL
    static ::StringW _get_SetLockedURL();
    // Set static field: static private System.String SetLockedURL
    static void _set_SetLockedURL(::StringW value);
    // static field const value: static private System.String CreateRoomURL
    static constexpr const char* CreateRoomURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/create-room";
    // Get static field: static private System.String CreateRoomURL
    static ::StringW _get_CreateRoomURL();
    // Set static field: static private System.String CreateRoomURL
    static void _set_CreateRoomURL(::StringW value);
    // static field const value: static private System.String RoomInfoURL
    static constexpr const char* RoomInfoURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/room-info";
    // Get static field: static private System.String RoomInfoURL
    static ::StringW _get_RoomInfoURL();
    // Set static field: static private System.String RoomInfoURL
    static void _set_RoomInfoURL(::StringW value);
    // static field const value: static private System.String SetNicknameURL
    static constexpr const char* SetNicknameURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/setnickname";
    // Get static field: static private System.String SetNicknameURL
    static ::StringW _get_SetNicknameURL();
    // Set static field: static private System.String SetNicknameURL
    static void _set_SetNicknameURL(::StringW value);
    // static field const value: static private System.String GetNicknameURL
    static constexpr const char* GetNicknameURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/getnickname2";
    // Get static field: static private System.String GetNicknameURL
    static ::StringW _get_GetNicknameURL();
    // Set static field: static private System.String GetNicknameURL
    static void _set_GetNicknameURL(::StringW value);
    // static field const value: static private System.String IsVersionSupportedURL
    static constexpr const char* IsVersionSupportedURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/versionsupported";
    // Get static field: static private System.String IsVersionSupportedURL
    static ::StringW _get_IsVersionSupportedURL();
    // Set static field: static private System.String IsVersionSupportedURL
    static void _set_IsVersionSupportedURL(::StringW value);
    // static field const value: static private System.String StartExportURL
    static constexpr const char* StartExportURL = "https://us-central1-bricksvr-unity.cloudfunctions.net/begin-export";
    // Get static field: static private System.String StartExportURL
    static ::StringW _get_StartExportURL();
    // Set static field: static private System.String StartExportURL
    static void _set_StartExportURL(::StringW value);
    // static field const value: static private System.String BrickServerInterfaceTag
    static constexpr const char* BrickServerInterfaceTag = "SendBrickToServer";
    // Get static field: static private System.String BrickServerInterfaceTag
    static ::StringW _get_BrickServerInterfaceTag();
    // Set static field: static private System.String BrickServerInterfaceTag
    static void _set_BrickServerInterfaceTag(::StringW value);
    // static field const value: static private System.String EditorExceptionSuffix
    static constexpr const char* EditorExceptionSuffix = "-editor";
    // Get static field: static private System.String EditorExceptionSuffix
    static ::StringW _get_EditorExceptionSuffix();
    // Set static field: static private System.String EditorExceptionSuffix
    static void _set_EditorExceptionSuffix(::StringW value);
    // static field const value: static private System.String NullString
    static constexpr const char* NullString = "null";
    // Get static field: static private System.String NullString
    static ::StringW _get_NullString();
    // Set static field: static private System.String NullString
    static void _set_NullString(::StringW value);
    // static field const value: static private System.String RoomKey
    static constexpr const char* RoomKey = "room";
    // Get static field: static private System.String RoomKey
    static ::StringW _get_RoomKey();
    // Set static field: static private System.String RoomKey
    static void _set_RoomKey(::StringW value);
    // static field const value: static private System.String RoomNameKey
    static constexpr const char* RoomNameKey = "name";
    // Get static field: static private System.String RoomNameKey
    static ::StringW _get_RoomNameKey();
    // Set static field: static private System.String RoomNameKey
    static void _set_RoomNameKey(::StringW value);
    // static field const value: static private System.String UserIdKey
    static constexpr const char* UserIdKey = "userid";
    // Get static field: static private System.String UserIdKey
    static ::StringW _get_UserIdKey();
    // Set static field: static private System.String UserIdKey
    static void _set_UserIdKey(::StringW value);
    // static field const value: static private System.String VersionKey
    static constexpr const char* VersionKey = "version";
    // Get static field: static private System.String VersionKey
    static ::StringW _get_VersionKey();
    // Set static field: static private System.String VersionKey
    static void _set_VersionKey(::StringW value);
    // static field const value: static private System.String MinorVersionKey
    static constexpr const char* MinorVersionKey = "minorversion";
    // Get static field: static private System.String MinorVersionKey
    static ::StringW _get_MinorVersionKey();
    // Set static field: static private System.String MinorVersionKey
    static void _set_MinorVersionKey(::StringW value);
    // static field const value: static private System.String ConditionKey
    static constexpr const char* ConditionKey = "condition";
    // Get static field: static private System.String ConditionKey
    static ::StringW _get_ConditionKey();
    // Set static field: static private System.String ConditionKey
    static void _set_ConditionKey(::StringW value);
    // static field const value: static private System.String StacktraceKey
    static constexpr const char* StacktraceKey = "stacktrace";
    // Get static field: static private System.String StacktraceKey
    static ::StringW _get_StacktraceKey();
    // Set static field: static private System.String StacktraceKey
    static void _set_StacktraceKey(::StringW value);
    // static field const value: static private System.String TypeKey
    static constexpr const char* TypeKey = "type";
    // Get static field: static private System.String TypeKey
    static ::StringW _get_TypeKey();
    // Set static field: static private System.String TypeKey
    static void _set_TypeKey(::StringW value);
    // static field const value: static private System.String MatIdKey
    static constexpr const char* MatIdKey = "matId";
    // Get static field: static private System.String MatIdKey
    static ::StringW _get_MatIdKey();
    // Set static field: static private System.String MatIdKey
    static void _set_MatIdKey(::StringW value);
    // static field const value: static private System.String ColorKey
    static constexpr const char* ColorKey = "color";
    // Get static field: static private System.String ColorKey
    static ::StringW _get_ColorKey();
    // Set static field: static private System.String ColorKey
    static void _set_ColorKey(::StringW value);
    // static field const value: static private System.String BrickIdKey
    static constexpr const char* BrickIdKey = "brickid";
    // Get static field: static private System.String BrickIdKey
    static ::StringW _get_BrickIdKey();
    // Set static field: static private System.String BrickIdKey
    static void _set_BrickIdKey(::StringW value);
    // static field const value: static private System.String LockedKey
    static constexpr const char* LockedKey = "locked";
    // Get static field: static private System.String LockedKey
    static ::StringW _get_LockedKey();
    // Set static field: static private System.String LockedKey
    static void _set_LockedKey(::StringW value);
    // static field const value: static private System.String NicknameKey
    static constexpr const char* NicknameKey = "nickname";
    // Get static field: static private System.String NicknameKey
    static ::StringW _get_NicknameKey();
    // Set static field: static private System.String NicknameKey
    static void _set_NicknameKey(::StringW value);
    // static field const value: static private System.String HeadClientId
    static constexpr const char* HeadClientId = "headClientId";
    // Get static field: static private System.String HeadClientId
    static ::StringW _get_HeadClientId();
    // Set static field: static private System.String HeadClientId
    static void _set_HeadClientId(::StringW value);
    // static field const value: static private System.String PosXKey
    static constexpr const char* PosXKey = "posx";
    // Get static field: static private System.String PosXKey
    static ::StringW _get_PosXKey();
    // Set static field: static private System.String PosXKey
    static void _set_PosXKey(::StringW value);
    // static field const value: static private System.String PosYKey
    static constexpr const char* PosYKey = "posy";
    // Get static field: static private System.String PosYKey
    static ::StringW _get_PosYKey();
    // Set static field: static private System.String PosYKey
    static void _set_PosYKey(::StringW value);
    // static field const value: static private System.String PosZKey
    static constexpr const char* PosZKey = "posz";
    // Get static field: static private System.String PosZKey
    static ::StringW _get_PosZKey();
    // Set static field: static private System.String PosZKey
    static void _set_PosZKey(::StringW value);
    // static field const value: static private System.String RotXKey
    static constexpr const char* RotXKey = "rotx";
    // Get static field: static private System.String RotXKey
    static ::StringW _get_RotXKey();
    // Set static field: static private System.String RotXKey
    static void _set_RotXKey(::StringW value);
    // static field const value: static private System.String RotYKey
    static constexpr const char* RotYKey = "roty";
    // Get static field: static private System.String RotYKey
    static ::StringW _get_RotYKey();
    // Set static field: static private System.String RotYKey
    static void _set_RotYKey(::StringW value);
    // static field const value: static private System.String RotZKey
    static constexpr const char* RotZKey = "rotz";
    // Get static field: static private System.String RotZKey
    static ::StringW _get_RotZKey();
    // Set static field: static private System.String RotZKey
    static void _set_RotZKey(::StringW value);
    // static field const value: static private System.String RotWKey
    static constexpr const char* RotWKey = "rotw";
    // Get static field: static private System.String RotWKey
    static ::StringW _get_RotWKey();
    // Set static field: static private System.String RotWKey
    static void _set_RotWKey(::StringW value);
    // static field const value: static private System.String TimestampKey
    static constexpr const char* TimestampKey = "timestamp";
    // Get static field: static private System.String TimestampKey
    static ::StringW _get_TimestampKey();
    // Set static field: static private System.String TimestampKey
    static void _set_TimestampKey(::StringW value);
    // static field const value: static private System.String Done
    static constexpr const char* Done = "done";
    // Get static field: static private System.String Done
    static ::StringW _get_Done();
    // Set static field: static private System.String Done
    static void _set_Done(::StringW value);
    // Get instance field reference: public RoomOwnershipSync roomOwnershipSync
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RoomOwnershipSync*& dyn_roomOwnershipSync();
    // Get instance field reference: private System.Int32 _failedBricks
    [[deprecated("Use field access instead!")]] int& dyn__failedBricks();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickServerInterface* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickServerInterface::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickServerInterface*, creationType>()));
    }
    // static public BrickServerInterface GetInstance()
    // Offset: 0x6F3070
    static ::GlobalNamespace::BrickServerInterface* GetInstance();
    // public System.Void SendBrick(NormcoreRPC/Brick brick, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F3420
    void SendBrick(::GlobalNamespace::NormcoreRPC::Brick* brick, ::Normal::Realtime::Realtime* realtime);
    // public System.Void RemoveBrick(System.String uuid, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F3220
    void RemoveBrick(::StringW uuid, ::Normal::Realtime::Realtime* realtime);
    // public System.Void SetLocked(System.Boolean locked, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F3630
    void SetLocked(bool locked, ::Normal::Realtime::Realtime* realtime);
    // public System.Void SetNickname(System.String nickname)
    // Offset: 0x6F3770
    void SetNickname(::StringW nickname);
    // public System.Collections.IEnumerator SendException(System.String condition, System.String stacktrace, UnityEngine.LogType type)
    // Offset: 0x6F3510
    ::System::Collections::IEnumerator* SendException(::StringW condition, ::StringW stacktrace, ::UnityEngine::LogType type);
    // private System.Collections.IEnumerator SendBrickIEnum(NormcoreRPC/Brick brick, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F3380
    ::System::Collections::IEnumerator* SendBrickIEnum(::GlobalNamespace::NormcoreRPC::Brick* brick, ::Normal::Realtime::Realtime* realtime);
    // private System.Collections.IEnumerator RemoveBrickIEnum(System.String uuid, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F3180
    ::System::Collections::IEnumerator* RemoveBrickIEnum(::StringW uuid, ::Normal::Realtime::Realtime* realtime);
    // private System.Collections.IEnumerator SetLockedIEnum(System.Boolean locked, Normal.Realtime.Realtime realtime)
    // Offset: 0x6F35B0
    ::System::Collections::IEnumerator* SetLockedIEnum(bool locked, ::Normal::Realtime::Realtime* realtime);
    // public System.Collections.IEnumerator CreateRoom(System.String roomName)
    // Offset: 0x6F3000
    ::System::Collections::IEnumerator* CreateRoom(::StringW roomName);
    // public System.Collections.IEnumerator StartExport(System.String roomName)
    // Offset: 0x6F3820
    ::System::Collections::IEnumerator* StartExport(::StringW roomName);
    // public System.Collections.IEnumerator RoomInfo(System.String normcoreRoomName)
    // Offset: 0x6F3310
    ::System::Collections::IEnumerator* RoomInfo(::StringW normcoreRoomName);
    // private System.Collections.IEnumerator SetNicknameIEnum(System.String nickname)
    // Offset: 0x6F3700
    ::System::Collections::IEnumerator* SetNicknameIEnum(::StringW nickname);
    // public System.Collections.IEnumerator GetIsVersionSupported()
    // Offset: 0x6F3130
    ::System::Collections::IEnumerator* GetIsVersionSupported();
  }; // BrickServerInterface
  #pragma pack(pop)
  static check_size<sizeof(BrickServerInterface), 32 + sizeof(int)> __GlobalNamespace_BrickServerInterfaceSizeCheck;
  static_assert(sizeof(BrickServerInterface) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BrickServerInterface* (*)()>(&GlobalNamespace::BrickServerInterface::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SendBrick
// Il2CppName: SendBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickServerInterface::*)(::GlobalNamespace::NormcoreRPC::Brick*, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickServerInterface::SendBrick)> {
  static const MethodInfo* get() {
    static auto* brick = &::il2cpp_utils::GetClassFromName("", "NormcoreRPC/Brick")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SendBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brick, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::RemoveBrick
// Il2CppName: RemoveBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickServerInterface::*)(::StringW, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickServerInterface::RemoveBrick)> {
  static const MethodInfo* get() {
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "RemoveBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuid, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SetLocked
// Il2CppName: SetLocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickServerInterface::*)(bool, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickServerInterface::SetLocked)> {
  static const MethodInfo* get() {
    static auto* locked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SetLocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locked, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SetNickname
// Il2CppName: SetNickname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickServerInterface::*)(::StringW)>(&GlobalNamespace::BrickServerInterface::SetNickname)> {
  static const MethodInfo* get() {
    static auto* nickname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SetNickname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nickname});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SendException
// Il2CppName: SendException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&GlobalNamespace::BrickServerInterface::SendException)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stacktrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SendException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, stacktrace, type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SendBrickIEnum
// Il2CppName: SendBrickIEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::GlobalNamespace::NormcoreRPC::Brick*, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickServerInterface::SendBrickIEnum)> {
  static const MethodInfo* get() {
    static auto* brick = &::il2cpp_utils::GetClassFromName("", "NormcoreRPC/Brick")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SendBrickIEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brick, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::RemoveBrickIEnum
// Il2CppName: RemoveBrickIEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::StringW, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickServerInterface::RemoveBrickIEnum)> {
  static const MethodInfo* get() {
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "RemoveBrickIEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuid, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SetLockedIEnum
// Il2CppName: SetLockedIEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(bool, ::Normal::Realtime::Realtime*)>(&GlobalNamespace::BrickServerInterface::SetLockedIEnum)> {
  static const MethodInfo* get() {
    static auto* locked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* realtime = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SetLockedIEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locked, realtime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::CreateRoom
// Il2CppName: CreateRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::StringW)>(&GlobalNamespace::BrickServerInterface::CreateRoom)> {
  static const MethodInfo* get() {
    static auto* roomName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "CreateRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::StartExport
// Il2CppName: StartExport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::StringW)>(&GlobalNamespace::BrickServerInterface::StartExport)> {
  static const MethodInfo* get() {
    static auto* roomName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "StartExport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::RoomInfo
// Il2CppName: RoomInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::StringW)>(&GlobalNamespace::BrickServerInterface::RoomInfo)> {
  static const MethodInfo* get() {
    static auto* normcoreRoomName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "RoomInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normcoreRoomName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::SetNicknameIEnum
// Il2CppName: SetNicknameIEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)(::StringW)>(&GlobalNamespace::BrickServerInterface::SetNicknameIEnum)> {
  static const MethodInfo* get() {
    static auto* nickname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "SetNicknameIEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nickname});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickServerInterface::GetIsVersionSupported
// Il2CppName: GetIsVersionSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BrickServerInterface::*)()>(&GlobalNamespace::BrickServerInterface::GetIsVersionSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickServerInterface*), "GetIsVersionSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
