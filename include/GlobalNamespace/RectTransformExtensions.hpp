// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RectTransformExtensions
  class RectTransformExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RectTransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RectTransformExtensions*, "", "RectTransformExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RectTransformExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class RectTransformExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.RectTransform SetLeft(UnityEngine.RectTransform rt, System.Single x)
    // Offset: 0x6C97E0
    static ::UnityEngine::RectTransform* SetLeft(::UnityEngine::RectTransform* rt, float x);
    // static public UnityEngine.RectTransform SetRight(UnityEngine.RectTransform rt, System.Single x)
    // Offset: 0x6C9850
    static ::UnityEngine::RectTransform* SetRight(::UnityEngine::RectTransform* rt, float x);
    // static public System.Single GetRight(UnityEngine.RectTransform rt)
    // Offset: 0x6C9740
    static float GetRight(::UnityEngine::RectTransform* rt);
    // static public UnityEngine.RectTransform SetBottom(UnityEngine.RectTransform rt, System.Single y)
    // Offset: 0x6C9770
    static ::UnityEngine::RectTransform* SetBottom(::UnityEngine::RectTransform* rt, float y);
    // static public UnityEngine.RectTransform SetTop(UnityEngine.RectTransform rt, System.Single y)
    // Offset: 0x6C98C0
    static ::UnityEngine::RectTransform* SetTop(::UnityEngine::RectTransform* rt, float y);
  }; // RectTransformExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RectTransformExtensions::SetLeft
// Il2CppName: SetLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (*)(::UnityEngine::RectTransform*, float)>(&GlobalNamespace::RectTransformExtensions::SetLeft)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectTransformExtensions*), "SetLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt, x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectTransformExtensions::SetRight
// Il2CppName: SetRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (*)(::UnityEngine::RectTransform*, float)>(&GlobalNamespace::RectTransformExtensions::SetRight)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectTransformExtensions*), "SetRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt, x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectTransformExtensions::GetRight
// Il2CppName: GetRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::RectTransform*)>(&GlobalNamespace::RectTransformExtensions::GetRight)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectTransformExtensions*), "GetRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectTransformExtensions::SetBottom
// Il2CppName: SetBottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (*)(::UnityEngine::RectTransform*, float)>(&GlobalNamespace::RectTransformExtensions::SetBottom)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectTransformExtensions*), "SetBottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt, y});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RectTransformExtensions::SetTop
// Il2CppName: SetTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (*)(::UnityEngine::RectTransform*, float)>(&GlobalNamespace::RectTransformExtensions::SetTop)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RectTransformExtensions*), "SetTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt, y});
  }
};
