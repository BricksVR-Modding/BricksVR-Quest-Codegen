// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickInteractable
#include "GlobalNamespace/QuickInteractable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRGrabInteractable
  class XRGrabInteractable;
  // Forward declaring type: XRInteractionManager
  class XRInteractionManager;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BrickAttachDetector
  class BrickAttachDetector;
  // Forward declaring type: QuickInteractor
  class QuickInteractor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickRegrabFix
  class BrickRegrabFix;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickRegrabFix);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickRegrabFix*, "", "BrickRegrabFix");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BrickRegrabFix
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickRegrabFix : public ::GlobalNamespace::QuickInteractable {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable _grabInteractable
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.XRInteractionManager _xrInteractionManager
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* xrInteractionManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*) == 0x8);
    // private BrickAttachDetector _brickAttachDetector
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BrickAttachDetector* brickAttachDetector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickAttachDetector*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable _grabInteractable
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*& dyn__grabInteractable();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRInteractionManager _xrInteractionManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*& dyn__xrInteractionManager();
    // Get instance field reference: private BrickAttachDetector _brickAttachDetector
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BrickAttachDetector*& dyn__brickAttachDetector();
    // private System.Void Awake()
    // Offset: 0x6F2AE0
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x4D3750
    // Implemented from: QuickInteractable
    // Base method: System.Void QuickInteractable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickRegrabFix* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickRegrabFix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickRegrabFix*, creationType>()));
    }
    // public override System.Void Interact(QuickInteractor interactor)
    // Offset: 0x6F2B70
    // Implemented from: QuickInteractable
    // Base method: System.Void QuickInteractable::Interact(QuickInteractor interactor)
    void Interact(::GlobalNamespace::QuickInteractor* interactor);
  }; // BrickRegrabFix
  #pragma pack(pop)
  static check_size<sizeof(BrickRegrabFix), 40 + sizeof(::GlobalNamespace::BrickAttachDetector*)> __GlobalNamespace_BrickRegrabFixSizeCheck;
  static_assert(sizeof(BrickRegrabFix) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickRegrabFix::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickRegrabFix::*)()>(&GlobalNamespace::BrickRegrabFix::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickRegrabFix*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickRegrabFix::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickRegrabFix::Interact
// Il2CppName: Interact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickRegrabFix::*)(::GlobalNamespace::QuickInteractor*)>(&GlobalNamespace::BrickRegrabFix::Interact)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("", "QuickInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickRegrabFix*), "Interact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
