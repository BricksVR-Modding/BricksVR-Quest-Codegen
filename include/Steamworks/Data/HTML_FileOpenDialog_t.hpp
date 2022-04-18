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
  // Forward declaring type: HTML_FileOpenDialog_t
  struct HTML_FileOpenDialog_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HTML_FileOpenDialog_t, "Steamworks.Data", "HTML_FileOpenDialog_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HTML_FileOpenDialog_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HTML_FileOpenDialog_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 UnBrowserHandle
    // Size: 0x4
    // Offset: 0x0
    uint UnBrowserHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: UnBrowserHandle and: PchTitle
    char __padding0[0x4] = {};
    // System.String PchTitle
    // Size: 0x8
    // Offset: 0x8
    ::StringW PchTitle;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String PchInitialFile
    // Size: 0x8
    // Offset: 0x10
    ::StringW PchInitialFile;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: HTML_FileOpenDialog_t
    constexpr HTML_FileOpenDialog_t(uint UnBrowserHandle_ = {}, ::StringW PchTitle_ = {}, ::StringW PchInitialFile_ = {}) noexcept : UnBrowserHandle{UnBrowserHandle_}, PchTitle{PchTitle_}, PchInitialFile{PchInitialFile_} {}
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
    [[deprecated("Use field access instead!")]] uint& dyn_UnBrowserHandle();
    // Get instance field reference: System.String PchTitle
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PchTitle();
    // Get instance field reference: System.String PchInitialFile
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PchInitialFile();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x461440
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x4613A0
    static void _cctor();
  }; // Steamworks.Data.HTML_FileOpenDialog_t
  #pragma pack(pop)
  static check_size<sizeof(HTML_FileOpenDialog_t), 16 + sizeof(::StringW)> __Steamworks_Data_HTML_FileOpenDialog_tSizeCheck;
  static_assert(sizeof(HTML_FileOpenDialog_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HTML_FileOpenDialog_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::HTML_FileOpenDialog_t::*)()>(&Steamworks::Data::HTML_FileOpenDialog_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_FileOpenDialog_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HTML_FileOpenDialog_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::HTML_FileOpenDialog_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_FileOpenDialog_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
