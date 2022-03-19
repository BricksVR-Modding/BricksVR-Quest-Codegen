// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AbuseReportRecording
  class AbuseReportRecording;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithAbuseReportRecording
  class MessageWithAbuseReportRecording;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithAbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAbuseReportRecording*, "Oculus.Platform", "MessageWithAbuseReportRecording");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAbuseReportRecording
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithAbuseReportRecording : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AbuseReportRecording*> {
    public:
    // protected Oculus.Platform.Models.AbuseReportRecording GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x95010C
    ::Oculus::Platform::Models::AbuseReportRecording* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x950068
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAbuseReportRecording* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithAbuseReportRecording::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAbuseReportRecording*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AbuseReportRecording GetAbuseReportRecording()
    // Offset: 0x9500C8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AbuseReportRecording Message::GetAbuseReportRecording()
    ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording();
  }; // Oculus.Platform.MessageWithAbuseReportRecording
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAbuseReportRecording::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (Oculus::Platform::MessageWithAbuseReportRecording::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithAbuseReportRecording::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAbuseReportRecording*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAbuseReportRecording::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAbuseReportRecording::GetAbuseReportRecording
// Il2CppName: GetAbuseReportRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (Oculus::Platform::MessageWithAbuseReportRecording::*)()>(&Oculus::Platform::MessageWithAbuseReportRecording::GetAbuseReportRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAbuseReportRecording*), "GetAbuseReportRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
