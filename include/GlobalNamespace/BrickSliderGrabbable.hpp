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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SelectedCategoryManager
  class SelectedCategoryManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseInteractor
  class XRBaseInteractor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickSliderGrabbable
  class BrickSliderGrabbable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickSliderGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickSliderGrabbable*, "", "BrickSliderGrabbable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BrickSliderGrabbable
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickSliderGrabbable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public SelectedCategoryManager selectedCategoryManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SelectedCategoryManager* selectedCategoryManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SelectedCategoryManager*) == 0x8);
    // public UnityEngine.Material hoveredMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* hoveredMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material _unhoveredMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* unhoveredMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Renderer sliderRenderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* sliderRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // public System.Boolean beingGrabbed
    // Size: 0x1
    // Offset: 0x38
    bool beingGrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _beingGrabbedWithLeftHand
    // Size: 0x1
    // Offset: 0x39
    bool beingGrabbedWithLeftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: beingGrabbedWithLeftHand and: materials
    char __padding5[0x6] = {};
    // private UnityEngine.Material[] _materials
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Material*> materials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SelectedCategoryManager selectedCategoryManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SelectedCategoryManager*& dyn_selectedCategoryManager();
    // Get instance field reference: public UnityEngine.Material hoveredMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_hoveredMaterial();
    // Get instance field reference: private UnityEngine.Material _unhoveredMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__unhoveredMaterial();
    // Get instance field reference: public UnityEngine.Renderer sliderRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_sliderRenderer();
    // Get instance field reference: public System.Boolean beingGrabbed
    [[deprecated("Use field access instead!")]] bool& dyn_beingGrabbed();
    // Get instance field reference: private System.Boolean _beingGrabbedWithLeftHand
    [[deprecated("Use field access instead!")]] bool& dyn__beingGrabbedWithLeftHand();
    // Get instance field reference: private UnityEngine.Material[] _materials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn__materials();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickSliderGrabbable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickSliderGrabbable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickSliderGrabbable*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6F3C40
    void Start();
    // private System.Void Update()
    // Offset: 0x6F3E10
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x6F3890
    void LateUpdate();
    // private System.Void SetHoveredMaterial()
    // Offset: 0x6F3AA0
    void SetHoveredMaterial();
    // private System.Void SetUnhoveredMaterial()
    // Offset: 0x6F3B70
    void SetUnhoveredMaterial();
    // private System.Void OnSliderHovered(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor interactor)
    // Offset: 0x6F3990
    void OnSliderHovered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);
    // private System.Void OnSliderUnhovered(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor interactor)
    // Offset: 0x6F3A90
    void OnSliderUnhovered(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);
    // private System.Void OnSliderGrabbed(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor interactor)
    // Offset: 0x6F3910
    void OnSliderGrabbed(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);
    // private System.Void OnSliderReleased(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor interactor)
    // Offset: 0x6F3A60
    void OnSliderReleased(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor);
  }; // BrickSliderGrabbable
  #pragma pack(pop)
  static check_size<sizeof(BrickSliderGrabbable), 64 + sizeof(::ArrayW<::UnityEngine::Material*>)> __GlobalNamespace_BrickSliderGrabbableSizeCheck;
  static_assert(sizeof(BrickSliderGrabbable) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)()>(&GlobalNamespace::BrickSliderGrabbable::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)()>(&GlobalNamespace::BrickSliderGrabbable::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)()>(&GlobalNamespace::BrickSliderGrabbable::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::SetHoveredMaterial
// Il2CppName: SetHoveredMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)()>(&GlobalNamespace::BrickSliderGrabbable::SetHoveredMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "SetHoveredMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::SetUnhoveredMaterial
// Il2CppName: SetUnhoveredMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)()>(&GlobalNamespace::BrickSliderGrabbable::SetUnhoveredMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "SetUnhoveredMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::OnSliderHovered
// Il2CppName: OnSliderHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::BrickSliderGrabbable::OnSliderHovered)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "OnSliderHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::OnSliderUnhovered
// Il2CppName: OnSliderUnhovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::BrickSliderGrabbable::OnSliderUnhovered)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "OnSliderUnhovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::OnSliderGrabbed
// Il2CppName: OnSliderGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::BrickSliderGrabbable::OnSliderGrabbed)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "OnSliderGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickSliderGrabbable::OnSliderReleased
// Il2CppName: OnSliderReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickSliderGrabbable::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)>(&GlobalNamespace::BrickSliderGrabbable::OnSliderReleased)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickSliderGrabbable*), "OnSliderReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
