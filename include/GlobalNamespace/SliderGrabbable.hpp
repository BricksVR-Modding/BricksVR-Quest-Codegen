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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Slider
  class Slider;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseInteractor
  class XRBaseInteractor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderGrabbable
  class SliderGrabbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderGrabbable*, "", "SliderGrabbable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: SliderGrabbable
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderGrabbable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform sliderMarker
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* sliderMarker;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Material hoverMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* hoverMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.RectTransform gradientBackground
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* gradientBackground;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // public UnityEngine.UI.Slider slider
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Slider* slider;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Slider*) == 0x8);
    // private UnityEngine.Transform _slider
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* slider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Material _defaultMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* defaultMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private System.Boolean _grabbed
    // Size: 0x1
    // Offset: 0x50
    bool grabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: grabbed and: usableSliderLength
    char __padding7[0x3] = {};
    // private System.Single _usableSliderLength
    // Size: 0x4
    // Offset: 0x54
    float usableSliderLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0x102CD0
    // public System.Single defaultSliderValue
    // Size: 0x4
    // Offset: 0x58
    float defaultSliderValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _hoveredCount
    // Size: 0x4
    // Offset: 0x5C
    int hoveredCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _value
    // Size: 0x4
    // Offset: 0x60
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform sliderMarker
    [[deprecated]] ::UnityEngine::Transform*& dyn_sliderMarker();
    // Get instance field reference: public UnityEngine.Material hoverMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn_hoverMaterial();
    // Get instance field reference: public UnityEngine.RectTransform gradientBackground
    [[deprecated]] ::UnityEngine::RectTransform*& dyn_gradientBackground();
    // Get instance field reference: public UnityEngine.UI.Slider slider
    [[deprecated]] ::UnityEngine::UI::Slider*& dyn_slider();
    // Get instance field reference: private UnityEngine.Transform _slider
    [[deprecated]] ::UnityEngine::Transform*& dyn__slider();
    // Get instance field reference: private UnityEngine.Material _defaultMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn__defaultMaterial();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    [[deprecated]] ::UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private System.Boolean _grabbed
    [[deprecated]] bool& dyn__grabbed();
    // Get instance field reference: private System.Single _usableSliderLength
    [[deprecated]] float& dyn__usableSliderLength();
    // Get instance field reference: public System.Single defaultSliderValue
    [[deprecated]] float& dyn_defaultSliderValue();
    // Get instance field reference: private System.Int32 _hoveredCount
    [[deprecated]] int& dyn__hoveredCount();
    // Get instance field reference: private System.Single _value
    [[deprecated]] float& dyn__value();
    // private System.Void Awake()
    // Offset: 0x6CEA50
    void Awake();
    // private System.Void Update()
    // Offset: 0x6CF530
    void Update();
    // private UnityEngine.Vector3 GetClosestPointOnFiniteLine(UnityEngine.Vector3 point, UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd)
    // Offset: 0x6CEB40
    ::UnityEngine::Vector3 GetClosestPointOnFiniteLine(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd);
    // public System.Void SetSliderValue(System.Single value)
    // Offset: 0x6CF050
    void SetSliderValue(float value);
    // public System.Void FixSliderKnobPosition()
    // Offset: 0x6CEB30
    void FixSliderKnobPosition();
    // private System.Single SliderWorldLength()
    // Offset: 0x6CF4B0
    float SliderWorldLength();
    // private System.Void SliderGrabbed(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor _)
    // Offset: 0x6CF370
    void SliderGrabbed(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* _);
    // private System.Void SliderReleased(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor _)
    // Offset: 0x6CF3D0
    void SliderReleased(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* _);
    // private System.Void SliderHovered(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor _)
    // Offset: 0x6CF3A0
    void SliderHovered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* _);
    // private System.Void SliderUnHovered(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor _)
    // Offset: 0x6CF470
    void SliderUnHovered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* _);
    // private System.Void SetHoverVisuals()
    // Offset: 0x6CF020
    void SetHoverVisuals();
    // private System.Void ClearHoverVisuals()
    // Offset: 0x6CEB00
    void ClearHoverVisuals();
    // private System.Void OnEnable()
    // Offset: 0x6CEEA0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x6CED20
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x6CF9F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderGrabbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderGrabbable*, creationType>()));
    }
  }; // SliderGrabbable
  #pragma pack(pop)
  static check_size<sizeof(SliderGrabbable), 96 + sizeof(float)> __GlobalNamespace_SliderGrabbableSizeCheck;
  static_assert(sizeof(SliderGrabbable) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::GetClosestPointOnFiniteLine
// Il2CppName: GetClosestPointOnFiniteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::SliderGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::SliderGrabbable::GetClosestPointOnFiniteLine)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "GetClosestPointOnFiniteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, lineStart, lineEnd});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SetSliderValue
// Il2CppName: SetSliderValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)(float)>(&GlobalNamespace::SliderGrabbable::SetSliderValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SetSliderValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::FixSliderKnobPosition
// Il2CppName: FixSliderKnobPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::FixSliderKnobPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "FixSliderKnobPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SliderWorldLength
// Il2CppName: SliderWorldLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::SliderWorldLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SliderWorldLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SliderGrabbed
// Il2CppName: SliderGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::SliderGrabbable::SliderGrabbed)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SliderGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SliderReleased
// Il2CppName: SliderReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::SliderGrabbable::SliderReleased)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SliderReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SliderHovered
// Il2CppName: SliderHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::SliderGrabbable::SliderHovered)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SliderHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SliderUnHovered
// Il2CppName: SliderUnHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::SliderGrabbable::SliderUnHovered)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SliderUnHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::SetHoverVisuals
// Il2CppName: SetHoverVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::SetHoverVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "SetHoverVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::ClearHoverVisuals
// Il2CppName: ClearHoverVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::ClearHoverVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "ClearHoverVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderGrabbable::*)()>(&GlobalNamespace::SliderGrabbable::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderGrabbable*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderGrabbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
