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
  // Forward declaring type: MatchmakingStats
  class MatchmakingStats;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithMatchmakingStatsUnderMatchmakingStats
  class MessageWithMatchmakingStatsUnderMatchmakingStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*, "Oculus.Platform", "MessageWithMatchmakingStatsUnderMatchmakingStats");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingStatsUnderMatchmakingStats
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithMatchmakingStatsUnderMatchmakingStats : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingStats*> {
    public:
    // protected Oculus.Platform.Models.MatchmakingStats GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x955828
    ::Oculus::Platform::Models::MatchmakingStats* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x94E87C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithMatchmakingStatsUnderMatchmakingStats* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithMatchmakingStatsUnderMatchmakingStats*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.MatchmakingStats GetMatchmakingStats()
    // Offset: 0x9557E4
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingStats Message::GetMatchmakingStats()
    ::Oculus::Platform::Models::MatchmakingStats* GetMatchmakingStats();
  }; // Oculus.Platform.MessageWithMatchmakingStatsUnderMatchmakingStats
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingStats* (Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats
// Il2CppName: GetMatchmakingStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingStats* (Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::*)()>(&Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats::GetMatchmakingStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingStatsUnderMatchmakingStats*), "GetMatchmakingStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
