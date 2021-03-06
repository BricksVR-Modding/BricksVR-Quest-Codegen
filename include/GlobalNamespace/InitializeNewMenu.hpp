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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InitializeNewMenu
  class InitializeNewMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InitializeNewMenu);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitializeNewMenu*, "", "InitializeNewMenu");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: InitializeNewMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializeNewMenu : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject mainMenu
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* mainMenu;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject optionsMenu
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* optionsMenu;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject mainMenu
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_mainMenu();
    // Get instance field reference: public UnityEngine.GameObject optionsMenu
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_optionsMenu();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializeNewMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::InitializeNewMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializeNewMenu*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6BACC0
    void Start();
  }; // InitializeNewMenu
  #pragma pack(pop)
  static check_size<sizeof(InitializeNewMenu), 32 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_InitializeNewMenuSizeCheck;
  static_assert(sizeof(InitializeNewMenu) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InitializeNewMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::InitializeNewMenu::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InitializeNewMenu::*)()>(&GlobalNamespace::InitializeNewMenu::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InitializeNewMenu*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
