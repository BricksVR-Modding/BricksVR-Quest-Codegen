// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScreenFadeProvider
  class ScreenFadeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScreenFadeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenFadeProvider*, "", "ScreenFadeProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ScreenFadeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenFadeProvider : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ScreenFadeProvider::$Fade$d__1
    class $Fade$d__1;
    // Nested type: ::GlobalNamespace::ScreenFadeProvider::$Unfade$d__2
    class $Unfade$d__2;
    // Get static field: static private readonly System.Single FadeSpeed
    static float _get_FadeSpeed();
    // Set static field: static private readonly System.Single FadeSpeed
    static void _set_FadeSpeed(float value);
    // static private System.Void .cctor()
    // Offset: 0x6CCA00
    static void _cctor();
    // static public System.Collections.IEnumerator Fade(UnityEngine.AudioSource music)
    // Offset: 0x6CC900
    static ::System::Collections::IEnumerator* Fade(::UnityEngine::AudioSource* music);
    // static public System.Collections.IEnumerator Unfade(UnityEngine.AudioSource music, System.Single maxVolume, System.Boolean modifySound)
    // Offset: 0x6CC970
    static ::System::Collections::IEnumerator* Unfade(::UnityEngine::AudioSource* music, float maxVolume, bool modifySound);
  }; // ScreenFadeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScreenFadeProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ScreenFadeProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenFadeProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenFadeProvider::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::UnityEngine::AudioSource*)>(&GlobalNamespace::ScreenFadeProvider::Fade)> {
  static const MethodInfo* get() {
    static auto* music = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenFadeProvider*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{music});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScreenFadeProvider::Unfade
// Il2CppName: Unfade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::UnityEngine::AudioSource*, float, bool)>(&GlobalNamespace::ScreenFadeProvider::Unfade)> {
  static const MethodInfo* get() {
    static auto* music = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    static auto* maxVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* modifySound = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScreenFadeProvider*), "Unfade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{music, maxVolume, modifySound});
  }
};
