// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRDirectInteractor
  class XRDirectInteractor;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NormalSessionManager
  class NormalSessionManager;
  // Forward declaring type: BrickHover
  class BrickHover;
  // Forward declaring type: QuickInteractor
  class QuickInteractor;
  // Forward declaring type: HapticsManager
  class HapticsManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: Realtime
  class Realtime;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HandBrickSpawner
  class HandBrickSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HandBrickSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandBrickSpawner*, "", "HandBrickSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: HandBrickSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class HandBrickSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::HandBrickSpawner::ButtonDownInfo
    struct ButtonDownInfo;
    // Nested type: ::GlobalNamespace::HandBrickSpawner::$$c
    class $$c;
    // Size: 0x15
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: HandBrickSpawner/ButtonDownInfo
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonDownInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // private System.Int32 _buttonDownAt
      // Size: 0x4
      // Offset: 0x0
      int buttonDownAt;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: buttonDownAt and: SavedPrefabName
      char __padding0[0x4] = {};
      // public System.String SavedPrefabName
      // Size: 0x8
      // Offset: 0x8
      ::StringW SavedPrefabName;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public System.Int32 SavedColor
      // Size: 0x4
      // Offset: 0x10
      int SavedColor;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Boolean ButtonHoldCallbackCalled
      // Size: 0x1
      // Offset: 0x14
      bool ButtonHoldCallbackCalled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: ButtonDownInfo
      constexpr ButtonDownInfo(int buttonDownAt_ = {}, ::StringW SavedPrefabName_ = {}, int SavedColor_ = {}, bool ButtonHoldCallbackCalled_ = {}) noexcept : buttonDownAt{buttonDownAt_}, SavedPrefabName{SavedPrefabName_}, SavedColor{SavedColor_}, ButtonHoldCallbackCalled{ButtonHoldCallbackCalled_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private System.Int32 _buttonDownAt
      [[deprecated("Use field access instead!")]] int& dyn__buttonDownAt();
      // Get instance field reference: public System.String SavedPrefabName
      [[deprecated("Use field access instead!")]] ::StringW& dyn_SavedPrefabName();
      // Get instance field reference: public System.Int32 SavedColor
      [[deprecated("Use field access instead!")]] int& dyn_SavedColor();
      // Get instance field reference: public System.Boolean ButtonHoldCallbackCalled
      [[deprecated("Use field access instead!")]] bool& dyn_ButtonHoldCallbackCalled();
      // public System.Boolean get_ButtonDown()
      // Offset: 0x388DE0
      bool get_ButtonDown();
      // public System.Void set_ButtonDown(System.Boolean value)
      // Offset: 0x6AD4F0
      void set_ButtonDown(bool value);
      // public System.Int32 get_FramesDownFor()
      // Offset: 0x6AD4C0
      int get_FramesDownFor();
    }; // HandBrickSpawner/ButtonDownInfo
    #pragma pack(pop)
    static check_size<sizeof(HandBrickSpawner::ButtonDownInfo), 20 + sizeof(bool)> __GlobalNamespace_HandBrickSpawner_ButtonDownInfoSizeCheck;
    static_assert(sizeof(HandBrickSpawner::ButtonDownInfo) == 0x15);
    public:
    // public System.Boolean leftHand
    // Size: 0x1
    // Offset: 0x18
    bool leftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHand and: spawnLocation
    char __padding0[0x7] = {};
    // public UnityEngine.GameObject spawnLocation
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* spawnLocation;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.AudioClip sound
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioClip* sound;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // public NormalSessionManager normalSessionManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::NormalSessionManager* normalSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NormalSessionManager*) == 0x8);
    // private BrickHover _brickHover
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BrickHover* brickHover;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickHover*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<OVRInput/Button,HandBrickSpawner/ButtonDownInfo> _infoForButtons
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRInput::Button, ::GlobalNamespace::HandBrickSpawner::ButtonDownInfo>* infoForButtons;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRInput::Button, ::GlobalNamespace::HandBrickSpawner::ButtonDownInfo>*) == 0x8);
    // private OVRInput/Button[] _buttons
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::OVRInput::Button> buttons;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRInput::Button>) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor _interactor
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor* interactor;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*) == 0x8);
    // private QuickInteractor _quickInteractor
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::QuickInteractor* quickInteractor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickInteractor*) == 0x8);
    // private HapticsManager _hapticsManager
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::HapticsManager* hapticsManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HapticsManager*) == 0x8);
    // public Normal.Realtime.Realtime _realtime
    // Size: 0x8
    // Offset: 0x68
    ::Normal::Realtime::Realtime* realtime;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Realtime*) == 0x8);
    // public System.Int32 spawnerSetIndex
    // Size: 0x4
    // Offset: 0x70
    int spawnerSetIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean leftHand
    [[deprecated("Use field access instead!")]] bool& dyn_leftHand();
    // Get instance field reference: public UnityEngine.GameObject spawnLocation
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_spawnLocation();
    // Get instance field reference: public UnityEngine.AudioClip sound
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_sound();
    // Get instance field reference: public NormalSessionManager normalSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NormalSessionManager*& dyn_normalSessionManager();
    // Get instance field reference: private BrickHover _brickHover
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BrickHover*& dyn__brickHover();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<OVRInput/Button,HandBrickSpawner/ButtonDownInfo> _infoForButtons
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRInput::Button, ::GlobalNamespace::HandBrickSpawner::ButtonDownInfo>*& dyn__infoForButtons();
    // Get instance field reference: private OVRInput/Button[] _buttons
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRInput::Button>& dyn__buttons();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor _interactor
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*& dyn__interactor();
    // Get instance field reference: private QuickInteractor _quickInteractor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickInteractor*& dyn__quickInteractor();
    // Get instance field reference: private HapticsManager _hapticsManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HapticsManager*& dyn__hapticsManager();
    // Get instance field reference: public Normal.Realtime.Realtime _realtime
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Realtime*& dyn__realtime();
    // Get instance field reference: public System.Int32 spawnerSetIndex
    [[deprecated("Use field access instead!")]] int& dyn_spawnerSetIndex();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandBrickSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HandBrickSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandBrickSpawner*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6B6990
    void Start();
    // private System.Void Update()
    // Offset: 0x6B6BD0
    void Update();
    // private System.Void CheckButtonDown(OVRInput/Button button)
    // Offset: 0x6B5EC0
    void CheckButtonDown(::GlobalNamespace::OVRInput::Button button);
    // private System.Void HandleButtonHold(OVRInput/Button button)
    // Offset: 0x6B6010
    void HandleButtonHold(::GlobalNamespace::OVRInput::Button button);
    // private System.Void HandleButtonPress(OVRInput/Button button)
    // Offset: 0x6B6460
    void HandleButtonPress(::GlobalNamespace::OVRInput::Button button);
    // private System.Boolean IsDebugTrue(OVRInput/Button button)
    // Offset: 0x6B6970
    bool IsDebugTrue(::GlobalNamespace::OVRInput::Button button);
    // private UnityEngine.GameObject HoveredBrick()
    // Offset: 0x6B67F0
    ::UnityEngine::GameObject* HoveredBrick();
  }; // HandBrickSpawner
  #pragma pack(pop)
  static check_size<sizeof(HandBrickSpawner), 112 + sizeof(int)> __GlobalNamespace_HandBrickSpawnerSizeCheck;
  static_assert(sizeof(HandBrickSpawner) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandBrickSpawner::ButtonDownInfo, "", "HandBrickSpawner/ButtonDownInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandBrickSpawner::*)()>(&GlobalNamespace::HandBrickSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandBrickSpawner::*)()>(&GlobalNamespace::HandBrickSpawner::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::CheckButtonDown
// Il2CppName: CheckButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandBrickSpawner::*)(::GlobalNamespace::OVRInput::Button)>(&GlobalNamespace::HandBrickSpawner::CheckButtonDown)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("", "OVRInput/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "CheckButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::HandleButtonHold
// Il2CppName: HandleButtonHold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandBrickSpawner::*)(::GlobalNamespace::OVRInput::Button)>(&GlobalNamespace::HandBrickSpawner::HandleButtonHold)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("", "OVRInput/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "HandleButtonHold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::HandleButtonPress
// Il2CppName: HandleButtonPress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandBrickSpawner::*)(::GlobalNamespace::OVRInput::Button)>(&GlobalNamespace::HandBrickSpawner::HandleButtonPress)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("", "OVRInput/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "HandleButtonPress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::IsDebugTrue
// Il2CppName: IsDebugTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HandBrickSpawner::*)(::GlobalNamespace::OVRInput::Button)>(&GlobalNamespace::HandBrickSpawner::IsDebugTrue)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("", "OVRInput/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "IsDebugTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandBrickSpawner::HoveredBrick
// Il2CppName: HoveredBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::HandBrickSpawner::*)()>(&GlobalNamespace::HandBrickSpawner::HoveredBrick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandBrickSpawner*), "HoveredBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
