// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: InflightUpdateNotifier
  class InflightUpdateNotifier;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: IConfirmedProperty
  class IConfirmedProperty;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: InflightUpdateSubscription
  struct InflightUpdateSubscription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::InflightUpdateSubscription, "Normal.Realtime.Serialization", "InflightUpdateSubscription");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Serialization.InflightUpdateSubscription
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct InflightUpdateSubscription/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly Normal.Realtime.Serialization.InflightUpdateNotifier notifier
    // Size: 0x8
    // Offset: 0x0
    ::Normal::Realtime::Serialization::InflightUpdateNotifier* notifier;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::InflightUpdateNotifier*) == 0x8);
    // public readonly Normal.Realtime.IConfirmedProperty property
    // Size: 0x8
    // Offset: 0x8
    ::Normal::Realtime::IConfirmedProperty* property;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::IConfirmedProperty*) == 0x8);
    // public readonly System.UInt32 updateID
    // Size: 0x4
    // Offset: 0x10
    uint updateID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: InflightUpdateSubscription
    constexpr InflightUpdateSubscription(::Normal::Realtime::Serialization::InflightUpdateNotifier* notifier_ = {}, ::Normal::Realtime::IConfirmedProperty* property_ = {}, uint updateID_ = {}) noexcept : notifier{notifier_}, property{property_}, updateID{updateID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly Normal.Realtime.Serialization.InflightUpdateNotifier notifier
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Serialization::InflightUpdateNotifier*& dyn_notifier();
    // Get instance field reference: public readonly Normal.Realtime.IConfirmedProperty property
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::IConfirmedProperty*& dyn_property();
    // Get instance field reference: public readonly System.UInt32 updateID
    [[deprecated("Use field access instead!")]] uint& dyn_updateID();
    // public System.Void .ctor(Normal.Realtime.Serialization.InflightUpdateNotifier notifier, Normal.Realtime.IConfirmedProperty property, System.UInt32 updateID)
    // Offset: 0x88CC00
    // ABORTED: conflicts with another method.  InflightUpdateSubscription(::Normal::Realtime::Serialization::InflightUpdateNotifier* notifier, ::Normal::Realtime::IConfirmedProperty* property, uint updateID);
    // public System.Void Cancel()
    // Offset: 0x88CAF0
    void Cancel();
  }; // Normal.Realtime.Serialization.InflightUpdateSubscription
  #pragma pack(pop)
  static check_size<sizeof(InflightUpdateSubscription), 16 + sizeof(uint)> __Normal_Realtime_Serialization_InflightUpdateSubscriptionSizeCheck;
  static_assert(sizeof(InflightUpdateSubscription) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::InflightUpdateSubscription::InflightUpdateSubscription
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::InflightUpdateSubscription::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::InflightUpdateSubscription::*)()>(&Normal::Realtime::Serialization::InflightUpdateSubscription::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::InflightUpdateSubscription), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
