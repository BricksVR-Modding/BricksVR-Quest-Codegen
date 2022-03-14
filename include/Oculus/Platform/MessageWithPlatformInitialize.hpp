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
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithPlatformInitialize
  class MessageWithPlatformInitialize;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithPlatformInitialize);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPlatformInitialize*, "Oculus.Platform", "MessageWithPlatformInitialize");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithPlatformInitialize
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithPlatformInitialize : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*> {
    public:
    // protected Oculus.Platform.Models.PlatformInitialize GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x957408
    ::Oculus::Platform::Models::PlatformInitialize* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x94F2FC
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithPlatformInitialize* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithPlatformInitialize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithPlatformInitialize*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.PlatformInitialize GetPlatformInitialize()
    // Offset: 0x9573C4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.PlatformInitialize Message::GetPlatformInitialize()
    ::Oculus::Platform::Models::PlatformInitialize* GetPlatformInitialize();
  }; // Oculus.Platform.MessageWithPlatformInitialize
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPlatformInitialize::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (Oculus::Platform::MessageWithPlatformInitialize::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithPlatformInitialize::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPlatformInitialize*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPlatformInitialize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithPlatformInitialize::GetPlatformInitialize
// Il2CppName: GetPlatformInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PlatformInitialize* (Oculus::Platform::MessageWithPlatformInitialize::*)()>(&Oculus::Platform::MessageWithPlatformInitialize::GetPlatformInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithPlatformInitialize*), "GetPlatformInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
