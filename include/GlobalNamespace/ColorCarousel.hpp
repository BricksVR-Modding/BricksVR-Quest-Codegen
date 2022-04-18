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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::UI::ProceduralImage
namespace UnityEngine::UI::ProceduralImage {
  // Forward declaring type: ProceduralImage
  class ProceduralImage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorCarousel
  class ColorCarousel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorCarousel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorCarousel*, "", "ColorCarousel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ColorCarousel
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorCarousel : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ColorCarousel::SerializableIntEvent
    class SerializableIntEvent;
    public:
    // public UnityEngine.UI.ProceduralImage.ProceduralImage colorImage
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::ProceduralImage::ProceduralImage* colorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::ProceduralImage::ProceduralImage*) == 0x8);
    // public UnityEngine.Color[] colors
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Color> colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Int32[] colorInts
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> colorInts;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Boolean colorIntsInitialized
    // Size: 0x1
    // Offset: 0x30
    bool colorIntsInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: colorIntsInitialized and: editorColorIndex
    char __padding3[0x3] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xF8CE0
    // public System.Int32 editorColorIndex
    // Size: 0x4
    // Offset: 0x34
    int editorColorIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _currentColorIndex
    // Size: 0x4
    // Offset: 0x38
    int currentColorIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentColorIndex and: ColorUpdated
    char __padding5[0x4] = {};
    // public ColorCarousel/SerializableIntEvent ColorUpdated
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ColorCarousel::SerializableIntEvent* ColorUpdated;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorCarousel::SerializableIntEvent*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.ProceduralImage.ProceduralImage colorImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::ProceduralImage::ProceduralImage*& dyn_colorImage();
    // Get instance field reference: public UnityEngine.Color[] colors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn_colors();
    // Get instance field reference: private System.Int32[] colorInts
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_colorInts();
    // Get instance field reference: private System.Boolean colorIntsInitialized
    [[deprecated("Use field access instead!")]] bool& dyn_colorIntsInitialized();
    // Get instance field reference: public System.Int32 editorColorIndex
    [[deprecated("Use field access instead!")]] int& dyn_editorColorIndex();
    // Get instance field reference: private System.Int32 _currentColorIndex
    [[deprecated("Use field access instead!")]] int& dyn__currentColorIndex();
    // Get instance field reference: public ColorCarousel/SerializableIntEvent ColorUpdated
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorCarousel::SerializableIntEvent*& dyn_ColorUpdated();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorCarousel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorCarousel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorCarousel*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x6B15A0
    void Awake();
    // private System.Void InitializeColorInts()
    // Offset: 0x6B15B0
    void InitializeColorInts();
    // public System.Void NextColor()
    // Offset: 0x6B1710
    void NextColor();
    // public System.Void PreviousColor()
    // Offset: 0x6B1890
    void PreviousColor();
    // public System.Void SelectColor(System.Int32 colorInt)
    // Offset: 0x6B1990
    void SelectColor(int colorInt);
    // private System.Void SendColorUpdatedEvent()
    // Offset: 0x6B1A50
    void SendColorUpdatedEvent();
    // private System.Void ReRenderColor()
    // Offset: 0x6B1920
    void ReRenderColor();
    // private System.Void OnValidate()
    // Offset: 0x6B17A0
    void OnValidate();
  }; // ColorCarousel
  #pragma pack(pop)
  static check_size<sizeof(ColorCarousel), 64 + sizeof(::GlobalNamespace::ColorCarousel::SerializableIntEvent*)> __GlobalNamespace_ColorCarouselSizeCheck;
  static_assert(sizeof(ColorCarousel) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::InitializeColorInts
// Il2CppName: InitializeColorInts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::InitializeColorInts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "InitializeColorInts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::NextColor
// Il2CppName: NextColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::NextColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "NextColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::PreviousColor
// Il2CppName: PreviousColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::PreviousColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "PreviousColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::SelectColor
// Il2CppName: SelectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)(int)>(&GlobalNamespace::ColorCarousel::SelectColor)> {
  static const MethodInfo* get() {
    static auto* colorInt = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "SelectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorInt});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::SendColorUpdatedEvent
// Il2CppName: SendColorUpdatedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::SendColorUpdatedEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "SendColorUpdatedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::ReRenderColor
// Il2CppName: ReRenderColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::ReRenderColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "ReRenderColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorCarousel::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorCarousel::*)()>(&GlobalNamespace::ColorCarousel::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorCarousel*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
