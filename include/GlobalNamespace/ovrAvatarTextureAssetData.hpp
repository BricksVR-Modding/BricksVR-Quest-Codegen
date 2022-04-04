// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarTextureFormat
#include "GlobalNamespace/ovrAvatarTextureFormat.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarTextureAssetData
  struct ovrAvatarTextureAssetData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarTextureAssetData, "", "ovrAvatarTextureAssetData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarTextureAssetData
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarTextureAssetData/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarTextureFormat format
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarTextureFormat format;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTextureFormat) == 0x4);
    // public System.UInt32 sizeX
    // Size: 0x4
    // Offset: 0x4
    uint sizeX;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 sizeY
    // Size: 0x4
    // Offset: 0x8
    uint sizeY;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 mipCount
    // Size: 0x4
    // Offset: 0xC
    uint mipCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt64 textureDataSize
    // Size: 0x8
    // Offset: 0x10
    uint64_t textureDataSize;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.IntPtr textureData
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr textureData;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarTextureAssetData
    constexpr ovrAvatarTextureAssetData(::GlobalNamespace::ovrAvatarTextureFormat format_ = {}, uint sizeX_ = {}, uint sizeY_ = {}, uint mipCount_ = {}, uint64_t textureDataSize_ = {}, ::System::IntPtr textureData_ = {}) noexcept : format{format_}, sizeX{sizeX_}, sizeY{sizeY_}, mipCount{mipCount_}, textureDataSize{textureDataSize_}, textureData{textureData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarTextureFormat format
    [[deprecated]] ::GlobalNamespace::ovrAvatarTextureFormat& dyn_format();
    // Get instance field reference: public System.UInt32 sizeX
    [[deprecated]] uint& dyn_sizeX();
    // Get instance field reference: public System.UInt32 sizeY
    [[deprecated]] uint& dyn_sizeY();
    // Get instance field reference: public System.UInt32 mipCount
    [[deprecated]] uint& dyn_mipCount();
    // Get instance field reference: public System.UInt64 textureDataSize
    [[deprecated]] uint64_t& dyn_textureDataSize();
    // Get instance field reference: public System.IntPtr textureData
    [[deprecated]] ::System::IntPtr& dyn_textureData();
  }; // ovrAvatarTextureAssetData
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarTextureAssetData), 24 + sizeof(::System::IntPtr)> __GlobalNamespace_ovrAvatarTextureAssetDataSizeCheck;
  static_assert(sizeof(ovrAvatarTextureAssetData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
