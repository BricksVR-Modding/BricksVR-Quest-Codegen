// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRExtendedDisplay
  class CVRExtendedDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRExtendedDisplay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRExtendedDisplay*, "OVR.OpenVR", "CVRExtendedDisplay");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRExtendedDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRExtendedDisplay : public ::Il2CppObject {
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
    // private OVR.OpenVR.IVRExtendedDisplay FnTable
    // Size: 0x18
    // Offset: 0x10
    ::OVR::OpenVR::IVRExtendedDisplay FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRExtendedDisplay) == 0x18);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRExtendedDisplay
    constexpr operator ::OVR::OpenVR::IVRExtendedDisplay() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRExtendedDisplay FnTable
    ::OVR::OpenVR::IVRExtendedDisplay& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x99FB48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRExtendedDisplay* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRExtendedDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRExtendedDisplay*, creationType>(pInterface)));
    }
    // public System.Void GetWindowBounds(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x99FC50
    void GetWindowBounds(ByRef<int> pnX, ByRef<int> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.Void GetEyeOutputViewport(OVR.OpenVR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x99FC7C
    void GetEyeOutputViewport(::OVR::OpenVR::EVREye eEye, ByRef<uint> pnX, ByRef<uint> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x99FCA8
    void GetDXGIOutputInfo(ByRef<int> pnAdapterIndex, ByRef<int> pnAdapterOutputIndex);
  }; // OVR.OpenVR.CVRExtendedDisplay
  #pragma pack(pop)
  static check_size<sizeof(CVRExtendedDisplay), 16 + sizeof(::OVR::OpenVR::IVRExtendedDisplay)> __OVR_OpenVR_CVRExtendedDisplaySizeCheck;
  static_assert(sizeof(CVRExtendedDisplay) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRExtendedDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds
// Il2CppName: GetWindowBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(ByRef<int>, ByRef<int>, ByRef<uint>, ByRef<uint>)>(&OVR::OpenVR::CVRExtendedDisplay::GetWindowBounds)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRExtendedDisplay*), "GetWindowBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport
// Il2CppName: GetEyeOutputViewport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(::OVR::OpenVR::EVREye, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&OVR::OpenVR::CVRExtendedDisplay::GetEyeOutputViewport)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRExtendedDisplay*), "GetEyeOutputViewport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo
// Il2CppName: GetDXGIOutputInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRExtendedDisplay::*)(ByRef<int>, ByRef<int>)>(&OVR::OpenVR::CVRExtendedDisplay::GetDXGIOutputInfo)> {
  static const MethodInfo* get() {
    static auto* pnAdapterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnAdapterOutputIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRExtendedDisplay*), "GetDXGIOutputInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnAdapterIndex, pnAdapterOutputIndex});
  }
};
