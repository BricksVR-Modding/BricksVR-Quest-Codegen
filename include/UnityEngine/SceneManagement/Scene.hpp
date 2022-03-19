// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SceneManagement.Scene
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6D9BBC
  struct Scene/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Scene
    constexpr Scene(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private System.Int32 m_Handle
    int& dyn_m_Handle();
    // public System.Int32 get_handle()
    // Offset: 0xFC6E0C
    int get_handle();
    // public System.String get_name()
    // Offset: 0xFC6E14
    ::StringW get_name();
    // static private System.String GetNameInternal(System.Int32 sceneHandle)
    // Offset: 0xFC6DCC
    static ::StringW GetNameInternal(int sceneHandle);
    // public override System.Int32 GetHashCode()
    // Offset: 0xFC6E54
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xFC6E5C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.SceneManagement.Scene
  #pragma pack(pop)
  static check_size<sizeof(Scene), 0 + sizeof(int)> __UnityEngine_SceneManagement_SceneSizeCheck;
  static_assert(sizeof(Scene) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_handle
// Il2CppName: get_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetNameInternal
// Il2CppName: GetNameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::SceneManagement::Scene::GetNameInternal)> {
  static const MethodInfo* get() {
    static auto* sceneHandle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetNameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)(::Il2CppObject*)>(&UnityEngine::SceneManagement::Scene::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
