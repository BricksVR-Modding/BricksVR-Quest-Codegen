// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: WriteBuffer
  class WriteBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::WriteBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::WriteBuffer*, "Normal.Realtime.Serialization", "WriteBuffer");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.WriteBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class WriteBuffer : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _position
    // Size: 0x4
    // Offset: 0x18
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Byte[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Int32 _position
    [[deprecated("Use field access instead!")]] int& dyn__position();
    // public System.Int32 get_bytesWritten()
    // Offset: 0x1E1910
    int get_bytesWritten();
    // public System.Void .ctor()
    // Offset: 0x8A3300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::WriteBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteBuffer*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x8A3290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteBuffer* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::WriteBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteBuffer*, creationType>(capacity)));
    }
    // public System.Byte[] GetBuffer()
    // Offset: 0x1E1920
    ::ArrayW<uint8_t> GetBuffer();
    // public System.Void Reset()
    // Offset: 0x88F3E0
    void Reset();
    // public System.Void WriteByte(System.Byte value)
    // Offset: 0x8A2830
    void WriteByte(uint8_t value);
    // public System.Void WriteBytes(System.Byte[] value)
    // Offset: 0x8A2B50
    void WriteBytes(::ArrayW<uint8_t> value);
    // public System.Void WriteBytes(System.Byte[] value, System.Int32 offset, System.Int32 length)
    // Offset: 0x8A2890
    void WriteBytes(::ArrayW<uint8_t> value, int offset, int length);
    // public System.Void WriteVarint32(System.UInt32 value)
    // Offset: 0x8A31D0
    void WriteVarint32(uint value);
    // private System.Void WriteFixed32(System.UInt32 value)
    // Offset: 0x8A2BD0
    void WriteFixed32(uint value);
    // private System.Void WriteFixed64(System.UInt64 value)
    // Offset: 0x8A2CC0
    void WriteFixed64(uint64_t value);
    // public System.Void WriteFloat(System.Single value)
    // Offset: 0x8A2EA0
    void WriteFloat(float value);
    // public System.Void WriteDouble(System.Double value)
    // Offset: 0x8A2BB0
    void WriteDouble(double value);
    // public System.Void WriteString(System.String value)
    // Offset: 0x8A3170
    void WriteString(::StringW value);
    // public System.Void WriteString(System.String value, System.Int32 lengthInBytes)
    // Offset: 0x8A2F90
    void WriteString(::StringW value, int lengthInBytes);
    // private System.Void ResizeIfNeeded(System.Int32 extraSpaceNeeded)
    // Offset: 0x8A2730
    void ResizeIfNeeded(int extraSpaceNeeded);
  }; // Normal.Realtime.Serialization.WriteBuffer
  #pragma pack(pop)
  static check_size<sizeof(WriteBuffer), 24 + sizeof(int)> __Normal_Realtime_Serialization_WriteBufferSizeCheck;
  static_assert(sizeof(WriteBuffer) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::get_bytesWritten
// Il2CppName: get_bytesWritten
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::WriteBuffer::*)()>(&Normal::Realtime::Serialization::WriteBuffer::get_bytesWritten)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "get_bytesWritten", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Normal::Realtime::Serialization::WriteBuffer::*)()>(&Normal::Realtime::Serialization::WriteBuffer::GetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)()>(&Normal::Realtime::Serialization::WriteBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(uint8_t)>(&Normal::Realtime::Serialization::WriteBuffer::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(::ArrayW<uint8_t>)>(&Normal::Realtime::Serialization::WriteBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(::ArrayW<uint8_t>, int, int)>(&Normal::Realtime::Serialization::WriteBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, offset, length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteVarint32
// Il2CppName: WriteVarint32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(uint)>(&Normal::Realtime::Serialization::WriteBuffer::WriteVarint32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteVarint32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteFixed32
// Il2CppName: WriteFixed32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(uint)>(&Normal::Realtime::Serialization::WriteBuffer::WriteFixed32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteFixed32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteFixed64
// Il2CppName: WriteFixed64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(uint64_t)>(&Normal::Realtime::Serialization::WriteBuffer::WriteFixed64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteFixed64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteFloat
// Il2CppName: WriteFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(float)>(&Normal::Realtime::Serialization::WriteBuffer::WriteFloat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteDouble
// Il2CppName: WriteDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(double)>(&Normal::Realtime::Serialization::WriteBuffer::WriteDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(::StringW)>(&Normal::Realtime::Serialization::WriteBuffer::WriteString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::WriteString
// Il2CppName: WriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(::StringW, int)>(&Normal::Realtime::Serialization::WriteBuffer::WriteString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lengthInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "WriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, lengthInBytes});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::WriteBuffer::ResizeIfNeeded
// Il2CppName: ResizeIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::WriteBuffer::*)(int)>(&Normal::Realtime::Serialization::WriteBuffer::ResizeIfNeeded)> {
  static const MethodInfo* get() {
    static auto* extraSpaceNeeded = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::WriteBuffer*), "ResizeIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extraSpaceNeeded});
  }
};
