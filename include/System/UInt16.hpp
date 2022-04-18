// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: UInt16
  struct UInt16;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UInt16, "System", "UInt16");
// Type namespace: System
namespace System {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.UInt16
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D8FB0
  // [CLSCompliantAttribute] Offset: D8FB0
  struct UInt16/*, public ::System::ValueType, public ::System::IComparable_1<uint16_t>, public ::System::IEquatable_1<uint16_t>, public ::System::IComparable, public ::System::IConvertible, public ::System::IFormattable*/ {
    public:
    public:
    // private System.UInt16 m_value
    // Size: 0x2
    // Offset: 0x0
    uint16_t m_value;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: UInt16
    constexpr UInt16(uint16_t m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<uint16_t>
    operator ::System::IComparable_1<uint16_t>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<uint16_t>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<uint16_t>
    operator ::System::IEquatable_1<uint16_t>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<uint16_t>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IConvertible
    operator ::System::IConvertible() noexcept {
      return *reinterpret_cast<::System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return m_value;
    }
    // static field const value: static public System.UInt16 MaxValue
    static constexpr const uint16_t MaxValue = 65535u;
    // Get static field: static public System.UInt16 MaxValue
    static uint16_t _get_MaxValue();
    // Set static field: static public System.UInt16 MaxValue
    static void _set_MaxValue(uint16_t value);
    // static field const value: static public System.UInt16 MinValue
    static constexpr const uint16_t MinValue = 0u;
    // Get static field: static public System.UInt16 MinValue
    static uint16_t _get_MinValue();
    // Set static field: static public System.UInt16 MinValue
    static void _set_MinValue(uint16_t value);
    // Get instance field reference: private System.UInt16 m_value
    [[deprecated("Use field access instead!")]] uint16_t& dyn_m_value();
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x609E70
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.UInt16 value)
    // Offset: 0x574700
    int CompareTo(uint16_t value);
    // public System.Boolean Equals(System.UInt16 obj)
    // Offset: 0x323B50
    bool Equals(uint16_t obj);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0x60A7A0
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.String ToString(System.String format)
    // Offset: 0x60A730
    ::StringW ToString(::StringW format);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0x60A7D0
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // static public System.UInt16 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x60A0C0
    static uint16_t Parse(::StringW s, ::System::IFormatProvider* provider);
    // static public System.UInt16 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x60A0F0
    static uint16_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);
    // static private System.UInt16 Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x609FD0
    static uint16_t Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info);
    // public System.TypeCode GetTypeCode()
    // Offset: 0x325B80
    ::System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0x60A140
    bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0x60A200
    ::Il2CppChar System_IConvertible_ToChar(::System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0x60A520
    int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0x60A1A0
    uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0x60A400
    int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0x217820
    uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0x60A460
    int System_IConvertible_ToInt32(::System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0x60A670
    uint System_IConvertible_ToUInt32(::System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0x60A4C0
    int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0x60A6D0
    uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0x60A580
    float System_IConvertible_ToSingle(::System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0x60A3A0
    double System_IConvertible_ToDouble(::System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0x60A330
    ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0x60A260
    ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0x60A5E0
    ::Il2CppObject* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x609F40
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x217820
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x60A770
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.UInt16
  #pragma pack(pop)
  static check_size<sizeof(UInt16), 0 + sizeof(uint16_t)> __System_UInt16SizeCheck;
  static_assert(sizeof(UInt16) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UInt16::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UInt16::*)(::Il2CppObject*)>(&System::UInt16::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::UInt16::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UInt16::*)(uint16_t)>(&System::UInt16::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::UInt16::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UInt16::*)(uint16_t)>(&System::UInt16::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::UInt16::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UInt16::*)(::StringW)>(&System::UInt16::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::UInt16::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UInt16::*)(::StringW, ::System::IFormatProvider*)>(&System::UInt16::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::StringW, ::System::IFormatProvider*)>(&System::UInt16::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&System::UInt16::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::StringW, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&System::UInt16::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, info});
  }
};
// Writing MetadataGetter for method: System::UInt16::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (System::UInt16::*)()>(&System::UInt16::GetTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToBoolean)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToChar)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToSByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToUInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToUInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToUInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToSingle)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToDouble)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToDecimal)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::UInt16::*)(::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToDateTime)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::UInt16::*)(::System::Type*, ::System::IFormatProvider*)>(&System::UInt16::System_IConvertible_ToType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, provider});
  }
};
// Writing MetadataGetter for method: System::UInt16::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UInt16::*)(::Il2CppObject*)>(&System::UInt16::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::UInt16::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UInt16::*)()>(&System::UInt16::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UInt16::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UInt16::*)()>(&System::UInt16::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UInt16), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
