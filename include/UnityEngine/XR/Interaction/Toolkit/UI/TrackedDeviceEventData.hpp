// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: TrackedDeviceEventData
  class TrackedDeviceEventData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*, "UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceEventData");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Size: 0x140
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackedDeviceEventData : public ::UnityEngine::EventSystems::PointerEventData {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> <rayPoints>k__BackingField
    // Size: 0x8
    // Offset: 0x130
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* rayPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private System.Int32 <rayHitIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x138
    int rayHitIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.LayerMask <layerMask>k__BackingField
    // Size: 0x4
    // Offset: 0x13C
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> <rayPoints>k__BackingField
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn_$rayPoints$k__BackingField();
    // Get instance field reference: private System.Int32 <rayHitIndex>k__BackingField
    int& dyn_$rayHitIndex$k__BackingField();
    // Get instance field reference: private UnityEngine.LayerMask <layerMask>k__BackingField
    ::UnityEngine::LayerMask& dyn_$layerMask$k__BackingField();
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> get_rayPoints()
    // Offset: 0x8C6378
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_rayPoints();
    // public System.Void set_rayPoints(System.Collections.Generic.List`1<UnityEngine.Vector3> value)
    // Offset: 0x8C6380
    void set_rayPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);
    // public System.Int32 get_rayHitIndex()
    // Offset: 0x8C6388
    int get_rayHitIndex();
    // public System.Void set_rayHitIndex(System.Int32 value)
    // Offset: 0x8C6390
    void set_rayHitIndex(int value);
    // public UnityEngine.LayerMask get_layerMask()
    // Offset: 0x8C6398
    ::UnityEngine::LayerMask get_layerMask();
    // public System.Void set_layerMask(UnityEngine.LayerMask value)
    // Offset: 0x8C63A0
    void set_layerMask(::UnityEngine::LayerMask value);
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x8C6370
    // Implemented from: UnityEngine.EventSystems.PointerEventData
    // Base method: System.Void PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Base method: System.Void BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackedDeviceEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackedDeviceEventData*, creationType>(eventSystem)));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceEventData
  #pragma pack(pop)
  static check_size<sizeof(TrackedDeviceEventData), 316 + sizeof(::UnityEngine::LayerMask)> __UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceEventDataSizeCheck;
  static_assert(sizeof(TrackedDeviceEventData) == 0x140);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayPoints
// Il2CppName: get_rayPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*), "get_rayPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayPoints
// Il2CppName: set_rayPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayPoints)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*), "set_rayPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayHitIndex
// Il2CppName: get_rayHitIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayHitIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*), "get_rayHitIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayHitIndex
// Il2CppName: set_rayHitIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(int)>(&UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayHitIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*), "set_rayHitIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_layerMask
// Il2CppName: get_layerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_layerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*), "get_layerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_layerMask
// Il2CppName: set_layerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(::UnityEngine::LayerMask)>(&UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_layerMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*), "set_layerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
