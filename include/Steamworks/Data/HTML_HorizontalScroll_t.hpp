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
  // Forward declaring type: HTML_HorizontalScroll_t
  struct HTML_HorizontalScroll_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HTML_HorizontalScroll_t, "Steamworks.Data", "HTML_HorizontalScroll_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HTML_HorizontalScroll_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HTML_HorizontalScroll_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 UnBrowserHandle
    // Size: 0x4
    // Offset: 0x0
    uint UnBrowserHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnScrollMax
    // Size: 0x4
    // Offset: 0x4
    uint UnScrollMax;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnScrollCurrent
    // Size: 0x4
    // Offset: 0x8
    uint UnScrollCurrent;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Single FlPageScale
    // Size: 0x4
    // Offset: 0xC
    float FlPageScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Boolean BVisible
    // Size: 0x1
    // Offset: 0x10
    bool BVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: BVisible and: UnPageSize
    char __padding4[0x3] = {};
    // System.UInt32 UnPageSize
    // Size: 0x4
    // Offset: 0x14
    uint UnPageSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: HTML_HorizontalScroll_t
    constexpr HTML_HorizontalScroll_t(uint UnBrowserHandle_ = {}, uint UnScrollMax_ = {}, uint UnScrollCurrent_ = {}, float FlPageScale_ = {}, bool BVisible_ = {}, uint UnPageSize_ = {}) noexcept : UnBrowserHandle{UnBrowserHandle_}, UnScrollMax{UnScrollMax_}, UnScrollCurrent{UnScrollCurrent_}, FlPageScale{FlPageScale_}, BVisible{BVisible_}, UnPageSize{UnPageSize_} {}
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
    // Get instance field reference: System.UInt32 UnScrollMax
    [[deprecated("Use field access instead!")]] uint& dyn_UnScrollMax();
    // Get instance field reference: System.UInt32 UnScrollCurrent
    [[deprecated("Use field access instead!")]] uint& dyn_UnScrollCurrent();
    // Get instance field reference: System.Single FlPageScale
    [[deprecated("Use field access instead!")]] float& dyn_FlPageScale();
    // Get instance field reference: System.Boolean BVisible
    [[deprecated("Use field access instead!")]] bool& dyn_BVisible();
    // Get instance field reference: System.UInt32 UnPageSize
    [[deprecated("Use field access instead!")]] uint& dyn_UnPageSize();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x461650
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x4615B0
    static void _cctor();
  }; // Steamworks.Data.HTML_HorizontalScroll_t
  #pragma pack(pop)
  static check_size<sizeof(HTML_HorizontalScroll_t), 20 + sizeof(uint)> __Steamworks_Data_HTML_HorizontalScroll_tSizeCheck;
  static_assert(sizeof(HTML_HorizontalScroll_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HTML_HorizontalScroll_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::HTML_HorizontalScroll_t::*)()>(&Steamworks::Data::HTML_HorizontalScroll_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_HorizontalScroll_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HTML_HorizontalScroll_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::HTML_HorizontalScroll_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_HorizontalScroll_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
