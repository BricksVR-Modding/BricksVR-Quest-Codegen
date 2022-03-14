// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
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
  // Forward declaring type: SteamInventoryResultReady_t
  struct SteamInventoryResultReady_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::SteamInventoryResultReady_t, "Steamworks.Data", "SteamInventoryResultReady_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.SteamInventoryResultReady_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamInventoryResultReady_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Int32 Handle
    // Size: 0x4
    // Offset: 0x0
    int Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x4
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    public:
    // Creating value type constructor for type: SteamInventoryResultReady_t
    constexpr SteamInventoryResultReady_t(int Handle_ = {}, ::Steamworks::Result Result_ = {}) noexcept : Handle{Handle_}, Result{Result_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.Int32 Handle
    int& dyn_Handle();
    // Get instance field reference: Steamworks.Result Result
    ::Steamworks::Result& dyn_Result();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA59FAC
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA59FB4
    static void _cctor();
  }; // Steamworks.Data.SteamInventoryResultReady_t
  #pragma pack(pop)
  static check_size<sizeof(SteamInventoryResultReady_t), 4 + sizeof(::Steamworks::Result)> __Steamworks_Data_SteamInventoryResultReady_tSizeCheck;
  static_assert(sizeof(SteamInventoryResultReady_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::SteamInventoryResultReady_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::SteamInventoryResultReady_t::*)()>(&Steamworks::Data::SteamInventoryResultReady_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamInventoryResultReady_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::SteamInventoryResultReady_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::SteamInventoryResultReady_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::SteamInventoryResultReady_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
