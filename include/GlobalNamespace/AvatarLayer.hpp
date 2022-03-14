// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarLayer
  class AvatarLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarLayer*, "", "AvatarLayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: AvatarLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarLayer : public ::Il2CppObject {
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
    // public System.Int32 layerIndex
    // Size: 0x4
    // Offset: 0x10
    int layerIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return layerIndex;
    }
    // Get instance field reference: public System.Int32 layerIndex
    int& dyn_layerIndex();
    // public System.Void .ctor()
    // Offset: 0x10C88E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarLayer*, creationType>()));
    }
  }; // AvatarLayer
  #pragma pack(pop)
  static check_size<sizeof(AvatarLayer), 16 + sizeof(int)> __GlobalNamespace_AvatarLayerSizeCheck;
  static_assert(sizeof(AvatarLayer) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
