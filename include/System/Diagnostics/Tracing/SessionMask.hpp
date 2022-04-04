// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: SessionMask
  struct SessionMask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::SessionMask, "System.Diagnostics.Tracing", "SessionMask");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.SessionMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  struct SessionMask/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32 m_mask
    // Size: 0x4
    // Offset: 0x0
    uint m_mask;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: SessionMask
    constexpr SessionMask(uint m_mask_ = {}) noexcept : m_mask{m_mask_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return m_mask;
    }
    // Get instance field reference: private System.UInt32 m_mask
    [[deprecated]] uint& dyn_m_mask();
    // static public System.Diagnostics.Tracing.SessionMask get_All()
    // Offset: 0x20ABD0
    static ::System::Diagnostics::Tracing::SessionMask get_All();
    // public System.Boolean get_Item(System.Int32 perEventSourceSessionId)
    // Offset: 0x2EE800
    bool get_Item(int perEventSourceSessionId);
    // public System.Void set_Item(System.Int32 perEventSourceSessionId, System.Boolean value)
    // Offset: 0x2EE830
    void set_Item(int perEventSourceSessionId, bool value);
    // public System.Void .ctor(System.UInt32 mask)
    // Offset: 0x2EE7F0
    // ABORTED: conflicts with another method.  SessionMask(uint mask);
    // public System.Boolean IsEqualOrSupersetOf(System.Diagnostics.Tracing.SessionMask m)
    // Offset: 0x2EE7D0
    bool IsEqualOrSupersetOf(::System::Diagnostics::Tracing::SessionMask m);
    // static public System.Diagnostics.Tracing.SessionMask FromId(System.Int32 perEventSourceSessionId)
    // Offset: 0x2EE7C0
    static ::System::Diagnostics::Tracing::SessionMask FromId(int perEventSourceSessionId);
    // public System.UInt64 ToEventKeywords()
    // Offset: 0x2EE7E0
    uint64_t ToEventKeywords();
    // static public System.Diagnostics.Tracing.SessionMask FromEventKeywords(System.UInt64 m)
    // Offset: 0x2EE7B0
    static ::System::Diagnostics::Tracing::SessionMask FromEventKeywords(uint64_t m);
    // static public System.UInt64 op_Explicit(System.Diagnostics.Tracing.SessionMask m)
    // Offset: 0x2EE820
    explicit operator uint64_t();
    // static public System.UInt32 op_Explicit(System.Diagnostics.Tracing.SessionMask m)
    // Offset: 0x2EE820
    // ABORTED: conflicts with another method.  explicit operator uint();
  }; // System.Diagnostics.Tracing.SessionMask
  #pragma pack(pop)
  static check_size<sizeof(SessionMask), 0 + sizeof(uint)> __System_Diagnostics_Tracing_SessionMaskSizeCheck;
  static_assert(sizeof(SessionMask) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::get_All
// Il2CppName: get_All
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::SessionMask (*)()>(&System::Diagnostics::Tracing::SessionMask::get_All)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "get_All", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::SessionMask::*)(int)>(&System::Diagnostics::Tracing::SessionMask::get_Item)> {
  static const MethodInfo* get() {
    static auto* perEventSourceSessionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perEventSourceSessionId});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::SessionMask::*)(int, bool)>(&System::Diagnostics::Tracing::SessionMask::set_Item)> {
  static const MethodInfo* get() {
    static auto* perEventSourceSessionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perEventSourceSessionId, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::SessionMask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::IsEqualOrSupersetOf
// Il2CppName: IsEqualOrSupersetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::SessionMask::*)(::System::Diagnostics::Tracing::SessionMask)>(&System::Diagnostics::Tracing::SessionMask::IsEqualOrSupersetOf)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "SessionMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "IsEqualOrSupersetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::FromId
// Il2CppName: FromId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::SessionMask (*)(int)>(&System::Diagnostics::Tracing::SessionMask::FromId)> {
  static const MethodInfo* get() {
    static auto* perEventSourceSessionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "FromId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perEventSourceSessionId});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::ToEventKeywords
// Il2CppName: ToEventKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Diagnostics::Tracing::SessionMask::*)()>(&System::Diagnostics::Tracing::SessionMask::ToEventKeywords)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "ToEventKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::FromEventKeywords
// Il2CppName: FromEventKeywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::SessionMask (*)(uint64_t)>(&System::Diagnostics::Tracing::SessionMask::FromEventKeywords)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::SessionMask), "FromEventKeywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::operator uint64_t
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::SessionMask::operator uint
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
