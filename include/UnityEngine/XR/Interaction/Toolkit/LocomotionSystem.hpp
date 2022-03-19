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
  // Forward declaring type: LocomotionProvider
  class LocomotionProvider;
  // Forward declaring type: XRRig
  class XRRig;
  // Forward declaring type: RequestResult
  struct RequestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: LocomotionSystem
  class LocomotionSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, "UnityEngine.XR.Interaction.Toolkit", "LocomotionSystem");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class LocomotionSystem : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.XR.Interaction.Toolkit.LocomotionProvider m_CurrentExclusiveProvider
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* m_CurrentExclusiveProvider;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*) == 0x8);
    // private System.Single m_TimeMadeExclusive
    // Size: 0x4
    // Offset: 0x20
    float m_TimeMadeExclusive;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x725D24
    // private System.Single m_Timeout
    // Size: 0x4
    // Offset: 0x24
    float m_Timeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x725D70
    // private UnityEngine.XR.Interaction.Toolkit.XRRig m_XRRig
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::XR::Interaction::Toolkit::XRRig* m_XRRig;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRRig*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single Timeout
    static constexpr const float Timeout = 10;
    // Get static field: static private System.Single Timeout
    static float _get_Timeout();
    // Set static field: static private System.Single Timeout
    static void _set_Timeout(float value);
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.LocomotionProvider m_CurrentExclusiveProvider
    ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*& dyn_m_CurrentExclusiveProvider();
    // Get instance field reference: private System.Single m_TimeMadeExclusive
    float& dyn_m_TimeMadeExclusive();
    // Get instance field reference: private System.Single m_Timeout
    float& dyn_m_Timeout();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.XRRig m_XRRig
    ::UnityEngine::XR::Interaction::Toolkit::XRRig*& dyn_m_XRRig();
    // public System.Single get_timeout()
    // Offset: 0x8C45C0
    float get_timeout();
    // public System.Void set_timeout(System.Single value)
    // Offset: 0x8C45C8
    void set_timeout(float value);
    // public UnityEngine.XR.Interaction.Toolkit.XRRig get_xrRig()
    // Offset: 0x8C45D0
    ::UnityEngine::XR::Interaction::Toolkit::XRRig* get_xrRig();
    // public System.Void set_xrRig(UnityEngine.XR.Interaction.Toolkit.XRRig value)
    // Offset: 0x8C45D8
    void set_xrRig(::UnityEngine::XR::Interaction::Toolkit::XRRig* value);
    // public System.Boolean get_Busy()
    // Offset: 0x8C3F4C
    bool get_Busy();
    // public UnityEngine.XR.Interaction.Toolkit.RequestResult RequestExclusiveOperation(UnityEngine.XR.Interaction.Toolkit.LocomotionProvider provider)
    // Offset: 0x8C4074
    ::UnityEngine::XR::Interaction::Toolkit::RequestResult RequestExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* provider);
    // System.Void ResetExclusivity()
    // Offset: 0x8C45E0
    void ResetExclusivity();
    // public UnityEngine.XR.Interaction.Toolkit.RequestResult FinishExclusiveOperation(UnityEngine.XR.Interaction.Toolkit.LocomotionProvider provider)
    // Offset: 0x8C4234
    ::UnityEngine::XR::Interaction::Toolkit::RequestResult FinishExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* provider);
    // public System.Void Update()
    // Offset: 0x8C45EC
    void Update();
    // private System.Void Awake()
    // Offset: 0x8C4684
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x8C4730
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionSystem*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
  #pragma pack(pop)
  static check_size<sizeof(LocomotionSystem), 40 + sizeof(::UnityEngine::XR::Interaction::Toolkit::XRRig*)> __UnityEngine_XR_Interaction_Toolkit_LocomotionSystemSizeCheck;
  static_assert(sizeof(LocomotionSystem) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_timeout
// Il2CppName: get_timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_timeout
// Il2CppName: set_timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_timeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "set_timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrRig
// Il2CppName: get_xrRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRRig* (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrRig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_xrRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrRig
// Il2CppName: set_xrRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::XRRig*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrRig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRRig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "set_xrRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_Busy
// Il2CppName: get_Busy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_Busy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_Busy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::RequestExclusiveOperation
// Il2CppName: RequestExclusiveOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::RequestResult (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::RequestExclusiveOperation)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "RequestExclusiveOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::ResetExclusivity
// Il2CppName: ResetExclusivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::ResetExclusivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "ResetExclusivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::FinishExclusiveOperation
// Il2CppName: FinishExclusiveOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::RequestResult (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::FinishExclusiveOperation)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "FinishExclusiveOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
