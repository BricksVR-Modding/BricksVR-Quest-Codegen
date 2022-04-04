// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
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
  // Forward declaring type: InputHandle_t
  struct InputHandle_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::InputHandle_t, "Steamworks.Data", "InputHandle_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.InputHandle_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputHandle_t/*, public ::System::ValueType, public ::System::IEquatable_1<::Steamworks::Data::InputHandle_t>, public ::System::IComparable_1<::Steamworks::Data::InputHandle_t>*/ {
    public:
    public:
    // public System.UInt64 Value
    // Size: 0x8
    // Offset: 0x0
    uint64_t Value;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: InputHandle_t
    constexpr InputHandle_t(uint64_t Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::Data::InputHandle_t>
    operator ::System::IEquatable_1<::Steamworks::Data::InputHandle_t>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::Data::InputHandle_t>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Steamworks::Data::InputHandle_t>
    operator ::System::IComparable_1<::Steamworks::Data::InputHandle_t>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Steamworks::Data::InputHandle_t>*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.UInt64 Value
    [[deprecated]] uint64_t& dyn_Value();
    // public System.Boolean Equals(Steamworks.Data.InputHandle_t p)
    // Offset: 0x462380
    bool Equals(::Steamworks::Data::InputHandle_t p);
    // public System.Int32 CompareTo(Steamworks.Data.InputHandle_t other)
    // Offset: 0x462370
    int CompareTo(::Steamworks::Data::InputHandle_t other);
    // public override System.String ToString()
    // Offset: 0x462410
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x462400
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x462500
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
  }; // Steamworks.Data.InputHandle_t
  #pragma pack(pop)
  static check_size<sizeof(InputHandle_t), 0 + sizeof(uint64_t)> __Steamworks_Data_InputHandle_tSizeCheck;
  static_assert(sizeof(InputHandle_t) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::InputHandle_t::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::InputHandle_t::*)(::Steamworks::Data::InputHandle_t)>(&Steamworks::Data::InputHandle_t::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "InputHandle_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InputHandle_t), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InputHandle_t::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::InputHandle_t::*)(::Steamworks::Data::InputHandle_t)>(&Steamworks::Data::InputHandle_t::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "InputHandle_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InputHandle_t), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InputHandle_t::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::InputHandle_t::*)()>(&Steamworks::Data::InputHandle_t::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InputHandle_t), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InputHandle_t::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::InputHandle_t::*)()>(&Steamworks::Data::InputHandle_t::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InputHandle_t), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InputHandle_t::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::InputHandle_t::*)(::Il2CppObject*)>(&Steamworks::Data::InputHandle_t::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InputHandle_t), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
