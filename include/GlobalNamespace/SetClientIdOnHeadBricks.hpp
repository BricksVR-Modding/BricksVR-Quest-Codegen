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
  // Forward declaring type: RealtimeView
  class RealtimeView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetClientIdOnHeadBricks
  class SetClientIdOnHeadBricks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetClientIdOnHeadBricks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetClientIdOnHeadBricks*, "", "SetClientIdOnHeadBricks");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SetClientIdOnHeadBricks
  // [TokenAttribute] Offset: FFFFFFFF
  class SetClientIdOnHeadBricks : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public Normal.Realtime.RealtimeView rtView
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::RealtimeView* rtView;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeView*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Normal.Realtime.RealtimeView rtView
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeView*& dyn_rtView();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetClientIdOnHeadBricks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetClientIdOnHeadBricks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetClientIdOnHeadBricks*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6CDCF0
    void Start();
  }; // SetClientIdOnHeadBricks
  #pragma pack(pop)
  static check_size<sizeof(SetClientIdOnHeadBricks), 24 + sizeof(::Normal::Realtime::RealtimeView*)> __GlobalNamespace_SetClientIdOnHeadBricksSizeCheck;
  static_assert(sizeof(SetClientIdOnHeadBricks) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetClientIdOnHeadBricks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SetClientIdOnHeadBricks::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetClientIdOnHeadBricks::*)()>(&GlobalNamespace::SetClientIdOnHeadBricks::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetClientIdOnHeadBricks*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
