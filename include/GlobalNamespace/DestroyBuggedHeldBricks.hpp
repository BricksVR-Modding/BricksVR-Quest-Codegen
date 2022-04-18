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
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRInteractionManager
  class XRInteractionManager;
  // Forward declaring type: XRDirectInteractor
  class XRDirectInteractor;
  // Forward declaring type: XRBaseInteractable
  class XRBaseInteractable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DestroyBuggedHeldBricks
  class DestroyBuggedHeldBricks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DestroyBuggedHeldBricks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DestroyBuggedHeldBricks*, "", "DestroyBuggedHeldBricks");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DestroyBuggedHeldBricks
  // [TokenAttribute] Offset: FFFFFFFF
  class DestroyBuggedHeldBricks : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.XR.Interaction.Toolkit.XRInteractionManager _interactionManager
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* interactionManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*) == 0x8);
    // public UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor leftHand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor* leftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*) == 0x8);
    // public UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor rightHand
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor* rightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*) == 0x8);
    // private UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> interactablesToCheck
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>* interactablesToCheck;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.XR.Interaction.Toolkit.XRInteractionManager _interactionManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*& dyn__interactionManager();
    // Get instance field reference: public UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor leftHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*& dyn_leftHand();
    // Get instance field reference: public UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor rightHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*& dyn_rightHand();
    // Get instance field reference: private UnityEngine.Transform _leftHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__leftHandTransform();
    // Get instance field reference: private UnityEngine.Transform _rightHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__rightHandTransform();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> interactablesToCheck
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>*& dyn_interactablesToCheck();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DestroyBuggedHeldBricks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DestroyBuggedHeldBricks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DestroyBuggedHeldBricks*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6B2B10
    void Start();
  }; // DestroyBuggedHeldBricks
  #pragma pack(pop)
  static check_size<sizeof(DestroyBuggedHeldBricks), 64 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>*)> __GlobalNamespace_DestroyBuggedHeldBricksSizeCheck;
  static_assert(sizeof(DestroyBuggedHeldBricks) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DestroyBuggedHeldBricks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DestroyBuggedHeldBricks::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DestroyBuggedHeldBricks::*)()>(&GlobalNamespace::DestroyBuggedHeldBricks::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DestroyBuggedHeldBricks*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
