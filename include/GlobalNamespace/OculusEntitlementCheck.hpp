// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseEntitlementCheck
#include "GlobalNamespace/BaseEntitlementCheck.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message
  class Message;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusEntitlementCheck
  class OculusEntitlementCheck;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusEntitlementCheck);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusEntitlementCheck*, "", "OculusEntitlementCheck");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusEntitlementCheck
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusEntitlementCheck : public ::GlobalNamespace::BaseEntitlementCheck {
    public:
    // Nested type: ::GlobalNamespace::OculusEntitlementCheck::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`2<System.Boolean,System.String> _entitlementCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_2<bool, ::StringW>* entitlementCallback;
    // Field size check
    static_assert(sizeof(::System::Action_2<bool, ::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`2<System.Boolean,System.String> _entitlementCallback
    ::System::Action_2<bool, ::StringW>*& dyn__entitlementCallback();
    // private System.Void EntitlementCallback(Oculus.Platform.Message msg)
    // Offset: 0x111A764
    void EntitlementCallback(::Oculus::Platform::Message* msg);
    // public System.Void .ctor()
    // Offset: 0x111A85C
    // Implemented from: BaseEntitlementCheck
    // Base method: System.Void BaseEntitlementCheck::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusEntitlementCheck* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusEntitlementCheck::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusEntitlementCheck*, creationType>()));
    }
    // public override System.Void IsEntitled(System.Action`2<System.Boolean,System.String> entitlementManagerCallback)
    // Offset: 0x111A5B4
    // Implemented from: BaseEntitlementCheck
    // Base method: System.Void BaseEntitlementCheck::IsEntitled(System.Action`2<System.Boolean,System.String> entitlementManagerCallback)
    void IsEntitled(::System::Action_2<bool, ::StringW>* entitlementManagerCallback);
  }; // OculusEntitlementCheck
  #pragma pack(pop)
  static check_size<sizeof(OculusEntitlementCheck), 24 + sizeof(::System::Action_2<bool, ::StringW>*)> __GlobalNamespace_OculusEntitlementCheckSizeCheck;
  static_assert(sizeof(OculusEntitlementCheck) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusEntitlementCheck::EntitlementCallback
// Il2CppName: EntitlementCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusEntitlementCheck::*)(::Oculus::Platform::Message*)>(&GlobalNamespace::OculusEntitlementCheck::EntitlementCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusEntitlementCheck*), "EntitlementCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusEntitlementCheck::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusEntitlementCheck::IsEntitled
// Il2CppName: IsEntitled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusEntitlementCheck::*)(::System::Action_2<bool, ::StringW>*)>(&GlobalNamespace::OculusEntitlementCheck::IsEntitled)> {
  static const MethodInfo* get() {
    static auto* entitlementManagerCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusEntitlementCheck*), "IsEntitled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entitlementManagerCallback});
  }
};
