// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.SteamId
#include "Steamworks/SteamId.hpp"
// Completed includes
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: Lobby
  struct Lobby;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::Lobby, "Steamworks.Data", "Lobby");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.Lobby
  // [TokenAttribute] Offset: FFFFFFFF
  struct Lobby/*, public ::System::ValueType*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x71F124
    // private Steamworks.SteamId <Id>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Steamworks::SteamId Id;
    // Field size check
    static_assert(sizeof(::Steamworks::SteamId) == 0x8);
    public:
    // Creating value type constructor for type: Lobby
    constexpr Lobby(::Steamworks::SteamId Id_ = {}) noexcept : Id{Id_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Steamworks::SteamId
    constexpr operator ::Steamworks::SteamId() const noexcept {
      return Id;
    }
    // Get instance field reference: private Steamworks.SteamId <Id>k__BackingField
    ::Steamworks::SteamId& dyn_$Id$k__BackingField();
    // System.Void set_Id(Steamworks.SteamId value)
    // Offset: 0xA55D60
    void set_Id(::Steamworks::SteamId value);
    // public System.Void .ctor(Steamworks.SteamId id)
    // Offset: 0xA55D68
    // ABORTED: conflicts with another method.  Lobby(::Steamworks::SteamId id);
  }; // Steamworks.Data.Lobby
  #pragma pack(pop)
  static check_size<sizeof(Lobby), 0 + sizeof(::Steamworks::SteamId)> __Steamworks_Data_LobbySizeCheck;
  static_assert(sizeof(Lobby) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::Lobby::set_Id
// Il2CppName: set_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::Data::Lobby::*)(::Steamworks::SteamId)>(&Steamworks::Data::Lobby::set_Id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Steamworks", "SteamId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::Lobby), "set_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::Lobby::Lobby
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
