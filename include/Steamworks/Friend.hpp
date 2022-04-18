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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: Friend
  struct Friend;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Friend, "Steamworks", "Friend");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Friend
  // [TokenAttribute] Offset: FFFFFFFF
  struct Friend/*, public ::System::ValueType*/ {
    public:
    public:
    // public Steamworks.SteamId Id
    // Size: 0x8
    // Offset: 0x0
    ::Steamworks::SteamId Id;
    // Field size check
    static_assert(sizeof(::Steamworks::SteamId) == 0x8);
    public:
    // Creating value type constructor for type: Friend
    constexpr Friend(::Steamworks::SteamId Id_ = {}) noexcept : Id{Id_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Steamworks::SteamId
    constexpr operator ::Steamworks::SteamId() const noexcept {
      return Id;
    }
    // Get instance field reference: public Steamworks.SteamId Id
    [[deprecated("Use field access instead!")]] ::Steamworks::SteamId& dyn_Id();
    // public System.String get_Name()
    // Offset: 0x5BD430
    ::StringW get_Name();
    // public System.Void .ctor(Steamworks.SteamId steamid)
    // Offset: 0x2BACA0
    // ABORTED: conflicts with another method.  Friend(::Steamworks::SteamId steamid);
    // public override System.String ToString()
    // Offset: 0x5BD3C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Steamworks.Friend
  #pragma pack(pop)
  static check_size<sizeof(Friend), 0 + sizeof(::Steamworks::SteamId)> __Steamworks_FriendSizeCheck;
  static_assert(sizeof(Friend) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Friend::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Friend::*)()>(&Steamworks::Friend::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Friend), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Friend::Friend
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::Friend::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Friend::*)()>(&Steamworks::Friend::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Friend), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
