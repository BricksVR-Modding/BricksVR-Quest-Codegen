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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisableMicWhenEditor
  class DisableMicWhenEditor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DisableMicWhenEditor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableMicWhenEditor*, "", "DisableMicWhenEditor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DisableMicWhenEditor
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: C59E0
  class DisableMicWhenEditor : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public Normal.Realtime.RealtimeAvatarVoice voice
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::RealtimeAvatarVoice* voice;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarVoice*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Normal.Realtime.RealtimeAvatarVoice voice
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarVoice*& dyn_voice();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableMicWhenEditor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DisableMicWhenEditor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableMicWhenEditor*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6B2DC0
    void Start();
  }; // DisableMicWhenEditor
  #pragma pack(pop)
  static check_size<sizeof(DisableMicWhenEditor), 24 + sizeof(::Normal::Realtime::RealtimeAvatarVoice*)> __GlobalNamespace_DisableMicWhenEditorSizeCheck;
  static_assert(sizeof(DisableMicWhenEditor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisableMicWhenEditor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DisableMicWhenEditor::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableMicWhenEditor::*)()>(&GlobalNamespace::DisableMicWhenEditor::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableMicWhenEditor*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
