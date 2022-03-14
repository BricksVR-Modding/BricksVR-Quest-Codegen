// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LineRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6D78E4
  // [NativeHeaderAttribute] Offset: 6D78E4
  class LineRenderer : public ::UnityEngine::Renderer {
    public:
    // public System.Void set_startWidth(System.Single value)
    // Offset: 0xCA64F0
    void set_startWidth(float value);
    // public System.Void set_endWidth(System.Single value)
    // Offset: 0xCA6540
    void set_endWidth(float value);
    // public System.Void set_widthMultiplier(System.Single value)
    // Offset: 0xCA6590
    void set_widthMultiplier(float value);
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0xCA65E0
    void set_useWorldSpace(bool value);
    // public System.Void set_positionCount(System.Int32 value)
    // Offset: 0xCA6630
    void set_positionCount(int value);
    // public System.Void set_widthCurve(UnityEngine.AnimationCurve value)
    // Offset: 0xCA6740
    void set_widthCurve(::UnityEngine::AnimationCurve* value);
    // public UnityEngine.Gradient get_colorGradient()
    // Offset: 0xCA67E0
    ::UnityEngine::Gradient* get_colorGradient();
    // public System.Void set_colorGradient(UnityEngine.Gradient value)
    // Offset: 0xCA6860
    void set_colorGradient(::UnityEngine::Gradient* value);
    // public System.Void SetPosition(System.Int32 index, UnityEngine.Vector3 position)
    // Offset: 0xCA6680
    void SetPosition(int index, ::UnityEngine::Vector3 position);
    // private System.Void SetWidthCurve(UnityEngine.AnimationCurve curve)
    // Offset: 0xCA6790
    void SetWidthCurve(::UnityEngine::AnimationCurve* curve);
    // private UnityEngine.Gradient GetColorGradientCopy()
    // Offset: 0xCA6820
    ::UnityEngine::Gradient* GetColorGradientCopy();
    // private System.Void SetColorGradient(UnityEngine.Gradient curve)
    // Offset: 0xCA68B0
    void SetColorGradient(::UnityEngine::Gradient* curve);
    // public System.Void SetPositions(UnityEngine.Vector3[] positions)
    // Offset: 0xCA6900
    void SetPositions(::ArrayW<::UnityEngine::Vector3> positions);
    // private System.Void SetPosition_Injected(System.Int32 index, ref UnityEngine.Vector3 position)
    // Offset: 0xCA66E8
    void SetPosition_Injected(int index, ByRef<::UnityEngine::Vector3> position);
  }; // UnityEngine.LineRenderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_startWidth
// Il2CppName: set_startWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_startWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_startWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_endWidth
// Il2CppName: set_endWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_endWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_endWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_widthMultiplier
// Il2CppName: set_widthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(float)>(&UnityEngine::LineRenderer::set_widthMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_widthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_useWorldSpace
// Il2CppName: set_useWorldSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(bool)>(&UnityEngine::LineRenderer::set_useWorldSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_useWorldSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_positionCount
// Il2CppName: set_positionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int)>(&UnityEngine::LineRenderer::set_positionCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_positionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_widthCurve
// Il2CppName: set_widthCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::AnimationCurve*)>(&UnityEngine::LineRenderer::set_widthCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_widthCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::get_colorGradient
// Il2CppName: get_colorGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (UnityEngine::LineRenderer::*)()>(&UnityEngine::LineRenderer::get_colorGradient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "get_colorGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::set_colorGradient
// Il2CppName: set_colorGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::Gradient*)>(&UnityEngine::LineRenderer::set_colorGradient)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "set_colorGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int, ::UnityEngine::Vector3)>(&UnityEngine::LineRenderer::SetPosition)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, position});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetWidthCurve
// Il2CppName: SetWidthCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::AnimationCurve*)>(&UnityEngine::LineRenderer::SetWidthCurve)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetWidthCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::GetColorGradientCopy
// Il2CppName: GetColorGradientCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (UnityEngine::LineRenderer::*)()>(&UnityEngine::LineRenderer::GetColorGradientCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "GetColorGradientCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetColorGradient
// Il2CppName: SetColorGradient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::UnityEngine::Gradient*)>(&UnityEngine::LineRenderer::SetColorGradient)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetColorGradient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPositions
// Il2CppName: SetPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(::ArrayW<::UnityEngine::Vector3>)>(&UnityEngine::LineRenderer::SetPositions)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions});
  }
};
// Writing MetadataGetter for method: UnityEngine::LineRenderer::SetPosition_Injected
// Il2CppName: SetPosition_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LineRenderer::*)(int, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::LineRenderer::SetPosition_Injected)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LineRenderer*), "SetPosition_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, position});
  }
};
