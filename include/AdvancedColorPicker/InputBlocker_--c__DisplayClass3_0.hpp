// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdvancedColorPicker.InputBlocker
#include "AdvancedColorPicker/InputBlocker.hpp"
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
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0*, "AdvancedColorPicker", "InputBlocker/<>c__DisplayClass3_0");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.InputBlocker/AdvancedColorPicker.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputBlocker::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject blocker
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* blocker;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Events.UnityAction onClosed
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Events::UnityAction* onClosed;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject blocker
    [[deprecated]] ::UnityEngine::GameObject*& dyn_blocker();
    // Get instance field reference: public UnityEngine.Events.UnityAction onClosed
    [[deprecated]] ::UnityEngine::Events::UnityAction*& dyn_onClosed();
    // System.Void <CreateBlocker>b__0()
    // Offset: 0x5BD280
    void $CreateBlocker$b__0();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputBlocker::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputBlocker::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // AdvancedColorPicker.InputBlocker/AdvancedColorPicker.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(InputBlocker::$$c__DisplayClass3_0), 24 + sizeof(::UnityEngine::Events::UnityAction*)> __AdvancedColorPicker_InputBlocker_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(InputBlocker::$$c__DisplayClass3_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0::$CreateBlocker$b__0
// Il2CppName: <CreateBlocker>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0::*)()>(&AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0::$CreateBlocker$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0*), "<CreateBlocker>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::InputBlocker::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
