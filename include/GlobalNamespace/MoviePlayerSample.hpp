// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVROverlay
  class OVROverlay;
}
// Forward declaring namespace: UnityEngine::Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoPlayer
  class VideoPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MoviePlayerSample
  class MoviePlayerSample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MoviePlayerSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoviePlayerSample*, "", "MoviePlayerSample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: MoviePlayerSample
  // [TokenAttribute] Offset: FFFFFFFF
  class MoviePlayerSample : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MoviePlayerSample::VideoShape
    struct VideoShape;
    // Nested type: ::GlobalNamespace::MoviePlayerSample::VideoStereo
    struct VideoStereo;
    // Nested type: ::GlobalNamespace::MoviePlayerSample::$Start$d__32
    class $Start$d__32;
    // Nested type: ::GlobalNamespace::MoviePlayerSample::$$c__DisplayClass33_0
    class $$c__DisplayClass33_0;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MoviePlayerSample/VideoShape
    // [TokenAttribute] Offset: FFFFFFFF
    struct VideoShape/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: VideoShape
      constexpr VideoShape(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MoviePlayerSample/VideoShape _360
      static constexpr const int _360 = 0;
      // Get static field: static public MoviePlayerSample/VideoShape _360
      static ::GlobalNamespace::MoviePlayerSample::VideoShape _get__360();
      // Set static field: static public MoviePlayerSample/VideoShape _360
      static void _set__360(::GlobalNamespace::MoviePlayerSample::VideoShape value);
      // static field const value: static public MoviePlayerSample/VideoShape _180
      static constexpr const int _180 = 1;
      // Get static field: static public MoviePlayerSample/VideoShape _180
      static ::GlobalNamespace::MoviePlayerSample::VideoShape _get__180();
      // Set static field: static public MoviePlayerSample/VideoShape _180
      static void _set__180(::GlobalNamespace::MoviePlayerSample::VideoShape value);
      // static field const value: static public MoviePlayerSample/VideoShape Quad
      static constexpr const int Quad = 2;
      // Get static field: static public MoviePlayerSample/VideoShape Quad
      static ::GlobalNamespace::MoviePlayerSample::VideoShape _get_Quad();
      // Set static field: static public MoviePlayerSample/VideoShape Quad
      static void _set_Quad(::GlobalNamespace::MoviePlayerSample::VideoShape value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // MoviePlayerSample/VideoShape
    #pragma pack(pop)
    static check_size<sizeof(MoviePlayerSample::VideoShape), 0 + sizeof(int)> __GlobalNamespace_MoviePlayerSample_VideoShapeSizeCheck;
    static_assert(sizeof(MoviePlayerSample::VideoShape) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MoviePlayerSample/VideoStereo
    // [TokenAttribute] Offset: FFFFFFFF
    struct VideoStereo/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: VideoStereo
      constexpr VideoStereo(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MoviePlayerSample/VideoStereo Mono
      static constexpr const int Mono = 0;
      // Get static field: static public MoviePlayerSample/VideoStereo Mono
      static ::GlobalNamespace::MoviePlayerSample::VideoStereo _get_Mono();
      // Set static field: static public MoviePlayerSample/VideoStereo Mono
      static void _set_Mono(::GlobalNamespace::MoviePlayerSample::VideoStereo value);
      // static field const value: static public MoviePlayerSample/VideoStereo TopBottom
      static constexpr const int TopBottom = 1;
      // Get static field: static public MoviePlayerSample/VideoStereo TopBottom
      static ::GlobalNamespace::MoviePlayerSample::VideoStereo _get_TopBottom();
      // Set static field: static public MoviePlayerSample/VideoStereo TopBottom
      static void _set_TopBottom(::GlobalNamespace::MoviePlayerSample::VideoStereo value);
      // static field const value: static public MoviePlayerSample/VideoStereo LeftRight
      static constexpr const int LeftRight = 2;
      // Get static field: static public MoviePlayerSample/VideoStereo LeftRight
      static ::GlobalNamespace::MoviePlayerSample::VideoStereo _get_LeftRight();
      // Set static field: static public MoviePlayerSample/VideoStereo LeftRight
      static void _set_LeftRight(::GlobalNamespace::MoviePlayerSample::VideoStereo value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // MoviePlayerSample/VideoStereo
    #pragma pack(pop)
    static check_size<sizeof(MoviePlayerSample::VideoStereo), 0 + sizeof(int)> __GlobalNamespace_MoviePlayerSample_VideoStereoSizeCheck;
    static_assert(sizeof(MoviePlayerSample::VideoStereo) == 0x4);
    public:
    // private System.Boolean videoPausedBeforeAppPause
    // Size: 0x1
    // Offset: 0x18
    bool videoPausedBeforeAppPause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: videoPausedBeforeAppPause and: videoPlayer
    char __padding0[0x7] = {};
    // private UnityEngine.Video.VideoPlayer videoPlayer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Video::VideoPlayer* videoPlayer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer*) == 0x8);
    // private OVROverlay overlay
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVROverlay* overlay;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVROverlay*) == 0x8);
    // private UnityEngine.Renderer mediaRenderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* mediaRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private System.Boolean <IsPlaying>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool IsPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPlaying and: Duration
    char __padding4[0x7] = {};
    // private System.Int64 <Duration>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    int64_t Duration;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 <PlaybackPosition>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    int64_t PlaybackPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private UnityEngine.RenderTexture copyTexture
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::RenderTexture* copyTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Material externalTex2DMaterial
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Material* externalTex2DMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.String MovieName
    // Size: 0x8
    // Offset: 0x60
    ::StringW MovieName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String DrmLicenseUrl
    // Size: 0x8
    // Offset: 0x68
    ::StringW DrmLicenseUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean LoopVideo
    // Size: 0x1
    // Offset: 0x70
    bool LoopVideo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: LoopVideo and: Shape
    char __padding11[0x3] = {};
    // public MoviePlayerSample/VideoShape Shape
    // Size: 0x4
    // Offset: 0x74
    ::GlobalNamespace::MoviePlayerSample::VideoShape Shape;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MoviePlayerSample::VideoShape) == 0x4);
    // public MoviePlayerSample/VideoStereo Stereo
    // Size: 0x4
    // Offset: 0x78
    ::GlobalNamespace::MoviePlayerSample::VideoStereo Stereo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MoviePlayerSample::VideoStereo) == 0x4);
    // public System.Boolean DisplayMono
    // Size: 0x1
    // Offset: 0x7C
    bool DisplayMono;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DisplayMono and: LastShape
    char __padding14[0x3] = {};
    // private MoviePlayerSample/VideoShape _LastShape
    // Size: 0x4
    // Offset: 0x80
    ::GlobalNamespace::MoviePlayerSample::VideoShape LastShape;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MoviePlayerSample::VideoShape) == 0x4);
    // private MoviePlayerSample/VideoStereo _LastStereo
    // Size: 0x4
    // Offset: 0x84
    ::GlobalNamespace::MoviePlayerSample::VideoStereo LastStereo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MoviePlayerSample::VideoStereo) == 0x4);
    // private System.Boolean _LastDisplayMono
    // Size: 0x1
    // Offset: 0x88
    bool LastDisplayMono;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean videoPausedBeforeAppPause
    [[deprecated]] bool& dyn_videoPausedBeforeAppPause();
    // Get instance field reference: private UnityEngine.Video.VideoPlayer videoPlayer
    [[deprecated]] ::UnityEngine::Video::VideoPlayer*& dyn_videoPlayer();
    // Get instance field reference: private OVROverlay overlay
    [[deprecated]] ::GlobalNamespace::OVROverlay*& dyn_overlay();
    // Get instance field reference: private UnityEngine.Renderer mediaRenderer
    [[deprecated]] ::UnityEngine::Renderer*& dyn_mediaRenderer();
    // Get instance field reference: private System.Boolean <IsPlaying>k__BackingField
    [[deprecated]] bool& dyn_$IsPlaying$k__BackingField();
    // Get instance field reference: private System.Int64 <Duration>k__BackingField
    [[deprecated]] int64_t& dyn_$Duration$k__BackingField();
    // Get instance field reference: private System.Int64 <PlaybackPosition>k__BackingField
    [[deprecated]] int64_t& dyn_$PlaybackPosition$k__BackingField();
    // Get instance field reference: private UnityEngine.RenderTexture copyTexture
    [[deprecated]] ::UnityEngine::RenderTexture*& dyn_copyTexture();
    // Get instance field reference: private UnityEngine.Material externalTex2DMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn_externalTex2DMaterial();
    // Get instance field reference: public System.String MovieName
    [[deprecated]] ::StringW& dyn_MovieName();
    // Get instance field reference: public System.String DrmLicenseUrl
    [[deprecated]] ::StringW& dyn_DrmLicenseUrl();
    // Get instance field reference: public System.Boolean LoopVideo
    [[deprecated]] bool& dyn_LoopVideo();
    // Get instance field reference: public MoviePlayerSample/VideoShape Shape
    [[deprecated]] ::GlobalNamespace::MoviePlayerSample::VideoShape& dyn_Shape();
    // Get instance field reference: public MoviePlayerSample/VideoStereo Stereo
    [[deprecated]] ::GlobalNamespace::MoviePlayerSample::VideoStereo& dyn_Stereo();
    // Get instance field reference: public System.Boolean DisplayMono
    [[deprecated]] bool& dyn_DisplayMono();
    // Get instance field reference: private MoviePlayerSample/VideoShape _LastShape
    [[deprecated]] ::GlobalNamespace::MoviePlayerSample::VideoShape& dyn__LastShape();
    // Get instance field reference: private MoviePlayerSample/VideoStereo _LastStereo
    [[deprecated]] ::GlobalNamespace::MoviePlayerSample::VideoStereo& dyn__LastStereo();
    // Get instance field reference: private System.Boolean _LastDisplayMono
    [[deprecated]] bool& dyn__LastDisplayMono();
    // public System.Boolean get_IsPlaying()
    // Offset: 0x251310
    bool get_IsPlaying();
    // private System.Void set_IsPlaying(System.Boolean value)
    // Offset: 0x294EC0
    void set_IsPlaying(bool value);
    // public System.Int64 get_Duration()
    // Offset: 0x1E0CA0
    int64_t get_Duration();
    // private System.Void set_Duration(System.Int64 value)
    // Offset: 0x294EB0
    void set_Duration(int64_t value);
    // public System.Int64 get_PlaybackPosition()
    // Offset: 0x232190
    int64_t get_PlaybackPosition();
    // private System.Void set_PlaybackPosition(System.Int64 value)
    // Offset: 0x294ED0
    void set_PlaybackPosition(int64_t value);
    // private System.Void Awake()
    // Offset: 0x2934C0
    void Awake();
    // private System.Boolean IsLocalVideo(System.String movieName)
    // Offset: 0x2936E0
    bool IsLocalVideo(::StringW movieName);
    // private System.Void UpdateShapeAndStereo()
    // Offset: 0x294410
    void UpdateShapeAndStereo();
    // private System.Collections.IEnumerator Start()
    // Offset: 0x294210
    ::System::Collections::IEnumerator* Start();
    // public System.Void Play(System.String moviePath, System.String drmLicencesUrl)
    // Offset: 0x293B10
    void Play(::StringW moviePath, ::StringW drmLicencesUrl);
    // public System.Void Play()
    // Offset: 0x293980
    void Play();
    // public System.Void Pause()
    // Offset: 0x2937F0
    void Pause();
    // public System.Void SeekTo(System.Int64 position)
    // Offset: 0x293D80
    void SeekTo(int64_t position);
    // private System.Void Update()
    // Offset: 0x294690
    void Update();
    // public System.Void SetPlaybackSpeed(System.Single speed)
    // Offset: 0x293FD0
    void SetPlaybackSpeed(float speed);
    // public System.Void Stop()
    // Offset: 0x294280
    void Stop();
    // private System.Void OnApplicationPause(System.Boolean appWasPaused)
    // Offset: 0x293730
    void OnApplicationPause(bool appWasPaused);
    // public System.Void .ctor()
    // Offset: 0x294E90
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoviePlayerSample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MoviePlayerSample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoviePlayerSample*, creationType>()));
    }
  }; // MoviePlayerSample
  #pragma pack(pop)
  static check_size<sizeof(MoviePlayerSample), 136 + sizeof(bool)> __GlobalNamespace_MoviePlayerSampleSizeCheck;
  static_assert(sizeof(MoviePlayerSample) == 0x89);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoviePlayerSample::VideoStereo, "", "MoviePlayerSample/VideoStereo");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoviePlayerSample::VideoShape, "", "MoviePlayerSample/VideoShape");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::get_IsPlaying
