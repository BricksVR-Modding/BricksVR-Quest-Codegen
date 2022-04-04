// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationMotionXToDeltaPlayable
  struct AnimationMotionXToDeltaPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: E4D80
  // [NativeHeaderAttribute] Offset: E4D80
  // [StaticAccessorAttribute] Offset: E4D80
  struct AnimationMotionXToDeltaPlayable/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationMotionXToDeltaPlayable
    constexpr AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>
    operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_NullPlayable
    static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationMotionXToDeltaPlayable m_NullPlayable
    static void _set_m_NullPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    [[deprecated]] ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // private System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x656D00
    // ABORTED: conflicts with another method.  AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x656C10
    static void _cctor();
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x6566C0
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable other)
    // Offset: 0x656B80
    bool Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable other);
  }; // UnityEngine.Animations.AnimationMotionXToDeltaPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationMotionXToDeltaPlayable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationMotionXToDeltaPlayableSizeCheck;
  static_assert(sizeof(AnimationMotionXToDeltaPlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::AnimationMotionXToDeltaPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)()>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationMotionXToDeltaPlayable::*)(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable)>(&UnityEngine::Animations::AnimationMotionXToDeltaPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationMotionXToDeltaPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationMotionXToDeltaPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
