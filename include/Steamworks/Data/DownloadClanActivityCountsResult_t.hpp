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
  // Forward declaring type: DownloadClanActivityCountsResult_t
  struct DownloadClanActivityCountsResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::DownloadClanActivityCountsResult_t, "Steamworks.Data", "DownloadClanActivityCountsResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.DownloadClanActivityCountsResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct DownloadClanActivityCountsResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Boolean Success
    // Size: 0x1
    // Offset: 0x0
    bool Success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: DownloadClanActivityCountsResult_t
    constexpr DownloadClanActivityCountsResult_t(bool Success_ = {}) noexcept : Success{Success_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Success;
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.Boolean Success
    [[deprecated("Use field access instead!")]] bool& dyn_Success();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45F250
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45F1B0
    static void _cctor();
  }; // Steamworks.Data.DownloadClanActivityCountsResult_t
  #pragma pack(pop)
  static check_size<sizeof(DownloadClanActivityCountsResult_t), 0 + sizeof(bool)> __Steamworks_Data_DownloadClanActivityCountsResult_tSizeCheck;
  static_assert(sizeof(DownloadClanActivityCountsResult_t) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::DownloadClanActivityCountsResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::DownloadClanActivityCountsResult_t::*)()>(&Steamworks::Data::DownloadClanActivityCountsResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::DownloadClanActivityCountsResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::DownloadClanActivityCountsResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::DownloadClanActivityCountsResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::DownloadClanActivityCountsResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
