// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LegoConnectorScript
  class LegoConnectorScript;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ChunkedBrick
  struct ChunkedBrick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChunkedBrick, "", "ChunkedBrick");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ChunkedBrick
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct ChunkedBrick/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly UnityEngine.GameObject GameObject
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::GameObject* GameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public readonly UnityEngine.MeshRenderer MeshRenderer
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::MeshRenderer* MeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public readonly System.Int32 VertexCount
    // Size: 0x4
    // Offset: 0x10
    int VertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: VertexCount and: ConnectorScripts
    char __padding2[0x4] = {};
    // public readonly System.Collections.Generic.List`1<LegoConnectorScript> ConnectorScripts
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>* ConnectorScripts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*) == 0x8);
    public:
    // Creating value type constructor for type: ChunkedBrick
    constexpr ChunkedBrick(::UnityEngine::GameObject* GameObject_ = {}, ::UnityEngine::MeshRenderer* MeshRenderer_ = {}, int VertexCount_ = {}, ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>* ConnectorScripts_ = {}) noexcept : GameObject{GameObject_}, MeshRenderer{MeshRenderer_}, VertexCount{VertexCount_}, ConnectorScripts{ConnectorScripts_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly UnityEngine.GameObject GameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_GameObject();
    // Get instance field reference: public readonly UnityEngine.MeshRenderer MeshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_MeshRenderer();
    // Get instance field reference: public readonly System.Int32 VertexCount
    [[deprecated("Use field access instead!")]] int& dyn_VertexCount();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<LegoConnectorScript> ConnectorScripts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*& dyn_ConnectorScripts();
    // public System.Void .ctor(UnityEngine.GameObject o)
    // Offset: 0x6AF7C0
    ChunkedBrick(::UnityEngine::GameObject* o);
  }; // ChunkedBrick
  #pragma pack(pop)
  static check_size<sizeof(ChunkedBrick), 24 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*)> __GlobalNamespace_ChunkedBrickSizeCheck;
  static_assert(sizeof(ChunkedBrick) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ChunkedBrick::ChunkedBrick
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
