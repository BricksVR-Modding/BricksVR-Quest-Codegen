// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MediaContentType
  struct MediaContentType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MediaContentType, "Oculus.Platform", "MediaContentType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MediaContentType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MediaContentType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MediaContentType
    constexpr MediaContentType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xC0650
    // static field const value: static public Oculus.Platform.MediaContentType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.MediaContentType Unknown
    static ::Oculus::Platform::MediaContentType _get_Unknown();
    // Set static field: static public Oculus.Platform.MediaContentType Unknown
    static void _set_Unknown(::Oculus::Platform::MediaContentType value);
    // [DescriptionAttribute] Offset: 0xC54F0
    // static field const value: static public Oculus.Platform.MediaContentType Photo
    static constexpr const int Photo = 1;
    // Get static field: static public Oculus.Platform.MediaContentType Photo
    static ::Oculus::Platform::MediaContentType _get_Photo();
    // Set static field: static public Oculus.Platform.MediaContentType Photo
    static void _set_Photo(::Oculus::Platform::MediaContentType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Oculus.Platform.MediaContentType
  #pragma pack(pop)
  static check_size<sizeof(MediaContentType), 0 + sizeof(int)> __Oculus_Platform_MediaContentTypeSizeCheck;
  static_assert(sizeof(MediaContentType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
