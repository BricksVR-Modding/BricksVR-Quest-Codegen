// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ChunkedRenderer
#include "GlobalNamespace/ChunkedRenderer.hpp"
// Including type: ChunkedBrick
#include "GlobalNamespace/ChunkedBrick.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: SetConnectorStatesTask
#include "GlobalNamespace/SetConnectorStatesTask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ChunkedRenderer::Chunk);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChunkedRenderer::Chunk*, "", "ChunkedRenderer/Chunk");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ChunkedRenderer/Chunk
  // [TokenAttribute] Offset: FFFFFFFF
  class ChunkedRenderer::Chunk : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.List`1<ChunkedBrick> _bricks
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::ChunkedBrick>* bricks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ChunkedBrick>*) == 0x8);
    // private System.Boolean _renderersEnabled
    // Size: 0x1
    // Offset: 0x18
    bool renderersEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _connectorsEnabled
    // Size: 0x1
    // Offset: 0x19
    bool connectorsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: connectorsEnabled and: Position
    char __padding2[0x2] = {};
    // public UnityEngine.Vector3 Position
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ChunkedBrick> _bricks
    ::System::Collections::Generic::List_1<::GlobalNamespace::ChunkedBrick>*& dyn__bricks();
    // Get instance field reference: private System.Boolean _renderersEnabled
    bool& dyn__renderersEnabled();
    // Get instance field reference: private System.Boolean _connectorsEnabled
    bool& dyn__connectorsEnabled();
    // Get instance field reference: public UnityEngine.Vector3 Position
    ::UnityEngine::Vector3& dyn_Position();
    // public System.Void AddBrick(UnityEngine.GameObject brickObject, System.Collections.Generic.Queue`1<SetConnectorStatesTask> workQueue)
    // Offset: 0x10A0704
    void AddBrick(::UnityEngine::GameObject* brickObject, ::System::Collections::Generic::Queue_1<::GlobalNamespace::SetConnectorStatesTask>* workQueue);
    // public System.Void AddBrick(ChunkedBrick chunkedBrick, System.Collections.Generic.Queue`1<SetConnectorStatesTask> workQueue)
    // Offset: 0x10A07D4
    void AddBrick(::GlobalNamespace::ChunkedBrick chunkedBrick, ::System::Collections::Generic::Queue_1<::GlobalNamespace::SetConnectorStatesTask>* workQueue);
    // public System.Void SetRendererEnabled(System.Boolean enabled)
    // Offset: 0x10A0C2C
    void SetRendererEnabled(bool enabled);
    // public System.Void SetConnectorCollidersEnabled(System.Boolean enabled, System.Collections.Generic.Queue`1<SetConnectorStatesTask> workQueue)
    // Offset: 0x10A0E40
    void SetConnectorCollidersEnabled(bool enabled, ::System::Collections::Generic::Queue_1<::GlobalNamespace::SetConnectorStatesTask>* workQueue);
    // public System.Collections.Generic.List`1<ChunkedBrick> Bricks()
    // Offset: 0x10A1404
    ::System::Collections::Generic::List_1<::GlobalNamespace::ChunkedBrick>* Bricks();
    // public System.Void .ctor()
    // Offset: 0x10A08CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChunkedRenderer::Chunk* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ChunkedRenderer::Chunk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChunkedRenderer::Chunk*, creationType>()));
    }
  }; // ChunkedRenderer/Chunk
  #pragma pack(pop)
  static check_size<sizeof(ChunkedRenderer::Chunk), 28 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_ChunkedRenderer_ChunkSizeCheck;
  static_assert(sizeof(ChunkedRenderer::Chunk) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ChunkedRenderer::Chunk::AddBrick
// Il2CppName: AddBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChunkedRenderer::Chunk::*)(::UnityEngine::GameObject*, ::System::Collections::Generic::Queue_1<::GlobalNamespace::SetConnectorStatesTask>*)>(&GlobalNamespace::ChunkedRenderer::Chunk::AddBrick)> {
  static const MethodInfo* get() {
    static auto* brickObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* workQueue = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Queue`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SetConnectorStatesTask")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChunkedRenderer::Chunk*), "AddBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickObject, workQueue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChunkedRenderer::Chunk::AddBrick
// Il2CppName: AddBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChunkedRenderer::Chunk::*)(::GlobalNamespace::ChunkedBrick, ::System::Collections::Generic::Queue_1<::GlobalNamespace::SetConnectorStatesTask>*)>(&GlobalNamespace::ChunkedRenderer::Chunk::AddBrick)> {
  static const MethodInfo* get() {
    static auto* chunkedBrick = &::il2cpp_utils::GetClassFromName("", "ChunkedBrick")->byval_arg;
    static auto* workQueue = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Queue`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SetConnectorStatesTask")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChunkedRenderer::Chunk*), "AddBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunkedBrick, workQueue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChunkedRenderer::Chunk::SetRendererEnabled
// Il2CppName: SetRendererEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChunkedRenderer::Chunk::*)(bool)>(&GlobalNamespace::ChunkedRenderer::Chunk::SetRendererEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChunkedRenderer::Chunk*), "SetRendererEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChunkedRenderer::Chunk::SetConnectorCollidersEnabled
// Il2CppName: SetConnectorCollidersEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChunkedRenderer::Chunk::*)(bool, ::System::Collections::Generic::Queue_1<::GlobalNamespace::SetConnectorStatesTask>*)>(&GlobalNamespace::ChunkedRenderer::Chunk::SetConnectorCollidersEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* workQueue = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Queue`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SetConnectorStatesTask")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChunkedRenderer::Chunk*), "SetConnectorCollidersEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled, workQueue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChunkedRenderer::Chunk::Bricks
// Il2CppName: Bricks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ChunkedBrick>* (GlobalNamespace::ChunkedRenderer::Chunk::*)()>(&GlobalNamespace::ChunkedRenderer::Chunk::Bricks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChunkedRenderer::Chunk*), "Bricks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChunkedRenderer::Chunk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
