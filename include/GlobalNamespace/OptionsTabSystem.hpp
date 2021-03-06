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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OptionsTabSystem
  class OptionsTabSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OptionsTabSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OptionsTabSystem*, "", "OptionsTabSystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OptionsTabSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class OptionsTabSystem : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OptionsTabSystem::Tab
    class Tab;
    public:
    // public OptionsTabSystem/Tab[] tabs
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::OptionsTabSystem::Tab*> tabs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OptionsTabSystem::Tab*>) == 0x8);
    // public System.Int32 defaultTab
    // Size: 0x4
    // Offset: 0x20
    int defaultTab;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _selectedTab
    // Size: 0x4
    // Offset: 0x24
    int selectedTab;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OptionsTabSystem/Tab[] tabs
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OptionsTabSystem::Tab*>& dyn_tabs();
    // Get instance field reference: public System.Int32 defaultTab
    [[deprecated("Use field access instead!")]] int& dyn_defaultTab();
    // Get instance field reference: private System.Int32 _selectedTab
    [[deprecated("Use field access instead!")]] int& dyn__selectedTab();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionsTabSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OptionsTabSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionsTabSystem*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x7D3470
    void Start();
    // public System.Void SelectTab(System.Int32 index)
    // Offset: 0x7D3390
    void SelectTab(int index);
    // private System.Void DisableTab(System.Int32 index)
    // Offset: 0x7D32B0
    void DisableTab(int index);
    // private System.Void EnableTab(System.Int32 index)
    // Offset: 0x7D3320
    void EnableTab(int index);
  }; // OptionsTabSystem
  #pragma pack(pop)
  static check_size<sizeof(OptionsTabSystem), 36 + sizeof(int)> __GlobalNamespace_OptionsTabSystemSizeCheck;
  static_assert(sizeof(OptionsTabSystem) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OptionsTabSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OptionsTabSystem::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsTabSystem::*)()>(&GlobalNamespace::OptionsTabSystem::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsTabSystem*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsTabSystem::SelectTab
// Il2CppName: SelectTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsTabSystem::*)(int)>(&GlobalNamespace::OptionsTabSystem::SelectTab)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsTabSystem*), "SelectTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsTabSystem::DisableTab
// Il2CppName: DisableTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsTabSystem::*)(int)>(&GlobalNamespace::OptionsTabSystem::DisableTab)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsTabSystem*), "DisableTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsTabSystem::EnableTab
// Il2CppName: EnableTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsTabSystem::*)(int)>(&GlobalNamespace::OptionsTabSystem::EnableTab)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsTabSystem*), "EnableTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
