// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AvatarNicknameModel
#include "GlobalNamespace/AvatarNicknameModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarNicknameModel::PropertyID, "", "AvatarNicknameModel/PropertyID");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AvatarNicknameModel/PropertyID
  // [TokenAttribute] Offset: FFFFFFFF
  struct AvatarNicknameModel::PropertyID/*, public ::System::Enum*/ {
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
    // static field const value: static public AvatarNicknameModel/PropertyID Nickname
    static constexpr const uint Nickname = 1u;
    // Get static field: static public AvatarNicknameModel/PropertyID Nickname
    static ::GlobalNamespace::AvatarNicknameModel::PropertyID _get_Nickname();
    // Set static field: static public AvatarNicknameModel/PropertyID Nickname
    static void _set_Nickname(::GlobalNamespace::AvatarNicknameModel::PropertyID value);
    // static field const value: static public AvatarNicknameModel/PropertyID ShortId
    static constexpr const uint ShortId = 2u;
    // Get static field: static public AvatarNicknameModel/PropertyID ShortId
    static ::GlobalNamespace::AvatarNicknameModel::PropertyID _get_ShortId();
    // Set static field: static public AvatarNicknameModel/PropertyID ShortId
    static void _set_ShortId(::GlobalNamespace::AvatarNicknameModel::PropertyID value);
    // static field const value: static public AvatarNicknameModel/PropertyID PrimaryAvatarColor
    static constexpr const uint PrimaryAvatarColor = 3u;
    // Get static field: static public AvatarNicknameModel/PropertyID PrimaryAvatarColor
    static ::GlobalNamespace::AvatarNicknameModel::PropertyID _get_PrimaryAvatarColor();
    // Set static field: static public AvatarNicknameModel/PropertyID PrimaryAvatarColor
    static void _set_PrimaryAvatarColor(::GlobalNamespace::AvatarNicknameModel::PropertyID value);
    // static field const value: static public AvatarNicknameModel/PropertyID SecondaryAvatarColor
    static constexpr const uint SecondaryAvatarColor = 4u;
    // Get static field: static public AvatarNicknameModel/PropertyID SecondaryAvatarColor
    static ::GlobalNamespace::AvatarNicknameModel::PropertyID _get_SecondaryAvatarColor();
    // Set static field: static public AvatarNicknameModel/PropertyID SecondaryAvatarColor
    static void _set_SecondaryAvatarColor(::GlobalNamespace::AvatarNicknameModel::PropertyID value);
    // static field const value: static public AvatarNicknameModel/PropertyID AvatarEyes
    static constexpr const uint AvatarEyes = 5u;
    // Get static field: static public AvatarNicknameModel/PropertyID AvatarEyes
    static ::GlobalNamespace::AvatarNicknameModel::PropertyID _get_AvatarEyes();
    // Set static field: static public AvatarNicknameModel/PropertyID AvatarEyes
    static void _set_AvatarEyes(::GlobalNamespace::AvatarNicknameModel::PropertyID value);
    // static field const value: static public AvatarNicknameModel/PropertyID AvatarMouth
    static constexpr const uint AvatarMouth = 6u;
    // Get static field: static public AvatarNicknameModel/PropertyID AvatarMouth
    static ::GlobalNamespace::AvatarNicknameModel::PropertyID _get_AvatarMouth();
    // Set static field: static public AvatarNicknameModel/PropertyID AvatarMouth
    static void _set_AvatarMouth(::GlobalNamespace::AvatarNicknameModel::PropertyID value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // AvatarNicknameModel/PropertyID
  #pragma pack(pop)
  static check_size<sizeof(AvatarNicknameModel::PropertyID), 0 + sizeof(uint)> __GlobalNamespace_AvatarNicknameModel_PropertyIDSizeCheck;
  static_assert(sizeof(AvatarNicknameModel::PropertyID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
