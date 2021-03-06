// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Serialization.Serialization
#include "Normal/Realtime/Serialization/Serialization.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: ReadBuffer
  class ReadBuffer;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StringWriter
  class StringWriter;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: BufferAnalyzer
  class BufferAnalyzer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::BufferAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::BufferAnalyzer*, "Normal.Realtime.Serialization", "BufferAnalyzer");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.BufferAnalyzer
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferAnalyzer : public ::Il2CppObject {
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
    // private System.IO.StringWriter _stringWriter
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::StringWriter* stringWriter;
    // Field size check
    static_assert(sizeof(::System::IO::StringWriter*) == 0x8);
    // private System.Int32 _currentModelEndPosition
    // Size: 0x4
    // Offset: 0x28
    int currentModelEndPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 _lastCollectionTypeID
    // Size: 0x4
    // Offset: 0x2C
    uint lastCollectionTypeID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public System.UInt32 recursionLevelLimit
    [[deprecated("Use field access instead!")]] uint& dyn_recursionLevelLimit();
    // Get instance field reference: private System.UInt32 _recursionLevel
    [[deprecated("Use field access instead!")]] uint& dyn__recursionLevel();
    // Get instance field reference: private Normal.Realtime.Serialization.ReadBuffer _buffer
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Serialization::ReadBuffer*& dyn__buffer();
    // Get instance field reference: private System.IO.StringWriter _stringWriter
    [[deprecated("Use field access instead!")]] ::System::IO::StringWriter*& dyn__stringWriter();
    // Get instance field reference: private System.Int32 _currentModelEndPosition
    [[deprecated("Use field access instead!")]] int& dyn__currentModelEndPosition();
    // Get instance field reference: private System.UInt32 _lastCollectionTypeID
    [[deprecated("Use field access instead!")]] uint& dyn__lastCollectionTypeID();
    // public System.Void .ctor()
    // Offset: 0x88BB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferAnalyzer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::BufferAnalyzer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferAnalyzer*, creationType>()));
    }
    // public System.String AnalyzeBuffer(Normal.Realtime.Serialization.ReadBuffer buffer, System.Boolean readUpdateID, System.Boolean readPacketTime)
    // Offset: 0x88A3E0
    ::StringW AnalyzeBuffer(::Normal::Realtime::Serialization::ReadBuffer* buffer, bool readUpdateID, bool readPacketTime);
    // private System.Void ReadRawModel()
    // Offset: 0x88B920
    void ReadRawModel();
    // private System.Boolean ReadNextPropertyID()
    // Offset: 0x88A670
    bool ReadNextPropertyID();
    // private System.Void ReadRawPropertyKey(out System.UInt32 propertyID, out Normal.Realtime.Serialization.Serialization/Normal.Realtime.Serialization.WireType wireType)
    // Offset: 0x88BAF0
    void ReadRawPropertyKey(ByRef<uint> propertyID, ByRef<::Normal::Realtime::Serialization::Serialization::WireType> wireType);
    // static private System.String GetIndentStringForLevel(System.Int32 level)
    // Offset: 0x88A5F0
    static ::StringW GetIndentStringForLevel(int level);
  }; // Normal.Realtime.Serialization.BufferAnalyzer
  #pragma pack(pop)
  static check_size<sizeof(BufferAnalyzer), 44 + sizeof(uint)> __Normal_Realtime_Serialization_BufferAnalyzerSizeCheck;
  static_assert(sizeof(BufferAnalyzer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::BufferAnalyzer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::BufferAnalyzer::AnalyzeBuffer
// Il2CppName: AnalyzeBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::Serialization::BufferAnalyzer::*)(::Normal::Realtime::Serialization::ReadBuffer*, bool, bool)>(&Normal::Realtime::Serialization::BufferAnalyzer::AnalyzeBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadBuffer")->byval_arg;
    static auto* readUpdateID = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* readPacketTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::BufferAnalyzer*), "AnalyzeBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, readUpdateID, readPacketTime});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::BufferAnalyzer::ReadRawModel
// Il2CppName: ReadRawModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::BufferAnalyzer::*)()>(&Normal::Realtime::Serialization::BufferAnalyzer::ReadRawModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::BufferAnalyzer*), "ReadRawModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::BufferAnalyzer::ReadNextPropertyID
// Il2CppName: ReadNextPropertyID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::Serialization::BufferAnalyzer::*)()>(&Normal::Realtime::Serialization::BufferAnalyzer::ReadNextPropertyID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::BufferAnalyzer*), "ReadNextPropertyID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::BufferAnalyzer::ReadRawPropertyKey
// Il2CppName: ReadRawPropertyKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::BufferAnalyzer::*)(ByRef<uint>, ByRef<::Normal::Realtime::Serialization::Serialization::WireType>)>(&Normal::Realtime::Serialization::BufferAnalyzer::ReadRawPropertyKey)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* wireType = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "Serialization/WireType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::BufferAnalyzer*), "ReadRawPropertyKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID, wireType});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::BufferAnalyzer::GetIndentStringForLevel
// Il2CppName: GetIndentStringForLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&Normal::Realtime::Serialization::BufferAnalyzer::GetIndentStringForLevel)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::BufferAnalyzer*), "GetIndentStringForLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
