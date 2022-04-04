// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncVoipAttenuationValue
  class NetSyncVoipAttenuationValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncVoipAttenuationValue);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncVoipAttenuationValue*, "Oculus.Platform.Models", "NetSyncVoipAttenuationValue");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetSyncVoipAttenuationValue
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSyncVoipAttenuationValue : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single Decibels
    // Size: 0x4
    // Offset: 0x10
    float Decibels;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single Distance
    // Size: 0x4
    // Offset: 0x14
    float Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single Decibels
    [[deprecated]] float& dyn_Decibels();
    // Get instance field reference: public readonly System.Single Distance
    [[deprecated]] float& dyn_Distance();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x84AFE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncVoipAttenuationValue* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::NetSyncVoipAttenuationValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncVoipAttenuationValue*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.NetSyncVoipAttenuationValue
  #pragma pack(pop)
  static check_size<sizeof(NetSyncVoipAttenuationValue), 20 + sizeof(float)> __Oculus_Platform_Models_NetSyncVoipAttenuationValueSizeCheck;
  static_assert(sizeof(NetSyncVoipAttenuationValue) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::NetSyncVoipAttenuationValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
