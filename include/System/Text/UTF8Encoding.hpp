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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: UTF8Encoding
  class UTF8Encoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UTF8Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF8Encoding*, "System.Text", "UTF8Encoding");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF8Encoding
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class UTF8Encoding : public ::System::Text::Encoding {
    public:
    // Nested type: ::System::Text::UTF8Encoding::UTF8Encoder
    class UTF8Encoder;
    // Nested type: ::System::Text::UTF8Encoding::UTF8Decoder
    class UTF8Decoder;
    public:
    // private System.Boolean emitUTF8Identifier
    // Size: 0x1
    // Offset: 0x38
    bool emitUTF8Identifier;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isThrowException
    // Size: 0x1
    // Offset: 0x39
    bool isThrowException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean emitUTF8Identifier
    [[deprecated]] bool& dyn_emitUTF8Identifier();
    // Get instance field reference: private System.Boolean isThrowException
    [[deprecated]] bool& dyn_isThrowException();
    // public System.Void .ctor(System.Boolean encoderShouldEmitUTF8Identifier)
    // Offset: 0x358580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding* New_ctor(bool encoderShouldEmitUTF8Identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF8Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding*, creationType>(encoderShouldEmitUTF8Identifier)));
    }
    // public System.Void .ctor(System.Boolean encoderShouldEmitUTF8Identifier, System.Boolean throwOnInvalidBytes)
    // Offset: 0x358520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding* New_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF8Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding*, creationType>(encoderShouldEmitUTF8Identifier, throwOnInvalidBytes)));
    }
    // static private System.Int32 PtrDiff(System.Char* a, System.Char* b)
    // Offset: 0x358430
    static int PtrDiff(::Il2CppChar* a, ::Il2CppChar* b);
    // static private System.Int32 PtrDiff(System.Byte* a, System.Byte* b)
    // Offset: 0x358440
    static int PtrDiff(uint8_t* a, uint8_t* b);
    // static private System.Boolean InRange(System.Int32 ch, System.Int32 start, System.Int32 end)
    // Offset: 0x358420
    static bool InRange(int ch, int start, int end);
    // private System.Boolean FallbackInvalidByteSequence(ref System.Byte* pSrc, System.Int32 ch, System.Text.DecoderFallbackBuffer fallback, ref System.Char* pTarget)
    // Offset: 0x355000
    bool FallbackInvalidByteSequence(ByRef<uint8_t*> pSrc, int ch, ::System::Text::DecoderFallbackBuffer* fallback, ByRef<::Il2CppChar*> pTarget);
    // private System.Int32 FallbackInvalidByteSequence(System.Byte* pSrc, System.Int32 ch, System.Text.DecoderFallbackBuffer fallback)
    // Offset: 0x355080
    int FallbackInvalidByteSequence(uint8_t* pSrc, int ch, ::System::Text::DecoderFallbackBuffer* fallback);
    // private System.Byte[] GetBytesUnknown(ref System.Byte* pSrc, System.Int32 ch)
    // Offset: 0x3559E0
    ::ArrayW<uint8_t> GetBytesUnknown(ByRef<uint8_t*> pSrc, int ch);
    // public System.Void .ctor()
    // Offset: 0x3585B0
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF8Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding*, creationType>()));
    }
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x358450
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x3557B0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::ArrayW<::Il2CppChar> chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String chars)
    // Offset: 0x355940
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String chars)
    int GetByteCount(::StringW chars);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x3550D0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x3566F0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::StringW s, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x356490
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x356950
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x357040
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x356F40
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x357310
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x3571D0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x358290
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::StringW GetString(::ArrayW<uint8_t> bytes, int index, int count);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS baseEncoder)
    // Offset: 0x3551D0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS baseEncoder)
    int GetByteCount(::Il2CppChar* chars, int count, ::System::Text::EncoderNLS* baseEncoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS baseEncoder)
    // Offset: 0x355D10
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS baseEncoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, ::System::Text::EncoderNLS* baseEncoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x356A90
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    int GetCharCount(uint8_t* bytes, int count, ::System::Text::DecoderNLS* baseDecoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x357570
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, ::System::Text::DecoderNLS* baseDecoder);
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x357E80
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    ::System::Text::Decoder* GetDecoder();
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x357EE0
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    ::System::Text::Encoder* GetEncoder();
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x357FB0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x3580D0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Byte[] GetPreamble()
    // Offset: 0x3581F0
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetPreamble()
    ::ArrayW<uint8_t> GetPreamble();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x354F40
    // Implemented from: System.Text.Encoding
    // Base method: System.Boolean Encoding::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x357F40
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetHashCode()
    int GetHashCode();
  }; // System.Text.UTF8Encoding
  #pragma pack(pop)
  static check_size<sizeof(UTF8Encoding), 57 + sizeof(bool)> __System_Text_UTF8EncodingSizeCheck;
  static_assert(sizeof(UTF8Encoding) == 0x3A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF8Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF8Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF8Encoding::PtrDiff
// Il2CppName: PtrDiff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar*, ::Il2CppChar*)>(&System::Text::UTF8Encoding::PtrDiff)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* b = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "PtrDiff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::PtrDiff
// Il2CppName: PtrDiff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint8_t*, uint8_t*)>(&System::Text::UTF8Encoding::PtrDiff)> {
  static const MethodInfo* get() {
    static auto* a = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* b = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "PtrDiff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::InRange
// Il2CppName: InRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int)>(&System::Text::UTF8Encoding::InRange)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "InRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, start, end});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::FallbackInvalidByteSequence
// Il2CppName: FallbackInvalidByteSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF8Encoding::*)(ByRef<uint8_t*>, int, ::System::Text::DecoderFallbackBuffer*, ByRef<::Il2CppChar*>)>(&System::Text::UTF8Encoding::FallbackInvalidByteSequence)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderFallbackBuffer")->byval_arg;
    static auto* pTarget = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "FallbackInvalidByteSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, ch, fallback, pTarget});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::FallbackInvalidByteSequence
// Il2CppName: FallbackInvalidByteSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(uint8_t*, int, ::System::Text::DecoderFallbackBuffer*)>(&System::Text::UTF8Encoding::FallbackInvalidByteSequence)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderFallbackBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "FallbackInvalidByteSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, ch, fallback});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetBytesUnknown
// Il2CppName: GetBytesUnknown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::UTF8Encoding::*)(ByRef<uint8_t*>, int)>(&System::Text::UTF8Encoding::GetBytesUnknown)> {
  static const MethodInfo* get() {
    static auto* pSrc = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetBytesUnknown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSrc, ch});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF8Encoding::SetDefaultFallbacks
// Il2CppName: SetDefaultFallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF8Encoding::*)()>(&System::Text::UTF8Encoding::SetDefaultFallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "SetDefaultFallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Text::UTF8Encoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::StringW)>(&System::Text::UTF8Encoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::Il2CppChar*, int)>(&System::Text::UTF8Encoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::StringW, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::UTF8Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::UTF8Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::Il2CppChar*, int, uint8_t*, int)>(&System::Text::UTF8Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::UTF8Encoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(uint8_t*, int)>(&System::Text::UTF8Encoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Text::UTF8Encoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(uint8_t*, int, ::Il2CppChar*, int)>(&System::Text::UTF8Encoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::UTF8Encoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::UTF8Encoding::GetString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::Il2CppChar*, int, ::System::Text::EncoderNLS*)>(&System::Text::UTF8Encoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseEncoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count, baseEncoder});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(::Il2CppChar*, int, uint8_t*, int, ::System::Text::EncoderNLS*)>(&System::Text::UTF8Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseEncoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, baseEncoder});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(uint8_t*, int, ::System::Text::DecoderNLS*)>(&System::Text::UTF8Encoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseDecoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, baseDecoder});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(uint8_t*, int, ::Il2CppChar*, int, ::System::Text::DecoderNLS*)>(&System::Text::UTF8Encoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseDecoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, baseDecoder});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetDecoder
// Il2CppName: GetDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (System::Text::UTF8Encoding::*)()>(&System::Text::UTF8Encoding::GetDecoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetEncoder
// Il2CppName: GetEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (System::Text::UTF8Encoding::*)()>(&System::Text::UTF8Encoding::GetEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetMaxByteCount
// Il2CppName: GetMaxByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(int)>(&System::Text::UTF8Encoding::GetMaxByteCount)> {
  static const MethodInfo* get() {
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetMaxByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCount});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetMaxCharCount
// Il2CppName: GetMaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)(int)>(&System::Text::UTF8Encoding::GetMaxCharCount)> {
  static const MethodInfo* get() {
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetMaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetPreamble
// Il2CppName: GetPreamble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::UTF8Encoding::*)()>(&System::Text::UTF8Encoding::GetPreamble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetPreamble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF8Encoding::*)(::Il2CppObject*)>(&System::Text::UTF8Encoding::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::UTF8Encoding::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF8Encoding::*)()>(&System::Text::UTF8Encoding::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF8Encoding*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
