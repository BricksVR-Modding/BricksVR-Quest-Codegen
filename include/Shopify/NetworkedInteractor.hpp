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
// Forward declaring namespace: Shopify
namespace Shopify {
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseInteractor
  class XRBaseInteractor;
  // Forward declaring type: XRBaseInteractable
  class XRBaseInteractable;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Shopify
namespace Shopify {
  // Forward declaring type: NetworkedInteractor
  class NetworkedInteractor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Shopify::NetworkedInteractor);
DEFINE_IL2CPP_ARG_TYPE(::Shopify::NetworkedInteractor*, "Shopify", "NetworkedInteractor");
// Type namespace: Shopify
namespace Shopify {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Shopify.NetworkedInteractor
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkedInteractor : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Shopify::NetworkedInteractor::$DelayedReEnableInteractable$d__5
    class $DelayedReEnableInteractable$d__5;
    public:
    // private UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor _interactor
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor* interactor;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor _interactor
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*& dyn__interactor();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkedInteractor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Shopify::NetworkedInteractor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkedInteractor*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x6C5800
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x6C5950
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x6C58C0
    void OnDisable();
    // private System.Void OnGrab(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable interactable)
    // Offset: 0x6C59E0
    void OnGrab(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);
    // static private System.Collections.IEnumerator DelayedReEnableInteractable(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable interactable)
    // Offset: 0x6C5850
    static ::System::Collections::IEnumerator* DelayedReEnableInteractable(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* interactable);
  }; // Shopify.NetworkedInteractor
  #pragma pack(pop)
  static check_size<sizeof(NetworkedInteractor), 24 + sizeof(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractor*)> __Shopify_NetworkedInteractorSizeCheck;
  static_assert(sizeof(NetworkedInteractor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Shopify::NetworkedInteractor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Shopify::NetworkedInteractor::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Shopify::NetworkedInteractor::*)()>(&Shopify::NetworkedInteractor::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Shopify::NetworkedInteractor*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Shopify::NetworkedInteractor::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Shopify::NetworkedInteractor::*)()>(&Shopify::NetworkedInteractor::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Shopify::NetworkedInteractor*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Shopify::NetworkedInteractor::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Shopify::NetworkedInteractor::*)()>(&Shopify::NetworkedInteractor::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Shopify::NetworkedInteractor*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Shopify::NetworkedInteractor::OnGrab
// Il2CppName: OnGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Shopify::NetworkedInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*)>(&Shopify::NetworkedInteractor::OnGrab)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Shopify::NetworkedInteractor*), "OnGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
// Writing MetadataGetter for method: Shopify::NetworkedInteractor::DelayedReEnableInteractable
// Il2CppName: DelayedReEnableInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*)>(&Shopify::NetworkedInteractor::DelayedReEnableInteractable)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Shopify::NetworkedInteractor*), "DelayedReEnableInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable});
  }
};
