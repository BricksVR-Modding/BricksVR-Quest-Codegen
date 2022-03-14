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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputFeatureUsage`1<T>
  template<typename T>
  struct InputFeatureUsage_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::XR::InputFeatureUsage_1, "UnityEngine.XR", "InputFeatureUsage`1");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputFeatureUsage`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct InputFeatureUsage_1/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6EEF24
    // private System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: InputFeatureUsage_1
    constexpr InputFeatureUsage_1(::StringW name_ = {}) noexcept : name{name_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>
    operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String <name>k__BackingField
    ::StringW& dyn_$name$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputFeatureUsage_1::dyn_$name$k__BackingField");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<name>k__BackingField"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.String get_name()
    // Offset: 0xFFFFFFFF
    ::StringW get_name() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputFeatureUsage_1::get_name");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_name", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public System.Void set_name(System.String value)
    // Offset: 0xFFFFFFFF
    void set_name(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputFeatureUsage_1::set_name");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "set_name", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.String usageName)
    // Offset: 0xFFFFFFFF
    // ABORTED: conflicts with another method.  InputFeatureUsage_1(::StringW usageName)
    // public System.Boolean Equals(UnityEngine.XR.InputFeatureUsage`1<T> other)
    // Offset: 0xFFFFFFFF
    bool Equals(::UnityEngine::XR::InputFeatureUsage_1<T> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputFeatureUsage_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(other)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputFeatureUsage_1::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::InputFeatureUsage_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // UnityEngine.XR.InputFeatureUsage`1
  // Could not write size check! Type: UnityEngine.XR.InputFeatureUsage`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
