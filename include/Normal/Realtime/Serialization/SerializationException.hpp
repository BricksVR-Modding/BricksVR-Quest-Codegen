// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
// Including type: Normal.Realtime.Serialization.Serialization
#include "Normal/Realtime/Serialization/Serialization.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: SerializationException
  class SerializationException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::SerializationException);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::SerializationException*, "Normal.Realtime.Serialization", "SerializationException");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.SerializationException
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationException : public ::System::IO::IOException {
    public:
    // static public Normal.Realtime.Serialization.SerializationException WriteStreamWriteInvalidPropertyID(System.UInt32 propertyID)
    // Offset: 0xA6E238
    static ::Normal::Realtime::Serialization::SerializationException* WriteStreamWriteInvalidPropertyID(uint propertyID);
    // static public Normal.Realtime.Serialization.SerializationException WriteBufferLengthExceeded(System.Int32 length)
    // Offset: 0xA6E404
    static ::Normal::Realtime::Serialization::SerializationException* WriteBufferLengthExceeded(int length);
    // static public Normal.Realtime.Serialization.SerializationException ModelLengthCalculatedIncorrectly(System.Type modelType, System.Int32 actualLength, System.Int32 calculatedLength)
    // Offset: 0xA6E4AC
    static ::Normal::Realtime::Serialization::SerializationException* ModelLengthCalculatedIncorrectly(::System::Type* modelType, int actualLength, int calculatedLength);
    // static public Normal.Realtime.Serialization.SerializationException NegativeModelWriteLength(System.Int32 length)
    // Offset: 0xA6E6E4
    static ::Normal::Realtime::Serialization::SerializationException* NegativeModelWriteLength(int length);
    // static public Normal.Realtime.Serialization.SerializationException ReadBufferLengthExceeded(System.Int32 length)
    // Offset: 0xA6C7E8
    static ::Normal::Realtime::Serialization::SerializationException* ReadBufferLengthExceeded(int length);
    // static public Normal.Realtime.Serialization.SerializationException ReadLengthDelimitedBufferLengthExceeded(System.Int32 length)
    // Offset: 0xA6E78C
    static ::Normal::Realtime::Serialization::SerializationException* ReadLengthDelimitedBufferLengthExceeded(int length);
    // static public Normal.Realtime.Serialization.SerializationException ReadModelBufferLengthIncorrect(System.Int32 readLength, System.Int32 expectedLength)
    // Offset: 0xA6A888
    static ::Normal::Realtime::Serialization::SerializationException* ReadModelBufferLengthIncorrect(int readLength, int expectedLength);
    // static public Normal.Realtime.Serialization.SerializationException RecursionLevelLimitExceeded(System.UInt32 recursionLevelLimit)
    // Offset: 0xA69BAC
    static ::Normal::Realtime::Serialization::SerializationException* RecursionLevelLimitExceeded(uint recursionLevelLimit);
    // static public Normal.Realtime.Serialization.SerializationException InvalidVarint()
    // Offset: 0xA6C890
    static ::Normal::Realtime::Serialization::SerializationException* InvalidVarint();
    // static public Normal.Realtime.Serialization.SerializationException ReadInvalidType(Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType expectedWireType, Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType wireType)
    // Offset: 0xA6D934
    static ::Normal::Realtime::Serialization::SerializationException* ReadInvalidType(::Normal::Realtime::Serialization::Serialization::WireType expectedWireType, ::Normal::Realtime::Serialization::Serialization::WireType wireType);
    // static public Normal.Realtime.Serialization.SerializationException NegativeLengthDelimitedReadLength(System.Int32 length)
    // Offset: 0xA6AAB8
    static ::Normal::Realtime::Serialization::SerializationException* NegativeLengthDelimitedReadLength(int length);
    // static public Normal.Realtime.Serialization.SerializationException NegativeModelReadLength(System.Int32 length)
    // Offset: 0xA69C54
    static ::Normal::Realtime::Serialization::SerializationException* NegativeModelReadLength(int length);
    // static public Normal.Realtime.Serialization.SerializationException SuppliedBufferNotLargeEnough(System.Int32 length, System.Int32 maxLength)
    // Offset: 0xA6E008
    static ::Normal::Realtime::Serialization::SerializationException* SuppliedBufferNotLargeEnough(int length, int maxLength);
    // static public Normal.Realtime.Serialization.SerializationException MetaModelSuppliedMismatchedModelType(System.UInt32 serverModelType, System.UInt32 localModelType)
    // Offset: 0xA6E834
    static ::Normal::Realtime::Serialization::SerializationException* MetaModelSuppliedMismatchedModelType(uint serverModelType, uint localModelType);
    // public System.Void .ctor(System.String message)
    // Offset: 0xA6E230
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::SerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationException*, creationType>(message)));
    }
  }; // Normal.Realtime.Serialization.SerializationException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::WriteStreamWriteInvalidPropertyID
