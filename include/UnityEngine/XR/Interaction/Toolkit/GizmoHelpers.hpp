// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: GizmoHelpers
  class GizmoHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*, "UnityEngine.XR.Interaction.Toolkit", "GizmoHelpers");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.GizmoHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class GizmoHelpers : public ::Il2CppObject {
    public:
    // static public System.Void DrawWirePlaneOriented(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Single size)
    // Offset: 0x8C2EE8
    static void DrawWirePlaneOriented(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float size);
    // static public System.Void DrawWireCubeOriented(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, System.Single size)
    // Offset: 0x8C3294
    static void DrawWireCubeOriented(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float size);
    // static public System.Void DrawAxisArrows(UnityEngine.Transform transform, System.Single size)
    // Offset: 0x8C3C3C
    static void DrawAxisArrows(::UnityEngine::Transform* transform, float size);
  }; // UnityEngine.XR.Interaction.Toolkit.GizmoHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWirePlaneOriented
// Il2CppName: DrawWirePlaneOriented
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float)>(&UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWirePlaneOriented)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*), "DrawWirePlaneOriented", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWireCubeOriented
// Il2CppName: DrawWireCubeOriented
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float)>(&UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWireCubeOriented)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*), "DrawWireCubeOriented", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawAxisArrows
// Il2CppName: DrawAxisArrows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, float)>(&UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawAxisArrows)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*), "DrawAxisArrows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, size});
  }
};
