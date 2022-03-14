// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarAsset
#include "GlobalNamespace/OvrAvatarAsset.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarAssetTexture
  class OvrAvatarAssetTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarAssetTexture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarAssetTexture*, "", "OvrAvatarAssetTexture");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarAssetTexture
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarAssetTexture : public ::GlobalNamespace::OvrAvatarAsset {
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
    // public UnityEngine.Texture2D texture
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // static field const value: static private System.Int32 ASTCHeaderSize
    static constexpr const int ASTCHeaderSize = 16;
    // Get static field: static private System.Int32 ASTCHeaderSize
    static int _get_ASTCHeaderSize();
    // Set static field: static private System.Int32 ASTCHeaderSize
    static void _set_ASTCHeaderSize(int value);
    // Get instance field reference: public UnityEngine.Texture2D texture
    ::UnityEngine::Texture2D*& dyn_texture();
    // public System.Void .ctor(System.UInt64 _assetId, System.IntPtr asset)
    // Offset: 0x1125DF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarAssetTexture* New_ctor(uint64_t _assetId, ::System::IntPtr asset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarAssetTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarAssetTexture*, creationType>(_assetId, asset)));
    }
  }; // OvrAvatarAssetTexture
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarAssetTexture), 24 + sizeof(::UnityEngine::Texture2D*)> __GlobalNamespace_OvrAvatarAssetTextureSizeCheck;
  static_assert(sizeof(OvrAvatarAssetTexture) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
