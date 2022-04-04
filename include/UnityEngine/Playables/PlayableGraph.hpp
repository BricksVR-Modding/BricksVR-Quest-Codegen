// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableGraph
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DBED0
  // [NativeHeaderAttribute] Offset: DBED0
  // [NativeHeaderAttribute] Offset: DBED0
  // [NativeHeaderAttribute] Offset: DBED0
  // [NativeHeaderAttribute] Offset: DBED0
  struct PlayableGraph/*, public ::System::ValueType*/ {
    public:
    public:
    // System.IntPtr m_Handle
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr m_Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.UInt32 m_Version
    // Size: 0x4
    // Offset: 0x8
    uint m_Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PlayableGraph
    constexpr PlayableGraph(::System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) noexcept : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.IntPtr m_Handle
    [[deprecated]] ::System::IntPtr& dyn_m_Handle();
    // Get instance field reference: System.UInt32 m_Version
    [[deprecated]] uint& dyn_m_Version();
  }; // UnityEngine.Playables.PlayableGraph
  #pragma pack(pop)
  static check_size<sizeof(PlayableGraph), 8 + sizeof(uint)> __UnityEngine_Playables_PlayableGraphSizeCheck;
  static_assert(sizeof(PlayableGraph) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
