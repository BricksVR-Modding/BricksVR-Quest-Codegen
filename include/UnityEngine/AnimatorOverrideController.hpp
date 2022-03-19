// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RuntimeAnimatorController
#include "UnityEngine/RuntimeAnimatorController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimatorOverrideController
  class AnimatorOverrideController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimatorOverrideController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorOverrideController
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6F5704
  // [DefaultMemberAttribute] Offset: 6F5704
  // [NativeHeaderAttribute] Offset: 6F5704
  // [NativeHeaderAttribute] Offset: 6F5704
  class AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController {
    public:
    // Nested type: ::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback
    class OnOverrideControllerDirtyCallback;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // UnityEngine.AnimatorOverrideController/UnityEngine.OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: UnityEngine.AnimatorOverrideController/UnityEngine.OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    ::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*& dyn_OnOverrideControllerDirty();
    // static System.Void OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController controller)
    // Offset: 0x103A368
    static void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller);
  }; // UnityEngine.AnimatorOverrideController
  #pragma pack(pop)
  static check_size<sizeof(AnimatorOverrideController), 24 + sizeof(::UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*)> __UnityEngine_AnimatorOverrideControllerSizeCheck;
  static_assert(sizeof(AnimatorOverrideController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController
// Il2CppName: OnInvalidateOverrideController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(&UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorOverrideController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorOverrideController*), "OnInvalidateOverrideController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
