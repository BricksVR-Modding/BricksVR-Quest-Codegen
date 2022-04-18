// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: SliderCircle2D
  class SliderCircle2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::SliderCircle2D);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::SliderCircle2D*, "AdvancedColorPicker", "SliderCircle2D");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // WARNING Size may be invalid!
  // Autogenerated type: AdvancedColorPicker.SliderCircle2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: EC000
  class SliderCircle2D : public ::UnityEngine::UI::Selectable/*, public ::UnityEngine::EventSystems::IDragHandler, public ::UnityEngine::EventSystems::IInitializePotentialDragHandler, public ::UnityEngine::UI::ICanvasElement*/ {
    public:
    // Nested type: ::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent
    class SliderCircleEvent;
    public:
    // private UnityEngine.RectTransform m_HandleRect
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::RectTransform* m_HandleRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [RangeAttribute] Offset: 0xEC0D0
    // protected System.Single m_Angle
    // Size: 0x4
    // Offset: 0x100
    float m_Angle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xBDE10
    // protected System.Single m_Distance
    // Size: 0x4
    // Offset: 0x104
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_Corners
    // Size: 0x4
    // Offset: 0x108
    int m_Corners;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_InverseAngle
    // Size: 0x1
    // Offset: 0x10C
    bool m_InverseAngle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private AdvancedColorPicker.SliderCircle2D/AdvancedColorPicker.SliderCircleEvent m_OnValueChanged
    // Size: 0x8
    // Offset: 0x110
    ::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent* m_OnValueChanged;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent*) == 0x8);
    // private UnityEngine.Transform m_HandleTransform
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::Transform* m_HandleTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.RectTransform m_HandleContainerRect
    // Size: 0x8
    // Offset: 0x120
    ::UnityEngine::RectTransform* m_HandleContainerRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Size: 0x1
    // Offset: 0x128
    ::UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::DrivenRectTransformTracker) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IDragHandler
    operator ::UnityEngine::EventSystems::IDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler
    operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::ICanvasElement
    operator ::UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get instance field reference: private UnityEngine.RectTransform m_HandleRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_m_HandleRect();
    // Get instance field reference: protected System.Single m_Angle
    [[deprecated("Use field access instead!")]] float& dyn_m_Angle();
    // Get instance field reference: protected System.Single m_Distance
    [[deprecated("Use field access instead!")]] float& dyn_m_Distance();
    // Get instance field reference: private System.Int32 m_Corners
    [[deprecated("Use field access instead!")]] int& dyn_m_Corners();
    // Get instance field reference: private System.Boolean m_InverseAngle
    [[deprecated("Use field access instead!")]] bool& dyn_m_InverseAngle();
    // Get instance field reference: private AdvancedColorPicker.SliderCircle2D/AdvancedColorPicker.SliderCircleEvent m_OnValueChanged
    [[deprecated("Use field access instead!")]] ::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent*& dyn_m_OnValueChanged();
    // Get instance field reference: private UnityEngine.Transform m_HandleTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_HandleTransform();
    // Get instance field reference: private UnityEngine.RectTransform m_HandleContainerRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_m_HandleContainerRect();
    // Get instance field reference: private UnityEngine.DrivenRectTransformTracker m_Tracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::DrivenRectTransformTracker& dyn_m_Tracker();
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x30BCD0
    ::UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x5BC8B0
    void set_handleRect(::UnityEngine::RectTransform* value);
    // public System.Single get_angle()
    // Offset: 0x5BC780
    float get_angle();
    // public System.Void set_angle(System.Single value)
    // Offset: 0x5BC070
    void set_angle(float value);
    // public System.Single get_normalizedAngle()
    // Offset: 0x5BC7A0
    float get_normalizedAngle();
    // public System.Void set_normalizedAngle(System.Single value)
    // Offset: 0x5BC940
    void set_normalizedAngle(float value);
    // public System.Single get_distance()
    // Offset: 0x5BC790
    float get_distance();
    // public System.Void set_distance(System.Single value)
    // Offset: 0x5BC160
    void set_distance(float value);
    // public System.Int32 get_Corners()
    // Offset: 0x4E2E50
    int get_Corners();
    // public System.Void set_Corners(System.Int32 value)
    // Offset: 0x5BC810
    void set_Corners(int value);
    // public System.Boolean get_InverseAngle()
    // Offset: 0x5BC770
    bool get_InverseAngle();
    // public System.Void set_InverseAngle(System.Boolean value)
    // Offset: 0x5BC890
    void set_InverseAngle(bool value);
    // public AdvancedColorPicker.SliderCircle2D/AdvancedColorPicker.SliderCircleEvent get_onValueChanged()
    // Offset: 0x317640
    ::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(AdvancedColorPicker.SliderCircle2D/AdvancedColorPicker.SliderCircleEvent value)
    // Offset: 0x4DE110
    void set_onValueChanged(::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent* value);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x276FE0
    ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // protected System.Void .ctor()
    // Offset: 0x5BC6C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderCircle2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::SliderCircle2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderCircle2D*, creationType>()));
    }
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1DDF00
    void Rebuild(::UnityEngine::UI::CanvasUpdate executing);
    // private System.Void UpdateCachedReferences()
    // Offset: 0x5BC180
    void UpdateCachedReferences();
    // private System.Void SetAngle(System.Single input)
    // Offset: 0x5BC070
    void SetAngle(float input);
    // protected System.Void SetAngle(System.Single input, System.Boolean sendCallback)
    // Offset: 0x5BBFA0
    void SetAngle(float input, bool sendCallback);
    // private System.Void SetDistance(System.Single input)
    // Offset: 0x5BC160
    void SetDistance(float input);
    // protected System.Void SetDistance(System.Single input, System.Boolean sendCallback)
    // Offset: 0x5BC090
    void SetDistance(float input, bool sendCallback);
    // private System.Void UpdateVisuals()
    // Offset: 0x5BC5C0
    void UpdateVisuals();
    // protected System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData, UnityEngine.Camera cam)
    // Offset: 0x5BC2D0
    void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Camera* cam);
    // private System.Single GetDistanceDevider(System.Single angle)
    // Offset: 0x5BB670
    float GetDistanceDevider(float angle);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4DC860
    bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x5BBA20
    void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4DCDD0
    void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private UnityEngine.Vector2 CalculateHandlePosition()
    // Offset: 0x5BB280
    ::UnityEngine::Vector2 CalculateHandlePosition();
    // private UnityEngine.Vector2 CalculateHandlePositionReversed()
    // Offset: 0x5BB040
    ::UnityEngine::Vector2 CalculateHandlePositionReversed();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1DDF00
    void GraphicUpdateComplete();
    // public System.Void LayoutComplete()
    // Offset: 0x1DDF00
    void LayoutComplete();
    // protected override System.Void OnEnable()
    // Offset: 0x5BBAA0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x4DCBC0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x5BB910
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x5BBF60
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x5BBDF0
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0x5BBB10
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);
  }; // AdvancedColorPicker.SliderCircle2D
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_handleRect
// Il2CppName: get_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_handleRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_handleRect
// Il2CppName: set_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::RectTransform*)>(&AdvancedColorPicker::SliderCircle2D::set_handleRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_angle
// Il2CppName: get_angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_angle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_angle
// Il2CppName: set_angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float)>(&AdvancedColorPicker::SliderCircle2D::set_angle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_normalizedAngle
// Il2CppName: get_normalizedAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_normalizedAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_normalizedAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_normalizedAngle
// Il2CppName: set_normalizedAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float)>(&AdvancedColorPicker::SliderCircle2D::set_normalizedAngle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_normalizedAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_distance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_distance
// Il2CppName: set_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float)>(&AdvancedColorPicker::SliderCircle2D::set_distance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_Corners
// Il2CppName: get_Corners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_Corners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_Corners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_Corners
// Il2CppName: set_Corners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(int)>(&AdvancedColorPicker::SliderCircle2D::set_Corners)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_Corners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_InverseAngle
// Il2CppName: get_InverseAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_InverseAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_InverseAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_InverseAngle
// Il2CppName: set_InverseAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(bool)>(&AdvancedColorPicker::SliderCircle2D::set_InverseAngle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_InverseAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::get_onValueChanged
// Il2CppName: get_onValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent* (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::get_onValueChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "get_onValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::set_onValueChanged
// Il2CppName: set_onValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::AdvancedColorPicker::SliderCircle2D::SliderCircleEvent*)>(&AdvancedColorPicker::SliderCircle2D::set_onValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "SliderCircle2D/SliderCircleEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "set_onValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::UnityEngine_UI_ICanvasElement_get_transform
// Il2CppName: UnityEngine.UI.ICanvasElement.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::UnityEngine_UI_ICanvasElement_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::UI::CanvasUpdate)>(&AdvancedColorPicker::SliderCircle2D::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::UpdateCachedReferences
// Il2CppName: UpdateCachedReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::UpdateCachedReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "UpdateCachedReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::SetAngle
// Il2CppName: SetAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float)>(&AdvancedColorPicker::SliderCircle2D::SetAngle)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "SetAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::SetAngle
// Il2CppName: SetAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float, bool)>(&AdvancedColorPicker::SliderCircle2D::SetAngle)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "SetAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, sendCallback});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::SetDistance
// Il2CppName: SetDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float)>(&AdvancedColorPicker::SliderCircle2D::SetDistance)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "SetDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::SetDistance
// Il2CppName: SetDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(float, bool)>(&AdvancedColorPicker::SliderCircle2D::SetDistance)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "SetDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, sendCallback});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::UpdateDrag
// Il2CppName: UpdateDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Camera*)>(&AdvancedColorPicker::SliderCircle2D::UpdateDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* cam = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "UpdateDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, cam});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::GetDistanceDevider
// Il2CppName: GetDistanceDevider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::SliderCircle2D::*)(float)>(&AdvancedColorPicker::SliderCircle2D::GetDistanceDevider)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "GetDistanceDevider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::MayDrag
// Il2CppName: MayDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&AdvancedColorPicker::SliderCircle2D::MayDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "MayDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnDrag
// Il2CppName: OnDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&AdvancedColorPicker::SliderCircle2D::OnDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&AdvancedColorPicker::SliderCircle2D::OnInitializePotentialDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnInitializePotentialDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::CalculateHandlePosition
// Il2CppName: CalculateHandlePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::CalculateHandlePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "CalculateHandlePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::CalculateHandlePositionReversed
// Il2CppName: CalculateHandlePositionReversed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::CalculateHandlePositionReversed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "CalculateHandlePositionReversed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::OnDidApplyAnimationProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)()>(&AdvancedColorPicker::SliderCircle2D::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::EventSystems::PointerEventData*)>(&AdvancedColorPicker::SliderCircle2D::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::SliderCircle2D::OnMove
// Il2CppName: OnMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::SliderCircle2D::*)(::UnityEngine::EventSystems::AxisEventData*)>(&AdvancedColorPicker::SliderCircle2D::OnMove)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "AxisEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::SliderCircle2D*), "OnMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
