// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRModeParms
  class OVRModeParms;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRModeParms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRModeParms*, "", "OVRModeParms");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: OVRModeParms
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRModeParms : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public OVRInput/RawButton resetButton
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRInput::RawButton resetButton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawButton) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRInput/RawButton resetButton
    [[deprecated]] ::GlobalNamespace::OVRInput::RawButton& dyn_resetButton();
    // private System.Void Start()
    // Offset: 0x36FBE0
    void Start();
    // private System.Void Update()
    // Offset: 0x36FDA0
    void Update();
    // private System.Void TestPowerStateMode()
    // Offset: 0x36FC70
    void TestPowerStateMode();
    // public System.Void .ctor()
    // Offset: 0x2324C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRModeParms* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRModeParms::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRModeParms*, creationType>()));
    }
  }; // OVRModeParms
  #pragma pack(pop)
  static check_size<sizeof(OVRModeParms), 24 + sizeof(::GlobalNamespace::OVRInput::RawButton)> __GlobalNamespace_OVRModeParmsSizeCheck;
  static_assert(sizeof(OVRModeParms) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRModeParms::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRModeParms::*)()>(&GlobalNamespace::OVRModeParms::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRModeParms*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRModeParms::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRModeParms::*)()>(&GlobalNamespace::OVRModeParms::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRModeParms*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRModeParms::TestPowerStateMode
// Il2CppName: TestPowerStateMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRModeParms::*)()>(&GlobalNamespace::OVRModeParms::TestPowerStateMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRModeParms*), "TestPowerStateMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRModeParms::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
