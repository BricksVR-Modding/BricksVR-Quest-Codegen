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
  // Forward declaring type: PlacedBrickRendererManagerTwo
  class PlacedBrickRendererManagerTwo;
  // Forward declaring type: BrickAttach
  class BrickAttach;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlacedBrickRenderer
  class PlacedBrickRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlacedBrickRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlacedBrickRenderer*, "", "PlacedBrickRenderer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2F
  #pragma pack(push, 1)
  // Autogenerated type: PlacedBrickRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  class PlacedBrickRenderer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private PlacedBrickRendererManagerTwo placedBrickRendererManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlacedBrickRendererManagerTwo* placedBrickRendererManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlacedBrickRendererManagerTwo*) == 0x8);
    // private BrickAttach _attach
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BrickAttach* attach;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickAttach*) == 0x8);
    // public System.Int32 instanceId
    // Size: 0x4
    // Offset: 0x28
    int instanceId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _hasStartRun
    // Size: 0x1
    // Offset: 0x2C
    bool hasStartRun;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasSubmitted
    // Size: 0x1
    // Offset: 0x2D
    bool hasSubmitted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _usingHollowMesh
    // Size: 0x1
    // Offset: 0x2E
    bool usingHollowMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PlacedBrickRendererManagerTwo placedBrickRendererManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlacedBrickRendererManagerTwo*& dyn_placedBrickRendererManager();
    // Get instance field reference: private BrickAttach _attach
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BrickAttach*& dyn__attach();
    // Get instance field reference: public System.Int32 instanceId
    [[deprecated("Use field access instead!")]] int& dyn_instanceId();
    // Get instance field reference: private System.Boolean _hasStartRun
    [[deprecated("Use field access instead!")]] bool& dyn__hasStartRun();
    // Get instance field reference: private System.Boolean _hasSubmitted
    [[deprecated("Use field access instead!")]] bool& dyn__hasSubmitted();
    // Get instance field reference: private System.Boolean _usingHollowMesh
    [[deprecated("Use field access instead!")]] bool& dyn__usingHollowMesh();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRenderer*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x67A9D0
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x67A490
    void OnEnable();
    // private System.Void SubmitToRendererOnStart()
    // Offset: 0x67A9F0
    void SubmitToRendererOnStart();
    // public System.Void RerenderMeshes()
    // Offset: 0x67A740
    void RerenderMeshes();
    // private System.Void RerenderBody()
    // Offset: 0x67A530
    void RerenderBody();
    // private System.Void RerenderStuds()
    // Offset: 0x67A770
    void RerenderStuds();
    // private System.Void OnDisable()
    // Offset: 0x67A2F0
    void OnDisable();
  }; // PlacedBrickRenderer
  #pragma pack(pop)
  static check_size<sizeof(PlacedBrickRenderer), 46 + sizeof(bool)> __GlobalNamespace_PlacedBrickRendererSizeCheck;
  static_assert(sizeof(PlacedBrickRenderer) == 0x2F);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::SubmitToRendererOnStart
// Il2CppName: SubmitToRendererOnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::SubmitToRendererOnStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "SubmitToRendererOnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::RerenderMeshes
// Il2CppName: RerenderMeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::RerenderMeshes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "RerenderMeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::RerenderBody
// Il2CppName: RerenderBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::RerenderBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "RerenderBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::RerenderStuds
// Il2CppName: RerenderStuds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::RerenderStuds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "RerenderStuds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRenderer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRenderer::*)()>(&GlobalNamespace::PlacedBrickRenderer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRenderer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
