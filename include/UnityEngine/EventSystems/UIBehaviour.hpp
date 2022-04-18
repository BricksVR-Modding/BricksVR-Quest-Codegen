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
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: UIBehaviour
  class UIBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::UIBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::UIBehaviour*, "UnityEngine.EventSystems", "UIBehaviour");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.UIBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class UIBehaviour : public ::UnityEngine::MonoBehaviour {
    public:
    // protected System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::UIBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIBehaviour*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1DDF00
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1DDF00
    void OnEnable();
    // protected System.Void Start()
    // Offset: 0x1DDF00
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x1DDF00
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x1DDF00
    void OnDestroy();
    // public System.Boolean IsActive()
    // Offset: 0x323920
    bool IsActive();
    // protected System.Void OnRectTransformDimensionsChange()
    // Offset: 0x1DDF00
    void OnRectTransformDimensionsChange();
    // protected System.Void OnBeforeTransformParentChanged()
    // Offset: 0x1DDF00
    void OnBeforeTransformParentChanged();
    // protected System.Void OnTransformParentChanged()
    // Offset: 0x1DDF00
    void OnTransformParentChanged();
    // protected System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1DDF00
    void OnDidApplyAnimationProperties();
    // protected System.Void OnCanvasGroupChanged()
    // Offset: 0x1DDF00
    void OnCanvasGroupChanged();
    // protected System.Void OnCanvasHierarchyChanged()
    // Offset: 0x1DDF00
    void OnCanvasHierarchyChanged();
    // public System.Boolean IsDestroyed()
    // Offset: 0x323930
    bool IsDestroyed();
  }; // UnityEngine.EventSystems.UIBehaviour
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::IsActive
// Il2CppName: IsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::IsActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "IsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnBeforeTransformParentChanged
// Il2CppName: OnBeforeTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnBeforeTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnBeforeTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnDidApplyAnimationProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnCanvasGroupChanged
// Il2CppName: OnCanvasGroupChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnCanvasGroupChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnCanvasGroupChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::OnCanvasHierarchyChanged
// Il2CppName: OnCanvasHierarchyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::OnCanvasHierarchyChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "OnCanvasHierarchyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::UIBehaviour::IsDestroyed
// Il2CppName: IsDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::UIBehaviour::*)()>(&UnityEngine::EventSystems::UIBehaviour::IsDestroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::UIBehaviour*), "IsDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
