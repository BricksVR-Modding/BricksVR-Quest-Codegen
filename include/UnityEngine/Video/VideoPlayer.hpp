// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Video
namespace UnityEngine::Video {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoPlayer
  class VideoPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 7100B0
  // [RequiredByNativeCodeAttribute] Offset: 7100B0
  // [NativeHeaderAttribute] Offset: 7100B0
  class VideoPlayer : public ::UnityEngine::Behaviour {
    public:
    // Nested type: ::UnityEngine::Video::VideoPlayer::EventHandler
    class EventHandler;
    // Nested type: ::UnityEngine::Video::VideoPlayer::ErrorEventHandler
    class ErrorEventHandler;
    // Nested type: ::UnityEngine::Video::VideoPlayer::FrameReadyEventHandler
    class FrameReadyEventHandler;
    // Nested type: ::UnityEngine::Video::VideoPlayer::TimeEventHandler
    class TimeEventHandler;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x710148
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler prepareCompleted
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Video::VideoPlayer::EventHandler* prepareCompleted;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::EventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x710184
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler loopPointReached
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Video::VideoPlayer::EventHandler* loopPointReached;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::EventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x7101C0
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler started
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Video::VideoPlayer::EventHandler* started;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::EventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x7101FC
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler frameDropped
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Video::VideoPlayer::EventHandler* frameDropped;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::EventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x710238
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.ErrorEventHandler errorReceived
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Video::VideoPlayer::ErrorEventHandler* errorReceived;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::ErrorEventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x710274
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler seekCompleted
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Video::VideoPlayer::EventHandler* seekCompleted;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::EventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x7102B0
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.TimeEventHandler clockResyncOccurred
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Video::VideoPlayer::TimeEventHandler* clockResyncOccurred;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::TimeEventHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x7102EC
    // private UnityEngine.Video.VideoPlayer/UnityEngine.Video.FrameReadyEventHandler frameReady
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Video::VideoPlayer::FrameReadyEventHandler* frameReady;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer::FrameReadyEventHandler*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler prepareCompleted
    ::UnityEngine::Video::VideoPlayer::EventHandler*& dyn_prepareCompleted();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler loopPointReached
    ::UnityEngine::Video::VideoPlayer::EventHandler*& dyn_loopPointReached();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler started
    ::UnityEngine::Video::VideoPlayer::EventHandler*& dyn_started();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler frameDropped
    ::UnityEngine::Video::VideoPlayer::EventHandler*& dyn_frameDropped();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.ErrorEventHandler errorReceived
    ::UnityEngine::Video::VideoPlayer::ErrorEventHandler*& dyn_errorReceived();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.EventHandler seekCompleted
    ::UnityEngine::Video::VideoPlayer::EventHandler*& dyn_seekCompleted();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.TimeEventHandler clockResyncOccurred
    ::UnityEngine::Video::VideoPlayer::TimeEventHandler*& dyn_clockResyncOccurred();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer/UnityEngine.Video.FrameReadyEventHandler frameReady
    ::UnityEngine::Video::VideoPlayer::FrameReadyEventHandler*& dyn_frameReady();
    // public System.Void set_url(System.String value)
    // Offset: 0x104EBD0
    void set_url(::StringW value);
    // public UnityEngine.Texture get_texture()
    // Offset: 0x104EC20
    ::UnityEngine::Texture* get_texture();
    // public System.Boolean get_isPlaying()
    // Offset: 0x104ED60
    bool get_isPlaying();
    // public System.Double get_time()
    // Offset: 0x104EDA0
    double get_time();
    // public System.Void set_time(System.Double value)
    // Offset: 0x104EDE0
    void set_time(double value);
    // public System.Void set_playbackSpeed(System.Single value)
    // Offset: 0x104EE30
    void set_playbackSpeed(float value);
    // public System.Void set_isLooping(System.Boolean value)
    // Offset: 0x104EE80
    void set_isLooping(bool value);
    // public System.Double get_length()
    // Offset: 0x104EED0
    double get_length();
    // public System.Void Prepare()
    // Offset: 0x104EC60
    void Prepare();
    // public System.Void Play()
    // Offset: 0x104ECA0
    void Play();
    // public System.Void Pause()
    // Offset: 0x104ECE0
    void Pause();
    // public System.Void Stop()
    // Offset: 0x104ED20
    void Stop();
    // static private System.Void InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer source)
    // Offset: 0x104EF10
    static void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);
    // static private System.Void InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer source, System.Int64 frameIdx)
    // Offset: 0x104F2C8
    static void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);
    // static private System.Void InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer source)
    // Offset: 0x104F6F8
    static void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);
    // static private System.Void InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer source)
    // Offset: 0x104F71C
    static void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);
    // static private System.Void InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer source)
    // Offset: 0x104F740
    static void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);
    // static private System.Void InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer source, System.String errorStr)
    // Offset: 0x104F764
    static void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr);
    // static private System.Void InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer source)
    // Offset: 0x104FB74
    static void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);
    // static private System.Void InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer source, System.Double seconds)
    // Offset: 0x104FB98
    static void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double seconds);
  }; // UnityEngine.Video.VideoPlayer
  #pragma pack(pop)
  static check_size<sizeof(VideoPlayer), 80 + sizeof(::UnityEngine::Video::VideoPlayer::FrameReadyEventHandler*)> __UnityEngine_Video_VideoPlayerSizeCheck;
  static_assert(sizeof(VideoPlayer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::set_url
// Il2CppName: set_url
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)(::StringW)>(&UnityEngine::Video::VideoPlayer::set_url)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "set_url", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::get_isPlaying
// Il2CppName: get_isPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::get_isPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "get_isPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)(double)>(&UnityEngine::Video::VideoPlayer::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::set_playbackSpeed
// Il2CppName: set_playbackSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)(float)>(&UnityEngine::Video::VideoPlayer::set_playbackSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "set_playbackSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::set_isLooping
// Il2CppName: set_isLooping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)(bool)>(&UnityEngine::Video::VideoPlayer::set_isLooping)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "set_isLooping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::Prepare)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Video::VideoPlayer::*)()>(&UnityEngine::Video::VideoPlayer::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal
// Il2CppName: InvokePrepareCompletedCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokePrepareCompletedCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal
// Il2CppName: InvokeFrameReadyCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(&UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    static auto* frameIdx = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeFrameReadyCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, frameIdx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal
// Il2CppName: InvokeLoopPointReachedCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeLoopPointReachedCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal
// Il2CppName: InvokeStartedCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeStartedCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal
// Il2CppName: InvokeFrameDroppedCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeFrameDroppedCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal
// Il2CppName: InvokeErrorReceivedCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(&UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    static auto* errorStr = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeErrorReceivedCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, errorStr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal
// Il2CppName: InvokeSeekCompletedCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeSeekCompletedCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal
// Il2CppName: InvokeClockResyncOccurredCallback_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, double)>(&UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoPlayer")->byval_arg;
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Video::VideoPlayer*), "InvokeClockResyncOccurredCallback_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, seconds});
  }
};
