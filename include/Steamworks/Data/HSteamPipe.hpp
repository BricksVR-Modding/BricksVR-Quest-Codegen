// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: HSteamPipe
  struct HSteamPipe;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HSteamPipe, "Steamworks.Data", "HSteamPipe");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HSteamPipe
  // [TokenAttribute] Offset: FFFFFFFF
  struct HSteamPipe/*, public ::System::ValueType, public ::System::IEquatable_1<::Steamworks::Data::HSteamPipe>, public ::System::IComparable_1<::Steamworks::Data::HSteamPipe>*/ {
    public:
    public:
    // public System.Int32 Value
    // Size: 0x4
    // Offset: 0x0
    int Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HSteamPipe
    constexpr HSteamPipe(int Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::Data::HSteamPipe>
    operator ::System::IEquatable_1<::Steamworks::Data::HSteamPipe>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::Data::HSteamPipe>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Steamworks::Data::HSteamPipe>
    operator ::System::IComparable_1<::Steamworks::Data::HSteamPipe>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Steamworks::Data::HSteamPipe>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.Int32 Value
    int& dyn_Value();
    // public System.Boolean Equals(Steamworks.Data.HSteamPipe p)
    // Offset: 0xA53C8C
    bool Equals(::Steamworks::Data::HSteamPipe p);
    // public System.Int32 CompareTo(Steamworks.Data.HSteamPipe other)
    // Offset: 0xA53CB4
    int CompareTo(::Steamworks::Data::HSteamPipe other);
    // public override System.String ToString()
    // Offset: 0xA53BEC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA53BF4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0xA53BFC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
  }; // Steamworks.Data.HSteamPipe
  #pragma pack(pop)
  static check_size<sizeof(HSteamPipe), 0 + sizeof(int)> __Steamworks_Data_HSteamPipeSizeCheck;
  static_assert(sizeof(HSteamPipe) == 0x4);
  // static public System.Boolean op_Equality(Steamworks.Data.HSteamPipe a, Steamworks.Data.HSteamPipe b)
  // Offset: 0xA53C9C
  bool operator ==(const ::Steamworks::Data::HSteamPipe& a, const ::Steamworks::Data::HSteamPipe& b);
  // static public System.Boolean op_Inequality(Steamworks.Data.HSteamPipe a, Steamworks.Data.HSteamPipe b)
  // Offset: 0xA53CA8
  bool operator !=(const ::Steamworks::Data::HSteamPipe& a, const ::Steamworks::Data::HSteamPipe& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::HSteamPipe::*)(::Steamworks::Data::HSteamPipe)>(&Steamworks::Data::HSteamPipe::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "HSteamPipe")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamPipe), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::HSteamPipe::*)(::Steamworks::Data::HSteamPipe)>(&Steamworks::Data::HSteamPipe::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "HSteamPipe")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamPipe), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::HSteamPipe::*)()>(&Steamworks::Data::HSteamPipe::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamPipe), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::HSteamPipe::*)()>(&Steamworks::Data::HSteamPipe::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamPipe), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::HSteamPipe::*)(::Il2CppObject*)>(&Steamworks::Data::HSteamPipe::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamPipe), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Steamworks::Data::HSteamPipe::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
