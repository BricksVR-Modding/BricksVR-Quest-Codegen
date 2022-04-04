// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: AxisEventData
  class AxisEventData;
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Skipping declaration: RaycastResult because it is already included!
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: TrackedDeviceEventData
  class TrackedDeviceEventData;
  // Forward declaring type: MouseModel
  struct MouseModel;
  // Forward declaring type: ButtonDeltaState
  struct ButtonDeltaState;
  // Forward declaring type: TouchModel
  struct TouchModel;
  // Forward declaring type: TrackedDeviceModel
  struct TrackedDeviceModel;
  // Forward declaring type: JoystickModel
  struct JoystickModel;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: UIInputModule
  class UIInputModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*, "UnityEngine.XR.Interaction.Toolkit.UI", "UIInputModule");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule
  // [TokenAttribute] Offset: FFFFFFFF
  class UIInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
    public:
    public:
    // private UnityEngine.Camera m_Camera
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Camera* m_Camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // [TooltipAttribute] Offset: 0xE10D0
    // public System.Single clickSpeed
    // Size: 0x4
    // Offset: 0x50
    float clickSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE1150
    // public System.Single moveDeadzone
    // Size: 0x4
    // Offset: 0x54
    float moveDeadzone;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE11D0
    // public System.Single repeatDelay
    // Size: 0x4
    // Offset: 0x58
    float repeatDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE1250
    // public System.Single repeatRate
    // Size: 0x4
    // Offset: 0x5C
    float repeatRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE1280
    // public System.Single trackedDeviceDragThresholdMultiplier
    // Size: 0x4
    // Offset: 0x60
    float trackedDeviceDragThresholdMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: trackedDeviceDragThresholdMultiplier and: m_CachedAxisEvent
    char __padding5[0x4] = {};
    // private UnityEngine.EventSystems.AxisEventData m_CachedAxisEvent
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::EventSystems::AxisEventData* m_CachedAxisEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::AxisEventData*) == 0x8);
    // private UnityEngine.EventSystems.PointerEventData m_CachedPointerEvent
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::EventSystems::PointerEventData* m_CachedPointerEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData m_CachedTrackedDeviceEventData
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* m_CachedTrackedDeviceEventData;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Camera m_Camera
    [[deprecated]] ::UnityEngine::Camera*& dyn_m_Camera();
    // Get instance field reference: public System.Single clickSpeed
    [[deprecated]] float& dyn_clickSpeed();
    // Get instance field reference: public System.Single moveDeadzone
    [[deprecated]] float& dyn_moveDeadzone();
    // Get instance field reference: public System.Single repeatDelay
    [[deprecated]] float& dyn_repeatDelay();
    // Get instance field reference: public System.Single repeatRate
    [[deprecated]] float& dyn_repeatRate();
    // Get instance field reference: public System.Single trackedDeviceDragThresholdMultiplier
    [[deprecated]] float& dyn_trackedDeviceDragThresholdMultiplier();
    // Get instance field reference: private UnityEngine.EventSystems.AxisEventData m_CachedAxisEvent
    [[deprecated]] ::UnityEngine::EventSystems::AxisEventData*& dyn_m_CachedAxisEvent();
    // Get instance field reference: private UnityEngine.EventSystems.PointerEventData m_CachedPointerEvent
    [[deprecated]] ::UnityEngine::EventSystems::PointerEventData*& dyn_m_CachedPointerEvent();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData m_CachedTrackedDeviceEventData
    [[deprecated]] ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*& dyn_m_CachedTrackedDeviceEventData();
    // public UnityEngine.Camera get_uiCamera()
    // Offset: 0x232190
    ::UnityEngine::Camera* get_uiCamera();
    // public System.Void set_uiCamera(UnityEngine.Camera value)
    // Offset: 0x2322A0
    void set_uiCamera(::UnityEngine::Camera* value);
    // protected System.Void DoProcess()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DoProcess();
    // private UnityEngine.EventSystems.RaycastResult PerformRaycast(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x2FC630
    ::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::EventSystems::PointerEventData* eventData);
    // System.Void ProcessMouse(ref UnityEngine.XR.Interaction.Toolkit.UI.MouseModel mouseState)
    // Offset: 0x2FDE90
    void ProcessMouse(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel> mouseState);
    // private System.Void ProcessMouseMovement(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x2FD830
    void ProcessMouseMovement(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void ProcessMouseButton(UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState mouseButtonChanges, UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x2FD0E0
    void ProcessMouseButton(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState mouseButtonChanges, ::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void ProcessMouseButtonDrag(UnityEngine.EventSystems.PointerEventData eventData, System.Single pixelDragThresholdMultiplier)
    // Offset: 0x2FCDA0
    void ProcessMouseButtonDrag(::UnityEngine::EventSystems::PointerEventData* eventData, float pixelDragThresholdMultiplier);
    // private System.Void ProcessMouseScroll(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x2FDD50
    void ProcessMouseScroll(::UnityEngine::EventSystems::PointerEventData* eventData);
    // System.Void ProcessTouch(ref UnityEngine.XR.Interaction.Toolkit.UI.TouchModel touchState)
    // Offset: 0x2FE850
    void ProcessTouch(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel> touchState);
    // System.Void ProcessTrackedDevice(ref UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel deviceState, System.Boolean force)
    // Offset: 0x2FEA30
    void ProcessTrackedDevice(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> deviceState, bool force);
    // System.Void ProcessJoystick(ref UnityEngine.XR.Interaction.Toolkit.UI.JoystickModel joystickState)
    // Offset: 0x2FC720
    void ProcessJoystick(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::JoystickModel> joystickState);
    // private UnityEngine.EventSystems.PointerEventData GetOrCreateCachedPointerEvent()
    // Offset: 0x2FC530
    ::UnityEngine::EventSystems::PointerEventData* GetOrCreateCachedPointerEvent();
    // private UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData GetOrCreateCachedTrackedDeviceEvent()
    // Offset: 0x2FC5B0
    ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* GetOrCreateCachedTrackedDeviceEvent();
    // private UnityEngine.EventSystems.AxisEventData GetOrCreateCachedAxisEvent()
    // Offset: 0x2FC4B0
    ::UnityEngine::EventSystems::AxisEventData* GetOrCreateCachedAxisEvent();
    // protected System.Void .ctor()
    // Offset: 0x2FF0C0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIInputModule*, creationType>()));
    }
    // public override System.Void Process()
    // Offset: 0x2FEF70
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
  }; // UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule
  #pragma pack(pop)
  static check_size<sizeof(UIInputModule), 120 + sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*)> __UnityEngine_XR_Interaction_Toolkit_UI_UIInputModuleSizeCheck;
  static_assert(sizeof(UIInputModule) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_uiCamera
// Il2CppName: get_uiCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::get_uiCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "get_uiCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_uiCamera
// Il2CppName: set_uiCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::Camera*)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::set_uiCamera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "set_uiCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::DoProcess
// Il2CppName: DoProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::DoProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "DoProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::PerformRaycast
// Il2CppName: PerformRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::RaycastResult (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::PerformRaycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "PerformRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouse
// Il2CppName: ProcessMouse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::MouseModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouse)> {
  static const MethodInfo* get() {
    static auto* mouseState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "MouseModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessMouse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mouseState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseMovement
// Il2CppName: ProcessMouseMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseMovement)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessMouseMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseButton
// Il2CppName: ProcessMouseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, ::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseButton)> {
  static const MethodInfo* get() {
    static auto* mouseButtonChanges = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "ButtonDeltaState")->byval_arg;
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessMouseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mouseButtonChanges, eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseButtonDrag
// Il2CppName: ProcessMouseButtonDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, float)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseButtonDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* pixelDragThresholdMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessMouseButtonDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, pixelDragThresholdMultiplier});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseScroll
// Il2CppName: ProcessMouseScroll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessMouseScroll)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessMouseScroll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessTouch
// Il2CppName: ProcessTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessTouch)> {
  static const MethodInfo* get() {
    static auto* touchState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "TouchModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{touchState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessTrackedDevice
// Il2CppName: ProcessTrackedDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>, bool)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessTrackedDevice)> {
  static const MethodInfo* get() {
    static auto* deviceState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel")->this_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessTrackedDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceState, force});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessJoystick
// Il2CppName: ProcessJoystick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::JoystickModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::ProcessJoystick)> {
  static const MethodInfo* get() {
    static auto* joystickState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "JoystickModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "ProcessJoystick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joystickState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedPointerEvent
// Il2CppName: GetOrCreateCachedPointerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedPointerEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "GetOrCreateCachedPointerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedTrackedDeviceEvent
// Il2CppName: GetOrCreateCachedTrackedDeviceEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedTrackedDeviceEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "GetOrCreateCachedTrackedDeviceEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedAxisEvent
// Il2CppName: GetOrCreateCachedAxisEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::AxisEventData* (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::GetOrCreateCachedAxisEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "GetOrCreateCachedAxisEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
