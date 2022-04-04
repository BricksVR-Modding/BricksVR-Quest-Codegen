// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ModularBrickObjects
  class ModularBrickObjects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ModularBrickObjects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModularBrickObjects*, "", "ModularBrickObjects");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ModularBrickObjects
  // [TokenAttribute] Offset: FFFFFFFF
  class ModularBrickObjects : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> _namesToModularModels
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GameObject*>* namesToModularModels;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GameObject*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.String,System.Int32>,UnityEngine.Mesh> _namesAndHollowToMesh
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, int>, ::UnityEngine::Mesh*>* namesAndHollowToMesh;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, int>, ::UnityEngine::Mesh*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Mesh> _namesToStudMeshes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Mesh*>* namesToStudMeshes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Mesh*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.String,System.String>,UnityEngine.Vector3> _namesAndStudNamesToStudOffset
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, ::StringW>, ::UnityEngine::Vector3>* namesAndStudNamesToStudOffset;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, ::StringW>, ::UnityEngine::Vector3>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private ModularBrickObjects _instance
    static ::GlobalNamespace::ModularBrickObjects* _get__instance();
    // Set static field: static private ModularBrickObjects _instance
    static void _set__instance(::GlobalNamespace::ModularBrickObjects* value);
    // static field const value: static private System.Int32 HollowBrick
    static constexpr const int HollowBrick = 0;
    // Get static field: static private System.Int32 HollowBrick
    static int _get_HollowBrick();
    // Set static field: static private System.Int32 HollowBrick
    static void _set_HollowBrick(int value);
    // static field const value: static private System.String HollowBrickNameInModel
    static constexpr const char* HollowBrickNameInModel = "Body";
    // Get static field: static private System.String HollowBrickNameInModel
    static ::StringW _get_HollowBrickNameInModel();
    // Set static field: static private System.String HollowBrickNameInModel
    static void _set_HollowBrickNameInModel(::StringW value);
    // static field const value: static private System.Int32 SolidBrick
    static constexpr const int SolidBrick = 1;
    // Get static field: static private System.Int32 SolidBrick
    static int _get_SolidBrick();
    // Set static field: static private System.Int32 SolidBrick
    static void _set_SolidBrick(int value);
    // static field const value: static private System.String SolidBrickNameInModel
    static constexpr const char* SolidBrickNameInModel = "FlatBody";
    // Get static field: static private System.String SolidBrickNameInModel
    static ::StringW _get_SolidBrickNameInModel();
    // Set static field: static private System.String SolidBrickNameInModel
    static void _set_SolidBrickNameInModel(::StringW value);
    // static field const value: static private System.String StudNameInModel
    static constexpr const char* StudNameInModel = "Studs";
    // Get static field: static private System.String StudNameInModel
    static ::StringW _get_StudNameInModel();
    // Set static field: static private System.String StudNameInModel
    static void _set_StudNameInModel(::StringW value);
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> _namesToModularModels
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GameObject*>*& dyn__namesToModularModels();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.String,System.Int32>,UnityEngine.Mesh> _namesAndHollowToMesh
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, int>, ::UnityEngine::Mesh*>*& dyn__namesAndHollowToMesh();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Mesh> _namesToStudMeshes
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Mesh*>*& dyn__namesToStudMeshes();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.String,System.String>,UnityEngine.Vector3> _namesAndStudNamesToStudOffset
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, ::StringW>, ::UnityEngine::Vector3>*& dyn__namesAndStudNamesToStudOffset();
    // static public ModularBrickObjects GetInstance()
    // Offset: 0x6BE750
    static ::GlobalNamespace::ModularBrickObjects* GetInstance();
    // public UnityEngine.GameObject GetModularModel(System.String brickName)
    // Offset: 0x6BE810
    ::UnityEngine::GameObject* GetModularModel(::StringW brickName);
    // public UnityEngine.Mesh GetHollowMesh(System.String brickName)
    // Offset: 0x6BE5B0
    ::UnityEngine::Mesh* GetHollowMesh(::StringW brickName);
    // public UnityEngine.Mesh GetSolidMesh(System.String brickName)
    // Offset: 0x6BE8E0
    ::UnityEngine::Mesh* GetSolidMesh(::StringW brickName);
    // public UnityEngine.Mesh GetStudMesh(System.String brickName)
    // Offset: 0x6BEA90
    ::UnityEngine::Mesh* GetStudMesh(::StringW brickName);
    // public UnityEngine.Vector3 GetStudOffsetFromCenter(System.String brickName, System.String studName)
    // Offset: 0x6BEB90
    ::UnityEngine::Vector3 GetStudOffsetFromCenter(::StringW brickName, ::StringW studName);
    // public System.Void .ctor()
    // Offset: 0x6BEE60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModularBrickObjects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ModularBrickObjects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModularBrickObjects*, creationType>()));
    }
  }; // ModularBrickObjects
  #pragma pack(pop)
  static check_size<sizeof(ModularBrickObjects), 48 + sizeof(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::StringW, ::StringW>, ::UnityEngine::Vector3>*)> __GlobalNamespace_ModularBrickObjectsSizeCheck;
  static_assert(sizeof(ModularBrickObjects) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ModularBrickObjects* (*)()>(&GlobalNamespace::ModularBrickObjects::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModularBrickObjects*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::GetModularModel
// Il2CppName: GetModularModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::ModularBrickObjects::*)(::StringW)>(&GlobalNamespace::ModularBrickObjects::GetModularModel)> {
  static const MethodInfo* get() {
    static auto* brickName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModularBrickObjects*), "GetModularModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::GetHollowMesh
// Il2CppName: GetHollowMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (GlobalNamespace::ModularBrickObjects::*)(::StringW)>(&GlobalNamespace::ModularBrickObjects::GetHollowMesh)> {
  static const MethodInfo* get() {
    static auto* brickName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModularBrickObjects*), "GetHollowMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::GetSolidMesh
// Il2CppName: GetSolidMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (GlobalNamespace::ModularBrickObjects::*)(::StringW)>(&GlobalNamespace::ModularBrickObjects::GetSolidMesh)> {
  static const MethodInfo* get() {
    static auto* brickName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModularBrickObjects*), "GetSolidMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::GetStudMesh
// Il2CppName: GetStudMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (GlobalNamespace::ModularBrickObjects::*)(::StringW)>(&GlobalNamespace::ModularBrickObjects::GetStudMesh)> {
  static const MethodInfo* get() {
    static auto* brickName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModularBrickObjects*), "GetStudMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::GetStudOffsetFromCenter
// Il2CppName: GetStudOffsetFromCenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::ModularBrickObjects::*)(::StringW, ::StringW)>(&GlobalNamespace::ModularBrickObjects::GetStudOffsetFromCenter)> {
  static const MethodInfo* get() {
    static auto* brickName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* studName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModularBrickObjects*), "GetStudOffsetFromCenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickName, studName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModularBrickObjects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
