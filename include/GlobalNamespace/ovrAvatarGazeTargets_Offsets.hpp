// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarGazeTargets_Offsets
  struct ovrAvatarGazeTargets_Offsets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarGazeTargets_Offsets, "", "ovrAvatarGazeTargets_Offsets");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarGazeTargets_Offsets
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarGazeTargets_Offsets/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: ovrAvatarGazeTargets_Offsets
    constexpr ovrAvatarGazeTargets_Offsets() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public System.Int32 targetCount
    static int _get_targetCount();
    // Set static field: static public System.Int32 targetCount
    static void _set_targetCount(int value);
    // Get static field: static public System.Int64 targets
    static int64_t _get_targets();
    // Set static field: static public System.Int64 targets
    static void _set_targets(int64_t value);
    // static private System.Void .cctor()
    // Offset: 0x9291B0
    static void _cctor();
  }; // ovrAvatarGazeTargets_Offsets
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarGazeTargets_Offsets::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ovrAvatarGazeTargets_Offsets::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarGazeTargets_Offsets), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
