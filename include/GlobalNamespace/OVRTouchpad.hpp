// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRTouchpadHelper
  class OVRTouchpadHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRTouchpad
  class OVRTouchpad;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRTouchpad);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTouchpad*, "", "OVRTouchpad");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRTouchpad
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRTouchpad : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRTouchpad::TouchEvent
    struct TouchEvent;
    // Nested type: ::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1<TouchEvent>
    template<typename TouchEvent>
    class OVRTouchpadCallback_1;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRTouchpad/TouchEvent
    // [TokenAttribute] Offset: FFFFFFFF
    struct TouchEvent/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TouchEvent
      constexpr TouchEvent(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRTouchpad/TouchEvent SingleTap
      static constexpr const int SingleTap = 0;
      // Get static field: static public OVRTouchpad/TouchEvent SingleTap
      static ::GlobalNamespace::OVRTouchpad::TouchEvent _get_SingleTap();
      // Set static field: static public OVRTouchpad/TouchEvent SingleTap
      static void _set_SingleTap(::GlobalNamespace::OVRTouchpad::TouchEvent value);
      // static field const value: static public OVRTouchpad/TouchEvent DoubleTap
      static constexpr const int DoubleTap = 1;
      // Get static field: static public OVRTouchpad/TouchEvent DoubleTap
      static ::GlobalNamespace::OVRTouchpad::TouchEvent _get_DoubleTap();
      // Set static field: static public OVRTouchpad/TouchEvent DoubleTap
      static void _set_DoubleTap(::GlobalNamespace::OVRTouchpad::TouchEvent value);
      // static field const value: static public OVRTouchpad/TouchEvent Left
      static constexpr const int Left = 2;
      // Get static field: static public OVRTouchpad/TouchEvent Left
      static ::GlobalNamespace::OVRTouchpad::TouchEvent _get_Left();
      // Set static field: static public OVRTouchpad/TouchEvent Left
      static void _set_Left(::GlobalNamespace::OVRTouchpad::TouchEvent value);
      // static field const value: static public OVRTouchpad/TouchEvent Right
      static constexpr const int Right = 3;
      // Get static field: static public OVRTouchpad/TouchEvent Right
      static ::GlobalNamespace::OVRTouchpad::TouchEvent _get_Right();
      // Set static field: static public OVRTouchpad/TouchEvent Right
      static void _set_Right(::GlobalNamespace::OVRTouchpad::TouchEvent value);
      // static field const value: static public OVRTouchpad/TouchEvent Up
      static constexpr const int Up = 4;
      // Get static field: static public OVRTouchpad/TouchEvent Up
      static ::GlobalNamespace::OVRTouchpad::TouchEvent _get_Up();
      // Set static field: static public OVRTouchpad/TouchEvent Up
      static void _set_Up(::GlobalNamespace::OVRTouchpad::TouchEvent value);
      // static field const value: static public OVRTouchpad/TouchEvent Down
      static constexpr const int Down = 5;
      // Get static field: static public OVRTouchpad/TouchEvent Down
      static ::GlobalNamespace::OVRTouchpad::TouchEvent _get_Down();
      // Set static field: static public OVRTouchpad/TouchEvent Down
      static void _set_Down(::GlobalNamespace::OVRTouchpad::TouchEvent value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRTouchpad/TouchEvent
    #pragma pack(pop)
    static check_size<sizeof(OVRTouchpad::TouchEvent), 0 + sizeof(int)> __GlobalNamespace_OVRTouchpad_TouchEventSizeCheck;
    static_assert(sizeof(OVRTouchpad::TouchEvent) == 0x4);
    // Get static field: static private UnityEngine.Vector3 moveAmountMouse
    static ::UnityEngine::Vector3 _get_moveAmountMouse();
    // Set static field: static private UnityEngine.Vector3 moveAmountMouse
    static void _set_moveAmountMouse(::UnityEngine::Vector3 value);
    // Get static field: static private System.Single minMovMagnitudeMouse
    static float _get_minMovMagnitudeMouse();
    // Set static field: static private System.Single minMovMagnitudeMouse
    static void _set_minMovMagnitudeMouse(float value);
    // Get static field: static public System.Delegate touchPadCallbacks
    static ::System::Delegate* _get_touchPadCallbacks();
    // Set static field: static public System.Delegate touchPadCallbacks
    static void _set_touchPadCallbacks(::System::Delegate* value);
    // Get static field: static private OVRTouchpadHelper touchpadHelper
    static ::GlobalNamespace::OVRTouchpadHelper* _get_touchpadHelper();
    // Set static field: static private OVRTouchpadHelper touchpadHelper
    static void _set_touchpadHelper(::GlobalNamespace::OVRTouchpadHelper* value);
    // static private System.Void .cctor()
    // Offset: 0x10E6DD8
    static void _cctor();
    // static public System.Void Create()
    // Offset: 0x10E16A0
    static void Create();
    // static public System.Void Update()
    // Offset: 0x10E6AB4
    static void Update();
    // static public System.Void OnDisable()
    // Offset: 0x10E6DD4
    static void OnDisable();
    // static private System.Void HandleInputMouse(ref UnityEngine.Vector3 move)
    // Offset: 0x10E6C24
    static void HandleInputMouse(ByRef<::UnityEngine::Vector3> move);
    // static public System.Void AddListener(OVRTouchpad/OVRTouchpadCallback`1<OVRTouchpad/TouchEvent> handler)
    // Offset: 0x10E2580
    static void AddListener(::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1<::GlobalNamespace::OVRTouchpad::TouchEvent>* handler);
  }; // OVRTouchpad
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTouchpad::TouchEvent, "", "OVRTouchpad/TouchEvent");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRTouchpad::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRTouchpad::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTouchpad*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTouchpad::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRTouchpad::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTouchpad*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTouchpad::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRTouchpad::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTouchpad*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTouchpad::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRTouchpad::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTouchpad*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTouchpad::HandleInputMouse
// Il2CppName: HandleInputMouse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::OVRTouchpad::HandleInputMouse)> {
  static const MethodInfo* get() {
    static auto* move = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTouchpad*), "HandleInputMouse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{move});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTouchpad::AddListener
// Il2CppName: AddListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTouchpad::OVRTouchpadCallback_1<::GlobalNamespace::OVRTouchpad::TouchEvent>*)>(&GlobalNamespace::OVRTouchpad::AddListener)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("", "OVRTouchpad/OVRTouchpadCallback`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRTouchpad/TouchEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTouchpad*), "AddListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
