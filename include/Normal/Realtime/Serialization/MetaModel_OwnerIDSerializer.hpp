// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Serialization.MetaModel
#include "Normal/Realtime/Serialization/MetaModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Normal.Realtime.Serialization.ISerializer`1
#include "Normal/Realtime/Serialization/ISerializer_1.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer, "Normal.Realtime.Serialization", "MetaModel/OwnerIDSerializer");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerIDSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  // [RealtimeWireTypeAttribute] Offset: BB2A0
  struct MetaModel::OwnerIDSerializer/*, public ::System::ValueType, public ::Normal::Realtime::Serialization::ISerializer_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>*/ {
    public:
    // Creating value type constructor for type: OwnerIDSerializer
    constexpr OwnerIDSerializer() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Normal::Realtime::Serialization::ISerializer_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>
    operator ::Normal::Realtime::Serialization::ISerializer_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>() noexcept {
      return *reinterpret_cast<::Normal::Realtime::Serialization::ISerializer_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>*>(this);
    }
    // public System.Int32 Length(Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID value)
    // Offset: 0x88DE60
    int Length(::Normal::Realtime::Serialization::MetaModel::OwnerID value);
    // public System.Void Write(ref Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID value)
    // Offset: 0x88DEF0
    void Write(ByRef<::Normal::Realtime::Serialization::WriteStream*> stream, ::Normal::Realtime::Serialization::MetaModel::OwnerID value);
    // public System.Void Read(ref Normal.Realtime.Serialization.ReadStream stream, ref Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID value)
    // Offset: 0x88DEB0
    void Read(ByRef<::Normal::Realtime::Serialization::ReadStream*> stream, ByRef<::Normal::Realtime::Serialization::MetaModel::OwnerID> value);
  }; // Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerIDSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::Length
// Il2CppName: Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::*)(::Normal::Realtime::Serialization::MetaModel::OwnerID)>(&Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::Length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "MetaModel/OwnerID")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer), "Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::*)(ByRef<::Normal::Realtime::Serialization::WriteStream*>, ::Normal::Realtime::Serialization::MetaModel::OwnerID)>(&Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "MetaModel/OwnerID")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::*)(ByRef<::Normal::Realtime::Serialization::ReadStream*>, ByRef<::Normal::Realtime::Serialization::MetaModel::OwnerID>)>(&Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "MetaModel/OwnerID")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, value});
  }
};
