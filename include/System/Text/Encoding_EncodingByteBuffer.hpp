// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::Encoding::EncodingByteBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding::EncodingByteBuffer*, "System.Text", "Encoding/EncodingByteBuffer");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding/System.Text.EncodingByteBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class Encoding::EncodingByteBuffer : public ::Il2CppObject {
    public:
    public:
    // private System.Byte* bytes
    // Size: 0x8
    // Offset: 0x10
    uint8_t* bytes;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* byteStart
    // Size: 0x8
    // Offset: 0x18
    uint8_t* byteStart;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* byteEnd
    // Size: 0x8
    // Offset: 0x20
    uint8_t* byteEnd;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Char* chars
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppChar* chars;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charStart
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppChar* charStart;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charEnd
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Int32 byteCountResult
    // Size: 0x4
    // Offset: 0x40
    int byteCountResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: byteCountResult and: enc
    char __padding6[0x4] = {};
    // private System.Text.Encoding enc
    // Size: 0x8
    // Offset: 0x48
    ::System::Text::Encoding* enc;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.EncoderNLS encoder
    // Size: 0x8
    // Offset: 0x50
    ::System::Text::EncoderNLS* encoder;
    // Field size check
    static_assert(sizeof(::System::Text::EncoderNLS*) == 0x8);
    // System.Text.EncoderFallbackBuffer fallbackBuffer
    // Size: 0x8
    // Offset: 0x58
    ::System::Text::EncoderFallbackBuffer* fallbackBuffer;
    // Field size check
    static_assert(sizeof(::System::Text::EncoderFallbackBuffer*) == 0x8);
    public:
    // Get instance field reference: private System.Byte* bytes
    [[deprecated]] uint8_t*& dyn_bytes();
    // Get instance field reference: private System.Byte* byteStart
    [[deprecated]] uint8_t*& dyn_byteStart();
    // Get instance field reference: private System.Byte* byteEnd
    [[deprecated]] uint8_t*& dyn_byteEnd();
    // Get instance field reference: private System.Char* chars
    [[deprecated]] ::Il2CppChar*& dyn_chars();
    // Get instance field reference: private System.Char* charStart
    [[deprecated]] ::Il2CppChar*& dyn_charStart();
    // Get instance field reference: private System.Char* charEnd
    [[deprecated]] ::Il2CppChar*& dyn_charEnd();
    // Get instance field reference: private System.Int32 byteCountResult
    [[deprecated]] int& dyn_byteCountResult();
    // Get instance field reference: private System.Text.Encoding enc
    [[deprecated]] ::System::Text::Encoding*& dyn_enc();
    // Get instance field reference: private System.Text.EncoderNLS encoder
    [[deprecated]] ::System::Text::EncoderNLS*& dyn_encoder();
    // Get instance field reference: System.Text.EncoderFallbackBuffer fallbackBuffer
    [[deprecated]] ::System::Text::EncoderFallbackBuffer*& dyn_fallbackBuffer();
    // System.Boolean get_MoreData()
    // Offset: 0x586E20
    bool get_MoreData();
    // System.Int32 get_CharsUsed()
    // Offset: 0x586E00
    int get_CharsUsed();
    // System.Int32 get_Count()
    // Offset: 0x417E90
    int get_Count();
    // System.Void .ctor(System.Text.Encoding inEncoding, System.Text.EncoderNLS inEncoder, System.Byte* inByteStart, System.Int32 inByteCount, System.Char* inCharStart, System.Int32 inCharCount)
    // Offset: 0x586B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::EncodingByteBuffer* New_ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, uint8_t* inByteStart, int inByteCount, ::Il2CppChar* inCharStart, int inCharCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::Encoding::EncodingByteBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::EncodingByteBuffer*, creationType>(inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount)));
    }
    // System.Boolean AddByte(System.Byte b, System.Int32 moreBytesExpected)
    // Offset: 0x5868A0
    bool AddByte(uint8_t b, int moreBytesExpected);
    // System.Boolean AddByte(System.Byte b1)
    // Offset: 0x5867E0
    bool AddByte(uint8_t b1);
    // System.Boolean AddByte(System.Byte b1, System.Byte b2)
    // Offset: 0x5867F0
    bool AddByte(uint8_t b1, uint8_t b2);
    // System.Boolean AddByte(System.Byte b1, System.Byte b2, System.Int32 moreBytesExpected)
    // Offset: 0x586840
    bool AddByte(uint8_t b1, uint8_t b2, int moreBytesExpected);
    // System.Void MovePrevious(System.Boolean bThrow)
    // Offset: 0x586A20
    void MovePrevious(bool bThrow);
    // System.Char GetNextChar()
    // Offset: 0x5869B0
    ::Il2CppChar GetNextChar();
  }; // System.Text.Encoding/System.Text.EncodingByteBuffer
  #pragma pack(pop)
  static check_size<sizeof(Encoding::EncodingByteBuffer), 88 + sizeof(::System::Text::EncoderFallbackBuffer*)> __System_Text_Encoding_EncodingByteBufferSizeCheck;
  static_assert(sizeof(Encoding::EncodingByteBuffer) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::get_MoreData
// Il2CppName: get_MoreData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingByteBuffer::*)()>(&System::Text::Encoding::EncodingByteBuffer::get_MoreData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "get_MoreData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::get_CharsUsed
// Il2CppName: get_CharsUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoding::EncodingByteBuffer::*)()>(&System::Text::Encoding::EncodingByteBuffer::get_CharsUsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "get_CharsUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoding::EncodingByteBuffer::*)()>(&System::Text::Encoding::EncodingByteBuffer::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::AddByte
// Il2CppName: AddByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingByteBuffer::*)(uint8_t, int)>(&System::Text::Encoding::EncodingByteBuffer::AddByte)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* moreBytesExpected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "AddByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, moreBytesExpected});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::AddByte
// Il2CppName: AddByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingByteBuffer::*)(uint8_t)>(&System::Text::Encoding::EncodingByteBuffer::AddByte)> {
  static const MethodInfo* get() {
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "AddByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b1});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::AddByte
// Il2CppName: AddByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingByteBuffer::*)(uint8_t, uint8_t)>(&System::Text::Encoding::EncodingByteBuffer::AddByte)> {
  static const MethodInfo* get() {
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* b2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "AddByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b1, b2});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::AddByte
// Il2CppName: AddByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingByteBuffer::*)(uint8_t, uint8_t, int)>(&System::Text::Encoding::EncodingByteBuffer::AddByte)> {
  static const MethodInfo* get() {
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* b2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* moreBytesExpected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "AddByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b1, b2, moreBytesExpected});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::MovePrevious
// Il2CppName: MovePrevious
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::EncodingByteBuffer::*)(bool)>(&System::Text::Encoding::EncodingByteBuffer::MovePrevious)> {
  static const MethodInfo* get() {
    static auto* bThrow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "MovePrevious", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bThrow});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingByteBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::Encoding::EncodingByteBuffer::*)()>(&System::Text::Encoding::EncodingByteBuffer::GetNextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingByteBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
