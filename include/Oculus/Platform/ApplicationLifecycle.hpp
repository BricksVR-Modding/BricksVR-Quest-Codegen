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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ApplicationLifecycle
  class ApplicationLifecycle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::ApplicationLifecycle);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ApplicationLifecycle*, "Oculus.Platform", "ApplicationLifecycle");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ApplicationLifecycle
  // [TokenAttribute] Offset: FFFFFFFF
  class ApplicationLifecycle : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Models.LaunchDetails GetLaunchDetails()
    // Offset: 0x6F97E0
    static ::Oculus::Platform::Models::LaunchDetails* GetLaunchDetails();
    // static public System.Void SetLaunchIntentChangedNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<System.String> callback)
    // Offset: 0x6F98B0
    static void SetLaunchIntentChangedNotificationCallback(typename ::Oculus::Platform::Message_1<::StringW>::Callback* callback);
  }; // Oculus.Platform.ApplicationLifecycle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::ApplicationLifecycle::GetLaunchDetails
// Il2CppName: GetLaunchDetails
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchDetails* (*)()>(&Oculus::Platform::ApplicationLifecycle::GetLaunchDetails)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::ApplicationLifecycle*), "GetLaunchDetails", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::ApplicationLifecycle::SetLaunchIntentChangedNotificationCallback
// Il2CppName: SetLaunchIntentChangedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
