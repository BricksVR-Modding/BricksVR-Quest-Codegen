// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animator*, "UnityEngine", "Animator");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animator
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E2E00
  // [NativeHeaderAttribute] Offset: E2E00
  // [UsedByNativeCodeAttribute] Offset: E2E00
  // [NativeHeaderAttribute] Offset: E2E00
  class Animator : public ::UnityEngine::Behaviour {
    public:
    // public System.Boolean get_hasBoundPlayables()
    // Offset: 0x657C50
    bool get_hasBoundPlayables();
    // public System.Void SetFloat(System.String name, System.Single value)
    // Offset: 0x657AC0
    void SetFloat(::StringW name, float value);
    // public System.Void SetFloat(System.Int32 id, System.Single value)
    // Offset: 0x657A70
    void SetFloat(int id, float value);
    // public System.Void SetInteger(System.Int32 id, System.Int32 value)
    // Offset: 0x657B20
    void SetInteger(int id, int value);
    // public System.Void SetTrigger(System.String name)
    // Offset: 0x657BC0
    void SetTrigger(::StringW name);
    // public System.Void ResetTrigger(System.String name)
    // Offset: 0x657A20
    void ResetTrigger(::StringW name);
    // public System.Int32 GetLayerIndex(System.String layerName)
    // Offset: 0x6579D0
    int GetLayerIndex(::StringW layerName);
    // public System.Void SetLayerWeight(System.Int32 layerIndex, System.Single weight)
    // Offset: 0x657B70
    void SetLayerWeight(int layerIndex, float weight);
    // static public System.Int32 StringToHash(System.String name)
    // Offset: 0x657C10
    static int StringToHash(::StringW name);
    // private System.Void SetFloatString(System.String name, System.Single value)
    // Offset: 0x657AC0
    void SetFloatString(::StringW name, float value);
    // private System.Void SetFloatID(System.Int32 id, System.Single value)
    // Offset: 0x657A70
    void SetFloatID(int id, float value);
    // private System.Void SetIntegerID(System.Int32 id, System.Int32 value)
    // Offset: 0x657B20
    void SetIntegerID(int id, int value);
    // private System.Void SetTriggerString(System.String name)
    // Offset: 0x657BC0
    void SetTriggerString(::StringW name);
    // private System.Void ResetTriggerString(System.String name)
    // Offset: 0x657A20
    void ResetTriggerString(::StringW name);
  }; // UnityEngine.Animator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animator::get_hasBoundPlayables
// Il2CppName: get_hasBoundPlayables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animator::*)()>(&UnityEngine::Animator::get_hasBoundPlayables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "get_hasBoundPlayables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW, float)>(&UnityEngine::Animator::SetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(int, float)>(&UnityEngine::Animator::SetFloat)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetInteger
// Il2CppName: SetInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(int, int)>(&UnityEngine::Animator::SetInteger)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetTrigger
// Il2CppName: SetTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::SetTrigger)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::ResetTrigger
// Il2CppName: ResetTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::ResetTrigger)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "ResetTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::GetLayerIndex
// Il2CppName: GetLayerIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::GetLayerIndex)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "GetLayerIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetLayerWeight
// Il2CppName: SetLayerWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(int, float)>(&UnityEngine::Animator::SetLayerWeight)> {
  static const MethodInfo* get() {
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetLayerWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex, weight});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::StringToHash
// Il2CppName: StringToHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::Animator::StringToHash)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "StringToHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetFloatString
// Il2CppName: SetFloatString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW, float)>(&UnityEngine::Animator::SetFloatString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetFloatString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetFloatID
// Il2CppName: SetFloatID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(int, float)>(&UnityEngine::Animator::SetFloatID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetFloatID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetIntegerID
// Il2CppName: SetIntegerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(int, int)>(&UnityEngine::Animator::SetIntegerID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetIntegerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::SetTriggerString
// Il2CppName: SetTriggerString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::SetTriggerString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "SetTriggerString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animator::ResetTriggerString
// Il2CppName: ResetTriggerString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animator::*)(::StringW)>(&UnityEngine::Animator::ResetTriggerString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animator*), "ResetTriggerString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
