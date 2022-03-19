// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: FontAssetCreationSettings
  struct FontAssetCreationSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontAssetCreationSettings, "TMPro", "FontAssetCreationSettings");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x55
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.FontAssetCreationSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontAssetCreationSettings/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String sourceFontFileName
    // Size: 0x8
    // Offset: 0x0
    ::StringW sourceFontFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String sourceFontFileGUID
    // Size: 0x8
    // Offset: 0x8
    ::StringW sourceFontFileGUID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 pointSizeSamplingMode
    // Size: 0x4
    // Offset: 0x10
    int pointSizeSamplingMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 pointSize
    // Size: 0x4
    // Offset: 0x14
    int pointSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 padding
    // Size: 0x4
    // Offset: 0x18
    int padding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 packingMode
    // Size: 0x4
    // Offset: 0x1C
    int packingMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 atlasWidth
    // Size: 0x4
    // Offset: 0x20
    int atlasWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 atlasHeight
    // Size: 0x4
    // Offset: 0x24
    int atlasHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 characterSetSelectionMode
    // Size: 0x4
    // Offset: 0x28
    int characterSetSelectionMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: characterSetSelectionMode and: characterSequence
    char __padding8[0x4] = {};
    // public System.String characterSequence
    // Size: 0x8
    // Offset: 0x30
    ::StringW characterSequence;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String referencedFontAssetGUID
    // Size: 0x8
    // Offset: 0x38
    ::StringW referencedFontAssetGUID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String referencedTextAssetGUID
    // Size: 0x8
    // Offset: 0x40
    ::StringW referencedTextAssetGUID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 fontStyle
    // Size: 0x4
    // Offset: 0x48
    int fontStyle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single fontStyleModifier
    // Size: 0x4
    // Offset: 0x4C
    float fontStyleModifier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 renderMode
    // Size: 0x4
    // Offset: 0x50
    int renderMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean includeFontFeatures
    // Size: 0x1
    // Offset: 0x54
    bool includeFontFeatures;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: FontAssetCreationSettings
    constexpr FontAssetCreationSettings(::StringW sourceFontFileName_ = {}, ::StringW sourceFontFileGUID_ = {}, int pointSizeSamplingMode_ = {}, int pointSize_ = {}, int padding_ = {}, int packingMode_ = {}, int atlasWidth_ = {}, int atlasHeight_ = {}, int characterSetSelectionMode_ = {}, ::StringW characterSequence_ = {}, ::StringW referencedFontAssetGUID_ = {}, ::StringW referencedTextAssetGUID_ = {}, int fontStyle_ = {}, float fontStyleModifier_ = {}, int renderMode_ = {}, bool includeFontFeatures_ = {}) noexcept : sourceFontFileName{sourceFontFileName_}, sourceFontFileGUID{sourceFontFileGUID_}, pointSizeSamplingMode{pointSizeSamplingMode_}, pointSize{pointSize_}, padding{padding_}, packingMode{packingMode_}, atlasWidth{atlasWidth_}, atlasHeight{atlasHeight_}, characterSetSelectionMode{characterSetSelectionMode_}, characterSequence{characterSequence_}, referencedFontAssetGUID{referencedFontAssetGUID_}, referencedTextAssetGUID{referencedTextAssetGUID_}, fontStyle{fontStyle_}, fontStyleModifier{fontStyleModifier_}, renderMode{renderMode_}, includeFontFeatures{includeFontFeatures_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String sourceFontFileName
    ::StringW& dyn_sourceFontFileName();
    // Get instance field reference: public System.String sourceFontFileGUID
    ::StringW& dyn_sourceFontFileGUID();
    // Get instance field reference: public System.Int32 pointSizeSamplingMode
    int& dyn_pointSizeSamplingMode();
    // Get instance field reference: public System.Int32 pointSize
    int& dyn_pointSize();
    // Get instance field reference: public System.Int32 padding
    int& dyn_padding();
    // Get instance field reference: public System.Int32 packingMode
    int& dyn_packingMode();
    // Get instance field reference: public System.Int32 atlasWidth
    int& dyn_atlasWidth();
    // Get instance field reference: public System.Int32 atlasHeight
    int& dyn_atlasHeight();
    // Get instance field reference: public System.Int32 characterSetSelectionMode
    int& dyn_characterSetSelectionMode();
    // Get instance field reference: public System.String characterSequence
    ::StringW& dyn_characterSequence();
    // Get instance field reference: public System.String referencedFontAssetGUID
    ::StringW& dyn_referencedFontAssetGUID();
    // Get instance field reference: public System.String referencedTextAssetGUID
    ::StringW& dyn_referencedTextAssetGUID();
    // Get instance field reference: public System.Int32 fontStyle
    int& dyn_fontStyle();
    // Get instance field reference: public System.Single fontStyleModifier
    float& dyn_fontStyleModifier();
    // Get instance field reference: public System.Int32 renderMode
    int& dyn_renderMode();
    // Get instance field reference: public System.Boolean includeFontFeatures
    bool& dyn_includeFontFeatures();
    // System.Void .ctor(System.String sourceFontFileGUID, System.Int32 pointSize, System.Int32 pointSizeSamplingMode, System.Int32 padding, System.Int32 packingMode, System.Int32 atlasWidth, System.Int32 atlasHeight, System.Int32 characterSelectionMode, System.String characterSet, System.Int32 renderMode)
    // Offset: 0x807848
    FontAssetCreationSettings(::StringW sourceFontFileGUID, int pointSize, int pointSizeSamplingMode, int padding, int packingMode, int atlasWidth, int atlasHeight, int characterSelectionMode, ::StringW characterSet, int renderMode);
  }; // TMPro.FontAssetCreationSettings
  #pragma pack(pop)
  static check_size<sizeof(FontAssetCreationSettings), 84 + sizeof(bool)> __TMPro_FontAssetCreationSettingsSizeCheck;
  static_assert(sizeof(FontAssetCreationSettings) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::FontAssetCreationSettings::FontAssetCreationSettings
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
