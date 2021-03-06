// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClientClass`1
#include "Steamworks/SteamClientClass_1.hpp"
// Including type: Steamworks.SteamId
#include "Steamworks/SteamId.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
// Including type: Steamworks.Data.Achievement
#include "Steamworks/Data/Achievement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ISteamUserStats
  class ISteamUserStats;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamUserStats
  class SteamUserStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamUserStats);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamUserStats*, "Steamworks", "SteamUserStats");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamUserStats
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamUserStats : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamUserStats*> {
    public:
    // Nested type: ::Steamworks::SteamUserStats::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Boolean <StatsRecieved>k__BackingField
    static bool _get_$StatsRecieved$k__BackingField();
    // Set static field: static private System.Boolean <StatsRecieved>k__BackingField
    static void _set_$StatsRecieved$k__BackingField(bool value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`2<System.String,System.Int32> OnAchievementIconFetched
    static ::System::Action_2<::StringW, int>* _get_OnAchievementIconFetched();
    // Set static field: static private System.Action`2<System.String,System.Int32> OnAchievementIconFetched
    static void _set_OnAchievementIconFetched(::System::Action_2<::StringW, int>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<Steamworks.SteamId,Steamworks.Result> OnUserStatsReceived
    static ::System::Action_2<::Steamworks::SteamId, ::Steamworks::Result>* _get_OnUserStatsReceived();
    // Set static field: static private System.Action`2<Steamworks.SteamId,Steamworks.Result> OnUserStatsReceived
    static void _set_OnUserStatsReceived(::System::Action_2<::Steamworks::SteamId, ::Steamworks::Result>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`1<Steamworks.Result> OnUserStatsStored
    static ::System::Action_1<::Steamworks::Result>* _get_OnUserStatsStored();
    // Set static field: static private System.Action`1<Steamworks.Result> OnUserStatsStored
    static void _set_OnUserStatsStored(::System::Action_1<::Steamworks::Result>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`3<Steamworks.Data.Achievement,System.Int32,System.Int32> OnAchievementProgress
    static ::System::Action_3<::Steamworks::Data::Achievement, int, int>* _get_OnAchievementProgress();
    // Set static field: static private System.Action`3<Steamworks.Data.Achievement,System.Int32,System.Int32> OnAchievementProgress
    static void _set_OnAchievementProgress(::System::Action_3<::Steamworks::Data::Achievement, int, int>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<Steamworks.SteamId> OnUserStatsUnloaded
    static ::System::Action_1<::Steamworks::SteamId>* _get_OnUserStatsUnloaded();
    // Set static field: static private System.Action`1<Steamworks.SteamId> OnUserStatsUnloaded
    static void _set_OnUserStatsUnloaded(::System::Action_1<::Steamworks::SteamId>* value);
    // static Steamworks.ISteamUserStats get_Internal()
    // Offset: 0x5C60C0
    static ::Steamworks::ISteamUserStats* get_Internal();
    // static System.Void set_StatsRecieved(System.Boolean value)
    // Offset: 0x5C6150
    static void set_StatsRecieved(bool value);
    // static System.Void InstallEvents()
    // Offset: 0x5C5B50
    static void InstallEvents();
    // static public System.Boolean RequestCurrentStats()
    // Offset: 0x5C5F90
    static bool RequestCurrentStats();
    // public System.Void .ctor()
    // Offset: 0x5C6080
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamUserStats* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamUserStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamUserStats*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C59F0
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamUserStats
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamUserStats::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::ISteamUserStats* (*)()>(&Steamworks::SteamUserStats::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUserStats*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUserStats::set_StatsRecieved
// Il2CppName: set_StatsRecieved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Steamworks::SteamUserStats::set_StatsRecieved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUserStats*), "set_StatsRecieved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUserStats::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamUserStats::InstallEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUserStats*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUserStats::RequestCurrentStats
// Il2CppName: RequestCurrentStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Steamworks::SteamUserStats::RequestCurrentStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUserStats*), "RequestCurrentStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUserStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamUserStats::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamUserStats::*)(bool)>(&Steamworks::SteamUserStats::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUserStats*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
