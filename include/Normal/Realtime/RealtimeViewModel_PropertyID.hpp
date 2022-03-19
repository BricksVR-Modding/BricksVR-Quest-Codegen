// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.RealtimeViewModel
#include "Normal/Realtime/RealtimeViewModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeViewModel::PropertyID, "Normal.Realtime", "RealtimeViewModel/PropertyID");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID
  // [TokenAttribute] Offset: FFFFFFFF
  struct RealtimeViewModel::PropertyID/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PropertyID
    constexpr PropertyID(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID SceneViewUUID
    static constexpr const uint SceneViewUUID = 1u;
    // Get static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID SceneViewUUID
    static ::Normal::Realtime::RealtimeViewModel::PropertyID _get_SceneViewUUID();
    // Set static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID SceneViewUUID
    static void _set_SceneViewUUID(::Normal::Realtime::RealtimeViewModel::PropertyID value);
    // static field const value: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID PrefabName
    static constexpr const uint PrefabName = 2u;
    // Get static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID PrefabName
    static ::Normal::Realtime::RealtimeViewModel::PropertyID _get_PrefabName();
    // Set static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID PrefabName
    static void _set_PrefabName(::Normal::Realtime::RealtimeViewModel::PropertyID value);
    // static field const value: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID Components
    static constexpr const uint Components = 3u;
    // Get static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID Components
    static ::Normal::Realtime::RealtimeViewModel::PropertyID _get_Components();
    // Set static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID Components
    static void _set_Components(::Normal::Realtime::RealtimeViewModel::PropertyID value);
    // static field const value: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID ChildViews
    static constexpr const uint ChildViews = 4u;
    // Get static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID ChildViews
    static ::Normal::Realtime::RealtimeViewModel::PropertyID _get_ChildViews();
    // Set static field: static public Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID ChildViews
    static void _set_ChildViews(::Normal::Realtime::RealtimeViewModel::PropertyID value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // Normal.Realtime.RealtimeViewModel/Normal.Realtime.PropertyID
  #pragma pack(pop)
  static check_size<sizeof(RealtimeViewModel::PropertyID), 0 + sizeof(uint)> __Normal_Realtime_RealtimeViewModel_PropertyIDSizeCheck;
  static_assert(sizeof(RealtimeViewModel::PropertyID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
