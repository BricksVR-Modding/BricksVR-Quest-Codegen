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
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: Hand
  struct Hand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Hand, "UnityEngine.XR", "Hand");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Hand
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: 6EE5DC
  // [RequiredByNativeCodeAttribute] Offset: 6EE5DC
  // [NativeHeaderAttribute] Offset: 6EE5DC
  // [NativeHeaderAttribute] Offset: 6EE5DC
  // [StaticAccessorAttribute] Offset: 6EE5DC
  // [NativeHeaderAttribute] Offset: 6EE5DC
  struct Hand/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::XR::Hand>*/ {
    public:
    public:
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt32 m_FeatureIndex
    // Size: 0x4
    // Offset: 0x8
    uint m_FeatureIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: Hand
    constexpr Hand(uint64_t m_DeviceId_ = {}, uint m_FeatureIndex_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_FeatureIndex{m_FeatureIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::XR::Hand>
    operator ::System::IEquatable_1<::UnityEngine::XR::Hand>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::Hand>*>(this);
    }
    // Get instance field reference: private System.UInt64 m_DeviceId
    uint64_t& dyn_m_DeviceId();
    // Get instance field reference: private System.UInt32 m_FeatureIndex
    uint& dyn_m_FeatureIndex();
    // System.UInt64 get_deviceId()
    // Offset: 0x101E8A4
    uint64_t get_deviceId();
    // System.UInt32 get_featureIndex()
    // Offset: 0x101E8AC
    uint get_featureIndex();
    // public System.Boolean Equals(UnityEngine.XR.Hand other)
    // Offset: 0x101E94C
    bool Equals(::UnityEngine::XR::Hand other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x101E8B4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x101E970
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.Hand
  #pragma pack(pop)
  static check_size<sizeof(Hand), 8 + sizeof(uint)> __UnityEngine_XR_HandSizeCheck;
  static_assert(sizeof(Hand) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Hand::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (UnityEngine::XR::Hand::*)()>(&UnityEngine::XR::Hand::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Hand), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Hand::get_featureIndex
// Il2CppName: get_featureIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::XR::Hand::*)()>(&UnityEngine::XR::Hand::get_featureIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Hand), "get_featureIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Hand::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Hand::*)(::UnityEngine::XR::Hand)>(&UnityEngine::XR::Hand::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "Hand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Hand), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Hand::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Hand::*)(::Il2CppObject*)>(&UnityEngine::XR::Hand::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Hand), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Hand::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Hand::*)()>(&UnityEngine::XR::Hand::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Hand), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
