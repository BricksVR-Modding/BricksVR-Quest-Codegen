// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedColorPicker.ColorPicker
#include "AdvancedColorPicker/ColorPicker.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorPicker::ColorChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorPicker::ColorChangedEvent*, "AdvancedColorPicker", "ColorPicker/ColorChangedEvent");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // WARNING Size may be invalid!
  // Autogenerated type: AdvancedColorPicker.ColorPicker/AdvancedColorPicker.ColorChangedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorPicker::ColorChangedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color> {
    public:
    // public System.Void .ctor()
    // Offset: 0x5A81F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorPicker::ColorChangedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorPicker::ColorChangedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorPicker::ColorChangedEvent*, creationType>()));
    }
  }; // AdvancedColorPicker.ColorPicker/AdvancedColorPicker.ColorChangedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorPicker::ColorChangedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
