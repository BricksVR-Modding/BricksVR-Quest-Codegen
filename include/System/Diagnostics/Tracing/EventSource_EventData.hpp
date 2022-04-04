// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource::EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventSource::EventData/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int64 m_Ptr
    // Size: 0x8
    // Offset: 0x0
    int64_t m_Ptr;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int32 m_Size
    // Size: 0x4
    // Offset: 0x8
    int m_Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_Reserved
    // Size: 0x4
    // Offset: 0xC
    int m_Reserved;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventData
    constexpr EventData(int64_t m_Ptr_ = {}, int m_Size_ = {}, int m_Reserved_ = {}) noexcept : m_Ptr{m_Ptr_}, m_Size{m_Size_}, m_Reserved{m_Reserved_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int64 m_Ptr
    [[deprecated]] int64_t& dyn_m_Ptr();
    // Get instance field reference: System.Int32 m_Size
    [[deprecated]] int& dyn_m_Size();
    // Get instance field reference: System.Int32 m_Reserved
    [[deprecated]] int& dyn_m_Reserved();
    // public System.IntPtr get_DataPointer()
    // Offset: 0x2E5580
    ::System::IntPtr get_DataPointer();
    // public System.Void set_DataPointer(System.IntPtr value)
    // Offset: 0x2E5590
    void set_DataPointer(::System::IntPtr value);
    // public System.Void set_Size(System.Int32 value)
    // Offset: 0x2502E0
    void set_Size(int value);
    // System.Void SetMetadata(System.Byte* pointer, System.Int32 size, System.Int32 reserved)
    // Offset: 0x2E54F0
    void SetMetadata(uint8_t* pointer, int size, int reserved);
  }; // System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData
  #pragma pack(pop)
  static check_size<sizeof(EventSource::EventData), 12 + sizeof(int)> __System_Diagnostics_Tracing_EventSource_EventDataSizeCheck;
  static_assert(sizeof(EventSource::EventData) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::EventData::get_DataPointer
// Il2CppName: get_DataPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::Diagnostics::Tracing::EventSource::EventData::*)()>(&System::Diagnostics::Tracing::EventSource::EventData::get_DataPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource::EventData), "get_DataPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::EventData::set_DataPointer
// Il2CppName: set_DataPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::EventData::*)(::System::IntPtr)>(&System::Diagnostics::Tracing::EventSource::EventData::set_DataPointer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource::EventData), "set_DataPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::EventData::set_Size
// Il2CppName: set_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::EventData::*)(int)>(&System::Diagnostics::Tracing::EventSource::EventData::set_Size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource::EventData), "set_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::EventData::SetMetadata
// Il2CppName: SetMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::EventData::*)(uint8_t*, int, int)>(&System::Diagnostics::Tracing::EventSource::EventData::SetMetadata)> {
  static const MethodInfo* get() {
    static auto* pointer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reserved = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource::EventData), "SetMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointer, size, reserved});
  }
};
