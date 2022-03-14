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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRGrabInteractable
  class XRGrabInteractable;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AutoDespawnPhysicsBricks
  class AutoDespawnPhysicsBricks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AutoDespawnPhysicsBricks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoDespawnPhysicsBricks*, "", "AutoDespawnPhysicsBricks");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: AutoDespawnPhysicsBricks
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoDespawnPhysicsBricks : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::AutoDespawnPhysicsBricks::$DespawnProcess$d__5
    class $DespawnProcess$d__5;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable _grabInteractable
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*) == 0x8);
    // private System.Int32 despawnIndex
    // Size: 0x4
    // Offset: 0x20
    int despawnIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Int32 lastPositionCheckCount
    // Size: 0x4
    // Offset: 0x30
    int lastPositionCheckCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable _grabInteractable
    ::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable*& dyn__grabInteractable();
    // Get instance field reference: private System.Int32 despawnIndex
    int& dyn_despawnIndex();
    // Get instance field reference: private UnityEngine.Vector3 lastPosition
    ::UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: private System.Int32 lastPositionCheckCount
    int& dyn_lastPositionCheckCount();
    // private System.Void Start()
    // Offset: 0x10C8044
    void Start();
    // private System.Collections.IEnumerator DespawnProcess()
    // Offset: 0x10C80F0
    ::System::Collections::IEnumerator* DespawnProcess();
    // public System.Void .ctor()
    // Offset: 0x10C818C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoDespawnPhysicsBricks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AutoDespawnPhysicsBricks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoDespawnPhysicsBricks*, creationType>()));
    }
  }; // AutoDespawnPhysicsBricks
  #pragma pack(pop)
  static check_size<sizeof(AutoDespawnPhysicsBricks), 48 + sizeof(int)> __GlobalNamespace_AutoDespawnPhysicsBricksSizeCheck;
  static_assert(sizeof(AutoDespawnPhysicsBricks) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutoDespawnPhysicsBricks::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoDespawnPhysicsBricks::*)()>(&GlobalNamespace::AutoDespawnPhysicsBricks::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoDespawnPhysicsBricks*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoDespawnPhysicsBricks::DespawnProcess
// Il2CppName: DespawnProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::AutoDespawnPhysicsBricks::*)()>(&GlobalNamespace::AutoDespawnPhysicsBricks::DespawnProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoDespawnPhysicsBricks*), "DespawnProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoDespawnPhysicsBricks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
