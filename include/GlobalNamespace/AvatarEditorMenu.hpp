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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorCarousel
  class ColorCarousel;
  // Forward declaring type: RangeSelector
  class RangeSelector;
  // Forward declaring type: MenuAvatarManager
  class MenuAvatarManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarEditorMenu
  class AvatarEditorMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarEditorMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarEditorMenu*, "", "AvatarEditorMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AvatarEditorMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarEditorMenu : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public ColorCarousel primaryColorCarousel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorCarousel* primaryColorCarousel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorCarousel*) == 0x8);
    // public ColorCarousel secondaryColorCarousel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ColorCarousel* secondaryColorCarousel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorCarousel*) == 0x8);
    // public RangeSelector eyesSelector
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::RangeSelector* eyesSelector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RangeSelector*) == 0x8);
    // public RangeSelector mouthSelector
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::RangeSelector* mouthSelector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RangeSelector*) == 0x8);
    // public MenuAvatarManager menuAvatarManager
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MenuAvatarManager* menuAvatarManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuAvatarManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public ColorCarousel primaryColorCarousel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorCarousel*& dyn_primaryColorCarousel();
    // Get instance field reference: public ColorCarousel secondaryColorCarousel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorCarousel*& dyn_secondaryColorCarousel();
    // Get instance field reference: public RangeSelector eyesSelector
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RangeSelector*& dyn_eyesSelector();
    // Get instance field reference: public RangeSelector mouthSelector
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RangeSelector*& dyn_mouthSelector();
    // Get instance field reference: public MenuAvatarManager menuAvatarManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuAvatarManager*& dyn_menuAvatarManager();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarEditorMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarEditorMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarEditorMenu*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6DE6F0
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x6DE6C0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x6DE640
    void OnDisable();
  }; // AvatarEditorMenu
  #pragma pack(pop)
  static check_size<sizeof(AvatarEditorMenu), 56 + sizeof(::GlobalNamespace::MenuAvatarManager*)> __GlobalNamespace_AvatarEditorMenuSizeCheck;
  static_assert(sizeof(AvatarEditorMenu) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditorMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditorMenu::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditorMenu::*)()>(&GlobalNamespace::AvatarEditorMenu::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditorMenu*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditorMenu::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditorMenu::*)()>(&GlobalNamespace::AvatarEditorMenu::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditorMenu*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarEditorMenu::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarEditorMenu::*)()>(&GlobalNamespace::AvatarEditorMenu::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarEditorMenu*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
