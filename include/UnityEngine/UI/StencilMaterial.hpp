// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: StencilOp
  struct StencilOp;
  // Forward declaring type: CompareFunction
  struct CompareFunction;
  // Forward declaring type: ColorWriteMask
  struct ColorWriteMask;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: StencilMaterial
  class StencilMaterial;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::StencilMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::StencilMaterial*, "UnityEngine.UI", "StencilMaterial");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.StencilMaterial
  // [TokenAttribute] Offset: FFFFFFFF
  class StencilMaterial : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UI::StencilMaterial::MatEntry
    class MatEntry;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/UnityEngine.UI.MatEntry> m_List
    static ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial::MatEntry*>* _get_m_List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/UnityEngine.UI.MatEntry> m_List
    static void _set_m_List(::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial::MatEntry*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10183A4
    static void _cctor();
    // static public UnityEngine.Material Add(UnityEngine.Material baseMat, System.Int32 stencilID)
    // Offset: 0x10177FC
    static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, int stencilID);
    // static public UnityEngine.Material Add(UnityEngine.Material baseMat, System.Int32 stencilID, UnityEngine.Rendering.StencilOp operation, UnityEngine.Rendering.CompareFunction compareFunction, UnityEngine.Rendering.ColorWriteMask colorWriteMask)
    // Offset: 0x1017804
    static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, int stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask);
    // static public UnityEngine.Material Add(UnityEngine.Material baseMat, System.Int32 stencilID, UnityEngine.Rendering.StencilOp operation, UnityEngine.Rendering.CompareFunction compareFunction, UnityEngine.Rendering.ColorWriteMask colorWriteMask, System.Int32 readMask, System.Int32 writeMask)
    // Offset: 0x10178A0
    static ::UnityEngine::Material* Add(::UnityEngine::Material* baseMat, int stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask, int readMask, int writeMask);
    // static public System.Void Remove(UnityEngine.Material customMat)
    // Offset: 0x10180D4
    static void Remove(::UnityEngine::Material* customMat);
    // static public System.Void ClearAll()
    // Offset: 0x101828C
    static void ClearAll();
  }; // UnityEngine.UI.StencilMaterial
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::StencilMaterial::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::StencilMaterial*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int)>(&UnityEngine::UI::StencilMaterial::Add)> {
  static const MethodInfo* get() {
    static auto* baseMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::StencilMaterial*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMat, stencilID});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask)>(&UnityEngine::UI::StencilMaterial::Add)> {
  static const MethodInfo* get() {
    static auto* baseMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* operation = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "StencilOp")->byval_arg;
    static auto* compareFunction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CompareFunction")->byval_arg;
    static auto* colorWriteMask = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ColorWriteMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::StencilMaterial*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMat, stencilID, operation, compareFunction, colorWriteMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, int, int)>(&UnityEngine::UI::StencilMaterial::Add)> {
  static const MethodInfo* get() {
    static auto* baseMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* operation = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "StencilOp")->byval_arg;
    static auto* compareFunction = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CompareFunction")->byval_arg;
    static auto* colorWriteMask = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ColorWriteMask")->byval_arg;
    static auto* readMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* writeMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::StencilMaterial*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&UnityEngine::UI::StencilMaterial::Remove)> {
  static const MethodInfo* get() {
    static auto* customMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::StencilMaterial*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{customMat});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::StencilMaterial::ClearAll
// Il2CppName: ClearAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::StencilMaterial::ClearAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::StencilMaterial*), "ClearAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
