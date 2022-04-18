// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandle
  struct GCHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: DataCollector
  struct DataCollector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::DataCollector, "System.Diagnostics.Tracing", "DataCollector");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x49
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.DataCollector
  // [TokenAttribute] Offset: FFFFFFFF
  struct DataCollector/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Byte* scratchEnd
    // Size: 0x8
    // Offset: 0x0
    uint8_t* scratchEnd;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datasEnd
    // Size: 0x8
    // Offset: 0x8
    ::System::Diagnostics::Tracing::EventSource::EventData* datasEnd;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventSource::EventData*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle* pinsEnd
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::InteropServices::GCHandle* pinsEnd;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datasStart
    // Size: 0x8
    // Offset: 0x18
    ::System::Diagnostics::Tracing::EventSource::EventData* datasStart;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventSource::EventData*) == 0x8);
    // private System.Byte* scratch
    // Size: 0x8
    // Offset: 0x20
    uint8_t* scratch;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datas
    // Size: 0x8
    // Offset: 0x28
    ::System::Diagnostics::Tracing::EventSource::EventData* datas;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventSource::EventData*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle* pins
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::InteropServices::GCHandle* pins;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 bufferPos
    // Size: 0x4
    // Offset: 0x40
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bufferNesting
    // Size: 0x4
    // Offset: 0x44
    int bufferNesting;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean writingScalars
    // Size: 0x1
    // Offset: 0x48
    bool writingScalars;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: DataCollector
    constexpr DataCollector(uint8_t* scratchEnd_ = {}, ::System::Diagnostics::Tracing::EventSource::EventData* datasEnd_ = {}, ::System::Runtime::InteropServices::GCHandle* pinsEnd_ = {}, ::System::Diagnostics::Tracing::EventSource::EventData* datasStart_ = {}, uint8_t* scratch_ = {}, ::System::Diagnostics::Tracing::EventSource::EventData* datas_ = {}, ::System::Runtime::InteropServices::GCHandle* pins_ = {}, ::ArrayW<uint8_t> buffer_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int bufferPos_ = {}, int bufferNesting_ = {}, bool writingScalars_ = {}) noexcept : scratchEnd{scratchEnd_}, datasEnd{datasEnd_}, pinsEnd{pinsEnd_}, datasStart{datasStart_}, scratch{scratch_}, datas{datas_}, pins{pins_}, buffer{buffer_}, bufferPos{bufferPos_}, bufferNesting{bufferNesting_}, writingScalars{writingScalars_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static System.Diagnostics.Tracing.DataCollector ThreadInstance
    static ::System::Diagnostics::Tracing::DataCollector _get_ThreadInstance();
    // Set static field: static System.Diagnostics.Tracing.DataCollector ThreadInstance
    static void _set_ThreadInstance(::System::Diagnostics::Tracing::DataCollector value);
    // Get instance field reference: private System.Byte* scratchEnd
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_scratchEnd();
    // Get instance field reference: private System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datasEnd
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventSource::EventData*& dyn_datasEnd();
    // Get instance field reference: private System.Runtime.InteropServices.GCHandle* pinsEnd
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle*& dyn_pinsEnd();
    // Get instance field reference: private System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datasStart
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventSource::EventData*& dyn_datasStart();
    // Get instance field reference: private System.Byte* scratch
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_scratch();
    // Get instance field reference: private System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datas
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventSource::EventData*& dyn_datas();
    // Get instance field reference: private System.Runtime.InteropServices.GCHandle* pins
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle*& dyn_pins();
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.Int32 bufferPos
    [[deprecated("Use field access instead!")]] int& dyn_bufferPos();
    // Get instance field reference: private System.Int32 bufferNesting
    [[deprecated("Use field access instead!")]] int& dyn_bufferNesting();
    // Get instance field reference: private System.Boolean writingScalars
    [[deprecated("Use field access instead!")]] bool& dyn_writingScalars();
    // System.Void Enable(System.Byte* scratch, System.Int32 scratchSize, System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* datas, System.Int32 dataCount, System.Runtime.InteropServices.GCHandle* pins, System.Int32 pinCount)
    // Offset: 0x209A50
    void Enable(uint8_t* scratch, int scratchSize, ::System::Diagnostics::Tracing::EventSource::EventData* datas, int dataCount, ::System::Runtime::InteropServices::GCHandle* pins, int pinCount);
    // System.Void Disable()
    // Offset: 0x209A30
    void Disable();
    // System.Diagnostics.Tracing.EventSource/System.Diagnostics.Tracing.EventData* Finish()
    // Offset: 0x209CA0
    ::System::Diagnostics::Tracing::EventSource::EventData* Finish();
    // System.Void AddScalar(System.Void* value, System.Int32 size)
    // Offset: 0x209860
    void AddScalar(void* value, int size);
    // System.Void AddBinary(System.String value, System.Int32 size)
    // Offset: 0x2095A0
    void AddBinary(::StringW value, int size);
    // System.Void AddBinary(System.Array value, System.Int32 size)
    // Offset: 0x209840
    void AddBinary(::System::Array* value, int size);
    // System.Void AddArray(System.Array value, System.Int32 length, System.Int32 itemSize)
    // Offset: 0x209330
    void AddArray(::System::Array* value, int length, int itemSize);
    // System.Int32 BeginBufferedArray()
    // Offset: 0x2099E0
    int BeginBufferedArray();
    // System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0x209A90
    void EndBufferedArray(int bookmark, int count);
    // System.Void BeginBuffered()
    // Offset: 0x209A10
    void BeginBuffered();
    // System.Void EndBuffered()
    // Offset: 0x209B60
    void EndBuffered();
    // private System.Void EnsureBuffer()
    // Offset: 0x209BC0
    void EnsureBuffer();
    // private System.Void EnsureBuffer(System.Int32 additionalSize)
    // Offset: 0x209C30
    void EnsureBuffer(int additionalSize);
    // private System.Void GrowBuffer(System.Int32 required)
    // Offset: 0x209CC0
    void GrowBuffer(int required);
    // private System.Void PinArray(System.Object value, System.Int32 size)
    // Offset: 0x209D20
    void PinArray(::Il2CppObject* value, int size);
    // private System.Void ScalarsBegin()
    // Offset: 0x209E90
    void ScalarsBegin();
    // private System.Void ScalarsEnd()
    // Offset: 0x209F70
    void ScalarsEnd();
  }; // System.Diagnostics.Tracing.DataCollector
  #pragma pack(pop)
  static check_size<sizeof(DataCollector), 72 + sizeof(bool)> __System_Diagnostics_Tracing_DataCollectorSizeCheck;
  static_assert(sizeof(DataCollector) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(uint8_t*, int, ::System::Diagnostics::Tracing::EventSource::EventData*, int, ::System::Runtime::InteropServices::GCHandle*, int)>(&System::Diagnostics::Tracing::DataCollector::Enable)> {
  static const MethodInfo* get() {
    static auto* scratch = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* scratchSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* datas = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventSource/EventData"))->byval_arg;
    static auto* dataCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pins = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "GCHandle"))->byval_arg;
    static auto* pinCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scratch, scratchSize, datas, dataCount, pins, pinCount});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::EventSource::EventData* (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::AddScalar
// Il2CppName: AddScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(void*, int)>(&System::Diagnostics::Tracing::DataCollector::AddScalar)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "AddScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, size});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::AddBinary
// Il2CppName: AddBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(::StringW, int)>(&System::Diagnostics::Tracing::DataCollector::AddBinary)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "AddBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, size});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::AddBinary
// Il2CppName: AddBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(::System::Array*, int)>(&System::Diagnostics::Tracing::DataCollector::AddBinary)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "AddBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, size});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::AddArray
// Il2CppName: AddArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(::System::Array*, int, int)>(&System::Diagnostics::Tracing::DataCollector::AddArray)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* itemSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "AddArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, length, itemSize});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::BeginBufferedArray
// Il2CppName: BeginBufferedArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::BeginBufferedArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "BeginBufferedArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::EndBufferedArray
// Il2CppName: EndBufferedArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(int, int)>(&System::Diagnostics::Tracing::DataCollector::EndBufferedArray)> {
  static const MethodInfo* get() {
    static auto* bookmark = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "EndBufferedArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bookmark, count});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::BeginBuffered
// Il2CppName: BeginBuffered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::BeginBuffered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "BeginBuffered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::EndBuffered
// Il2CppName: EndBuffered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::EndBuffered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "EndBuffered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::EnsureBuffer
// Il2CppName: EnsureBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::EnsureBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "EnsureBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::EnsureBuffer
// Il2CppName: EnsureBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(int)>(&System::Diagnostics::Tracing::DataCollector::EnsureBuffer)> {
  static const MethodInfo* get() {
    static auto* additionalSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "EnsureBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{additionalSize});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::GrowBuffer
// Il2CppName: GrowBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(int)>(&System::Diagnostics::Tracing::DataCollector::GrowBuffer)> {
  static const MethodInfo* get() {
    static auto* required = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "GrowBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{required});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::PinArray
// Il2CppName: PinArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)(::Il2CppObject*, int)>(&System::Diagnostics::Tracing::DataCollector::PinArray)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "PinArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, size});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::ScalarsBegin
// Il2CppName: ScalarsBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::ScalarsBegin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "ScalarsBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::DataCollector::ScalarsEnd
// Il2CppName: ScalarsEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::DataCollector::*)()>(&System::Diagnostics::Tracing::DataCollector::ScalarsEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::DataCollector), "ScalarsEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
