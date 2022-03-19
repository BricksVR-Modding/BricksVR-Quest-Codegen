// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ChangeCategoryColors
  class ChangeCategoryColors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ChangeCategoryColors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChangeCategoryColors*, "", "ChangeCategoryColors");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ChangeCategoryColors
  // [TokenAttribute] Offset: FFFFFFFF
  class ChangeCategoryColors : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Image[] categoryImages
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::UI::Image*> categoryImages;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UI::Image*>) == 0x8);
    // public UnityEngine.Color defaultEditorColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color defaultEditorColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.Image[] categoryImages
    ::ArrayW<::UnityEngine::UI::Image*>& dyn_categoryImages();
    // Get instance field reference: public UnityEngine.Color defaultEditorColor
    ::UnityEngine::Color& dyn_defaultEditorColor();
    // public System.Void UpdateColor(UnityEngine.Color c)
    // Offset: 0x109E6A0
    void UpdateColor(::UnityEngine::Color c);
    // private System.Void OnValidate()
    // Offset: 0x109E744
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x109ED28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChangeCategoryColors* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ChangeCategoryColors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChangeCategoryColors*, creationType>()));
    }
  }; // ChangeCategoryColors
  #pragma pack(pop)
  static check_size<sizeof(ChangeCategoryColors), 32 + sizeof(::UnityEngine::Color)> __GlobalNamespace_ChangeCategoryColorsSizeCheck;
  static_assert(sizeof(ChangeCategoryColors) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ChangeCategoryColors::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChangeCategoryColors::*)(::UnityEngine::Color)>(&GlobalNamespace::ChangeCategoryColors::UpdateColor)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChangeCategoryColors*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChangeCategoryColors::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ChangeCategoryColors::*)()>(&GlobalNamespace::ChangeCategoryColors::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ChangeCategoryColors*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ChangeCategoryColors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
