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
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithAchievementProgressList
  class MessageWithAchievementProgressList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementProgressList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementProgressList*, "Oculus.Platform", "MessageWithAchievementProgressList");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithAchievementProgressList
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithAchievementProgressList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*> {
    public:
    // protected Oculus.Platform.Models.AchievementProgressList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x841BE0
    ::Oculus::Platform::Models::AchievementProgressList* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x841C70
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithAchievementProgressList* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithAchievementProgressList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithAchievementProgressList*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.AchievementProgressList GetAchievementProgressList()
    // Offset: 0x841BA0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AchievementProgressList Message::GetAchievementProgressList()
    ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList();
  }; // Oculus.Platform.MessageWithAchievementProgressList
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAchievementProgressList::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (Oculus::Platform::MessageWithAchievementProgressList::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithAchievementProgressList::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAchievementProgressList*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAchievementProgressList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithAchievementProgressList::GetAchievementProgressList
// Il2CppName: GetAchievementProgressList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::AchievementProgressList* (Oculus::Platform::MessageWithAchievementProgressList::*)()>(&Oculus::Platform::MessageWithAchievementProgressList::GetAchievementProgressList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithAchievementProgressList*), "GetAchievementProgressList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
