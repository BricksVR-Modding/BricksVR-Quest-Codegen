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
  // Forward declaring type: SByteSerializer
  class SByteSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::SByteSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::SByteSerializer*, "Normal.Realtime.Serialization", "SByteSerializer");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.SByteSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class SByteSerializer : public ::Il2CppObject/*, public ::Normal::Realtime::Serialization::ISerializer_1<int8_t>*/ {
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::Serialization::ISerializer_1<int8_t>
    operator ::Normal::Realtime::Serialization::ISerializer_1<int8_t>() noexcept {
      return *reinterpret_cast<::Normal::Realtime::Serialization::ISerializer_1<int8_t>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SByteSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::SByteSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SByteSerializer*, creationType>()));
    }
    // public System.Int32 Length(System.SByte value)
    // Offset: 0x23A0D0
    int Length(int8_t value);
    // public System.Void Write(ref Normal.Realtime.Serialization.WriteStream stream, System.SByte value)
    // Offset: 0x89A100
    void Write(ByRef<::Normal::Realtime::Serialization::WriteStream*> stream, int8_t value);
    // public System.Void Read(ref Normal.Realtime.Serialization.ReadStream stream, ref System.SByte value)
    // Offset: 0x88BD40
    void Read(ByRef<::Normal::Realtime::Serialization::ReadStream*> stream, ByRef<int8_t> value);
  }; // Normal.Realtime.Serialization.SByteSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SByteSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SByteSerializer::Length
// Il2CppName: Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::SByteSerializer::*)(int8_t)>(&Normal::Realtime::Serialization::SByteSerializer::Length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SByteSerializer*), "Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SByteSerializer::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::SByteSerializer::*)(ByRef<::Normal::Realtime::Serialization::WriteStream*>, int8_t)>(&Normal::Realtime::Serialization::SByteSerializer::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SByteSerializer*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SByteSerializer::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::SByteSerializer::*)(ByRef<::Normal::Realtime::Serialization::ReadStream*>, ByRef<int8_t>)>(&Normal::Realtime::Serialization::SByteSerializer::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SByteSerializer*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, value});
  }
};
