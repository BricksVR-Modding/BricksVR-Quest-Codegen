// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: OVR
namespace OVR {
  // Forward declaring type: MinMaxAttribute
  class MinMaxAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::MinMaxAttribute);
DEFINE_IL2CPP_ARG_TYPE(::OVR::MinMaxAttribute*, "OVR", "MinMaxAttribute");
// Type namespace: OVR
namespace OVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVR.MinMaxAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class MinMaxAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Single minDefaultVal
    // Size: 0x4
    // Offset: 0x10
    float minDefaultVal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxDefaultVal
    // Size: 0x4
    // Offset: 0x14
    float maxDefaultVal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single min
    // Size: 0x4
    // Offset: 0x18
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x1C
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single minDefaultVal
    float& dyn_minDefaultVal();
    // Get instance field reference: public System.Single maxDefaultVal
    float& dyn_maxDefaultVal();
    // Get instance field reference: public System.Single min
    float& dyn_min();
    // Get instance field reference: public System.Single max
    float& dyn_max();
    // public System.Void .ctor(System.Single minDefaultVal, System.Single maxDefaultVal, System.Single min, System.Single max)
    // Offset: 0x10DE294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MinMaxAttribute* New_ctor(float minDefaultVal, float maxDefaultVal, float min, float max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::MinMaxAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MinMaxAttribute*, creationType>(minDefaultVal, maxDefaultVal, min, max)));
    }
  }; // OVR.MinMaxAttribute
  #pragma pack(pop)
  static check_size<sizeof(MinMaxAttribute), 28 + sizeof(float)> __OVR_MinMaxAttributeSizeCheck;
  static_assert(sizeof(MinMaxAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::MinMaxAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
