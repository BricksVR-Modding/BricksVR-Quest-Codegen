// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXSpawnerState
  class VFXSpawnerState;
  // Forward declaring type: VFXExpressionValues
  class VFXExpressionValues;
  // Forward declaring type: VisualEffect
  class VisualEffect;
}
// Completed forward declares
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXSpawnerCallbacks
  class VFXSpawnerCallbacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::VFX::VFXSpawnerCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXSpawnerCallbacks*, "UnityEngine.VFX", "VFXSpawnerCallbacks");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.VFX.VFXSpawnerCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: BB1F0
  class VFXSpawnerCallbacks : public ::UnityEngine::ScriptableObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x27AD80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXSpawnerCallbacks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::VFX::VFXSpawnerCallbacks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXSpawnerCallbacks*, creationType>()));
    }
    // public System.Void OnPlay(UnityEngine.VFX.VFXSpawnerState state, UnityEngine.VFX.VFXExpressionValues vfxValues, UnityEngine.VFX.VisualEffect vfxComponent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);
    // public System.Void OnUpdate(UnityEngine.VFX.VFXSpawnerState state, UnityEngine.VFX.VFXExpressionValues vfxValues, UnityEngine.VFX.VisualEffect vfxComponent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);
    // public System.Void OnStop(UnityEngine.VFX.VFXSpawnerState state, UnityEngine.VFX.VFXExpressionValues vfxValues, UnityEngine.VFX.VisualEffect vfxComponent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);
  }; // UnityEngine.VFX.VFXSpawnerCallbacks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerCallbacks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay
// Il2CppName: OnPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerCallbacks::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&UnityEngine::VFX::VFXSpawnerCallbacks::OnPlay)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXSpawnerState")->byval_arg;
    static auto* vfxValues = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXExpressionValues")->byval_arg;
    static auto* vfxComponent = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VisualEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerCallbacks*), "OnPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, vfxValues, vfxComponent});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerCallbacks::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&UnityEngine::VFX::VFXSpawnerCallbacks::OnUpdate)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXSpawnerState")->byval_arg;
    static auto* vfxValues = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXExpressionValues")->byval_arg;
    static auto* vfxComponent = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VisualEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerCallbacks*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, vfxValues, vfxComponent});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerCallbacks::OnStop
// Il2CppName: OnStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerCallbacks::*)(::UnityEngine::VFX::VFXSpawnerState*, ::UnityEngine::VFX::VFXExpressionValues*, ::UnityEngine::VFX::VisualEffect*)>(&UnityEngine::VFX::VFXSpawnerCallbacks::OnStop)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXSpawnerState")->byval_arg;
    static auto* vfxValues = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VFXExpressionValues")->byval_arg;
    static auto* vfxComponent = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VisualEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerCallbacks*), "OnStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, vfxValues, vfxComponent});
  }
};