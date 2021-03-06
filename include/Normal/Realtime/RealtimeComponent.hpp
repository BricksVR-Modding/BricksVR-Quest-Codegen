// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Normal.Realtime.IConfigurableComponent
#include "Normal/Realtime/IConfigurableComponent.hpp"
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
  // Forward declaring type: Realtime
  class Realtime;
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: RealtimeModel
  class RealtimeModel;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeComponent
  class RealtimeComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeComponent);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeComponent*, "Normal.Realtime", "RealtimeComponent");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FB310
  class RealtimeComponent : public ::UnityEngine::MonoBehaviour/*, public ::Normal::Realtime::IConfigurableComponent*/ {
    public:
    public:
    // private Normal.Realtime.RealtimeView <realtimeView>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::RealtimeView* realtimeView;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeView*) == 0x8);
    // private System.Reflection.MethodInfo _createModelMethod
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::MethodInfo* createModelMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private System.Boolean _isCreateModelMethodCached
    // Size: 0x1
    // Offset: 0x28
    bool isCreateModelMethodCached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isCreateModelMethodCached and: modelProperty
    char __padding2[0x7] = {};
    // private System.Reflection.PropertyInfo _modelProperty
    // Size: 0x8
    // Offset: 0x30
    ::System::Reflection::PropertyInfo* modelProperty;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyInfo*) == 0x8);
    // private System.Boolean _isModelPropertyCached
    // Size: 0x1
    // Offset: 0x38
    bool isModelPropertyCached;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::IConfigurableComponent
    operator ::Normal::Realtime::IConfigurableComponent() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IConfigurableComponent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Normal.Realtime.RealtimeView <realtimeView>k__BackingField
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeView*& dyn_$realtimeView$k__BackingField();
    // Get instance field reference: private System.Reflection.MethodInfo _createModelMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn__createModelMethod();
    // Get instance field reference: private System.Boolean _isCreateModelMethodCached
    [[deprecated("Use field access instead!")]] bool& dyn__isCreateModelMethodCached();
    // Get instance field reference: private System.Reflection.PropertyInfo _modelProperty
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyInfo*& dyn__modelProperty();
    // Get instance field reference: private System.Boolean _isModelPropertyCached
    [[deprecated("Use field access instead!")]] bool& dyn__isModelPropertyCached();
    // public Normal.Realtime.RealtimeView get_realtimeView()
    // Offset: 0x1E1520
    ::Normal::Realtime::RealtimeView* get_realtimeView();
    // private System.Void set_realtimeView(Normal.Realtime.RealtimeView value)
    // Offset: 0x1E4910
    void set_realtimeView(::Normal::Realtime::RealtimeView* value);
    // public Normal.Realtime.Realtime get_realtime()
    // Offset: 0x8BF9C0
    ::Normal::Realtime::Realtime* get_realtime();
    // public Normal.Realtime.Room get_room()
    // Offset: 0x8BF9D0
    ::Normal::Realtime::Room* get_room();
    // private System.Reflection.MethodInfo get_cachedCreateModelMethod()
    // Offset: 0x8BF8E0
    ::System::Reflection::MethodInfo* get_cachedCreateModelMethod();
    // private System.Reflection.PropertyInfo get_cachedModelProperty()
    // Offset: 0x8BF950
    ::System::Reflection::PropertyInfo* get_cachedModelProperty();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeComponent*, creationType>()));
    }
    // private Normal.Realtime.RealtimeModel Normal.Realtime.IConfigurableComponent.CreateModel()
    // Offset: 0x8BF470
    ::Normal::Realtime::RealtimeModel* Normal_Realtime_IConfigurableComponent_CreateModel();
    // private System.Object CreateModelFromCustomMethod()
    // Offset: 0x8BF180
    ::Il2CppObject* CreateModelFromCustomMethod();
    // private System.Object CreateModelFromDefaultConstructor()
    // Offset: 0x8BF290
    ::Il2CppObject* CreateModelFromDefaultConstructor();
    // private System.Void Normal.Realtime.IConfigurableComponent.SetModel(Normal.Realtime.RealtimeModel model)
    // Offset: 0x8BF6E0
    void Normal_Realtime_IConfigurableComponent_SetModel(::Normal::Realtime::RealtimeModel* model);
    // private System.Void Normal.Realtime.IConfigurableComponent.SetView(Normal.Realtime.RealtimeView view)
    // Offset: 0x1E4910
    void Normal_Realtime_IConfigurableComponent_SetView(::Normal::Realtime::RealtimeView* view);
  }; // Normal.Realtime.RealtimeComponent
  #pragma pack(pop)
  static check_size<sizeof(RealtimeComponent), 56 + sizeof(bool)> __Normal_Realtime_RealtimeComponentSizeCheck;
  static_assert(sizeof(RealtimeComponent) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::get_realtimeView
// Il2CppName: get_realtimeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeView* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::get_realtimeView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "get_realtimeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::set_realtimeView
// Il2CppName: set_realtimeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeComponent::*)(::Normal::Realtime::RealtimeView*)>(&Normal::Realtime::RealtimeComponent::set_realtimeView)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "set_realtimeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::get_realtime
// Il2CppName: get_realtime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Realtime* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::get_realtime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "get_realtime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::get_room
// Il2CppName: get_room
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Room* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::get_room)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "get_room", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::get_cachedCreateModelMethod
// Il2CppName: get_cachedCreateModelMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::get_cachedCreateModelMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "get_cachedCreateModelMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::get_cachedModelProperty
// Il2CppName: get_cachedModelProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::get_cachedModelProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "get_cachedModelProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::Normal_Realtime_IConfigurableComponent_CreateModel
// Il2CppName: Normal.Realtime.IConfigurableComponent.CreateModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeModel* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::Normal_Realtime_IConfigurableComponent_CreateModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "Normal.Realtime.IConfigurableComponent.CreateModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::CreateModelFromCustomMethod
// Il2CppName: CreateModelFromCustomMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::CreateModelFromCustomMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "CreateModelFromCustomMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::CreateModelFromDefaultConstructor
// Il2CppName: CreateModelFromDefaultConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Normal::Realtime::RealtimeComponent::*)()>(&Normal::Realtime::RealtimeComponent::CreateModelFromDefaultConstructor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "CreateModelFromDefaultConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::Normal_Realtime_IConfigurableComponent_SetModel
// Il2CppName: Normal.Realtime.IConfigurableComponent.SetModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeComponent::*)(::Normal::Realtime::RealtimeModel*)>(&Normal::Realtime::RealtimeComponent::Normal_Realtime_IConfigurableComponent_SetModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "Normal.Realtime.IConfigurableComponent.SetModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeComponent::Normal_Realtime_IConfigurableComponent_SetView
// Il2CppName: Normal.Realtime.IConfigurableComponent.SetView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeComponent::*)(::Normal::Realtime::RealtimeView*)>(&Normal::Realtime::RealtimeComponent::Normal_Realtime_IConfigurableComponent_SetView)> {
  static const MethodInfo* get() {
    static auto* view = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeComponent*), "Normal.Realtime.IConfigurableComponent.SetView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{view});
  }
};