// Il2CppName: WriteStreamWriteInvalidPropertyID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(uint)>(&Normal::Realtime::Serialization::SerializationException::WriteStreamWriteInvalidPropertyID)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "WriteStreamWriteInvalidPropertyID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::WriteBufferLengthExceeded
// Il2CppName: WriteBufferLengthExceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int)>(&Normal::Realtime::Serialization::SerializationException::WriteBufferLengthExceeded)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "WriteBufferLengthExceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::ModelLengthCalculatedIncorrectly
// Il2CppName: ModelLengthCalculatedIncorrectly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(::System::Type*, int, int)>(&Normal::Realtime::Serialization::SerializationException::ModelLengthCalculatedIncorrectly)> {
  static const MethodInfo* get() {
    static auto* modelType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* actualLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* calculatedLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "ModelLengthCalculatedIncorrectly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modelType, actualLength, calculatedLength});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::NegativeModelWriteLength
// Il2CppName: NegativeModelWriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int)>(&Normal::Realtime::Serialization::SerializationException::NegativeModelWriteLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "NegativeModelWriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::ReadBufferLengthExceeded
// Il2CppName: ReadBufferLengthExceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int)>(&Normal::Realtime::Serialization::SerializationException::ReadBufferLengthExceeded)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "ReadBufferLengthExceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::ReadLengthDelimitedBufferLengthExceeded
// Il2CppName: ReadLengthDelimitedBufferLengthExceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int)>(&Normal::Realtime::Serialization::SerializationException::ReadLengthDelimitedBufferLengthExceeded)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "ReadLengthDelimitedBufferLengthExceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::ReadModelBufferLengthIncorrect
// Il2CppName: ReadModelBufferLengthIncorrect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int, int)>(&Normal::Realtime::Serialization::SerializationException::ReadModelBufferLengthIncorrect)> {
  static const MethodInfo* get() {
    static auto* readLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* expectedLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "ReadModelBufferLengthIncorrect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{readLength, expectedLength});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::RecursionLevelLimitExceeded
// Il2CppName: RecursionLevelLimitExceeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(uint)>(&Normal::Realtime::Serialization::SerializationException::RecursionLevelLimitExceeded)> {
  static const MethodInfo* get() {
    static auto* recursionLevelLimit = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "RecursionLevelLimitExceeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recursionLevelLimit});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::InvalidVarint
// Il2CppName: InvalidVarint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)()>(&Normal::Realtime::Serialization::SerializationException::InvalidVarint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "InvalidVarint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::ReadInvalidType
// Il2CppName: ReadInvalidType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(::Normal::Realtime::Serialization::Serialization::WireType, ::Normal::Realtime::Serialization::Serialization::WireType)>(&Normal::Realtime::Serialization::SerializationException::ReadInvalidType)> {
  static const MethodInfo* get() {
    static auto* expectedWireType = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "Serialization/WireType")->byval_arg;
    static auto* wireType = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "Serialization/WireType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "ReadInvalidType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expectedWireType, wireType});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::NegativeLengthDelimitedReadLength
// Il2CppName: NegativeLengthDelimitedReadLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int)>(&Normal::Realtime::Serialization::SerializationException::NegativeLengthDelimitedReadLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "NegativeLengthDelimitedReadLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::NegativeModelReadLength
// Il2CppName: NegativeModelReadLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int)>(&Normal::Realtime::Serialization::SerializationException::NegativeModelReadLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "NegativeModelReadLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::SuppliedBufferNotLargeEnough
// Il2CppName: SuppliedBufferNotLargeEnough
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(int, int)>(&Normal::Realtime::Serialization::SerializationException::SuppliedBufferNotLargeEnough)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "SuppliedBufferNotLargeEnough", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, maxLength});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::MetaModelSuppliedMismatchedModelType
// Il2CppName: MetaModelSuppliedMismatchedModelType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::SerializationException* (*)(uint, uint)>(&Normal::Realtime::Serialization::SerializationException::MetaModelSuppliedMismatchedModelType)> {
  static const MethodInfo* get() {
    static auto* serverModelType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* localModelType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::SerializationException*), "MetaModelSuppliedMismatchedModelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverModelType, localModelType});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::SerializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
