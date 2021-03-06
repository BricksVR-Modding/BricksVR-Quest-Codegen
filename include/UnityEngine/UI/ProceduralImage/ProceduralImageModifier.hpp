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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine.UI.ProceduralImage
namespace UnityEngine::UI::ProceduralImage {
  // Forward declaring type: ProceduralImageModifier
  class ProceduralImageModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::ProceduralImage::ProceduralImageModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ProceduralImage::ProceduralImageModifier*, "UnityEngine.UI.ProceduralImage", "ProceduralImageModifier");
// Type namespace: UnityEngine.UI.ProceduralImage
namespace UnityEngine::UI::ProceduralImage {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ProceduralImage.ProceduralImageModifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class ProceduralImageModifier : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // protected UnityEngine.UI.Graphic graphic
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Graphic* graphic;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected UnityEngine.UI.Graphic graphic
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Graphic*& dyn_graphic();
    // protected UnityEngine.UI.Graphic get__Graphic()
    // Offset: 0x920C80
    ::UnityEngine::UI::Graphic* get__Graphic();
    // protected System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProceduralImageModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::ProceduralImage::ProceduralImageModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProceduralImageModifier*, creationType>()));
    }
    // public UnityEngine.Vector4 CalculateRadius(UnityEngine.Rect imageRect)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector4 CalculateRadius(::UnityEngine::Rect imageRect);
  }; // UnityEngine.UI.ProceduralImage.ProceduralImageModifier
  #pragma pack(pop)
  static check_size<sizeof(ProceduralImageModifier), 24 + sizeof(::UnityEngine::UI::Graphic*)> __UnityEngine_UI_ProceduralImage_ProceduralImageModifierSizeCheck;
  static_assert(sizeof(ProceduralImageModifier) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ProceduralImage::ProceduralImageModifier::get__Graphic
// Il2CppName: get__Graphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic* (UnityEngine::UI::ProceduralImage::ProceduralImageModifier::*)()>(&UnityEngine::UI::ProceduralImage::ProceduralImageModifier::get__Graphic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ProceduralImage::ProceduralImageModifier*), "get__Graphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ProceduralImage::ProceduralImageModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ProceduralImage::ProceduralImageModifier::CalculateRadius
// Il2CppName: CalculateRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::UI::ProceduralImage::ProceduralImageModifier::*)(::UnityEngine::Rect)>(&UnityEngine::UI::ProceduralImage::ProceduralImageModifier::CalculateRadius)> {
  static const MethodInfo* get() {
    static auto* imageRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ProceduralImage::ProceduralImageModifier*), "CalculateRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imageRect});
  }
};
