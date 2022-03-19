// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: LanguagePack
  class LanguagePack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::LanguagePack);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LanguagePack*, "Oculus.Platform", "LanguagePack");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LanguagePack
  // [TokenAttribute] Offset: FFFFFFFF
  class LanguagePack : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> GetCurrent()
    // Offset: 0x9492E0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* GetCurrent();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> SetCurrent(System.String tag)
    // Offset: 0x9493EC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* SetCurrent(::StringW tag);
  }; // Oculus.Platform.LanguagePack
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::LanguagePack::GetCurrent
// Il2CppName: GetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)()>(&Oculus::Platform::LanguagePack::GetCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::LanguagePack*), "GetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::LanguagePack::SetCurrent
// Il2CppName: SetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(::StringW)>(&Oculus::Platform::LanguagePack::SetCurrent)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::LanguagePack*), "SetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
