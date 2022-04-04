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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightManager
  class LightManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightManager*, "", "LightManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LightManager
  // [TokenAttribute] Offset: FFFFFFFF
  class LightManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::LightManager::Area
    struct Area;
    public:
    // public UnityEngine.Light[] lights
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Light*> lights;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Light*>) == 0x8);
    // private UnityEngine.Light _activeLight
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Light* activeLight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Light*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private LightManager _instance
    static ::GlobalNamespace::LightManager* _get__instance();
    // Set static field: static private LightManager _instance
    static void _set__instance(::GlobalNamespace::LightManager* value);
    // Get instance field reference: public UnityEngine.Light[] lights
    [[deprecated]] ::ArrayW<::UnityEngine::Light*>& dyn_lights();
    // Get instance field reference: private UnityEngine.Light _activeLight
    [[deprecated]] ::UnityEngine::Light*& dyn__activeLight();
    // static public LightManager GetInstance()
    // Offset: 0x6BD1E0
    static ::GlobalNamespace::LightManager* GetInstance();
    // private System.Void Awake()
    // Offset: 0x6BCFE0
    void Awake();
    // public System.Void EnableLight(LightManager/Area area)
    // Offset: 0x6BD100
    void EnableLight(::GlobalNamespace::LightManager::Area area);
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightManager*, creationType>()));
    }
  }; // LightManager
  #pragma pack(pop)
  static check_size<sizeof(LightManager), 32 + sizeof(::UnityEngine::Light*)> __GlobalNamespace_LightManagerSizeCheck;
  static_assert(sizeof(LightManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightManager::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightManager* (*)()>(&GlobalNamespace::LightManager::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)()>(&GlobalNamespace::LightManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::EnableLight
// Il2CppName: EnableLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightManager::*)(::GlobalNamespace::LightManager::Area)>(&GlobalNamespace::LightManager::EnableLight)> {
  static const MethodInfo* get() {
    static auto* area = &::il2cpp_utils::GetClassFromName("", "LightManager/Area")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightManager*), "EnableLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{area});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
