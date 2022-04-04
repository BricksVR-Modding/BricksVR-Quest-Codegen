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
// Including type: Steamworks.HTTPStatusCode
#include "Steamworks/HTTPStatusCode.hpp"
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
  // Forward declaring type: HTTPRequestCompleted_t
  struct HTTPRequestCompleted_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HTTPRequestCompleted_t, "Steamworks.Data", "HTTPRequestCompleted_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HTTPRequestCompleted_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HTTPRequestCompleted_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 Request
    // Size: 0x4
    // Offset: 0x0
    uint Request;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: Request and: ContextValue
    char __padding0[0x4] = {};
    // System.UInt64 ContextValue
    // Size: 0x8
    // Offset: 0x8
    uint64_t ContextValue;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Boolean RequestSuccessful
    // Size: 0x1
    // Offset: 0x10
    bool RequestSuccessful;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RequestSuccessful and: StatusCode
    char __padding2[0x3] = {};
    // Steamworks.HTTPStatusCode StatusCode
    // Size: 0x4
    // Offset: 0x14
    ::Steamworks::HTTPStatusCode StatusCode;
    // Field size check
    static_assert(sizeof(::Steamworks::HTTPStatusCode) == 0x4);
    // System.UInt32 BodySize
    // Size: 0x4
    // Offset: 0x18
    uint BodySize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: HTTPRequestCompleted_t
    constexpr HTTPRequestCompleted_t(uint Request_ = {}, uint64_t ContextValue_ = {}, bool RequestSuccessful_ = {}, ::Steamworks::HTTPStatusCode StatusCode_ = {}, uint BodySize_ = {}) noexcept : Request{Request_}, ContextValue{ContextValue_}, RequestSuccessful{RequestSuccessful_}, StatusCode{StatusCode_}, BodySize{BodySize_} {}
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
    // Get instance field reference: System.UInt32 Request
    [[deprecated]] uint& dyn_Request();
    // Get instance field reference: System.UInt64 ContextValue
    [[deprecated]] uint64_t& dyn_ContextValue();
    // Get instance field reference: System.Boolean RequestSuccessful
    [[deprecated]] bool& dyn_RequestSuccessful();
    // Get instance field reference: Steamworks.HTTPStatusCode StatusCode
    [[deprecated]] ::Steamworks::HTTPStatusCode& dyn_StatusCode();
    // Get instance field reference: System.UInt32 BodySize
    [[deprecated]] uint& dyn_BodySize();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4620A0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x462000
    static void _cctor();
  }; // Steamworks.Data.HTTPRequestCompleted_t
  #pragma pack(pop)
  static check_size<sizeof(HTTPRequestCompleted_t), 24 + sizeof(uint)> __Steamworks_Data_HTTPRequestCompleted_tSizeCheck;
  static_assert(sizeof(HTTPRequestCompleted_t) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HTTPRequestCompleted_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::HTTPRequestCompleted_t::*)()>(&Steamworks::Data::HTTPRequestCompleted_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTTPRequestCompleted_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HTTPRequestCompleted_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::HTTPRequestCompleted_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTTPRequestCompleted_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
