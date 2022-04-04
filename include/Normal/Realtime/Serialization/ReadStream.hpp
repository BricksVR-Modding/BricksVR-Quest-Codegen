// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType
#include "Normal/Realtime/Serialization/Serialization_WireType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: ReadBuffer
  class ReadBuffer;
  // Forward declaring type: IStreamReader
  class IStreamReader;
  // Forward declaring type: StreamContext
  struct StreamContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: ReadStream
  class ReadStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::ReadStream);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::ReadStream*, "Normal.Realtime.Serialization", "ReadStream");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.ReadStream
  // [TokenAttribute] Offset: FFFFFFFF
  class ReadStream : public ::Il2CppObject {
    public:
    public:
    // public System.UInt32 recursionLevelLimit
    // Size: 0x4
    // Offset: 0x10
    uint recursionLevelLimit;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _recursionLevel
    // Size: 0x4
    // Offset: 0x14
    uint recursionLevel;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private Normal.Realtime.Serialization.ReadBuffer _buffer
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::Serialization::ReadBuffer* buffer;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::ReadBuffer*) == 0x8);
    // private Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType _requiredWireType
    // Size: 0x1
    // Offset: 0x20
    ::Normal::Realtime::Serialization::Serialization::WireType requiredWireType;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::Serialization::WireType) == 0x1);
    // Padding between fields: requiredWireType and: currentModelEndPosition
    char __padding3[0x3] = {};
    // private System.Int32 _currentModelEndPosition
    // Size: 0x4
    // Offset: 0x24
    int currentModelEndPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 _lastCollectionTypeID
    // Size: 0x4
    // Offset: 0x28
    uint lastCollectionTypeID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public System.UInt32 recursionLevelLimit
    [[deprecated]] uint& dyn_recursionLevelLimit();
    // Get instance field reference: private System.UInt32 _recursionLevel
    [[deprecated]] uint& dyn__recursionLevel();
    // Get instance field reference: private Normal.Realtime.Serialization.ReadBuffer _buffer
    [[deprecated]] ::Normal::Realtime::Serialization::ReadBuffer*& dyn__buffer();
    // Get instance field reference: private Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType _requiredWireType
    [[deprecated]] ::Normal::Realtime::Serialization::Serialization::WireType& dyn__requiredWireType();
    // Get instance field reference: private System.Int32 _currentModelEndPosition
    [[deprecated]] int& dyn__currentModelEndPosition();
    // Get instance field reference: private System.UInt32 _lastCollectionTypeID
    [[deprecated]] uint& dyn__lastCollectionTypeID();
    // public System.Void .ctor(Normal.Realtime.Serialization.ReadBuffer buffer)
    // Offset: 0x891350
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadStream* New_ctor(::Normal::Realtime::Serialization::ReadBuffer* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::ReadStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadStream*, creationType>(buffer)));
    }
    // static public System.Int32 ConvertUIntToNegativeOneInt(System.UInt32 value)
    // Offset: 0x88FAB0
    static int ConvertUIntToNegativeOneInt(uint value);
    // static public UnityEngine.Vector2 Vector2FromBytes(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x8910E0
    static ::UnityEngine::Vector2 Vector2FromBytes(::ArrayW<uint8_t> buffer, int offset);
    // static public UnityEngine.Vector3 Vector3FromBytes(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x891210
    static ::UnityEngine::Vector3 Vector3FromBytes(::ArrayW<uint8_t> buffer, int offset);
    // static public UnityEngine.Quaternion QuaternionFromBytes(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x88FB00
    static ::UnityEngine::Quaternion QuaternionFromBytes(::ArrayW<uint8_t> buffer, int offset);
    // static public UnityEngine.Color ColorFromBytes(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x88F950
    static ::UnityEngine::Color ColorFromBytes(::ArrayW<uint8_t> buffer, int offset);
    // static public System.Single BytesToFloat(System.Byte[] buffer, ref System.Int32 offset)
    // Offset: 0x88F830
    static float BytesToFloat(::ArrayW<uint8_t> buffer, ByRef<int> offset);
    // public System.Void DeserializeModel(Normal.Realtime.Serialization.IStreamReader model, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x88FAC0
    void DeserializeModel(::Normal::Realtime::Serialization::IStreamReader* model, ::Normal::Realtime::Serialization::StreamContext context);
    // public System.Boolean ReadNextPropertyID(out System.UInt32 propertyID)
    // Offset: 0x890320
    bool ReadNextPropertyID(ByRef<uint> propertyID);
    // public System.Boolean ReadNextPropertyID(out System.UInt32 propertyID, out Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType wireType)
    // Offset: 0x8903F0
    bool ReadNextPropertyID(ByRef<uint> propertyID, ByRef<::Normal::Realtime::Serialization::Serialization::WireType> wireType);
    // public System.Void ReadNull()
    // Offset: 0x8904E0
    void ReadNull();
    // public System.Boolean ReadBool()
    // Offset: 0x88FCD0
    bool ReadBool();
    // public System.Byte ReadByte()
    // Offset: 0x88FD00
    uint8_t ReadByte();
    // public System.SByte ReadSByte()
    // Offset: 0x88FD00
    int8_t ReadSByte();
    // public System.UInt16 ReadUShort()
    // Offset: 0x88FD00
    uint16_t ReadUShort();
    // public System.Int16 ReadShort()
    // Offset: 0x88FD00
    int16_t ReadShort();
    // public System.UInt32 ReadUInt()
    // Offset: 0x88FD00
    uint ReadUInt();
    // public System.Int32 ReadInt()
    // Offset: 0x88FD00
    int ReadInt();
    // public System.UInt32 ReadVarint32()
    // Offset: 0x88FD00
    uint ReadVarint32();
    // public System.Single ReadFloat()
    // Offset: 0x890100
    float ReadFloat();
    // public System.Double ReadDouble()
    // Offset: 0x890080
    double ReadDouble();
    // public System.Byte[] ReadBytes()
    // Offset: 0x88FD30
    ::ArrayW<uint8_t> ReadBytes();
    // public System.Int32 ReadBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 maxLength)
    // Offset: 0x88FE30
    int ReadBytes(::ArrayW<uint8_t> buffer, int offset, int maxLength);
    // public System.String ReadString()
    // Offset: 0x8909F0
    ::StringW ReadString();
    // public System.Void ReadModel(Normal.Realtime.Serialization.IStreamReader value, Normal.Realtime.Serialization.StreamContext context, System.Boolean didForceWriteFullModel)
    // Offset: 0x890200
    void ReadModel(::Normal::Realtime::Serialization::IStreamReader* value, ::Normal::Realtime::Serialization::StreamContext context, bool didForceWriteFullModel);
    // public Normal.Realtime.Serialization.ReadBuffer ReadModelAsReadBuffer()
    // Offset: 0x890170
    ::Normal::Realtime::Serialization::ReadBuffer* ReadModelAsReadBuffer();
    // public System.UInt32 ReadCollectionTypeID()
    // Offset: 0x217390
    uint ReadCollectionTypeID();
    // public System.Void ReadCollection(Normal.Realtime.Serialization.IStreamReader value, Normal.Realtime.Serialization.StreamContext context, System.Boolean didForceWriteFullModel)
    // Offset: 0x88FF60
    void ReadCollection(::Normal::Realtime::Serialization::IStreamReader* value, ::Normal::Realtime::Serialization::StreamContext context, bool didForceWriteFullModel);
    // public System.Void SkipProperty()
    // Offset: 0x890A70
    void SkipProperty();
    // private System.Void SkipRawVarint32()
    // Offset: 0x890F60
    void SkipRawVarint32();
    // private System.Void SkipRawFloat()
    // Offset: 0x890DA0
    void SkipRawFloat();
    // private System.Void SkipRawDouble()
    // Offset: 0x890D20
    void SkipRawDouble();
    // private System.Void SkipRawLengthDelimited()
    // Offset: 0x890E20
    void SkipRawLengthDelimited();
    // private System.Void ReadRawPropertyKey(out System.UInt32 propertyID, out Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType wireType)
    // Offset: 0x88BAF0
    void ReadRawPropertyKey(ByRef<uint> propertyID, ByRef<::Normal::Realtime::Serialization::Serialization::WireType> wireType);
    // private System.Byte[] ReadRawBytes()
    // Offset: 0x890540
    ::ArrayW<uint8_t> ReadRawBytes();
    // private System.Int32 ReadRawBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 maxLength)
    // Offset: 0x8905F0
    int ReadRawBytes(::ArrayW<uint8_t> buffer, int offset, int maxLength);
    // private System.String ReadRawString()
    // Offset: 0x890870
    ::StringW ReadRawString();
    // private System.Void ReadRawModel(Normal.Realtime.Serialization.IStreamReader model, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x8906D0
    void ReadRawModel(::Normal::Realtime::Serialization::IStreamReader* model, ::Normal::Realtime::Serialization::StreamContext context);
    // public System.Void StartLengthDelimitedStruct()
    // Offset: 0x891080
    void StartLengthDelimitedStruct();
    // public System.Single ReadStructFloat()
    // Offset: 0x890A50
    float ReadStructFloat();
    // public System.Void FinishLengthDelimitedStruct()
    // Offset: 0x88FAF0
    void FinishLengthDelimitedStruct();
  }; // Normal.Realtime.Serialization.ReadStream
  #pragma pack(pop)
  static check_size<sizeof(ReadStream), 40 + sizeof(uint)> __Normal_Realtime_Serialization_ReadStreamSizeCheck;
  static_assert(sizeof(ReadStream) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ConvertUIntToNegativeOneInt
// Il2CppName: ConvertUIntToNegativeOneInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint)>(&Normal::Realtime::Serialization::ReadStream::ConvertUIntToNegativeOneInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ConvertUIntToNegativeOneInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::Vector2FromBytes
// Il2CppName: Vector2FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::ArrayW<uint8_t>, int)>(&Normal::Realtime::Serialization::ReadStream::Vector2FromBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "Vector2FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::Vector3FromBytes
// Il2CppName: Vector3FromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::ArrayW<uint8_t>, int)>(&Normal::Realtime::Serialization::ReadStream::Vector3FromBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "Vector3FromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::QuaternionFromBytes
// Il2CppName: QuaternionFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::ArrayW<uint8_t>, int)>(&Normal::Realtime::Serialization::ReadStream::QuaternionFromBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "QuaternionFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ColorFromBytes
// Il2CppName: ColorFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::ArrayW<uint8_t>, int)>(&Normal::Realtime::Serialization::ReadStream::ColorFromBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ColorFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::BytesToFloat
// Il2CppName: BytesToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::ArrayW<uint8_t>, ByRef<int>)>(&Normal::Realtime::Serialization::ReadStream::BytesToFloat)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "BytesToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::DeserializeModel
// Il2CppName: DeserializeModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)(::Normal::Realtime::Serialization::IStreamReader*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::Serialization::ReadStream::DeserializeModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "IStreamReader")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "DeserializeModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadNextPropertyID
// Il2CppName: ReadNextPropertyID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::Serialization::ReadStream::*)(ByRef<uint>)>(&Normal::Realtime::Serialization::ReadStream::ReadNextPropertyID)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadNextPropertyID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadNextPropertyID
// Il2CppName: ReadNextPropertyID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::Serialization::ReadStream::*)(ByRef<uint>, ByRef<::Normal::Realtime::Serialization::Serialization::WireType>)>(&Normal::Realtime::Serialization::ReadStream::ReadNextPropertyID)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* wireType = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "Serialization/WireType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadNextPropertyID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID, wireType});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadNull
// Il2CppName: ReadNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadBool
// Il2CppName: ReadBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadBool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadSByte
// Il2CppName: ReadSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadSByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadUShort
// Il2CppName: ReadUShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadUShort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadUShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadShort
// Il2CppName: ReadShort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadShort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadShort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadUInt
// Il2CppName: ReadUInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadUInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadUInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadInt
// Il2CppName: ReadInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadVarint32
// Il2CppName: ReadVarint32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadVarint32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadVarint32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadFloat
// Il2CppName: ReadFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadDouble
// Il2CppName: ReadDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadBytes
// Il2CppName: ReadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadBytes
// Il2CppName: ReadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::ReadStream::*)(::ArrayW<uint8_t>, int, int)>(&Normal::Realtime::Serialization::ReadStream::ReadBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, maxLength});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadString
// Il2CppName: ReadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadModel
// Il2CppName: ReadModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)(::Normal::Realtime::Serialization::IStreamReader*, ::Normal::Realtime::Serialization::StreamContext, bool)>(&Normal::Realtime::Serialization::ReadStream::ReadModel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "IStreamReader")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    static auto* didForceWriteFullModel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, context, didForceWriteFullModel});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadModelAsReadBuffer
// Il2CppName: ReadModelAsReadBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::ReadBuffer* (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadModelAsReadBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadModelAsReadBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadCollectionTypeID
// Il2CppName: ReadCollectionTypeID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadCollectionTypeID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadCollectionTypeID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadCollection
// Il2CppName: ReadCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)(::Normal::Realtime::Serialization::IStreamReader*, ::Normal::Realtime::Serialization::StreamContext, bool)>(&Normal::Realtime::Serialization::ReadStream::ReadCollection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "IStreamReader")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    static auto* didForceWriteFullModel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, context, didForceWriteFullModel});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::SkipProperty
// Il2CppName: SkipProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::SkipProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "SkipProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::SkipRawVarint32
// Il2CppName: SkipRawVarint32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::SkipRawVarint32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "SkipRawVarint32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::SkipRawFloat
// Il2CppName: SkipRawFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::SkipRawFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "SkipRawFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::SkipRawDouble
// Il2CppName: SkipRawDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::SkipRawDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "SkipRawDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::SkipRawLengthDelimited
// Il2CppName: SkipRawLengthDelimited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::SkipRawLengthDelimited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "SkipRawLengthDelimited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadRawPropertyKey
// Il2CppName: ReadRawPropertyKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)(ByRef<uint>, ByRef<::Normal::Realtime::Serialization::Serialization::WireType>)>(&Normal::Realtime::Serialization::ReadStream::ReadRawPropertyKey)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* wireType = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "Serialization/WireType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadRawPropertyKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID, wireType});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadRawBytes
// Il2CppName: ReadRawBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadRawBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadRawBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadRawBytes
// Il2CppName: ReadRawBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::ReadStream::*)(::ArrayW<uint8_t>, int, int)>(&Normal::Realtime::Serialization::ReadStream::ReadRawBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadRawBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, maxLength});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadRawString
// Il2CppName: ReadRawString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadRawString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadRawString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadRawModel
// Il2CppName: ReadRawModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)(::Normal::Realtime::Serialization::IStreamReader*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::Serialization::ReadStream::ReadRawModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "IStreamReader")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadRawModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::StartLengthDelimitedStruct
// Il2CppName: StartLengthDelimitedStruct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::StartLengthDelimitedStruct)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "StartLengthDelimitedStruct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::ReadStructFloat
// Il2CppName: ReadStructFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::ReadStructFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "ReadStructFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::ReadStream::FinishLengthDelimitedStruct
// Il2CppName: FinishLengthDelimitedStruct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::ReadStream::*)()>(&Normal::Realtime::Serialization::ReadStream::FinishLengthDelimitedStruct)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::ReadStream*), "FinishLengthDelimitedStruct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
