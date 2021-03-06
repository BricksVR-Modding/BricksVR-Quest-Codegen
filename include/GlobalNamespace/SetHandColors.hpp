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
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetHandColors
  class SetHandColors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetHandColors);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetHandColors*, "", "SetHandColors");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: SetHandColors
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SetHandColors : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Color color1
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color color2
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color color2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 ColorProp
    static int _get_ColorProp();
    // Set static field: static private readonly System.Int32 ColorProp
    static void _set_ColorProp(int value);
    // Get instance field reference: private UnityEngine.Color color1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color1();
    // Get instance field reference: private UnityEngine.Color color2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color2();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetHandColors* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetHandColors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetHandColors*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x6CE170
    static void _cctor();
    // private System.Void Awake()
    // Offset: 0x6CE010
    void Awake();
    // public System.Void SetPrimaryColor(UnityEngine.Color newColor)
    // Offset: 0x6CE020
    void SetPrimaryColor(::UnityEngine::Color newColor);
    // public System.Void SetSecondaryColor(UnityEngine.Color newColor)
    // Offset: 0x6CE160
    void SetSecondaryColor(::UnityEngine::Color newColor);
    // private System.Void SetPropertyBlocksOnRenderer()
    // Offset: 0x6CE030
    void SetPropertyBlocksOnRenderer();
  }; // SetHandColors
  #pragma pack(pop)
  static check_size<sizeof(SetHandColors), 40 + sizeof(::UnityEngine::Color)> __GlobalNamespace_SetHandColorsSizeCheck;
  static_assert(sizeof(SetHandColors) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetHandColors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SetHandColors::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SetHandColors::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetHandColors*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetHandColors::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetHandColors::*)()>(&GlobalNamespace::SetHandColors::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetHandColors*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetHandColors::SetPrimaryColor
// Il2CppName: SetPrimaryColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetHandColors::*)(::UnityEngine::Color)>(&GlobalNamespace::SetHandColors::SetPrimaryColor)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetHandColors*), "SetPrimaryColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetHandColors::SetSecondaryColor
// Il2CppName: SetSecondaryColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetHandColors::*)(::UnityEngine::Color)>(&GlobalNamespace::SetHandColors::SetSecondaryColor)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetHandColors*), "SetSecondaryColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetHandColors::SetPropertyBlocksOnRenderer
// Il2CppName: SetPropertyBlocksOnRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetHandColors::*)()>(&GlobalNamespace::SetHandColors::SetPropertyBlocksOnRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetHandColors*), "SetPropertyBlocksOnRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
