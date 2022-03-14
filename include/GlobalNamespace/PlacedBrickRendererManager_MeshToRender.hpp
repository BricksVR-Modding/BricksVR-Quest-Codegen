// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlacedBrickRendererManager
#include "GlobalNamespace/PlacedBrickRendererManager.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlacedBrickRendererManager::MeshToRender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*, "", "PlacedBrickRendererManager/MeshToRender");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PlacedBrickRendererManager/MeshToRender
  // [TokenAttribute] Offset: FFFFFFFF
  class PlacedBrickRendererManager::MeshToRender : public ::Il2CppObject {
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
    // public readonly UnityEngine.Matrix4x4 TransformationMatrix
    // Size: 0x40
    // Offset: 0x10
    ::UnityEngine::Matrix4x4 TransformationMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // public readonly UnityEngine.Vector4 Color
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Vector4 Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Get instance field reference: public readonly UnityEngine.Matrix4x4 TransformationMatrix
    ::UnityEngine::Matrix4x4& dyn_TransformationMatrix();
    // Get instance field reference: public readonly UnityEngine.Vector4 Color
    ::UnityEngine::Vector4& dyn_Color();
    // public System.Void .ctor(UnityEngine.Matrix4x4 transformationMatrix, UnityEngine.Color color)
    // Offset: 0x1058EA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRendererManager::MeshToRender* New_ctor(::UnityEngine::Matrix4x4 transformationMatrix, ::UnityEngine::Color color) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRendererManager::MeshToRender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRendererManager::MeshToRender*, creationType>(transformationMatrix, color)));
    }
    // public System.Void .ctor(UnityEngine.Matrix4x4 transformationMatrix, UnityEngine.Vector4 color)
    // Offset: 0x10598F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRendererManager::MeshToRender* New_ctor(::UnityEngine::Matrix4x4 transformationMatrix, ::UnityEngine::Vector4 color) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRendererManager::MeshToRender::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRendererManager::MeshToRender*, creationType>(transformationMatrix, color)));
    }
  }; // PlacedBrickRendererManager/MeshToRender
  #pragma pack(pop)
  static check_size<sizeof(PlacedBrickRendererManager::MeshToRender), 80 + sizeof(::UnityEngine::Vector4)> __GlobalNamespace_PlacedBrickRendererManager_MeshToRenderSizeCheck;
  static_assert(sizeof(PlacedBrickRendererManager::MeshToRender) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshToRender::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshToRender::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
