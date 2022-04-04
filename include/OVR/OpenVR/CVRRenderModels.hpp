// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRRenderModels);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels*, "OVR.OpenVR", "CVRRenderModels");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRRenderModels
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRRenderModels : public ::Il2CppObject {
    public:
    // Nested type: ::OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked
    class _GetComponentStatePacked;
    // Nested type: ::OVR::OpenVR::CVRRenderModels::GetComponentStateUnion
    struct GetComponentStateUnion;
    public:
    // private OVR.OpenVR.IVRRenderModels FnTable
    // Size: 0x98
    // Offset: 0x10
    ::OVR::OpenVR::IVRRenderModels FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRRenderModels) == 0x98);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRRenderModels
    constexpr operator ::OVR::OpenVR::IVRRenderModels() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRRenderModels FnTable
    [[deprecated]] ::OVR::OpenVR::IVRRenderModels& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x35FEF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRRenderModels::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVRRenderModelError LoadRenderModel_Async(System.String pchRenderModelName, ref System.IntPtr ppRenderModel)
    // Offset: 0x35FE80
    ::OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::StringW pchRenderModelName, ByRef<::System::IntPtr> ppRenderModel);
    // public System.Void FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0x35FA60
    void FreeRenderModel(::System::IntPtr pRenderModel);
    // public OVR.OpenVR.EVRRenderModelError LoadTexture_Async(System.Int32 textureId, ref System.IntPtr ppTexture)
    // Offset: 0x35FEA0
    ::OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int textureId, ByRef<::System::IntPtr> ppTexture);
    // public System.Void FreeTexture(System.IntPtr pTexture)
    // Offset: 0x35FAA0
    void FreeTexture(::System::IntPtr pTexture);
    // public OVR.OpenVR.EVRRenderModelError LoadTextureD3D11_Async(System.Int32 textureId, System.IntPtr pD3D11Device, ref System.IntPtr ppD3D11Texture2D)
    // Offset: 0x35D6F0
    ::OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int textureId, ::System::IntPtr pD3D11Device, ByRef<::System::IntPtr> ppD3D11Texture2D);
    // public OVR.OpenVR.EVRRenderModelError LoadIntoTextureD3D11_Async(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0x35FE60
    ::OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int textureId, ::System::IntPtr pDstTexture);
    // public System.Void FreeTextureD3D11(System.IntPtr pD3D11Texture2D)
    // Offset: 0x35FA80
    void FreeTextureD3D11(::System::IntPtr pD3D11Texture2D);
    // public System.UInt32 GetRenderModelName(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen)
    // Offset: 0x35FDD0
    uint GetRenderModelName(uint unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen);
    // public System.UInt32 GetRenderModelCount()
    // Offset: 0x35FD30
    uint GetRenderModelCount();
    // public System.UInt32 GetComponentCount(System.String pchRenderModelName)
    // Offset: 0x35FAE0
    uint GetComponentCount(::StringW pchRenderModelName);
    // public System.UInt32 GetComponentName(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen)
    // Offset: 0x35FB00
    uint GetComponentName(::StringW pchRenderModelName, uint unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint unComponentNameLen);
    // public System.UInt64 GetComponentButtonMask(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x35FAC0
    uint64_t GetComponentButtonMask(::StringW pchRenderModelName, ::StringW pchComponentName);
    // public System.UInt32 GetComponentRenderModelName(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen)
    // Offset: 0x35FB30
    uint GetComponentRenderModelName(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen);
    // public System.Boolean GetComponentStateForDevicePath(System.String pchRenderModelName, System.String pchComponentName, System.UInt64 devicePath, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x35FB60
    bool GetComponentStateForDevicePath(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);
    // public System.Boolean GetComponentState(System.String pchRenderModelName, System.String pchComponentName, ref OVR.OpenVR.VRControllerState_t pControllerState, ref OVR.OpenVR.RenderModel_ControllerMode_State_t pState, ref OVR.OpenVR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0x35FB90
    bool GetComponentState(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);
    // public System.Boolean RenderModelHasComponent(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0x35FEC0
    bool RenderModelHasComponent(::StringW pchRenderModelName, ::StringW pchComponentName);
    // public System.UInt32 GetRenderModelThumbnailURL(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, ref OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x35FE30
    uint GetRenderModelThumbnailURL(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, ByRef<::OVR::OpenVR::EVRRenderModelError> peError);
    // public System.UInt32 GetRenderModelOriginalPath(System.String pchRenderModelName, System.Text.StringBuilder pchOriginalPath, System.UInt32 unOriginalPathLen, ref OVR.OpenVR.EVRRenderModelError peError)
    // Offset: 0x35FE00
    uint GetRenderModelOriginalPath(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint unOriginalPathLen, ByRef<::OVR::OpenVR::EVRRenderModelError> peError);
    // public System.String GetRenderModelErrorNameFromEnum(OVR.OpenVR.EVRRenderModelError error)
    // Offset: 0x35FD50
    ::StringW GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError error);
  }; // OVR.OpenVR.CVRRenderModels
  #pragma pack(pop)
  static check_size<sizeof(CVRRenderModels), 16 + sizeof(::OVR::OpenVR::IVRRenderModels)> __OVR_OpenVR_CVRRenderModelsSizeCheck;
  static_assert(sizeof(CVRRenderModels) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async
// Il2CppName: LoadRenderModel_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::CVRRenderModels::*)(::StringW, ByRef<::System::IntPtr>)>(&OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ppRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "LoadRenderModel_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, ppRenderModel});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::FreeRenderModel
// Il2CppName: FreeRenderModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&OVR::OpenVR::CVRRenderModels::FreeRenderModel)> {
  static const MethodInfo* get() {
    static auto* pRenderModel = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "FreeRenderModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderModel});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::LoadTexture_Async
// Il2CppName: LoadTexture_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::CVRRenderModels::*)(int, ByRef<::System::IntPtr>)>(&OVR::OpenVR::CVRRenderModels::LoadTexture_Async)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ppTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "LoadTexture_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, ppTexture});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::FreeTexture
// Il2CppName: FreeTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&OVR::OpenVR::CVRRenderModels::FreeTexture)> {
  static const MethodInfo* get() {
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "FreeTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTexture});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async
// Il2CppName: LoadTextureD3D11_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::CVRRenderModels::*)(int, ::System::IntPtr, ByRef<::System::IntPtr>)>(&OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pD3D11Device = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11Texture2D = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "LoadTextureD3D11_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, pD3D11Device, ppD3D11Texture2D});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async
// Il2CppName: LoadIntoTextureD3D11_Async
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (OVR::OpenVR::CVRRenderModels::*)(int, ::System::IntPtr)>(&OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async)> {
  static const MethodInfo* get() {
    static auto* textureId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pDstTexture = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "LoadIntoTextureD3D11_Async", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textureId, pDstTexture});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::FreeTextureD3D11
// Il2CppName: FreeTextureD3D11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&OVR::OpenVR::CVRRenderModels::FreeTextureD3D11)> {
  static const MethodInfo* get() {
    static auto* pD3D11Texture2D = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "FreeTextureD3D11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pD3D11Texture2D});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetRenderModelName
// Il2CppName: GetRenderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)(uint, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::CVRRenderModels::GetRenderModelName)> {
  static const MethodInfo* get() {
    static auto* unRenderModelIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unRenderModelNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetRenderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unRenderModelIndex, pchRenderModelName, unRenderModelNameLen});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetRenderModelCount
// Il2CppName: GetRenderModelCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)()>(&OVR::OpenVR::CVRRenderModels::GetRenderModelCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetRenderModelCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetComponentCount
// Il2CppName: GetComponentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)(::StringW)>(&OVR::OpenVR::CVRRenderModels::GetComponentCount)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetComponentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetComponentName
// Il2CppName: GetComponentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)(::StringW, uint, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::CVRRenderModels::GetComponentName)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* unComponentIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetComponentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetComponentButtonMask
// Il2CppName: GetComponentButtonMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW)>(&OVR::OpenVR::CVRRenderModels::GetComponentButtonMask)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetComponentButtonMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName
// Il2CppName: GetComponentRenderModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentRenderModelName = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unComponentRenderModelNameLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetComponentRenderModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath
// Il2CppName: GetComponentStateForDevicePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW, uint64_t, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(&OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* devicePath = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetComponentStateForDevicePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, devicePath, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetComponentState
// Il2CppName: GetComponentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::VRControllerState_t>, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(&OVR::OpenVR::CVRRenderModels::GetComponentState)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRControllerState_t")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetComponentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::RenderModelHasComponent
// Il2CppName: RenderModelHasComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW)>(&OVR::OpenVR::CVRRenderModels::RenderModelHasComponent)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "RenderModelHasComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL
// Il2CppName: GetRenderModelThumbnailURL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::System::Text::StringBuilder*, uint, ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchThumbnailURL = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unThumbnailURLLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRRenderModelError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetRenderModelThumbnailURL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath
// Il2CppName: GetRenderModelOriginalPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::CVRRenderModels::*)(::StringW, ::System::Text::StringBuilder*, uint, ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchOriginalPath = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unOriginalPathLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRRenderModelError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetRenderModelOriginalPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum
// Il2CppName: GetRenderModelErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRRenderModels::*)(::OVR::OpenVR::EVRRenderModelError)>(&OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRRenderModelError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRRenderModels*), "GetRenderModelErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
