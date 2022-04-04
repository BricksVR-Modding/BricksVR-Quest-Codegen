// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
#include "UnityEngine/XR/Interaction/Toolkit/XRDirectInteractor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseInteractable
  class XRBaseInteractable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c*, "UnityEngine.XR.Interaction.Toolkit", "XRDirectInteractor/<>c");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/UnityEngine.XR.Interaction.Toolkit.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XRDirectInteractor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/UnityEngine.XR.Interaction.Toolkit.<>c <>9
    static ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/UnityEngine.XR.Interaction.Toolkit.<>c <>9
    static void _set_$$9(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.Collider,System.Boolean> <>9__6_0
    static ::System::Func_2<::UnityEngine::Collider*, bool>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<UnityEngine.Collider,System.Boolean> <>9__6_0
    static void _set_$$9__6_0(::System::Func_2<::UnityEngine::Collider*, bool>* value);
    // Get static field: static public System.Predicate`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> <>9__10_0
    static ::System::Predicate_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>* _get_$$9__10_0();
    // Set static field: static public System.Predicate`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> <>9__10_0
    static void _set_$$9__10_0(::System::Predicate_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2FC450
    static void _cctor();
    // System.Boolean <Awake>b__6_0(UnityEngine.Collider x)
    // Offset: 0x2FC3D0
    bool $Awake$b__6_0(::UnityEngine::Collider* x);
    // System.Boolean <GetValidTargets>b__10_0(UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable t)
    // Offset: 0x2FC3F0
    bool $GetValidTargets$b__10_0(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable* t);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDirectInteractor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDirectInteractor::$$c*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor/UnityEngine.XR.Interaction.Toolkit.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::$Awake$b__6_0
// Il2CppName: <Awake>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::*)(::UnityEngine::Collider*)>(&UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::$Awake$b__6_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c*), "<Awake>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::$GetValidTargets$b__10_0
// Il2CppName: <GetValidTargets>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::$GetValidTargets$b__10_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c*), "<GetValidTargets>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
