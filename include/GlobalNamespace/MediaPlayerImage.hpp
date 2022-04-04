// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ButtonType because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MediaPlayerImage
  class MediaPlayerImage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MediaPlayerImage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaPlayerImage*, "", "MediaPlayerImage");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x104
  #pragma pack(push, 1)
  // Autogenerated type: MediaPlayerImage
  // [TokenAttribute] Offset: FFFFFFFF
  class MediaPlayerImage : public ::UnityEngine::UI::Image {
    public:
    // Nested type: ::GlobalNamespace::MediaPlayerImage::ButtonType
    struct ButtonType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MediaPlayerImage/ButtonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ButtonType
      constexpr ButtonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MediaPlayerImage/ButtonType Play
      static constexpr const int Play = 0;
      // Get static field: static public MediaPlayerImage/ButtonType Play
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_Play();
      // Set static field: static public MediaPlayerImage/ButtonType Play
      static void _set_Play(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // static field const value: static public MediaPlayerImage/ButtonType Pause
      static constexpr const int Pause = 1;
      // Get static field: static public MediaPlayerImage/ButtonType Pause
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_Pause();
      // Set static field: static public MediaPlayerImage/ButtonType Pause
      static void _set_Pause(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // static field const value: static public MediaPlayerImage/ButtonType FastForward
      static constexpr const int FastForward = 2;
      // Get static field: static public MediaPlayerImage/ButtonType FastForward
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_FastForward();
      // Set static field: static public MediaPlayerImage/ButtonType FastForward
      static void _set_FastForward(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // static field const value: static public MediaPlayerImage/ButtonType Rewind
      static constexpr const int Rewind = 3;
      // Get static field: static public MediaPlayerImage/ButtonType Rewind
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_Rewind();
      // Set static field: static public MediaPlayerImage/ButtonType Rewind
      static void _set_Rewind(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // static field const value: static public MediaPlayerImage/ButtonType SkipForward
      static constexpr const int SkipForward = 4;
      // Get static field: static public MediaPlayerImage/ButtonType SkipForward
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_SkipForward();
      // Set static field: static public MediaPlayerImage/ButtonType SkipForward
      static void _set_SkipForward(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // static field const value: static public MediaPlayerImage/ButtonType SkipBack
      static constexpr const int SkipBack = 5;
      // Get static field: static public MediaPlayerImage/ButtonType SkipBack
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_SkipBack();
      // Set static field: static public MediaPlayerImage/ButtonType SkipBack
      static void _set_SkipBack(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // static field const value: static public MediaPlayerImage/ButtonType Stop
      static constexpr const int Stop = 6;
      // Get static field: static public MediaPlayerImage/ButtonType Stop
      static ::GlobalNamespace::MediaPlayerImage::ButtonType _get_Stop();
      // Set static field: static public MediaPlayerImage/ButtonType Stop
      static void _set_Stop(::GlobalNamespace::MediaPlayerImage::ButtonType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // MediaPlayerImage/ButtonType
    #pragma pack(pop)
    static check_size<sizeof(MediaPlayerImage::ButtonType), 0 + sizeof(int)> __GlobalNamespace_MediaPlayerImage_ButtonTypeSizeCheck;
    static_assert(sizeof(MediaPlayerImage::ButtonType) == 0x4);
    public:
    // private MediaPlayerImage/ButtonType m_ButtonType
    // Size: 0x4
    // Offset: 0x100
    ::GlobalNamespace::MediaPlayerImage::ButtonType m_ButtonType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MediaPlayerImage::ButtonType) == 0x4);
    public:
    // Get instance field reference: private MediaPlayerImage/ButtonType m_ButtonType
    [[deprecated]] ::GlobalNamespace::MediaPlayerImage::ButtonType& dyn_m_ButtonType();
    // public MediaPlayerImage/ButtonType get_buttonType()
    // Offset: 0x292770
    ::GlobalNamespace::MediaPlayerImage::ButtonType get_buttonType();
    // public System.Void set_buttonType(MediaPlayerImage/ButtonType value)
    // Offset: 0x292780
    void set_buttonType(::GlobalNamespace::MediaPlayerImage::ButtonType value);
    // public System.Void .ctor()
    // Offset: 0x292710
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaPlayerImage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MediaPlayerImage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaPlayerImage*, creationType>()));
    }
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x290CF0
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);
  }; // MediaPlayerImage
  #pragma pack(pop)
  static check_size<sizeof(MediaPlayerImage), 256 + sizeof(::GlobalNamespace::MediaPlayerImage::ButtonType)> __GlobalNamespace_MediaPlayerImageSizeCheck;
  static_assert(sizeof(MediaPlayerImage) == 0x104);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaPlayerImage::ButtonType, "", "MediaPlayerImage/ButtonType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MediaPlayerImage::get_buttonType
// Il2CppName: get_buttonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MediaPlayerImage::ButtonType (GlobalNamespace::MediaPlayerImage::*)()>(&GlobalNamespace::MediaPlayerImage::get_buttonType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MediaPlayerImage*), "get_buttonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MediaPlayerImage::set_buttonType
// Il2CppName: set_buttonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MediaPlayerImage::*)(::GlobalNamespace::MediaPlayerImage::ButtonType)>(&GlobalNamespace::MediaPlayerImage::set_buttonType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MediaPlayerImage/ButtonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MediaPlayerImage*), "set_buttonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MediaPlayerImage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MediaPlayerImage::OnPopulateMesh
// Il2CppName: OnPopulateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MediaPlayerImage::*)(::UnityEngine::UI::VertexHelper*)>(&GlobalNamespace::MediaPlayerImage::OnPopulateMesh)> {
  static const MethodInfo* get() {
    static auto* toFill = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "VertexHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MediaPlayerImage*), "OnPopulateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toFill});
  }
};
