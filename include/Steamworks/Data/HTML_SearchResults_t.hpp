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
  // Forward declaring type: HTML_SearchResults_t
  struct HTML_SearchResults_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HTML_SearchResults_t, "Steamworks.Data", "HTML_SearchResults_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HTML_SearchResults_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HTML_SearchResults_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 UnBrowserHandle
    // Size: 0x4
    // Offset: 0x0
    uint UnBrowserHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnResults
    // Size: 0x4
    // Offset: 0x4
    uint UnResults;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnCurrentMatch
    // Size: 0x4
    // Offset: 0x8
    uint UnCurrentMatch;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: HTML_SearchResults_t
    constexpr HTML_SearchResults_t(uint UnBrowserHandle_ = {}, uint UnResults_ = {}, uint UnCurrentMatch_ = {}) noexcept : UnBrowserHandle{UnBrowserHandle_}, UnResults{UnResults_}, UnCurrentMatch{UnCurrentMatch_} {}
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
    // Get instance field reference: System.UInt32 UnResults
    uint& dyn_UnResults();
    // Get instance field reference: System.UInt32 UnCurrentMatch
    uint& dyn_UnCurrentMatch();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA548F0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA548F8
    static void _cctor();
  }; // Steamworks.Data.HTML_SearchResults_t
  #pragma pack(pop)
  static check_size<sizeof(HTML_SearchResults_t), 8 + sizeof(uint)> __Steamworks_Data_HTML_SearchResults_tSizeCheck;
  static_assert(sizeof(HTML_SearchResults_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HTML_SearchResults_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::HTML_SearchResults_t::*)()>(&Steamworks::Data::HTML_SearchResults_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_SearchResults_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HTML_SearchResults_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::HTML_SearchResults_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_SearchResults_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
