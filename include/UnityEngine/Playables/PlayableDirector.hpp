// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Playables::PlayableDirector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableDirector
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EE220
  // [NativeHeaderAttribute] Offset: EE220
  // [RequiredByNativeCodeAttribute] Offset: EE220
  class PlayableDirector : public ::UnityEngine::Behaviour {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> played
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* played;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> paused
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* paused;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> stopped
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>* stopped;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`1<UnityEngine.Playables.PlayableDirector> played
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& dyn_played();
    // Get instance field reference: private System.Action`1<UnityEngine.Playables.PlayableDirector> paused
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& dyn_paused();
    // Get instance field reference: private System.Action`1<UnityEngine.Playables.PlayableDirector> stopped
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*& dyn_stopped();
    // private System.Void SendOnPlayableDirectorPlay()
    // Offset: 0x671BF0
    void SendOnPlayableDirectorPlay();
    // private System.Void SendOnPlayableDirectorPause()
    // Offset: 0x671BA0
    void SendOnPlayableDirectorPause();
    // private System.Void SendOnPlayableDirectorStop()
    // Offset: 0x671C40
    void SendOnPlayableDirectorStop();
  }; // UnityEngine.Playables.PlayableDirector
  #pragma pack(pop)
  static check_size<sizeof(PlayableDirector), 40 + sizeof(::System::Action_1<::UnityEngine::Playables::PlayableDirector*>*)> __UnityEngine_Playables_PlayableDirectorSizeCheck;
  static_assert(sizeof(PlayableDirector) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay
// Il2CppName: SendOnPlayableDirectorPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "SendOnPlayableDirectorPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause
// Il2CppName: SendOnPlayableDirectorPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "SendOnPlayableDirectorPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop
// Il2CppName: SendOnPlayableDirectorStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableDirector::*)()>(&UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableDirector*), "SendOnPlayableDirectorStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
