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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: AppProofOfPurchaseKeyResponse_t
  struct AppProofOfPurchaseKeyResponse_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::AppProofOfPurchaseKeyResponse_t, "Steamworks.Data", "AppProofOfPurchaseKeyResponse_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.AppProofOfPurchaseKeyResponse_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct AppProofOfPurchaseKeyResponse_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.UInt32 AppID
    // Size: 0x4
    // Offset: 0x4
    uint AppID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 CchKeyLength
    // Size: 0x4
    // Offset: 0x8
    uint CchKeyLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: CchKeyLength and: Key
    char __padding2[0x4] = {};
    // System.Byte[] Key
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Key;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: AppProofOfPurchaseKeyResponse_t
    constexpr AppProofOfPurchaseKeyResponse_t(::Steamworks::Result Result_ = {}, uint AppID_ = {}, uint CchKeyLength_ = {}, ::ArrayW<uint8_t> Key_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : Result{Result_}, AppID{AppID_}, CchKeyLength{CchKeyLength_}, Key{Key_} {}
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
    // Get instance field reference: Steamworks.Result Result
    ::Steamworks::Result& dyn_Result();
    // Get instance field reference: System.UInt32 AppID
    uint& dyn_AppID();
    // Get instance field reference: System.UInt32 CchKeyLength
    uint& dyn_CchKeyLength();
    // Get instance field reference: System.Byte[] Key
    ::ArrayW<uint8_t>& dyn_Key();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA50E48
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA50E50
    static void _cctor();
  }; // Steamworks.Data.AppProofOfPurchaseKeyResponse_t
  #pragma pack(pop)
  static check_size<sizeof(AppProofOfPurchaseKeyResponse_t), 16 + sizeof(::ArrayW<uint8_t>)> __Steamworks_Data_AppProofOfPurchaseKeyResponse_tSizeCheck;
  static_assert(sizeof(AppProofOfPurchaseKeyResponse_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::AppProofOfPurchaseKeyResponse_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::AppProofOfPurchaseKeyResponse_t::*)()>(&Steamworks::Data::AppProofOfPurchaseKeyResponse_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::AppProofOfPurchaseKeyResponse_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::AppProofOfPurchaseKeyResponse_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::AppProofOfPurchaseKeyResponse_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::AppProofOfPurchaseKeyResponse_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
