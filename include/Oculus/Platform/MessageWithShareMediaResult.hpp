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
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithShareMediaResult
  class MessageWithShareMediaResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithShareMediaResult*, "Oculus.Platform", "MessageWithShareMediaResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithShareMediaResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithShareMediaResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ShareMediaResult*> {
    public:
    // protected Oculus.Platform.Models.ShareMediaResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x847C70
    ::Oculus::Platform::Models::ShareMediaResult* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x847D80
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithShareMediaResult* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithShareMediaResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithShareMediaResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.ShareMediaResult GetShareMediaResult()
    // Offset: 0x847D40
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ShareMediaResult Message::GetShareMediaResult()
    ::Oculus::Platform::Models::ShareMediaResult* GetShareMediaResult();
  }; // Oculus.Platform.MessageWithShareMediaResult
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (Oculus::Platform::MessageWithShareMediaResult::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithShareMediaResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithShareMediaResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithShareMediaResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult
// Il2CppName: GetShareMediaResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ShareMediaResult* (Oculus::Platform::MessageWithShareMediaResult::*)()>(&Oculus::Platform::MessageWithShareMediaResult::GetShareMediaResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithShareMediaResult*), "GetShareMediaResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
