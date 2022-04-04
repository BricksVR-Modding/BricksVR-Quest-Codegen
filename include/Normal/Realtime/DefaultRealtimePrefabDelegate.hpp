// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.IRealtimePrefabLoadDelegate
#include "Normal/Realtime/IRealtimePrefabLoadDelegate.hpp"
// Including type: Normal.Realtime.IRealtimePrefabInstantiateDelegate
#include "Normal/Realtime/IRealtimePrefabInstantiateDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimePrefabMetadata
  struct RealtimePrefabMetadata;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: DefaultRealtimePrefabDelegate
  class DefaultRealtimePrefabDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::DefaultRealtimePrefabDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::DefaultRealtimePrefabDelegate*, "Normal.Realtime", "DefaultRealtimePrefabDelegate");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.DefaultRealtimePrefabDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultRealtimePrefabDelegate : public ::Il2CppObject/*, public ::Normal::Realtime::IRealtimePrefabLoadDelegate, public ::Normal::Realtime::IRealtimePrefabInstantiateDelegate*/ {
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::IRealtimePrefabLoadDelegate
    operator ::Normal::Realtime::IRealtimePrefabLoadDelegate() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IRealtimePrefabLoadDelegate*>(this);
    }
    // Creating interface conversion operator: operator ::Normal::Realtime::IRealtimePrefabInstantiateDelegate
    operator ::Normal::Realtime::IRealtimePrefabInstantiateDelegate() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IRealtimePrefabInstantiateDelegate*>(this);
    }
    // public UnityEngine.GameObject LoadRealtimePrefab(Normal.Realtime.RealtimePrefabMetadata prefabMetadata)
    // Offset: 0x8B8870
    ::UnityEngine::GameObject* LoadRealtimePrefab(::Normal::Realtime::RealtimePrefabMetadata prefabMetadata);
    // public UnityEngine.GameObject InstantiateRealtimePrefab(UnityEngine.GameObject prefab)
    // Offset: 0x8B8810
    ::UnityEngine::GameObject* InstantiateRealtimePrefab(::UnityEngine::GameObject* prefab);
    // public System.Void DestroyRealtimePrefab(UnityEngine.GameObject prefabInstance)
    // Offset: 0x8B87B0
    void DestroyRealtimePrefab(::UnityEngine::GameObject* prefabInstance);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultRealtimePrefabDelegate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::DefaultRealtimePrefabDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultRealtimePrefabDelegate*, creationType>()));
    }
  }; // Normal.Realtime.DefaultRealtimePrefabDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::DefaultRealtimePrefabDelegate::LoadRealtimePrefab
// Il2CppName: LoadRealtimePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Normal::Realtime::DefaultRealtimePrefabDelegate::*)(::Normal::Realtime::RealtimePrefabMetadata)>(&Normal::Realtime::DefaultRealtimePrefabDelegate::LoadRealtimePrefab)> {
  static const MethodInfo* get() {
    static auto* prefabMetadata = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimePrefabMetadata")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::DefaultRealtimePrefabDelegate*), "LoadRealtimePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefabMetadata});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::DefaultRealtimePrefabDelegate::InstantiateRealtimePrefab
// Il2CppName: InstantiateRealtimePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Normal::Realtime::DefaultRealtimePrefabDelegate::*)(::UnityEngine::GameObject*)>(&Normal::Realtime::DefaultRealtimePrefabDelegate::InstantiateRealtimePrefab)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::DefaultRealtimePrefabDelegate*), "InstantiateRealtimePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::DefaultRealtimePrefabDelegate::DestroyRealtimePrefab
// Il2CppName: DestroyRealtimePrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::DefaultRealtimePrefabDelegate::*)(::UnityEngine::GameObject*)>(&Normal::Realtime::DefaultRealtimePrefabDelegate::DestroyRealtimePrefab)> {
  static const MethodInfo* get() {
    static auto* prefabInstance = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::DefaultRealtimePrefabDelegate*), "DestroyRealtimePrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefabInstance});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::DefaultRealtimePrefabDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
