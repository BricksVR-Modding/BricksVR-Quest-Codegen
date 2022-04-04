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
  // Forward declaring type: PidList
  class PidList;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Message because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithPidList
  class MessageWithPidList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithPidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPidList*, "Oculus.Platform", "MessageWithPidList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPidList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithPidList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PidList*> {
    public:
    // protected Oculus.Platform.Models.PidList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x846A10
    ::Oculus::Platform::Models::PidList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x846C60
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPidList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithPidList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPidList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PidList GetPidList()
    // Offset: 0x846C20
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PidList Message::GetPidList()
    ::Oculus::Platform::Models::PidList* GetPidList();
  }; // Oculus.Platform.MessageWithPidList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPidList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PidList* (Oculus::Platform::MessageWithPidList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithPidList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPidList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPidList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPidList::GetPidList
// Il2CppName: GetPidList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PidList* (Oculus::Platform::MessageWithPidList::*)()>(&Oculus::Platform::MessageWithPidList::GetPidList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPidList*), "GetPidList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
