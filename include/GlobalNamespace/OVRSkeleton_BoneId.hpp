// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton::BoneId, "", "OVRSkeleton/BoneId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeleton/BoneId
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRSkeleton::BoneId/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoneId
    constexpr BoneId(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRSkeleton/BoneId Invalid
    static constexpr const int Invalid = -1;
    // Get static field: static public OVRSkeleton/BoneId Invalid
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Invalid();
    // Set static field: static public OVRSkeleton/BoneId Invalid
    static void _set_Invalid(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Start
    static constexpr const int Hand_Start = 0;
    // Get static field: static public OVRSkeleton/BoneId Hand_Start
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Start();
    // Set static field: static public OVRSkeleton/BoneId Hand_Start
    static void _set_Hand_Start(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_WristRoot
    static constexpr const int Hand_WristRoot = 0;
    // Get static field: static public OVRSkeleton/BoneId Hand_WristRoot
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_WristRoot();
    // Set static field: static public OVRSkeleton/BoneId Hand_WristRoot
    static void _set_Hand_WristRoot(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_ForearmStub
    static constexpr const int Hand_ForearmStub = 1;
    // Get static field: static public OVRSkeleton/BoneId Hand_ForearmStub
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_ForearmStub();
    // Set static field: static public OVRSkeleton/BoneId Hand_ForearmStub
    static void _set_Hand_ForearmStub(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Thumb0
    static constexpr const int Hand_Thumb0 = 2;
    // Get static field: static public OVRSkeleton/BoneId Hand_Thumb0
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Thumb0();
    // Set static field: static public OVRSkeleton/BoneId Hand_Thumb0
    static void _set_Hand_Thumb0(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Thumb1
    static constexpr const int Hand_Thumb1 = 3;
    // Get static field: static public OVRSkeleton/BoneId Hand_Thumb1
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Thumb1();
    // Set static field: static public OVRSkeleton/BoneId Hand_Thumb1
    static void _set_Hand_Thumb1(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Thumb2
    static constexpr const int Hand_Thumb2 = 4;
    // Get static field: static public OVRSkeleton/BoneId Hand_Thumb2
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Thumb2();
    // Set static field: static public OVRSkeleton/BoneId Hand_Thumb2
    static void _set_Hand_Thumb2(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Thumb3
    static constexpr const int Hand_Thumb3 = 5;
    // Get static field: static public OVRSkeleton/BoneId Hand_Thumb3
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Thumb3();
    // Set static field: static public OVRSkeleton/BoneId Hand_Thumb3
    static void _set_Hand_Thumb3(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Index1
    static constexpr const int Hand_Index1 = 6;
    // Get static field: static public OVRSkeleton/BoneId Hand_Index1
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Index1();
    // Set static field: static public OVRSkeleton/BoneId Hand_Index1
    static void _set_Hand_Index1(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Index2
    static constexpr const int Hand_Index2 = 7;
    // Get static field: static public OVRSkeleton/BoneId Hand_Index2
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Index2();
    // Set static field: static public OVRSkeleton/BoneId Hand_Index2
    static void _set_Hand_Index2(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Index3
    static constexpr const int Hand_Index3 = 8;
    // Get static field: static public OVRSkeleton/BoneId Hand_Index3
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Index3();
    // Set static field: static public OVRSkeleton/BoneId Hand_Index3
    static void _set_Hand_Index3(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Middle1
    static constexpr const int Hand_Middle1 = 9;
    // Get static field: static public OVRSkeleton/BoneId Hand_Middle1
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Middle1();
    // Set static field: static public OVRSkeleton/BoneId Hand_Middle1
    static void _set_Hand_Middle1(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Middle2
    static constexpr const int Hand_Middle2 = 10;
    // Get static field: static public OVRSkeleton/BoneId Hand_Middle2
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Middle2();
    // Set static field: static public OVRSkeleton/BoneId Hand_Middle2
    static void _set_Hand_Middle2(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Middle3
    static constexpr const int Hand_Middle3 = 11;
    // Get static field: static public OVRSkeleton/BoneId Hand_Middle3
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Middle3();
    // Set static field: static public OVRSkeleton/BoneId Hand_Middle3
    static void _set_Hand_Middle3(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Ring1
    static constexpr const int Hand_Ring1 = 12;
    // Get static field: static public OVRSkeleton/BoneId Hand_Ring1
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Ring1();
    // Set static field: static public OVRSkeleton/BoneId Hand_Ring1
    static void _set_Hand_Ring1(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Ring2
    static constexpr const int Hand_Ring2 = 13;
    // Get static field: static public OVRSkeleton/BoneId Hand_Ring2
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Ring2();
    // Set static field: static public OVRSkeleton/BoneId Hand_Ring2
    static void _set_Hand_Ring2(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Ring3
    static constexpr const int Hand_Ring3 = 14;
    // Get static field: static public OVRSkeleton/BoneId Hand_Ring3
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Ring3();
    // Set static field: static public OVRSkeleton/BoneId Hand_Ring3
    static void _set_Hand_Ring3(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Pinky0
    static constexpr const int Hand_Pinky0 = 15;
    // Get static field: static public OVRSkeleton/BoneId Hand_Pinky0
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Pinky0();
    // Set static field: static public OVRSkeleton/BoneId Hand_Pinky0
    static void _set_Hand_Pinky0(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Pinky1
    static constexpr const int Hand_Pinky1 = 16;
    // Get static field: static public OVRSkeleton/BoneId Hand_Pinky1
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Pinky1();
    // Set static field: static public OVRSkeleton/BoneId Hand_Pinky1
    static void _set_Hand_Pinky1(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Pinky2
    static constexpr const int Hand_Pinky2 = 17;
    // Get static field: static public OVRSkeleton/BoneId Hand_Pinky2
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Pinky2();
    // Set static field: static public OVRSkeleton/BoneId Hand_Pinky2
    static void _set_Hand_Pinky2(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_Pinky3
    static constexpr const int Hand_Pinky3 = 18;
    // Get static field: static public OVRSkeleton/BoneId Hand_Pinky3
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_Pinky3();
    // Set static field: static public OVRSkeleton/BoneId Hand_Pinky3
    static void _set_Hand_Pinky3(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_MaxSkinnable
    static constexpr const int Hand_MaxSkinnable = 19;
    // Get static field: static public OVRSkeleton/BoneId Hand_MaxSkinnable
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_MaxSkinnable();
    // Set static field: static public OVRSkeleton/BoneId Hand_MaxSkinnable
    static void _set_Hand_MaxSkinnable(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_ThumbTip
    static constexpr const int Hand_ThumbTip = 19;
    // Get static field: static public OVRSkeleton/BoneId Hand_ThumbTip
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_ThumbTip();
    // Set static field: static public OVRSkeleton/BoneId Hand_ThumbTip
    static void _set_Hand_ThumbTip(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_IndexTip
    static constexpr const int Hand_IndexTip = 20;
    // Get static field: static public OVRSkeleton/BoneId Hand_IndexTip
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_IndexTip();
    // Set static field: static public OVRSkeleton/BoneId Hand_IndexTip
    static void _set_Hand_IndexTip(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_MiddleTip
    static constexpr const int Hand_MiddleTip = 21;
    // Get static field: static public OVRSkeleton/BoneId Hand_MiddleTip
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_MiddleTip();
    // Set static field: static public OVRSkeleton/BoneId Hand_MiddleTip
    static void _set_Hand_MiddleTip(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_RingTip
    static constexpr const int Hand_RingTip = 22;
    // Get static field: static public OVRSkeleton/BoneId Hand_RingTip
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_RingTip();
    // Set static field: static public OVRSkeleton/BoneId Hand_RingTip
    static void _set_Hand_RingTip(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_PinkyTip
    static constexpr const int Hand_PinkyTip = 23;
    // Get static field: static public OVRSkeleton/BoneId Hand_PinkyTip
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_PinkyTip();
    // Set static field: static public OVRSkeleton/BoneId Hand_PinkyTip
    static void _set_Hand_PinkyTip(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Hand_End
    static constexpr const int Hand_End = 24;
    // Get static field: static public OVRSkeleton/BoneId Hand_End
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Hand_End();
    // Set static field: static public OVRSkeleton/BoneId Hand_End
    static void _set_Hand_End(::GlobalNamespace::OVRSkeleton::BoneId value);
    // static field const value: static public OVRSkeleton/BoneId Max
    static constexpr const int Max = 24;
    // Get static field: static public OVRSkeleton/BoneId Max
    static ::GlobalNamespace::OVRSkeleton::BoneId _get_Max();
    // Set static field: static public OVRSkeleton/BoneId Max
    static void _set_Max(::GlobalNamespace::OVRSkeleton::BoneId value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRSkeleton/BoneId
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeleton::BoneId), 0 + sizeof(int)> __GlobalNamespace_OVRSkeleton_BoneIdSizeCheck;
  static_assert(sizeof(OVRSkeleton::BoneId) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
