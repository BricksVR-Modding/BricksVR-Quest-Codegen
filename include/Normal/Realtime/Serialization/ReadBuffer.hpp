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
  // Forward declaring type: ReadBuffer
  class ReadBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::ReadBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::ReadBuffer*, "Normal.Realtime.Serialization", "ReadBuffer");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.ReadBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class ReadBuffer : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Int32 _position
    int& dyn__position();
    // public System.Int32 get_bytesRead()
    // Offset: 0xA6C6F0
    int get_bytesRead();
    // public System.Void .ctor(System.Byte[] buffer)
    // Offset: 0xA669A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadBuffer* New_ctor(::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::ReadBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadBuffer*, creationType>(buffer)));
    }
    // private System.Void .ctor(System.Byte[] buffer, System.Int32 position)
    // Offset: 0xA6C6F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadBuffer* New_ctor(::ArrayW<uint8_t> buffer, int position) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::ReadBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadBuffer*, creationType>(buffer, position)));
    }
    // public System.Void SetBuffer(System.Byte[] buffer)
    // Offset: 0xA6C734
    void SetBuffer(::ArrayW<uint8_t> buffer);
    // public System.Void Reset()
    // Offset: 0xA69998
    void Reset();
    // public System.Byte ReadByte()
    // Offset: 0xA6C740
    uint8_t ReadByte();
    // public System.Void ReadBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0xA6AB60
    void ReadBytes(::ArrayW<uint8_t> buffer, int offset, int length);
    // public System.UInt32 ReadVarint32()
    // Offset: 0xA699A0
    uint ReadVarint32();
    // public System.Void SkipVarint32()
    // Offset: 0xA6C8F8
    void SkipVarint32();
    // private System.UInt32 ReadFixed32()
    // Offset: 0xA6C98C
    uint ReadFixed32();
    // private System.UInt64 ReadFixed64()
    // Offset: 0xA6CA74
    uint64_t ReadFixed64();
    // public System.Single ReadFloat()
    // Offset: 0xA6AA88
    float ReadFloat();
    // public System.Double ReadDouble()
    // Offset: 0xA6AAA0
    double ReadDouble();
    // public System.Void SkipFloat()
    // Offset: 0xA6CBBC
    void SkipFloat();
    // public System.Void SkipDouble()
    // Offset: 0xA6CC44
    void SkipDouble();
    // public System.String ReadString(System.Int32 lengthInBytes)
    // Offset: 0xA6CCCC
    ::StringW ReadString(int lengthInBytes);
    // public System.Void SkipBytes(System.Int32 length)
    // Offset: 0xA6CE08
    void SkipBytes(int length);
    // public Normal.Realtime.Serialization.ReadBuffer Copy()
    // Offset: 0xA698DC
    ::Normal::Realtime::Serialization::ReadBuffer* Copy();
    // public override System.String ToString()
    // Offset: 0xA6CF14
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Normal.Realtime.Serialization.ReadBuffer
  #pragma pack(pop)
  static check_size<sizeof(ReadBuffer), 24 + sizeof(int)> __Normal_Realtime_Serialization_ReadBufferSizeCheck;
  static_assert(sizeof(ReadBuffer) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::get_bytesRead
// Il2CppName: get_bytesRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::get_bytesRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "get_bytesRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::SetBuffer
// Il2CppName: SetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)(::ArrayW<uint8_t>)>(&Normal::Realtime::Serialization::ReadBuffer::SetBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "SetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadBytes
// Il2CppName: ReadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)(::ArrayW<uint8_t>, int, int)>(&Normal::Realtime::Serialization::ReadBuffer::ReadBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadVarint32
// Il2CppName: ReadVarint32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ReadVarint32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadVarint32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::SkipVarint32
// Il2CppName: SkipVarint32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::SkipVarint32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "SkipVarint32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadFixed32
// Il2CppName: ReadFixed32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ReadFixed32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadFixed32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadFixed64
// Il2CppName: ReadFixed64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ReadFixed64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadFixed64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadFloat
// Il2CppName: ReadFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ReadFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadDouble
// Il2CppName: ReadDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ReadDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::SkipFloat
// Il2CppName: SkipFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::SkipFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "SkipFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::SkipDouble
// Il2CppName: SkipDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::SkipDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "SkipDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ReadString
// Il2CppName: ReadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::Serialization::ReadBuffer::*)(int)>(&Normal::Realtime::Serialization::ReadBuffer::ReadString)> {
  static const MethodInfo* get() {
    static auto* lengthInBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ReadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lengthInBytes});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::SkipBytes
// Il2CppName: SkipBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadBuffer::*)(int)>(&Normal::Realtime::Serialization::ReadBuffer::SkipBytes)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "SkipBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::ReadBuffer* (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadBuffer::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::Serialization::ReadBuffer::*)()>(&Normal::Realtime::Serialization::ReadBuffer::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadBuffer*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
