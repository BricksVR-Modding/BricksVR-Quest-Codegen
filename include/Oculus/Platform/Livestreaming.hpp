// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
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
  // Forward declaring type: LivestreamingStatus
  class LivestreamingStatus;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Livestreaming
  class Livestreaming;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Livestreaming);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Livestreaming*, "Oculus.Platform", "Livestreaming");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Livestreaming
  // [TokenAttribute] Offset: FFFFFFFF
  class Livestreaming : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LivestreamingStatus> GetStatus()
    // Offset: 0x949C78
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LivestreamingStatus*>* GetStatus();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LivestreamingStatus> PauseStream()
    // Offset: 0x949D84
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LivestreamingStatus*>* PauseStream();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LivestreamingStatus> ResumeStream()
    // Offset: 0x949E90
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LivestreamingStatus*>* ResumeStream();
    // static public System.Void SetStatusUpdateNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.LivestreamingStatus> callback)
    // Offset: 0x949F9C
    static void SetStatusUpdateNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStatus*>::Callback* callback);
  }; // Oculus.Platform.Livestreaming
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Livestreaming::GetStatus
// Il2CppName: GetStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LivestreamingStatus*>* (*)()>(&Oculus::Platform::Livestreaming::GetStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Livestreaming*), "GetStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Livestreaming::PauseStream
// Il2CppName: PauseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LivestreamingStatus*>* (*)()>(&Oculus::Platform::Livestreaming::PauseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Livestreaming*), "PauseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Livestreaming::ResumeStream
// Il2CppName: ResumeStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LivestreamingStatus*>* (*)()>(&Oculus::Platform::Livestreaming::ResumeStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Livestreaming*), "ResumeStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback
// Il2CppName: SetStatusUpdateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
