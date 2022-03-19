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
  // Forward declaring type: StartPlaytimeTrackingResult_t
  struct StartPlaytimeTrackingResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::StartPlaytimeTrackingResult_t, "Steamworks.Data", "StartPlaytimeTrackingResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.StartPlaytimeTrackingResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct StartPlaytimeTrackingResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    public:
    // Creating value type constructor for type: StartPlaytimeTrackingResult_t
    constexpr StartPlaytimeTrackingResult_t(::Steamworks::Result Result_ = {}) noexcept : Result{Result_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Creating conversion operator: operator ::Steamworks::Result
    constexpr operator ::Steamworks::Result() const noexcept {
      return Result;
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: Steamworks.Result Result
    ::Steamworks::Result& dyn_Result();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA5998C
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA59994
    static void _cctor();
  }; // Steamworks.Data.StartPlaytimeTrackingResult_t
  #pragma pack(pop)
  static check_size<sizeof(StartPlaytimeTrackingResult_t), 0 + sizeof(::Steamworks::Result)> __Steamworks_Data_StartPlaytimeTrackingResult_tSizeCheck;
  static_assert(sizeof(StartPlaytimeTrackingResult_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::StartPlaytimeTrackingResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::StartPlaytimeTrackingResult_t::*)()>(&Steamworks::Data::StartPlaytimeTrackingResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::StartPlaytimeTrackingResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::StartPlaytimeTrackingResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::StartPlaytimeTrackingResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::StartPlaytimeTrackingResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
