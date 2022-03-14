// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Enum);
DEFINE_IL2CPP_ARG_TYPE(::System::Enum*, "System", "Enum");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Enum
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C694C
  class Enum/*, public ::System::ValueType, public ::System::IComparable, public ::System::IConvertible, public ::System::IFormattable*/ {
    public:
    // Nested type: ::System::Enum::ValuesAndNames
    class ValuesAndNames;
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
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
    // Get static field: static private readonly System.Char[] enumSeperatorCharArray
    static ::ArrayW<::Il2CppChar> _get_enumSeperatorCharArray();
    // Set static field: static private readonly System.Char[] enumSeperatorCharArray
    static void _set_enumSeperatorCharArray(::ArrayW<::Il2CppChar> value);
    // static field const value: static private System.String enumSeperator
    static constexpr const char* enumSeperator = ", ";
    // Get static field: static private System.String enumSeperator
    static ::StringW _get_enumSeperator();
    // Set static field: static private System.String enumSeperator
    static void _set_enumSeperator(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0xB04264
    static void _cctor();
    // static private System.Enum/System.ValuesAndNames GetCachedValuesAndNames(System.RuntimeType enumType, System.Boolean getNames)
    // Offset: 0xB02050
    static ::System::Enum::ValuesAndNames* GetCachedValuesAndNames(::System::RuntimeType* enumType, bool getNames);
    // static private System.String InternalFormattedHexString(System.Object value)
    // Offset: 0xB021DC
    static ::StringW InternalFormattedHexString(::Il2CppObject* value);
    // static private System.String InternalFormat(System.RuntimeType eT, System.Object value)
    // Offset: 0xB025E8
    static ::StringW InternalFormat(::System::RuntimeType* eT, ::Il2CppObject* value);
    // static private System.String InternalFlagsFormat(System.RuntimeType eT, System.Object value)
    // Offset: 0xB027E8
    static ::StringW InternalFlagsFormat(::System::RuntimeType* eT, ::Il2CppObject* value);
    // static System.UInt64 ToUInt64(System.Object value)
    // Offset: 0xB029E0
    static uint64_t ToUInt64(::Il2CppObject* value);
    // static private System.Int32 InternalCompareTo(System.Object o1, System.Object o2)
    // Offset: 0xB02BD0
    static int InternalCompareTo(::Il2CppObject* o1, ::Il2CppObject* o2);
    // static System.RuntimeType InternalGetUnderlyingType(System.RuntimeType enumType)
    // Offset: 0xB02BD4
    static ::System::RuntimeType* InternalGetUnderlyingType(::System::RuntimeType* enumType);
    // static private System.Boolean GetEnumValuesAndNames(System.RuntimeType enumType, out System.UInt64[] values, out System.String[] names)
    // Offset: 0xB021A0
    static bool GetEnumValuesAndNames(::System::RuntimeType* enumType, ByRef<::ArrayW<uint64_t>> values, ByRef<::ArrayW<::StringW>> names);
    // static public System.Type GetUnderlyingType(System.Type enumType)
    // Offset: 0xB02BD8
    static ::System::Type* GetUnderlyingType(::System::Type* enumType);
    // static System.UInt64[] InternalGetValues(System.RuntimeType enumType)
    // Offset: 0xB02CA0
    static ::ArrayW<uint64_t> InternalGetValues(::System::RuntimeType* enumType);
    // static public System.String GetName(System.Type enumType, System.Object value)
    // Offset: 0xB02710
    static ::StringW GetName(::System::Type* enumType, ::Il2CppObject* value);
    // static public System.String[] GetNames(System.Type enumType)
    // Offset: 0xB02D18
    static ::ArrayW<::StringW> GetNames(::System::Type* enumType);
    // static System.String[] InternalGetNames(System.RuntimeType enumType)
    // Offset: 0xB02DE0
    static ::ArrayW<::StringW> InternalGetNames(::System::RuntimeType* enumType);
    // static public System.Boolean IsDefined(System.Type enumType, System.Object value)
    // Offset: 0xB02E58
    static bool IsDefined(::System::Type* enumType, ::Il2CppObject* value);
    // private System.Object get_value()
    // Offset: 0xB02F30
    ::Il2CppObject* get_value();
    // System.Object GetValue()
    // Offset: 0xB02F34
    ::Il2CppObject* GetValue();
    // private System.Int32 get_hashcode()
    // Offset: 0xB02F38
    int get_hashcode();
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xB03018
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // public System.Int32 CompareTo(System.Object target)
    // Offset: 0xB03244
    int CompareTo(::Il2CppObject* target);
    // public System.String ToString(System.String format)
    // Offset: 0xB0301C
    ::StringW ToString(::StringW format);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xB03470
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xB0347C
    ::System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xB03844
    bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xB03910
    ::Il2CppChar System_IConvertible_ToChar(::System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xB039B8
    int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xB03A60
    uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xB03B08
    int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xB03BB0
    uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xB03C58
    int System_IConvertible_ToInt32(::System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xB03D00
    uint System_IConvertible_ToUInt32(::System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xB03DA8
    int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xB03E50
    uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xB03EF8
    float System_IConvertible_ToSingle(::System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xB03FA0
    double System_IConvertible_ToDouble(::System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xB04048
    ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xB040F0
    ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xB041DC
    ::Il2CppObject* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);
    // protected System.Void .ctor()
    // Offset: 0xB0425C
    // Implemented from: System.ValueType
    // Base method: System.Void ValueType::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enum* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Enum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enum*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xB02F3C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xB02F44
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xB02F48
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Enum
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Enum::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Enum::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Enum::GetCachedValuesAndNames
// Il2CppName: GetCachedValuesAndNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Enum::ValuesAndNames* (*)(::System::RuntimeType*, bool)>(&System::Enum::GetCachedValuesAndNames)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* getNames = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetCachedValuesAndNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, getNames});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalFormattedHexString
// Il2CppName: InternalFormattedHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&System::Enum::InternalFormattedHexString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalFormattedHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalFormat
// Il2CppName: InternalFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::RuntimeType*, ::Il2CppObject*)>(&System::Enum::InternalFormat)> {
  static const MethodInfo* get() {
    static auto* eT = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eT, value});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalFlagsFormat
// Il2CppName: InternalFlagsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::RuntimeType*, ::Il2CppObject*)>(&System::Enum::InternalFlagsFormat)> {
  static const MethodInfo* get() {
    static auto* eT = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalFlagsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eT, value});
  }
};
// Writing MetadataGetter for method: System::Enum::ToUInt64
// Il2CppName: ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Il2CppObject*)>(&System::Enum::ToUInt64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalCompareTo
// Il2CppName: InternalCompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Enum::InternalCompareTo)> {
  static const MethodInfo* get() {
    static auto* o1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* o2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalCompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o1, o2});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalGetUnderlyingType
// Il2CppName: InternalGetUnderlyingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (*)(::System::RuntimeType*)>(&System::Enum::InternalGetUnderlyingType)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalGetUnderlyingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: System::Enum::GetEnumValuesAndNames
// Il2CppName: GetEnumValuesAndNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ByRef<::ArrayW<uint64_t>>, ByRef<::ArrayW<::StringW>>)>(&System::Enum::GetEnumValuesAndNames)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->this_arg;
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetEnumValuesAndNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, values, names});
  }
};
// Writing MetadataGetter for method: System::Enum::GetUnderlyingType
// Il2CppName: GetUnderlyingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&System::Enum::GetUnderlyingType)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetUnderlyingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalGetValues
// Il2CppName: InternalGetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint64_t> (*)(::System::RuntimeType*)>(&System::Enum::InternalGetValues)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalGetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: System::Enum::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*, ::Il2CppObject*)>(&System::Enum::GetName)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, value});
  }
};
// Writing MetadataGetter for method: System::Enum::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::System::Type*)>(&System::Enum::GetNames)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: System::Enum::InternalGetNames
// Il2CppName: InternalGetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::System::RuntimeType*)>(&System::Enum::InternalGetNames)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "InternalGetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType});
  }
};
// Writing MetadataGetter for method: System::Enum::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::Il2CppObject*)>(&System::Enum::IsDefined)> {
  static const MethodInfo* get() {
    static auto* enumType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumType, value});
  }
};
// Writing MetadataGetter for method: System::Enum::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Enum::*)()>(&System::Enum::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Enum::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Enum::*)()>(&System::Enum::GetValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Enum::get_hashcode
// Il2CppName: get_hashcode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Enum::*)()>(&System::Enum::get_hashcode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "get_hashcode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Enum::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Enum::*)(::StringW, ::System::IFormatProvider*)>(&System::Enum::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::Enum::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Enum::*)(::Il2CppObject*)>(&System::Enum::CompareTo)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Enum::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Enum::*)(::StringW)>(&System::Enum::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::Enum::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (System::Enum::*)()>(&System::Enum::GetTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToBoolean)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToChar)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToSByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToUInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToUInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToUInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToSingle)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToDouble)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToDecimal)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Enum::*)(::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToDateTime)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Enum::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Enum::*)(::System::Type*, ::System::IFormatProvider*)>(&System::Enum::System_IConvertible_ToType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, provider});
  }
};
// Writing MetadataGetter for method: System::Enum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Enum::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Enum::*)(::Il2CppObject*)>(&System::Enum::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Enum::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Enum::*)()>(&System::Enum::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Enum::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Enum::*)()>(&System::Enum::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
