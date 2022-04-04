// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ReflectionSnapshot
#include "GlobalNamespace/ReflectionSnapshot.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerSnapshot
  class AudioMixerSnapshot;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ONSPReflectionZone
  class ONSPReflectionZone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPReflectionZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPReflectionZone*, "", "ONSPReflectionZone");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: ONSPReflectionZone
  // [TokenAttribute] Offset: FFFFFFFF
  class ONSPReflectionZone : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Audio.AudioMixerSnapshot mixerSnapshot
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Audio::AudioMixerSnapshot* mixerSnapshot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Audio::AudioMixerSnapshot*) == 0x8);
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x20
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.Stack`1<ReflectionSnapshot> snapshotList
    static ::System::Collections::Generic::Stack_1<::GlobalNamespace::ReflectionSnapshot>* _get_snapshotList();
    // Set static field: static private System.Collections.Generic.Stack`1<ReflectionSnapshot> snapshotList
    static void _set_snapshotList(::System::Collections::Generic::Stack_1<::GlobalNamespace::ReflectionSnapshot>* value);
    // Get static field: static private ReflectionSnapshot currentSnapshot
    static ::GlobalNamespace::ReflectionSnapshot _get_currentSnapshot();
    // Set static field: static private ReflectionSnapshot currentSnapshot
    static void _set_currentSnapshot(::GlobalNamespace::ReflectionSnapshot value);
    // Get instance field reference: public UnityEngine.Audio.AudioMixerSnapshot mixerSnapshot
    [[deprecated]] ::UnityEngine::Audio::AudioMixerSnapshot*& dyn_mixerSnapshot();
    // Get instance field reference: public System.Single fadeTime
    [[deprecated]] float& dyn_fadeTime();
    // private System.Void Start()
    // Offset: 0x1DDF00
    void Start();
    // private System.Void Update()
    // Offset: 0x1DDF00
    void Update();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x817730
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x8177E0
    void OnTriggerExit(::UnityEngine::Collider* other);
    // private System.Boolean CheckForAudioListener(UnityEngine.GameObject gameObject)
    // Offset: 0x8176B0
    bool CheckForAudioListener(::UnityEngine::GameObject* gameObject);
    // private System.Void PushCurrentMixerShapshot()
    // Offset: 0x817C00
    void PushCurrentMixerShapshot();
    // private System.Void PopCurrentMixerSnapshot()
    // Offset: 0x817A30
    void PopCurrentMixerSnapshot();
    // private System.Void SetReflectionValues()
    // Offset: 0x817F30
    void SetReflectionValues();
    // private System.Void SetReflectionValues(ref ReflectionSnapshot mss)
    // Offset: 0x817DD0
    void SetReflectionValues(ByRef<::GlobalNamespace::ReflectionSnapshot> mss);
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPReflectionZone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPReflectionZone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPReflectionZone*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x818090
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ONSPReflectionZone
  #pragma pack(pop)
  static check_size<sizeof(ONSPReflectionZone), 32 + sizeof(float)> __GlobalNamespace_ONSPReflectionZoneSizeCheck;
  static_assert(sizeof(ONSPReflectionZone) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)()>(&GlobalNamespace::ONSPReflectionZone::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)()>(&GlobalNamespace::ONSPReflectionZone::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)(::UnityEngine::Collider*)>(&GlobalNamespace::ONSPReflectionZone::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)(::UnityEngine::Collider*)>(&GlobalNamespace::ONSPReflectionZone::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::CheckForAudioListener
// Il2CppName: CheckForAudioListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ONSPReflectionZone::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ONSPReflectionZone::CheckForAudioListener)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "CheckForAudioListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::PushCurrentMixerShapshot
// Il2CppName: PushCurrentMixerShapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)()>(&GlobalNamespace::ONSPReflectionZone::PushCurrentMixerShapshot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "PushCurrentMixerShapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::PopCurrentMixerSnapshot
// Il2CppName: PopCurrentMixerSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)()>(&GlobalNamespace::ONSPReflectionZone::PopCurrentMixerSnapshot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "PopCurrentMixerSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::SetReflectionValues
// Il2CppName: SetReflectionValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)()>(&GlobalNamespace::ONSPReflectionZone::SetReflectionValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "SetReflectionValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::SetReflectionValues
// Il2CppName: SetReflectionValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPReflectionZone::*)(ByRef<::GlobalNamespace::ReflectionSnapshot>)>(&GlobalNamespace::ONSPReflectionZone::SetReflectionValues)> {
  static const MethodInfo* get() {
    static auto* mss = &::il2cpp_utils::GetClassFromName("", "ReflectionSnapshot")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), "SetReflectionValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mss});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ONSPReflectionZone::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ONSPReflectionZone::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPReflectionZone*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
