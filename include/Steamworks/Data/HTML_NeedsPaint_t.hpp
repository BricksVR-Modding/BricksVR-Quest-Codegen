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
  // Forward declaring type: HTML_NeedsPaint_t
  struct HTML_NeedsPaint_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HTML_NeedsPaint_t, "Steamworks.Data", "HTML_NeedsPaint_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HTML_NeedsPaint_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HTML_NeedsPaint_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 UnBrowserHandle
    // Size: 0x4
    // Offset: 0x0
    uint UnBrowserHandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: UnBrowserHandle and: PBGRA
    char __padding0[0x4] = {};
    // System.String PBGRA
    // Size: 0x8
    // Offset: 0x8
    ::StringW PBGRA;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.UInt32 UnWide
    // Size: 0x4
    // Offset: 0x10
    uint UnWide;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnTall
    // Size: 0x4
    // Offset: 0x14
    uint UnTall;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnUpdateX
    // Size: 0x4
    // Offset: 0x18
    uint UnUpdateX;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnUpdateY
    // Size: 0x4
    // Offset: 0x1C
    uint UnUpdateY;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnUpdateWide
    // Size: 0x4
    // Offset: 0x20
    uint UnUpdateWide;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnUpdateTall
    // Size: 0x4
    // Offset: 0x24
    uint UnUpdateTall;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnScrollX
    // Size: 0x4
    // Offset: 0x28
    uint UnScrollX;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 UnScrollY
    // Size: 0x4
    // Offset: 0x2C
    uint UnScrollY;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Single FlPageScale
    // Size: 0x4
    // Offset: 0x30
    float FlPageScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.UInt32 UnPageSerial
    // Size: 0x4
    // Offset: 0x34
    uint UnPageSerial;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: HTML_NeedsPaint_t
    constexpr HTML_NeedsPaint_t(uint UnBrowserHandle_ = {}, ::StringW PBGRA_ = {}, uint UnWide_ = {}, uint UnTall_ = {}, uint UnUpdateX_ = {}, uint UnUpdateY_ = {}, uint UnUpdateWide_ = {}, uint UnUpdateTall_ = {}, uint UnScrollX_ = {}, uint UnScrollY_ = {}, float FlPageScale_ = {}, uint UnPageSerial_ = {}) noexcept : UnBrowserHandle{UnBrowserHandle_}, PBGRA{PBGRA_}, UnWide{UnWide_}, UnTall{UnTall_}, UnUpdateX{UnUpdateX_}, UnUpdateY{UnUpdateY_}, UnUpdateWide{UnUpdateWide_}, UnUpdateTall{UnUpdateTall_}, UnScrollX{UnScrollX_}, UnScrollY{UnScrollY_}, FlPageScale{FlPageScale_}, UnPageSerial{UnPageSerial_} {}
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
    // Get instance field reference: System.String PBGRA
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PBGRA();
    // Get instance field reference: System.UInt32 UnWide
    [[deprecated("Use field access instead!")]] uint& dyn_UnWide();
    // Get instance field reference: System.UInt32 UnTall
    [[deprecated("Use field access instead!")]] uint& dyn_UnTall();
    // Get instance field reference: System.UInt32 UnUpdateX
    [[deprecated("Use field access instead!")]] uint& dyn_UnUpdateX();
    // Get instance field reference: System.UInt32 UnUpdateY
    [[deprecated("Use field access instead!")]] uint& dyn_UnUpdateY();
    // Get instance field reference: System.UInt32 UnUpdateWide
    [[deprecated("Use field access instead!")]] uint& dyn_UnUpdateWide();
    // Get instance field reference: System.UInt32 UnUpdateTall
    [[deprecated("Use field access instead!")]] uint& dyn_UnUpdateTall();
    // Get instance field reference: System.UInt32 UnScrollX
    [[deprecated("Use field access instead!")]] uint& dyn_UnScrollX();
    // Get instance field reference: System.UInt32 UnScrollY
    [[deprecated("Use field access instead!")]] uint& dyn_UnScrollY();
    // Get instance field reference: System.Single FlPageScale
    [[deprecated("Use field access instead!")]] float& dyn_FlPageScale();
    // Get instance field reference: System.UInt32 UnPageSerial
    [[deprecated("Use field access instead!")]] uint& dyn_UnPageSerial();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x461910
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x461870
    static void _cctor();
  }; // Steamworks.Data.HTML_NeedsPaint_t
  #pragma pack(pop)
  static check_size<sizeof(HTML_NeedsPaint_t), 52 + sizeof(uint)> __Steamworks_Data_HTML_NeedsPaint_tSizeCheck;
  static_assert(sizeof(HTML_NeedsPaint_t) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HTML_NeedsPaint_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::HTML_NeedsPaint_t::*)()>(&Steamworks::Data::HTML_NeedsPaint_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_NeedsPaint_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HTML_NeedsPaint_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::HTML_NeedsPaint_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HTML_NeedsPaint_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
