// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: CallbackType
  struct CallbackType;
}
// Completed forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: MusicPlayerSelectsPlaylistEntry_t
  struct MusicPlayerSelectsPlaylistEntry_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t, "Steamworks.Data", "MusicPlayerSelectsPlaylistEntry_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.MusicPlayerSelectsPlaylistEntry_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct MusicPlayerSelectsPlaylistEntry_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Int32 NID
    // Size: 0x4
    // Offset: 0x0
    int NID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MusicPlayerSelectsPlaylistEntry_t
    constexpr MusicPlayerSelectsPlaylistEntry_t(int NID_ = {}) noexcept : NID{NID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return NID;
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.Int32 NID
    int& dyn_NID();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA568EC
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA568F4
    static void _cctor();
  }; // Steamworks.Data.MusicPlayerSelectsPlaylistEntry_t
  #pragma pack(pop)
  static check_size<sizeof(MusicPlayerSelectsPlaylistEntry_t), 0 + sizeof(int)> __Steamworks_Data_MusicPlayerSelectsPlaylistEntry_tSizeCheck;
  static_assert(sizeof(MusicPlayerSelectsPlaylistEntry_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t::*)()>(&Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::MusicPlayerSelectsPlaylistEntry_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
