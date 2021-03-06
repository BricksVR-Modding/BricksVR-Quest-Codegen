// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Serialization.ISerializer`1
#include "Normal/Realtime/Serialization/ISerializer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: WriteStream
  class WriteStream;
  // Forward declaring type: ReadStream
  class ReadStream;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: ByteSerializer
  class ByteSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::ByteSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::ByteSerializer*, "Normal.Realtime.Serialization", "ByteSerializer");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.ByteSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteSerializer : public ::Il2CppObject/*, public ::Normal::Realtime::Serialization::ISerializer_1<uint8_t>*/ {
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::Serialization::ISerializer_1<uint8_t>
    operator ::Normal::Realtime::Serialization::ISerializer_1<uint8_t>() noexcept {
      return *reinterpret_cast<::Normal::Realtime::Serialization::ISerializer_1<uint8_t>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::ByteSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteSerializer*, creationType>()));
    }
    // public System.Int32 Length(System.Byte value)
    // Offset: 0x23A0D0
    int Length(uint8_t value);
    // public System.Void Write(ref Normal.Realtime.Serialization.WriteStream stream, System.Byte value)
    // Offset: 0x88BD80
    void Write(ByRef<::Normal::Realtime::Serialization::WriteStream*> stream, uint8_t value);
    // public System.Void Read(ref Normal.Realtime.Serialization.ReadStream stream, ref System.Byte value)
    // Offset: 0x88BD40
    void Read(ByRef<::Normal::Realtime::Serialization::ReadStream*> stream, ByRef<uint8_t> value);
  }; // Normal.Realtime.Serialization.ByteSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ByteSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ByteSerializer::Length
// Il2CppName: Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::ByteSerializer::*)(uint8_t)>(&Normal::Realtime::Serialization::ByteSerializer::Length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ByteSerializer*), "Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ByteSerializer::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ByteSerializer::*)(ByRef<::Normal::Realtime::Serialization::WriteStream*>, uint8_t)>(&Normal::Realtime::Serialization::ByteSerializer::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ByteSerializer*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ByteSerializer::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ByteSerializer::*)(ByRef<::Normal::Realtime::Serialization::ReadStream*>, ByRef<uint8_t>)>(&Normal::Realtime::Serialization::ByteSerializer::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ByteSerializer*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, value});
  }
};
