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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: HTML_StartRequest_t
  struct HTML_StartRequest_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HTML_StartRequest_t, "Steamworks.Data", "HTML_StartRequest_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x21
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HTML_StartRequest_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HTML_StartRequest_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 UnBrowserHandle
    // Size: 0x4
    // Offset: 0x0
    uint UnBrowserHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: UnBrowserHandle and: PchURL
    char __padding0[0x4] = {};
    // System.String PchURL
    // Size: 0x8
    // Offset: 0x8
    ::StringW PchURL;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String PchTarget
    // Size: 0x8
    // Offset: 0x10
    ::StringW PchTarget;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String PchPostData
    // Size: 0x8
    // Offset: 0x18
    ::StringW PchPostData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean BIsRedirect
    // Size: 0x1
    // Offset: 0x20
    bool BIsRedirect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: HTML_StartRequest_t
    constexpr HTML_StartRequest_t(uint UnBrowserHandle_ = {}, ::StringW PchURL_ = {}, ::StringW PchTarget_ = {}, ::StringW PchPostData_ = {}, bool BIsRedirect_ = {}) noexcept : UnBrowserHandle{UnBrowserHandle_}, PchURL{PchURL_}, PchTarget{PchTarget_}, PchPostData{PchPostData_}, BIsRedirect{BIsRedirect_} {}
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
    // Get instance field reference: System.UInt32 UnBrowserHandle
    uint& dyn_UnBrowserHandle();
    // Get instance field reference: System.String PchURL
    ::StringW& dyn_PchURL();
    // Get instance field reference: System.String PchTarget
    ::StringW& dyn_PchTarget();
    // Get instance field reference: System.String PchPostData
    ::StringW& dyn_PchPostData();
    // Get instance field reference: System.Boolean BIsRedirect
    bool& dyn_BIsRedirect();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA54B3C
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA54B44
    static void _cctor();
  }; // Steamworks.Data.HTML_StartRequest_t
  #pragma pack(pop)
  static check_size<sizeof(HTML_StartRequest_t), 32 + sizeof(bool)> __Steamworks_Data_HTML_StartRequest_tSizeCheck;
  static_assert(sizeof(HTML_StartRequest_t) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HTML_StartRequest_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::HTML_StartRequest_t::*)()>(&Steamworks::Data::HTML_StartRequest_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_StartRequest_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HTML_StartRequest_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::HTML_StartRequest_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_StartRequest_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
