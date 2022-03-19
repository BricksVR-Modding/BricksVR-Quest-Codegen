// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserSettings
  class UserSettings;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatar
  class RealtimeAvatar;
  // Forward declaring type: RealtimeAvatarVoice
  class RealtimeAvatarVoice;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SyncVoiceWithSettings
  class SyncVoiceWithSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SyncVoiceWithSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncVoiceWithSettings*, "", "SyncVoiceWithSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: SyncVoiceWithSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class SyncVoiceWithSettings : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UserSettings _userSettings
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::UserSettings* userSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UserSettings*) == 0x8);
    // private System.Boolean _self
    // Size: 0x1
    // Offset: 0x20
    bool self;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _pushToTalkEnabled
    // Size: 0x1
    // Offset: 0x21
    bool pushToTalkEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _micEnabled
    // Size: 0x1
    // Offset: 0x22
    bool micEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Muted>k__BackingField
    // Size: 0x1
    // Offset: 0x23
    bool Muted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Muted and: realtimeAvatar
    char __padding4[0x4] = {};
    // public Normal.Realtime.RealtimeAvatar realtimeAvatar
    // Size: 0x8
    // Offset: 0x28
    ::Normal::Realtime::RealtimeAvatar* realtimeAvatar;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatar*) == 0x8);
    // public Normal.Realtime.RealtimeAvatarVoice realtimeVoice
    // Size: 0x8
    // Offset: 0x30
    ::Normal::Realtime::RealtimeAvatarVoice* realtimeVoice;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarVoice*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UserSettings _userSettings
    ::GlobalNamespace::UserSettings*& dyn__userSettings();
    // Get instance field reference: private System.Boolean _self
    bool& dyn__self();
    // Get instance field reference: private System.Boolean _pushToTalkEnabled
    bool& dyn__pushToTalkEnabled();
    // Get instance field reference: private System.Boolean _micEnabled
    bool& dyn__micEnabled();
    // Get instance field reference: private System.Boolean <Muted>k__BackingField
    bool& dyn_$Muted$k__BackingField();
    // Get instance field reference: public Normal.Realtime.RealtimeAvatar realtimeAvatar
    ::Normal::Realtime::RealtimeAvatar*& dyn_realtimeAvatar();
    // Get instance field reference: public Normal.Realtime.RealtimeAvatarVoice realtimeVoice
    ::Normal::Realtime::RealtimeAvatarVoice*& dyn_realtimeVoice();
    // public System.Boolean get_Muted()
    // Offset: 0x10C3654
    bool get_Muted();
    // private System.Void set_Muted(System.Boolean value)
    // Offset: 0x10C365C
    void set_Muted(bool value);
    // private System.Void Start()
    // Offset: 0x10C3668
    void Start();
    // public System.Void ToggleMuted()
    // Offset: 0x10C3904
    void ToggleMuted();
    // private System.Void SetMuted(System.Boolean muted)
    // Offset: 0x10C3914
    void SetMuted(bool muted);
    // private System.Void Update()
    // Offset: 0x10C396C
    void Update();
    // private System.Void PushToTalkToggled(System.Boolean pushToTalkEnabled)
    // Offset: 0x10C3A64
    void PushToTalkToggled(bool pushToTalkEnabled);
    // private System.Void SetMicEnabled(System.Boolean value)
    // Offset: 0x10C388C
    void SetMicEnabled(bool value);
    // public System.Void .ctor()
    // Offset: 0x10C3AD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SyncVoiceWithSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SyncVoiceWithSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SyncVoiceWithSettings*, creationType>()));
    }
  }; // SyncVoiceWithSettings
  #pragma pack(pop)
  static check_size<sizeof(SyncVoiceWithSettings), 48 + sizeof(::Normal::Realtime::RealtimeAvatarVoice*)> __GlobalNamespace_SyncVoiceWithSettingsSizeCheck;
  static_assert(sizeof(SyncVoiceWithSettings) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::get_Muted
// Il2CppName: get_Muted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SyncVoiceWithSettings::*)()>(&GlobalNamespace::SyncVoiceWithSettings::get_Muted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "get_Muted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::set_Muted
// Il2CppName: set_Muted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)(bool)>(&GlobalNamespace::SyncVoiceWithSettings::set_Muted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "set_Muted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)()>(&GlobalNamespace::SyncVoiceWithSettings::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::ToggleMuted
// Il2CppName: ToggleMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)()>(&GlobalNamespace::SyncVoiceWithSettings::ToggleMuted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "ToggleMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::SetMuted
// Il2CppName: SetMuted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)(bool)>(&GlobalNamespace::SyncVoiceWithSettings::SetMuted)> {
  static const MethodInfo* get() {
    static auto* muted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "SetMuted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{muted});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)()>(&GlobalNamespace::SyncVoiceWithSettings::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::PushToTalkToggled
// Il2CppName: PushToTalkToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)(bool)>(&GlobalNamespace::SyncVoiceWithSettings::PushToTalkToggled)> {
  static const MethodInfo* get() {
    static auto* pushToTalkEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "PushToTalkToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pushToTalkEnabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::SetMicEnabled
// Il2CppName: SetMicEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SyncVoiceWithSettings::*)(bool)>(&GlobalNamespace::SyncVoiceWithSettings::SetMicEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SyncVoiceWithSettings*), "SetMicEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SyncVoiceWithSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
