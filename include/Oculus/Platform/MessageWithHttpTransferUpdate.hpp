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
  // Forward declaring type: HttpTransferUpdate
  class HttpTransferUpdate;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithHttpTransferUpdate
  class MessageWithHttpTransferUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithHttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithHttpTransferUpdate*, "Oculus.Platform", "MessageWithHttpTransferUpdate");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithHttpTransferUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithHttpTransferUpdate : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::HttpTransferUpdate*> {
    public:
    // protected Oculus.Platform.Models.HttpTransferUpdate GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x9531E8
    ::Oculus::Platform::Models::HttpTransferUpdate* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x94F29C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithHttpTransferUpdate* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithHttpTransferUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithHttpTransferUpdate*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.HttpTransferUpdate GetHttpTransferUpdate()
    // Offset: 0x9531A4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.HttpTransferUpdate Message::GetHttpTransferUpdate()
    ::Oculus::Platform::Models::HttpTransferUpdate* GetHttpTransferUpdate();
  }; // Oculus.Platform.MessageWithHttpTransferUpdate
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithHttpTransferUpdate::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (Oculus::Platform::MessageWithHttpTransferUpdate::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithHttpTransferUpdate::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithHttpTransferUpdate*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithHttpTransferUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithHttpTransferUpdate::GetHttpTransferUpdate
// Il2CppName: GetHttpTransferUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (Oculus::Platform::MessageWithHttpTransferUpdate::*)()>(&Oculus::Platform::MessageWithHttpTransferUpdate::GetHttpTransferUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithHttpTransferUpdate*), "GetHttpTransferUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
