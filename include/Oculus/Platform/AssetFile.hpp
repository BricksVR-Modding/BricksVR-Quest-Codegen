// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDeleteResult
  class AssetFileDeleteResult;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
  // Forward declaring type: AssetFileDownloadCancelResult
  class AssetFileDownloadCancelResult;
  // Forward declaring type: AssetDetailsList
  class AssetDetailsList;
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadUpdate
  class AssetFileDownloadUpdate;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: AssetFile
  class AssetFile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::AssetFile);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AssetFile*, "Oculus.Platform", "AssetFile");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AssetFile
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetFile : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDeleteResult> Delete(System.UInt64 assetFileID)
    // Offset: 0x6FA2A0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* Delete(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDeleteResult> DeleteById(System.UInt64 assetFileID)
    // Offset: 0x6F9F50
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDeleteResult> DeleteByName(System.String assetFileName)
    // Offset: 0x6FA0C0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteByName(::StringW assetFileName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> Download(System.UInt64 assetFileID)
    // Offset: 0x6FAC20
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Download(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> DownloadById(System.UInt64 assetFileID)
    // Offset: 0x6FA410
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> DownloadByName(System.String assetFileName)
    // Offset: 0x6FA580
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadByName(::StringW assetFileName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadCancelResult> DownloadCancel(System.UInt64 assetFileID)
    // Offset: 0x6FAAB0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancel(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadCancelResult> DownloadCancelById(System.UInt64 assetFileID)
    // Offset: 0x6FA760
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadCancelResult> DownloadCancelByName(System.String assetFileName)
    // Offset: 0x6FA8D0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelByName(::StringW assetFileName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetailsList> GetList()
    // Offset: 0x6FAD90
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>* GetList();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> Status(System.UInt64 assetFileID)
    // Offset: 0x6FB2A0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Status(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> StatusById(System.UInt64 assetFileID)
    // Offset: 0x6FAF50
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* StatusById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> StatusByName(System.String assetFileName)
    // Offset: 0x6FB0C0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* StatusByName(::StringW assetFileName);
    // static public System.Void SetDownloadUpdateNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.AssetFileDownloadUpdate> callback)
    // Offset: 0x6FAEF0
    static void SetDownloadUpdateNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*>::Callback* callback);
  }; // Oculus.Platform.AssetFile
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::Delete)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DeleteById
// Il2CppName: DeleteById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::DeleteById)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DeleteById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DeleteByName
// Il2CppName: DeleteByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* (*)(::StringW)>(&Oculus::Platform::AssetFile::DeleteByName)> {
  static const MethodInfo* get() {
    static auto* assetFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DeleteByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileName});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::Download
// Il2CppName: Download
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::Download)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "Download", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DownloadById
// Il2CppName: DownloadById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::DownloadById)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DownloadById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DownloadByName
// Il2CppName: DownloadByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(::StringW)>(&Oculus::Platform::AssetFile::DownloadByName)> {
  static const MethodInfo* get() {
    static auto* assetFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DownloadByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileName});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DownloadCancel
// Il2CppName: DownloadCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::DownloadCancel)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DownloadCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DownloadCancelById
// Il2CppName: DownloadCancelById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::DownloadCancelById)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DownloadCancelById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::DownloadCancelByName
// Il2CppName: DownloadCancelByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* (*)(::StringW)>(&Oculus::Platform::AssetFile::DownloadCancelByName)> {
  static const MethodInfo* get() {
    static auto* assetFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "DownloadCancelByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileName});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::GetList
// Il2CppName: GetList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>* (*)()>(&Oculus::Platform::AssetFile::GetList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "GetList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::Status
// Il2CppName: Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::Status)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::StatusById
// Il2CppName: StatusById
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)(uint64_t)>(&Oculus::Platform::AssetFile::StatusById)> {
  static const MethodInfo* get() {
    static auto* assetFileID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "StatusById", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::StatusByName
// Il2CppName: StatusByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)(::StringW)>(&Oculus::Platform::AssetFile::StatusByName)> {
  static const MethodInfo* get() {
    static auto* assetFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AssetFile*), "StatusByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetFileName});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AssetFile::SetDownloadUpdateNotificationCallback
// Il2CppName: SetDownloadUpdateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
