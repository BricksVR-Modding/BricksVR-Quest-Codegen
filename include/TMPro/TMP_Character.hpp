// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_TextElement
#include "TMPro/TMP_TextElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Character);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Character*, "TMPro", "TMP_Character");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Character
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Character : public ::TMPro::TMP_TextElement {
    public:
    // public System.Void .ctor(System.UInt32 unicode, UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x772730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Character* New_ctor(uint unicode, ::UnityEngine::TextCore::Glyph* glyph) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Character::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Character*, creationType>(unicode, glyph)));
    }
    // public System.Void .ctor(System.UInt32 unicode, TMPro.TMP_FontAsset fontAsset, UnityEngine.TextCore.Glyph glyph)
    // Offset: 0x7726B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Character* New_ctor(uint unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Character::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Character*, creationType>(unicode, fontAsset, glyph)));
    }
    // System.Void .ctor(System.UInt32 unicode, System.UInt32 glyphIndex)
    // Offset: 0x7727E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Character* New_ctor(uint unicode, uint glyphIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Character::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Character*, creationType>(unicode, glyphIndex)));
    }
    // public System.Void .ctor()
    // Offset: 0x7727B0
    // Implemented from: TMPro.TMP_TextElement
    // Base method: System.Void TMP_TextElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Character* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Character::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Character*, creationType>()));
    }
  }; // TMPro.TMP_Character
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Character::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Character::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Character::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Character::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