// Il2CppName: get_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::get_IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "get_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::set_IsPlaying
// Il2CppName: set_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(bool)>(&GlobalNamespace::MoviePlayerSample::set_IsPlaying)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "set_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::set_Duration
// Il2CppName: set_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(int64_t)>(&GlobalNamespace::MoviePlayerSample::set_Duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "set_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::get_PlaybackPosition
// Il2CppName: get_PlaybackPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::get_PlaybackPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "get_PlaybackPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::set_PlaybackPosition
// Il2CppName: set_PlaybackPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(int64_t)>(&GlobalNamespace::MoviePlayerSample::set_PlaybackPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "set_PlaybackPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::IsLocalVideo
// Il2CppName: IsLocalVideo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MoviePlayerSample::*)(::StringW)>(&GlobalNamespace::MoviePlayerSample::IsLocalVideo)> {
  static const MethodInfo* get() {
    static auto* movieName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "IsLocalVideo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{movieName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::UpdateShapeAndStereo
// Il2CppName: UpdateShapeAndStereo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::UpdateShapeAndStereo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "UpdateShapeAndStereo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(::StringW, ::StringW)>(&GlobalNamespace::MoviePlayerSample::Play)> {
  static const MethodInfo* get() {
    static auto* moviePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* drmLicencesUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{moviePath, drmLicencesUrl});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::Play)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(int64_t)>(&GlobalNamespace::MoviePlayerSample::SeekTo)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::SetPlaybackSpeed
// Il2CppName: SetPlaybackSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(float)>(&GlobalNamespace::MoviePlayerSample::SetPlaybackSpeed)> {
  static const MethodInfo* get() {
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "SetPlaybackSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)()>(&GlobalNamespace::MoviePlayerSample::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSample::*)(bool)>(&GlobalNamespace::MoviePlayerSample::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* appWasPaused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSample*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appWasPaused});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
