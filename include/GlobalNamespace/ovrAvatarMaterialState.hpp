// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: ovrAvatarMaterialMaskType
#include "GlobalNamespace/ovrAvatarMaterialMaskType.hpp"
// Including type: ovrAvatarMaterialLayerSampleMode
#include "GlobalNamespace/ovrAvatarMaterialLayerSampleMode.hpp"
// Including type: ovrAvatarMaterialLayerState
#include "GlobalNamespace/ovrAvatarMaterialLayerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarMaterialState
  struct ovrAvatarMaterialState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarMaterialState, "", "ovrAvatarMaterialState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarMaterialState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarMaterialState/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector4 baseColor
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Vector4 baseColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public ovrAvatarMaterialMaskType baseMaskType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::ovrAvatarMaterialMaskType baseMaskType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialMaskType) == 0x4);
    // public UnityEngine.Vector4 baseMaskParameters
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Vector4 baseMaskParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 baseMaskAxis
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Vector4 baseMaskAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public ovrAvatarMaterialLayerSampleMode sampleMode
    // Size: 0x4
    // Offset: 0x34
    ::GlobalNamespace::ovrAvatarMaterialLayerSampleMode sampleMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialLayerSampleMode) == 0x4);
    // public System.UInt64 alphaMaskTextureID
    // Size: 0x8
    // Offset: 0x38
    uint64_t alphaMaskTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 alphaMaskScaleOffset
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Vector4 alphaMaskScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt64 normalMapTextureID
    // Size: 0x8
    // Offset: 0x50
    uint64_t normalMapTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 normalMapScaleOffset
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Vector4 normalMapScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt64 parallaxMapTextureID
    // Size: 0x8
    // Offset: 0x68
    uint64_t parallaxMapTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 parallaxMapScaleOffset
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Vector4 parallaxMapScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt64 roughnessMapTextureID
    // Size: 0x8
    // Offset: 0x80
    uint64_t roughnessMapTextureID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 roughnessMapScaleOffset
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Vector4 roughnessMapScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public System.UInt32 layerCount
    // Size: 0x4
    // Offset: 0x98
    uint layerCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: layerCount and: layers
    char __padding13[0x4] = {};
    // public ovrAvatarMaterialLayerState[] layers
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::GlobalNamespace::ovrAvatarMaterialLayerState> layers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ovrAvatarMaterialLayerState>) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarMaterialState
    constexpr ovrAvatarMaterialState(::UnityEngine::Vector4 baseColor_ = {}, ::GlobalNamespace::ovrAvatarMaterialMaskType baseMaskType_ = {}, ::UnityEngine::Vector4 baseMaskParameters_ = {}, ::UnityEngine::Vector4 baseMaskAxis_ = {}, ::GlobalNamespace::ovrAvatarMaterialLayerSampleMode sampleMode_ = {}, uint64_t alphaMaskTextureID_ = {}, ::UnityEngine::Vector4 alphaMaskScaleOffset_ = {}, uint64_t normalMapTextureID_ = {}, ::UnityEngine::Vector4 normalMapScaleOffset_ = {}, uint64_t parallaxMapTextureID_ = {}, ::UnityEngine::Vector4 parallaxMapScaleOffset_ = {}, uint64_t roughnessMapTextureID_ = {}, ::UnityEngine::Vector4 roughnessMapScaleOffset_ = {}, uint layerCount_ = {}, ::ArrayW<::GlobalNamespace::ovrAvatarMaterialLayerState> layers_ = ::ArrayW<::GlobalNamespace::ovrAvatarMaterialLayerState>(static_cast<void*>(nullptr))) noexcept : baseColor{baseColor_}, baseMaskType{baseMaskType_}, baseMaskParameters{baseMaskParameters_}, baseMaskAxis{baseMaskAxis_}, sampleMode{sampleMode_}, alphaMaskTextureID{alphaMaskTextureID_}, alphaMaskScaleOffset{alphaMaskScaleOffset_}, normalMapTextureID{normalMapTextureID_}, normalMapScaleOffset{normalMapScaleOffset_}, parallaxMapTextureID{parallaxMapTextureID_}, parallaxMapScaleOffset{parallaxMapScaleOffset_}, roughnessMapTextureID{roughnessMapTextureID_}, roughnessMapScaleOffset{roughnessMapScaleOffset_}, layerCount{layerCount_}, layers{layers_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector4 baseColor
    ::UnityEngine::Vector4& dyn_baseColor();
    // Get instance field reference: public ovrAvatarMaterialMaskType baseMaskType
    ::GlobalNamespace::ovrAvatarMaterialMaskType& dyn_baseMaskType();
    // Get instance field reference: public UnityEngine.Vector4 baseMaskParameters
    ::UnityEngine::Vector4& dyn_baseMaskParameters();
    // Get instance field reference: public UnityEngine.Vector4 baseMaskAxis
    ::UnityEngine::Vector4& dyn_baseMaskAxis();
    // Get instance field reference: public ovrAvatarMaterialLayerSampleMode sampleMode
    ::GlobalNamespace::ovrAvatarMaterialLayerSampleMode& dyn_sampleMode();
    // Get instance field reference: public System.UInt64 alphaMaskTextureID
    uint64_t& dyn_alphaMaskTextureID();
    // Get instance field reference: public UnityEngine.Vector4 alphaMaskScaleOffset
    ::UnityEngine::Vector4& dyn_alphaMaskScaleOffset();
    // Get instance field reference: public System.UInt64 normalMapTextureID
    uint64_t& dyn_normalMapTextureID();
    // Get instance field reference: public UnityEngine.Vector4 normalMapScaleOffset
    ::UnityEngine::Vector4& dyn_normalMapScaleOffset();
    // Get instance field reference: public System.UInt64 parallaxMapTextureID
    uint64_t& dyn_parallaxMapTextureID();
    // Get instance field reference: public UnityEngine.Vector4 parallaxMapScaleOffset
    ::UnityEngine::Vector4& dyn_parallaxMapScaleOffset();
    // Get instance field reference: public System.UInt64 roughnessMapTextureID
    uint64_t& dyn_roughnessMapTextureID();
    // Get instance field reference: public UnityEngine.Vector4 roughnessMapScaleOffset
    ::UnityEngine::Vector4& dyn_roughnessMapScaleOffset();
    // Get instance field reference: public System.UInt32 layerCount
    uint& dyn_layerCount();
    // Get instance field reference: public ovrAvatarMaterialLayerState[] layers
    ::ArrayW<::GlobalNamespace::ovrAvatarMaterialLayerState>& dyn_layers();
    // static private System.Boolean VectorEquals(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x114FAB0
    static bool VectorEquals(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x114FAE0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x114FE74
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // ovrAvatarMaterialState
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarMaterialState), 160 + sizeof(::ArrayW<::GlobalNamespace::ovrAvatarMaterialLayerState>)> __GlobalNamespace_ovrAvatarMaterialStateSizeCheck;
  static_assert(sizeof(ovrAvatarMaterialState) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarMaterialState::VectorEquals
// Il2CppName: VectorEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&GlobalNamespace::ovrAvatarMaterialState::VectorEquals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarMaterialState), "VectorEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarMaterialState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ovrAvatarMaterialState::*)(::Il2CppObject*)>(&GlobalNamespace::ovrAvatarMaterialState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarMaterialState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarMaterialState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ovrAvatarMaterialState::*)()>(&GlobalNamespace::ovrAvatarMaterialState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarMaterialState), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
