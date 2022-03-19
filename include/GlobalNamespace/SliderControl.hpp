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
  // Forward declaring type: CustomSliderLabels
  class CustomSliderLabels;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI::ProceduralImage
namespace UnityEngine::UI::ProceduralImage {
  // Forward declaring type: ProceduralImage
  class ProceduralImage;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderControl
  class SliderControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderControl*, "", "SliderControl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: SliderControl
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderControl : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SliderControl::SerializableIntEvent
    class SerializableIntEvent;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 min
    // Size: 0x4
    // Offset: 0x18
    int min;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 max
    // Size: 0x4
    // Offset: 0x1C
    int max;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 initialValue
    // Size: 0x4
    // Offset: 0x20
    int initialValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x24
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.GameObject progressMarkers
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* progressMarkers;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject markerPrefab
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* markerPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.UI.ProceduralImage.ProceduralImage[] markerImages
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::UI::ProceduralImage::ProceduralImage*> markerImages;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UI::ProceduralImage::ProceduralImage*>) == 0x8);
    // public UnityEngine.Color filledColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color filledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color unfilledColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color unfilledColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public TMPro.TextMeshProUGUI text
    // Size: 0x8
    // Offset: 0x60
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private CustomSliderLabels _customSliderLabels
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::CustomSliderLabels* customSliderLabels;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CustomSliderLabels*) == 0x8);
    // public SliderControl/SerializableIntEvent valueUpdated
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::SliderControl::SerializableIntEvent* valueUpdated;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderControl::SerializableIntEvent*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 min
    int& dyn_min();
    // Get instance field reference: public System.Int32 max
    int& dyn_max();
    // Get instance field reference: public System.Int32 initialValue
    int& dyn_initialValue();
    // Get instance field reference: private System.Int32 _value
    int& dyn__value();
    // Get instance field reference: public UnityEngine.GameObject progressMarkers
    ::UnityEngine::GameObject*& dyn_progressMarkers();
    // Get instance field reference: public UnityEngine.GameObject markerPrefab
    ::UnityEngine::GameObject*& dyn_markerPrefab();
    // Get instance field reference: public UnityEngine.UI.ProceduralImage.ProceduralImage[] markerImages
    ::ArrayW<::UnityEngine::UI::ProceduralImage::ProceduralImage*>& dyn_markerImages();
    // Get instance field reference: public UnityEngine.Color filledColor
    ::UnityEngine::Color& dyn_filledColor();
    // Get instance field reference: public UnityEngine.Color unfilledColor
    ::UnityEngine::Color& dyn_unfilledColor();
    // Get instance field reference: public TMPro.TextMeshProUGUI text
    ::TMPro::TextMeshProUGUI*& dyn_text();
    // Get instance field reference: private CustomSliderLabels _customSliderLabels
    ::GlobalNamespace::CustomSliderLabels*& dyn__customSliderLabels();
    // Get instance field reference: public SliderControl/SerializableIntEvent valueUpdated
    ::GlobalNamespace::SliderControl::SerializableIntEvent*& dyn_valueUpdated();
    // private System.Void Start()
    // Offset: 0x10C20FC
    void Start();
    // public System.Int32 GetValue()
    // Offset: 0x10C218C
    int GetValue();
    // public System.Void Increment()
    // Offset: 0x10C2194
    void Increment();
    // public System.Void Decrement()
    // Offset: 0x10C2214
    void Decrement();
    // public System.Void SetValue(System.Int32 value)
    // Offset: 0x10C2294
    void SetValue(int value);
    // private System.Void ReRenderSlider()
    // Offset: 0x10C2168
    void ReRenderSlider();
    // private System.Void UpdateText()
    // Offset: 0x10C2434
    void UpdateText();
    // private System.Void RecolorSliderMarkers()
    // Offset: 0x10C234C
    void RecolorSliderMarkers();
    // private System.Void OnValidate()
    // Offset: 0x10C2534
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x10C2538
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderControl*, creationType>()));
    }
  }; // SliderControl
  #pragma pack(pop)
  static check_size<sizeof(SliderControl), 112 + sizeof(::GlobalNamespace::SliderControl::SerializableIntEvent*)> __GlobalNamespace_SliderControlSizeCheck;
  static_assert(sizeof(SliderControl) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::GetValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::Increment
// Il2CppName: Increment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::Increment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "Increment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::Decrement
// Il2CppName: Decrement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::Decrement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "Decrement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)(int)>(&GlobalNamespace::SliderControl::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::ReRenderSlider
// Il2CppName: ReRenderSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::ReRenderSlider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "ReRenderSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::UpdateText
// Il2CppName: UpdateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::UpdateText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "UpdateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::RecolorSliderMarkers
// Il2CppName: RecolorSliderMarkers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::RecolorSliderMarkers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "RecolorSliderMarkers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControl::*)()>(&GlobalNamespace::SliderControl::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderControl*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
