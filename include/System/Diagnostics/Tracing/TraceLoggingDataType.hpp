// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataType
  struct TraceLoggingDataType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::TraceLoggingDataType, "System.Diagnostics.Tracing", "TraceLoggingDataType");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingDataType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TraceLoggingDataType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TraceLoggingDataType
    constexpr TraceLoggingDataType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Nil
    static constexpr const int Nil = 0;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Nil
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Nil();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Nil
    static void _set_Nil(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16String
    static constexpr const int Utf16String = 1;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16String
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Utf16String();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16String
    static void _set_Utf16String(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsString
    static constexpr const int MbcsString = 2;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsString
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_MbcsString();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsString
    static void _set_MbcsString(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Int8
    static constexpr const int Int8 = 3;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int8
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Int8();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int8
    static void _set_Int8(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt8
    static constexpr const int UInt8 = 4;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt8
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_UInt8();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt8
    static void _set_UInt8(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Int16
    static constexpr const int Int16 = 5;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int16
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Int16();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int16
    static void _set_Int16(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt16
    static constexpr const int UInt16 = 6;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt16
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_UInt16();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt16
    static void _set_UInt16(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Int32
    static constexpr const int Int32 = 7;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int32
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Int32();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int32
    static void _set_Int32(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt32
    static constexpr const int UInt32 = 8;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt32
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_UInt32();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt32
    static void _set_UInt32(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Int64
    static constexpr const int Int64 = 9;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int64
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Int64();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Int64
    static void _set_Int64(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt64
    static constexpr const int UInt64 = 10;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt64
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_UInt64();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType UInt64
    static void _set_UInt64(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Float
    static constexpr const int Float = 11;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Float
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Float();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Float
    static void _set_Float(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Double
    static constexpr const int Double = 12;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Double
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Double();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Double
    static void _set_Double(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Boolean32
    static constexpr const int Boolean32 = 13;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Boolean32
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Boolean32();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Boolean32
    static void _set_Boolean32(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Binary
    static constexpr const int Binary = 14;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Binary
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Binary();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Binary
    static void _set_Binary(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Guid
    static constexpr const int Guid = 15;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Guid
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Guid();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Guid
    static void _set_Guid(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType FileTime
    static constexpr const int FileTime = 17;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType FileTime
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_FileTime();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType FileTime
    static void _set_FileTime(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType SystemTime
    static constexpr const int SystemTime = 18;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType SystemTime
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_SystemTime();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType SystemTime
    static void _set_SystemTime(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt32
    static constexpr const int HexInt32 = 20;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt32
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_HexInt32();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt32
    static void _set_HexInt32(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt64
    static constexpr const int HexInt64 = 21;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt64
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_HexInt64();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt64
    static void _set_HexInt64(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16String
    static constexpr const int CountedUtf16String = 22;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16String
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_CountedUtf16String();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16String
    static void _set_CountedUtf16String(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsString
    static constexpr const int CountedMbcsString = 23;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsString
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_CountedMbcsString();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsString
    static void _set_CountedMbcsString(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Struct
    static constexpr const int Struct = 24;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Struct
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Struct();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Struct
    static void _set_Struct(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Char16
    static constexpr const int Char16 = 518;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Char16
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Char16();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Char16
    static void _set_Char16(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Char8
    static constexpr const int Char8 = 516;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Char8
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Char8();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Char8
    static void _set_Char8(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Boolean8
    static constexpr const int Boolean8 = 772;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Boolean8
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Boolean8();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Boolean8
    static void _set_Boolean8(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt8
    static constexpr const int HexInt8 = 1028;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt8
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_HexInt8();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt8
    static void _set_HexInt8(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt16
    static constexpr const int HexInt16 = 1030;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt16
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_HexInt16();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HexInt16
    static void _set_HexInt16(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16Xml
    static constexpr const int Utf16Xml = 2817;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16Xml
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Utf16Xml();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16Xml
    static void _set_Utf16Xml(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsXml
    static constexpr const int MbcsXml = 2818;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsXml
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_MbcsXml();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsXml
    static void _set_MbcsXml(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16Xml
    static constexpr const int CountedUtf16Xml = 2838;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16Xml
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_CountedUtf16Xml();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16Xml
    static void _set_CountedUtf16Xml(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsXml
    static constexpr const int CountedMbcsXml = 2839;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsXml
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_CountedMbcsXml();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsXml
    static void _set_CountedMbcsXml(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16Json
    static constexpr const int Utf16Json = 3073;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16Json
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_Utf16Json();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType Utf16Json
    static void _set_Utf16Json(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsJson
    static constexpr const int MbcsJson = 3074;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsJson
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_MbcsJson();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType MbcsJson
    static void _set_MbcsJson(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16Json
    static constexpr const int CountedUtf16Json = 3094;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16Json
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_CountedUtf16Json();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedUtf16Json
    static void _set_CountedUtf16Json(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsJson
    static constexpr const int CountedMbcsJson = 3095;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsJson
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_CountedMbcsJson();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType CountedMbcsJson
    static void _set_CountedMbcsJson(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static field const value: static public System.Diagnostics.Tracing.TraceLoggingDataType HResult
    static constexpr const int HResult = 3847;
    // Get static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HResult
    static ::System::Diagnostics::Tracing::TraceLoggingDataType _get_HResult();
    // Set static field: static public System.Diagnostics.Tracing.TraceLoggingDataType HResult
    static void _set_HResult(::System::Diagnostics::Tracing::TraceLoggingDataType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Diagnostics.Tracing.TraceLoggingDataType
  #pragma pack(pop)
  static check_size<sizeof(TraceLoggingDataType), 0 + sizeof(int)> __System_Diagnostics_Tracing_TraceLoggingDataTypeSizeCheck;
  static_assert(sizeof(TraceLoggingDataType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
