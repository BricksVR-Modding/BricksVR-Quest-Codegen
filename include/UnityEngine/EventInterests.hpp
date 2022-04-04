// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventType
  struct EventType;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventInterests
  struct EventInterests;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventInterests, "UnityEngine", "EventInterests");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.EventInterests
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  struct EventInterests/*, public ::System::ValueType*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private System.Boolean <wantsMouseMove>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool wantsMouseMove;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private System.Boolean <wantsMouseEnterLeaveWindow>k__BackingField
    // Size: 0x1
    // Offset: 0x1
    bool wantsMouseEnterLeaveWindow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: EventInterests
    constexpr EventInterests(bool wantsMouseMove_ = {}, bool wantsMouseEnterLeaveWindow_ = {}) noexcept : wantsMouseMove{wantsMouseMove_}, wantsMouseEnterLeaveWindow{wantsMouseEnterLeaveWindow_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Boolean <wantsMouseMove>k__BackingField
    [[deprecated]] bool& dyn_$wantsMouseMove$k__BackingField();
    // Get instance field reference: private System.Boolean <wantsMouseEnterLeaveWindow>k__BackingField
    [[deprecated]] bool& dyn_$wantsMouseEnterLeaveWindow$k__BackingField();
    // public System.Boolean get_wantsMouseMove()
    // Offset: 0x2F6A80
    bool get_wantsMouseMove();
    // public System.Boolean get_wantsMouseEnterLeaveWindow()
    // Offset: 0x36C350
    bool get_wantsMouseEnterLeaveWindow();
    // public System.Boolean WantsEvent(UnityEngine.EventType type)
    // Offset: 0x61B0F0
    bool WantsEvent(::UnityEngine::EventType type);
  }; // UnityEngine.EventInterests
  #pragma pack(pop)
  static check_size<sizeof(EventInterests), 1 + sizeof(bool)> __UnityEngine_EventInterestsSizeCheck;
  static_assert(sizeof(EventInterests) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventInterests::get_wantsMouseMove
// Il2CppName: get_wantsMouseMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventInterests::*)()>(&UnityEngine::EventInterests::get_wantsMouseMove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventInterests), "get_wantsMouseMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventInterests::get_wantsMouseEnterLeaveWindow
// Il2CppName: get_wantsMouseEnterLeaveWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventInterests::*)()>(&UnityEngine::EventInterests::get_wantsMouseEnterLeaveWindow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventInterests), "get_wantsMouseEnterLeaveWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventInterests::WantsEvent
// Il2CppName: WantsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventInterests::*)(::UnityEngine::EventType)>(&UnityEngine::EventInterests::WantsEvent)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "EventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventInterests), "WantsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
