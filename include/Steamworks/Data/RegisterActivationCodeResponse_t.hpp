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
// Including type: Steamworks.RegisterActivationCodeResult
#include "Steamworks/RegisterActivationCodeResult.hpp"
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
  // Forward declaring type: RegisterActivationCodeResponse_t
  struct RegisterActivationCodeResponse_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::RegisterActivationCodeResponse_t, "Steamworks.Data", "RegisterActivationCodeResponse_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.RegisterActivationCodeResponse_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RegisterActivationCodeResponse_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.RegisterActivationCodeResult Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::RegisterActivationCodeResult Result;
    // Field size check
    static_assert(sizeof(::Steamworks::RegisterActivationCodeResult) == 0x4);
    // System.UInt32 PackageRegistered
    // Size: 0x4
    // Offset: 0x4
    uint PackageRegistered;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: RegisterActivationCodeResponse_t
    constexpr RegisterActivationCodeResponse_t(::Steamworks::RegisterActivationCodeResult Result_ = {}, uint PackageRegistered_ = {}) noexcept : Result{Result_}, PackageRegistered{PackageRegistered_} {}
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
    // Get instance field reference: Steamworks.RegisterActivationCodeResult Result
    [[deprecated]] ::Steamworks::RegisterActivationCodeResult& dyn_Result();
    // Get instance field reference: System.UInt32 PackageRegistered
    [[deprecated]] uint& dyn_PackageRegistered();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4645F0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x464550
    static void _cctor();
  }; // Steamworks.Data.RegisterActivationCodeResponse_t
  #pragma pack(pop)
  static check_size<sizeof(RegisterActivationCodeResponse_t), 4 + sizeof(uint)> __Steamworks_Data_RegisterActivationCodeResponse_tSizeCheck;
  static_assert(sizeof(RegisterActivationCodeResponse_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::RegisterActivationCodeResponse_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::RegisterActivationCodeResponse_t::*)()>(&Steamworks::Data::RegisterActivationCodeResponse_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RegisterActivationCodeResponse_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::RegisterActivationCodeResponse_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::RegisterActivationCodeResponse_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::RegisterActivationCodeResponse_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
