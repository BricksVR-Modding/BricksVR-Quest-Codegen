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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MoviePlayerSample
  class MoviePlayerSample;
  // Forward declaring type: OVRGazePointer
  class OVRGazePointer;
  // Forward declaring type: ButtonDownListener
  class ButtonDownListener;
  // Forward declaring type: MediaPlayerImage
  class MediaPlayerImage;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: OVRInputModule
  class OVRInputModule;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Slider
  class Slider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MoviePlayerSampleControls
  class MoviePlayerSampleControls;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MoviePlayerSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoviePlayerSampleControls*, "", "MoviePlayerSampleControls");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: MoviePlayerSampleControls
  // [TokenAttribute] Offset: FFFFFFFF
  class MoviePlayerSampleControls : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState
    struct PlaybackState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MoviePlayerSampleControls/PlaybackState
    // [TokenAttribute] Offset: FFFFFFFF
    struct PlaybackState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: PlaybackState
      constexpr PlaybackState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MoviePlayerSampleControls/PlaybackState Playing
      static constexpr const int Playing = 0;
      // Get static field: static public MoviePlayerSampleControls/PlaybackState Playing
      static ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState _get_Playing();
      // Set static field: static public MoviePlayerSampleControls/PlaybackState Playing
      static void _set_Playing(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState value);
      // static field const value: static public MoviePlayerSampleControls/PlaybackState Paused
      static constexpr const int Paused = 1;
      // Get static field: static public MoviePlayerSampleControls/PlaybackState Paused
      static ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState _get_Paused();
      // Set static field: static public MoviePlayerSampleControls/PlaybackState Paused
      static void _set_Paused(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState value);
      // static field const value: static public MoviePlayerSampleControls/PlaybackState Rewinding
      static constexpr const int Rewinding = 2;
      // Get static field: static public MoviePlayerSampleControls/PlaybackState Rewinding
      static ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState _get_Rewinding();
      // Set static field: static public MoviePlayerSampleControls/PlaybackState Rewinding
      static void _set_Rewinding(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState value);
      // static field const value: static public MoviePlayerSampleControls/PlaybackState FastForwarding
      static constexpr const int FastForwarding = 3;
      // Get static field: static public MoviePlayerSampleControls/PlaybackState FastForwarding
      static ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState _get_FastForwarding();
      // Set static field: static public MoviePlayerSampleControls/PlaybackState FastForwarding
      static void _set_FastForwarding(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MoviePlayerSampleControls/PlaybackState
    #pragma pack(pop)
    static check_size<sizeof(MoviePlayerSampleControls::PlaybackState), 0 + sizeof(int)> __GlobalNamespace_MoviePlayerSampleControls_PlaybackStateSizeCheck;
    static_assert(sizeof(MoviePlayerSampleControls::PlaybackState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public MoviePlayerSample Player
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MoviePlayerSample* Player;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MoviePlayerSample*) == 0x8);
    // public UnityEngine.EventSystems.OVRInputModule InputModule
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::EventSystems::OVRInputModule* InputModule;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::OVRInputModule*) == 0x8);
    // public OVRGazePointer GazePointer
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRGazePointer* GazePointer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRGazePointer*) == 0x8);
    // public UnityEngine.GameObject LeftHand
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* LeftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject RightHand
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* RightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Canvas Canvas
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Canvas* Canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // public ButtonDownListener PlayPause
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ButtonDownListener* PlayPause;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ButtonDownListener*) == 0x8);
    // public MediaPlayerImage PlayPauseImage
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MediaPlayerImage* PlayPauseImage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MediaPlayerImage*) == 0x8);
    // public UnityEngine.UI.Slider ProgressBar
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::UI::Slider* ProgressBar;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Slider*) == 0x8);
    // public ButtonDownListener FastForward
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::ButtonDownListener* FastForward;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ButtonDownListener*) == 0x8);
    // public MediaPlayerImage FastForwardImage
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::MediaPlayerImage* FastForwardImage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MediaPlayerImage*) == 0x8);
    // public ButtonDownListener Rewind
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::ButtonDownListener* Rewind;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ButtonDownListener*) == 0x8);
    // public MediaPlayerImage RewindImage
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::MediaPlayerImage* RewindImage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MediaPlayerImage*) == 0x8);
    // public System.Single TimeoutTime
    // Size: 0x4
    // Offset: 0x80
    float TimeoutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isVisible
    // Size: 0x1
    // Offset: 0x84
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVisible and: lastButtonTime
    char __padding14[0x3] = {};
    // private System.Single _lastButtonTime
    // Size: 0x4
    // Offset: 0x88
    float lastButtonTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _didSeek
    // Size: 0x1
    // Offset: 0x8C
    bool didSeek;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: didSeek and: seekPreviousPosition
    char __padding16[0x3] = {};
    // private System.Int64 _seekPreviousPosition
    // Size: 0x8
    // Offset: 0x90
    int64_t seekPreviousPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _rewindStartPosition
    // Size: 0x8
    // Offset: 0x98
    int64_t rewindStartPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Single _rewindStartTime
    // Size: 0x4
    // Offset: 0xA0
    float rewindStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MoviePlayerSampleControls/PlaybackState _state
    // Size: 0x4
    // Offset: 0xA4
    ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public MoviePlayerSample Player
    ::GlobalNamespace::MoviePlayerSample*& dyn_Player();
    // Get instance field reference: public UnityEngine.EventSystems.OVRInputModule InputModule
    ::UnityEngine::EventSystems::OVRInputModule*& dyn_InputModule();
    // Get instance field reference: public OVRGazePointer GazePointer
    ::GlobalNamespace::OVRGazePointer*& dyn_GazePointer();
    // Get instance field reference: public UnityEngine.GameObject LeftHand
    ::UnityEngine::GameObject*& dyn_LeftHand();
    // Get instance field reference: public UnityEngine.GameObject RightHand
    ::UnityEngine::GameObject*& dyn_RightHand();
    // Get instance field reference: public UnityEngine.Canvas Canvas
    ::UnityEngine::Canvas*& dyn_Canvas();
    // Get instance field reference: public ButtonDownListener PlayPause
    ::GlobalNamespace::ButtonDownListener*& dyn_PlayPause();
    // Get instance field reference: public MediaPlayerImage PlayPauseImage
    ::GlobalNamespace::MediaPlayerImage*& dyn_PlayPauseImage();
    // Get instance field reference: public UnityEngine.UI.Slider ProgressBar
    ::UnityEngine::UI::Slider*& dyn_ProgressBar();
    // Get instance field reference: public ButtonDownListener FastForward
    ::GlobalNamespace::ButtonDownListener*& dyn_FastForward();
    // Get instance field reference: public MediaPlayerImage FastForwardImage
    ::GlobalNamespace::MediaPlayerImage*& dyn_FastForwardImage();
    // Get instance field reference: public ButtonDownListener Rewind
    ::GlobalNamespace::ButtonDownListener*& dyn_Rewind();
    // Get instance field reference: public MediaPlayerImage RewindImage
    ::GlobalNamespace::MediaPlayerImage*& dyn_RewindImage();
    // Get instance field reference: public System.Single TimeoutTime
    float& dyn_TimeoutTime();
    // Get instance field reference: private System.Boolean _isVisible
    bool& dyn__isVisible();
    // Get instance field reference: private System.Single _lastButtonTime
    float& dyn__lastButtonTime();
    // Get instance field reference: private System.Boolean _didSeek
    bool& dyn__didSeek();
    // Get instance field reference: private System.Int64 _seekPreviousPosition
    int64_t& dyn__seekPreviousPosition();
    // Get instance field reference: private System.Int64 _rewindStartPosition
    int64_t& dyn__rewindStartPosition();
    // Get instance field reference: private System.Single _rewindStartTime
    float& dyn__rewindStartTime();
    // Get instance field reference: private MoviePlayerSampleControls/PlaybackState _state
    ::GlobalNamespace::MoviePlayerSampleControls::PlaybackState& dyn__state();
    // private System.Void Start()
    // Offset: 0x851128
    void Start();
    // private System.Void OnPlayPauseClicked()
    // Offset: 0x851418
    void OnPlayPauseClicked();
    // private System.Void OnFastForwardClicked()
    // Offset: 0x8515F4
    void OnFastForwardClicked();
    // private System.Void OnRewindClicked()
    // Offset: 0x851728
    void OnRewindClicked();
    // private System.Void OnSeekBarMoved(System.Single value)
    // Offset: 0x851830
    void OnSeekBarMoved(float value);
    // private System.Void Seek(System.Int64 pos)
    // Offset: 0x8516FC
    void Seek(int64_t pos);
    // private System.Void Update()
    // Offset: 0x8518F8
    void Update();
    // private System.Void SetVisible(System.Boolean visible)
    // Offset: 0x85130C
    void SetVisible(bool visible);
    // public System.Void .ctor()
    // Offset: 0x851C8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MoviePlayerSampleControls* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MoviePlayerSampleControls::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MoviePlayerSampleControls*, creationType>()));
    }
  }; // MoviePlayerSampleControls
  #pragma pack(pop)
  static check_size<sizeof(MoviePlayerSampleControls), 164 + sizeof(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState)> __GlobalNamespace_MoviePlayerSampleControlsSizeCheck;
  static_assert(sizeof(MoviePlayerSampleControls) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoviePlayerSampleControls::PlaybackState, "", "MoviePlayerSampleControls/PlaybackState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)()>(&GlobalNamespace::MoviePlayerSampleControls::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::OnPlayPauseClicked
// Il2CppName: OnPlayPauseClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)()>(&GlobalNamespace::MoviePlayerSampleControls::OnPlayPauseClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "OnPlayPauseClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::OnFastForwardClicked
// Il2CppName: OnFastForwardClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)()>(&GlobalNamespace::MoviePlayerSampleControls::OnFastForwardClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "OnFastForwardClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::OnRewindClicked
// Il2CppName: OnRewindClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)()>(&GlobalNamespace::MoviePlayerSampleControls::OnRewindClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "OnRewindClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::OnSeekBarMoved
// Il2CppName: OnSeekBarMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)(float)>(&GlobalNamespace::MoviePlayerSampleControls::OnSeekBarMoved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "OnSeekBarMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)(int64_t)>(&GlobalNamespace::MoviePlayerSampleControls::Seek)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)()>(&GlobalNamespace::MoviePlayerSampleControls::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::SetVisible
// Il2CppName: SetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MoviePlayerSampleControls::*)(bool)>(&GlobalNamespace::MoviePlayerSampleControls::SetVisible)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MoviePlayerSampleControls*), "SetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MoviePlayerSampleControls::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
