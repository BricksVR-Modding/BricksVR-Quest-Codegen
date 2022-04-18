// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Playables::PlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableAsset*, "UnityEngine.Playables", "PlayableAsset");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableAsset
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: DA940
  // [AssetFileNameExtensionAttribute] Offset: DA940
  class PlayableAsset : public ::UnityEngine::ScriptableObject {
    public:
    // public System.Double get_duration()
    // Offset: 0x9732C0
    double get_duration();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x973320
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);
    // static System.Void Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset asset, UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go, System.IntPtr ptr)
    // Offset: 0x9730C0
    static void Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::IntPtr ptr);
    // static System.Void Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset asset, System.IntPtr ptrToDouble)
    // Offset: 0x973290
    static void Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* asset, ::System::IntPtr ptrToDouble);
    // protected System.Void .ctor()
    // Offset: 0x27AD80
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Playables::PlayableAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableAsset*, creationType>()));
    }
  }; // UnityEngine.Playables.PlayableAsset
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableAsset::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Playables::PlayableAsset::*)()>(&UnityEngine::Playables::PlayableAsset::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableAsset*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableAsset::get_outputs
// Il2CppName: get_outputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (UnityEngine::Playables::PlayableAsset::*)()>(&UnityEngine::Playables::PlayableAsset::get_outputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableAsset*), "get_outputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (UnityEngine::Playables::PlayableAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&UnityEngine::Playables::PlayableAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, owner});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableAsset::Internal_CreatePlayable
// Il2CppName: Internal_CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::IntPtr)>(&UnityEngine::Playables::PlayableAsset::Internal_CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableAsset")->byval_arg;
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableAsset*), "Internal_CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, graph, go, ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableAsset::Internal_GetPlayableAssetDuration
// Il2CppName: Internal_GetPlayableAssetDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::PlayableAsset*, ::System::IntPtr)>(&UnityEngine::Playables::PlayableAsset::Internal_GetPlayableAssetDuration)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableAsset")->byval_arg;
    static auto* ptrToDouble = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableAsset*), "Internal_GetPlayableAssetDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, ptrToDouble});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
