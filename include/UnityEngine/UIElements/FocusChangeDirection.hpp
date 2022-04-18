// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FocusChangeDirection
  class FocusChangeDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::FocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusChangeDirection*, "UnityEngine.UIElements", "FocusChangeDirection");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.FocusChangeDirection
  // [TokenAttribute] Offset: FFFFFFFF
  class FocusChangeDirection : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Int32 m_Value
    // Size: 0x4
    // Offset: 0x10
    int m_Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Value;
    }
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private readonly UnityEngine.UIElements.FocusChangeDirection <unspecified>k__BackingField
    static ::UnityEngine::UIElements::FocusChangeDirection* _get_$unspecified$k__BackingField();
    // Set static field: static private readonly UnityEngine.UIElements.FocusChangeDirection <unspecified>k__BackingField
    static void _set_$unspecified$k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private readonly UnityEngine.UIElements.FocusChangeDirection <none>k__BackingField
    static ::UnityEngine::UIElements::FocusChangeDirection* _get_$none$k__BackingField();
    // Set static field: static private readonly UnityEngine.UIElements.FocusChangeDirection <none>k__BackingField
    static void _set_$none$k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private readonly UnityEngine.UIElements.FocusChangeDirection <lastValue>k__BackingField
    static ::UnityEngine::UIElements::FocusChangeDirection* _get_$lastValue$k__BackingField();
    // Set static field: static private readonly UnityEngine.UIElements.FocusChangeDirection <lastValue>k__BackingField
    static void _set_$lastValue$k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);
    // Get instance field reference: private readonly System.Int32 m_Value
    [[deprecated("Use field access instead!")]] int& dyn_m_Value();
    // static public UnityEngine.UIElements.FocusChangeDirection get_unspecified()
    // Offset: 0x2A19C0
    static ::UnityEngine::UIElements::FocusChangeDirection* get_unspecified();
    // static public UnityEngine.UIElements.FocusChangeDirection get_none()
    // Offset: 0x2A1900
    static ::UnityEngine::UIElements::FocusChangeDirection* get_none();
    // static protected UnityEngine.UIElements.FocusChangeDirection get_lastValue()
    // Offset: 0x2A18A0
    static ::UnityEngine::UIElements::FocusChangeDirection* get_lastValue();
    // protected System.Void .ctor(System.Int32 value)
    // Offset: 0x206110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FocusChangeDirection* New_ctor(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::FocusChangeDirection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FocusChangeDirection*, creationType>(value)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2A17A0
    static void _cctor();
  }; // UnityEngine.UIElements.FocusChangeDirection
  #pragma pack(pop)
  static check_size<sizeof(FocusChangeDirection), 16 + sizeof(int)> __UnityEngine_UIElements_FocusChangeDirectionSizeCheck;
  static_assert(sizeof(FocusChangeDirection) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusChangeDirection::get_unspecified
// Il2CppName: get_unspecified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&UnityEngine::UIElements::FocusChangeDirection::get_unspecified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusChangeDirection*), "get_unspecified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusChangeDirection::get_none
// Il2CppName: get_none
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&UnityEngine::UIElements::FocusChangeDirection::get_none)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusChangeDirection*), "get_none", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusChangeDirection::get_lastValue
// Il2CppName: get_lastValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&UnityEngine::UIElements::FocusChangeDirection::get_lastValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusChangeDirection*), "get_lastValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusChangeDirection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::FocusChangeDirection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::FocusChangeDirection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::FocusChangeDirection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};