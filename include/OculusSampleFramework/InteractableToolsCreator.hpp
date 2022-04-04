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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: InteractableToolsCreator
  class InteractableToolsCreator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::InteractableToolsCreator);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::InteractableToolsCreator*, "OculusSampleFramework", "InteractableToolsCreator");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.InteractableToolsCreator
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractableToolsCreator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::InteractableToolsCreator::$AttachToolsToHands$d__3
    class $AttachToolsToHands$d__3;
    public:
    // private UnityEngine.Transform[] LeftHandTools
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Transform*> LeftHandTools;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private UnityEngine.Transform[] RightHandTools
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Transform*> RightHandTools;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform[] LeftHandTools
    [[deprecated]] ::ArrayW<::UnityEngine::Transform*>& dyn_LeftHandTools();
    // Get instance field reference: private UnityEngine.Transform[] RightHandTools
    [[deprecated]] ::ArrayW<::UnityEngine::Transform*>& dyn_RightHandTools();
    // private System.Void Awake()
    // Offset: 0x28DD40
    void Awake();
    // private System.Collections.IEnumerator AttachToolsToHands(UnityEngine.Transform[] toolObjects, System.Boolean isRightHand)
    // Offset: 0x28DCA0
    ::System::Collections::IEnumerator* AttachToolsToHands(::ArrayW<::UnityEngine::Transform*> toolObjects, bool isRightHand);
    // private System.Void AttachToolToHandTransform(UnityEngine.Transform tool, System.Boolean isRightHanded)
    // Offset: 0x28DBA0
    void AttachToolToHandTransform(::UnityEngine::Transform* tool, bool isRightHanded);
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractableToolsCreator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::InteractableToolsCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractableToolsCreator*, creationType>()));
    }
  }; // OculusSampleFramework.InteractableToolsCreator
  #pragma pack(pop)
  static check_size<sizeof(InteractableToolsCreator), 32 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __OculusSampleFramework_InteractableToolsCreatorSizeCheck;
  static_assert(sizeof(InteractableToolsCreator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::InteractableToolsCreator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableToolsCreator::*)()>(&OculusSampleFramework::InteractableToolsCreator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableToolsCreator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableToolsCreator::AttachToolsToHands
// Il2CppName: AttachToolsToHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::InteractableToolsCreator::*)(::ArrayW<::UnityEngine::Transform*>, bool)>(&OculusSampleFramework::InteractableToolsCreator::AttachToolsToHands)> {
  static const MethodInfo* get() {
    static auto* toolObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* isRightHand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableToolsCreator*), "AttachToolsToHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolObjects, isRightHand});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableToolsCreator::AttachToolToHandTransform
// Il2CppName: AttachToolToHandTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::InteractableToolsCreator::*)(::UnityEngine::Transform*, bool)>(&OculusSampleFramework::InteractableToolsCreator::AttachToolToHandTransform)> {
  static const MethodInfo* get() {
    static auto* tool = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* isRightHanded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::InteractableToolsCreator*), "AttachToolToHandTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tool, isRightHanded});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::InteractableToolsCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
