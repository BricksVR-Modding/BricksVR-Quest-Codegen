// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Keyboard
  class Keyboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Keyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Keyboard*, "", "Keyboard");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Keyboard
  // [TokenAttribute] Offset: FFFFFFFF
  class Keyboard : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::Keyboard::SerializableStringEvent
    class SerializableStringEvent;
    public:
    // public Keyboard/SerializableStringEvent keyPressed
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Keyboard::SerializableStringEvent* keyPressed;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Keyboard::SerializableStringEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent backspacePressed
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Events::UnityEvent* backspacePressed;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Keyboard/SerializableStringEvent keyPressed
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Keyboard::SerializableStringEvent*& dyn_keyPressed();
    // Get instance field reference: public UnityEngine.Events.UnityEvent backspacePressed
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_backspacePressed();
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Keyboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Keyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Keyboard*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x6BC070
    void Awake();
    // public System.Void PlayKeySound()
    // Offset: 0x6BC150
    void PlayKeySound();
    // public System.Void KeyboardKeyPressed(System.String key)
    // Offset: 0x6BC0C0
    void KeyboardKeyPressed(::StringW key);
  }; // Keyboard
  #pragma pack(pop)
  static check_size<sizeof(Keyboard), 40 + sizeof(::UnityEngine::AudioSource*)> __GlobalNamespace_KeyboardSizeCheck;
  static_assert(sizeof(Keyboard) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Keyboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Keyboard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Keyboard::*)()>(&GlobalNamespace::Keyboard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Keyboard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Keyboard::PlayKeySound
// Il2CppName: PlayKeySound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Keyboard::*)()>(&GlobalNamespace::Keyboard::PlayKeySound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Keyboard*), "PlayKeySound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Keyboard::KeyboardKeyPressed
// Il2CppName: KeyboardKeyPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Keyboard::*)(::StringW)>(&GlobalNamespace::Keyboard::KeyboardKeyPressed)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Keyboard*), "KeyboardKeyPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
