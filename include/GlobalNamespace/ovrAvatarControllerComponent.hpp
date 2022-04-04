// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarHandInputState
#include "GlobalNamespace/ovrAvatarHandInputState.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarControllerComponent
  struct ovrAvatarControllerComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarControllerComponent, "", "ovrAvatarControllerComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarControllerComponent
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarControllerComponent/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarHandInputState inputState
    // Size: 0x41
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarHandInputState inputState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarHandInputState) == 0x41);
    // Padding between fields: inputState and: renderComponent
    char __padding0[0x7] = {};
    // public System.IntPtr renderComponent
    // Size: 0x8
    // Offset: 0x48
    ::System::IntPtr renderComponent;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarControllerComponent
    constexpr ovrAvatarControllerComponent(::GlobalNamespace::ovrAvatarHandInputState inputState_ = {}, ::System::IntPtr renderComponent_ = {}) noexcept : inputState{inputState_}, renderComponent{renderComponent_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarHandInputState inputState
    [[deprecated]] ::GlobalNamespace::ovrAvatarHandInputState& dyn_inputState();
    // Get instance field reference: public System.IntPtr renderComponent
    [[deprecated]] ::System::IntPtr& dyn_renderComponent();
  }; // ovrAvatarControllerComponent
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarControllerComponent), 72 + sizeof(::System::IntPtr)> __GlobalNamespace_ovrAvatarControllerComponentSizeCheck;
  static_assert(sizeof(ovrAvatarControllerComponent) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
