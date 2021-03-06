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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarVoice
  class RealtimeAvatarVoice;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarVoiceScale
  class RealtimeAvatarVoiceScale;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeAvatarVoiceScale);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeAvatarVoiceScale*, "Normal.Realtime", "RealtimeAvatarVoiceScale");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeAvatarVoiceScale
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: F7150
  class RealtimeAvatarVoiceScale : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Normal.Realtime.RealtimeAvatarVoice _voice
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::RealtimeAvatarVoice* voice;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarVoice*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarVoice _voice
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarVoice*& dyn__voice();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeAvatarVoiceScale* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeAvatarVoiceScale::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeAvatarVoiceScale*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0xBDF260
    void Awake();
    // private System.Void Update()
    // Offset: 0xBDF2B0
    void Update();
  }; // Normal.Realtime.RealtimeAvatarVoiceScale
  #pragma pack(pop)
  static check_size<sizeof(RealtimeAvatarVoiceScale), 24 + sizeof(::Normal::Realtime::RealtimeAvatarVoice*)> __Normal_Realtime_RealtimeAvatarVoiceScaleSizeCheck;
  static_assert(sizeof(RealtimeAvatarVoiceScale) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceScale::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceScale::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceScale::*)()>(&Normal::Realtime::RealtimeAvatarVoiceScale::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceScale*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceScale::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceScale::*)()>(&Normal::Realtime::RealtimeAvatarVoiceScale::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceScale*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
