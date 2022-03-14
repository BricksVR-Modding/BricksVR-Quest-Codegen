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
// Including type: Normal.Realtime.IRealtimeComponent
#include "Normal/Realtime/IRealtimeComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeModel
  class RealtimeModel;
  // Forward declaring type: RealtimeView
  class RealtimeView;
  // Forward declaring type: Realtime
  class Realtime;
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeComponent`1<TModel>
  template<typename TModel>
  class RealtimeComponent_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Normal::Realtime::RealtimeComponent_1, "Normal.Realtime", "RealtimeComponent`1");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // WARNING Size may be invalid!
  // Autogenerated type: Normal.Realtime.RealtimeComponent`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 715AFC
  template<typename TModel>
  class RealtimeComponent_1 : public ::UnityEngine::MonoBehaviour/*, public ::Normal::Realtime::IConfigurableComponent, public ::Normal::Realtime::IRealtimeComponent*/ {
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
    // private TModel <model>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TModel model;
    // private Normal.Realtime.RealtimeView <realtimeView>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Normal::Realtime::RealtimeView* realtimeView;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeView*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::IConfigurableComponent
    operator ::Normal::Realtime::IConfigurableComponent() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IConfigurableComponent*>(this);
    }
    // Creating interface conversion operator: operator ::Normal::Realtime::IRealtimeComponent
    operator ::Normal::Realtime::IRealtimeComponent() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IRealtimeComponent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private TModel <model>k__BackingField
    TModel& dyn_$model$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::dyn_$model$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<model>k__BackingField"))->offset;
      return *reinterpret_cast<TModel*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Normal.Realtime.RealtimeView <realtimeView>k__BackingField
    ::Normal::Realtime::RealtimeView*& dyn_$realtimeView$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::dyn_$realtimeView$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<realtimeView>k__BackingField"))->offset;
      return *reinterpret_cast<::Normal::Realtime::RealtimeView**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected TModel get_model()
    // Offset: 0xFFFFFFFF
    TModel get_model() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_model");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_model", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TModel, false>(this, ___internal__method);
    }
    // private System.Void set_model(TModel value)
    // Offset: 0xFFFFFFFF
    void set_model(TModel value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::set_model");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_model", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public Normal.Realtime.RealtimeView get_realtimeView()
    // Offset: 0xFFFFFFFF
    ::Normal::Realtime::RealtimeView* get_realtimeView() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_realtimeView");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_realtimeView", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Normal::Realtime::RealtimeView*, false>(this, ___internal__method);
    }
    // private System.Void set_realtimeView(Normal.Realtime.RealtimeView value)
    // Offset: 0xFFFFFFFF
    void set_realtimeView(::Normal::Realtime::RealtimeView* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::set_realtimeView");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_realtimeView", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public Normal.Realtime.Realtime get_realtime()
    // Offset: 0xFFFFFFFF
    ::Normal::Realtime::Realtime* get_realtime() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_realtime");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_realtime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Normal::Realtime::Realtime*, false>(this, ___internal__method);
    }
    // public Normal.Realtime.Room get_room()
    // Offset: 0xFFFFFFFF
    ::Normal::Realtime::Room* get_room() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_room");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_room", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Normal::Realtime::Room*, false>(this, ___internal__method);
    }
    // public System.Int32 get_ownerID()
    // Offset: 0xFFFFFFFF
    int get_ownerID() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_ownerID");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ownerID", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedByWorld()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedByWorld() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedByWorld");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedByWorld", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedLocally()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedLocally() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedLocally");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedLocally", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedRemotely()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedRemotely() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedRemotely");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedRemotely", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Int32 get_ownerIDSelf()
    // Offset: 0xFFFFFFFF
    int get_ownerIDSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_ownerIDSelf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ownerIDSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_ownerIDInHierarchy()
    // Offset: 0xFFFFFFFF
    int get_ownerIDInHierarchy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_ownerIDInHierarchy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ownerIDInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean get_isUnownedSelf()
    // Offset: 0xFFFFFFFF
    bool get_isUnownedSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isUnownedSelf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isUnownedSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isUnownedInHierarchy()
    // Offset: 0xFFFFFFFF
    bool get_isUnownedInHierarchy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isUnownedInHierarchy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isUnownedInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedLocallySelf()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedLocallySelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedLocallySelf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedLocallySelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedLocallyInHierarchy()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedLocallyInHierarchy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedLocallyInHierarchy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedLocallyInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedRemotelySelf()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedRemotelySelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedRemotelySelf");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedRemotelySelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isOwnedRemotelyInHierarchy()
    // Offset: 0xFFFFFFFF
    bool get_isOwnedRemotelyInHierarchy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::get_isOwnedRemotelyInHierarchy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isOwnedRemotelyInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected TModel CreateModel()
    // Offset: 0xFFFFFFFF
    TModel CreateModel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::CreateModel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateModel", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TModel, false>(this, ___internal__method);
    }
    // protected System.Void OnRealtimeModelReplaced(TModel previousModel, TModel currentModel)
    // Offset: 0xFFFFFFFF
    void OnRealtimeModelReplaced(TModel previousModel, TModel currentModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::OnRealtimeModelReplaced");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnRealtimeModelReplaced", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(previousModel), ::il2cpp_utils::ExtractType(currentModel)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, previousModel, currentModel);
    }
    // private Normal.Realtime.RealtimeModel Normal.Realtime.IConfigurableComponent.CreateModel()
    // Offset: 0xFFFFFFFF
    ::Normal::Realtime::RealtimeModel* Normal_Realtime_IConfigurableComponent_CreateModel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::Normal.Realtime.IConfigurableComponent.CreateModel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Normal.Realtime.IConfigurableComponent.CreateModel", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Normal::Realtime::RealtimeModel*, false>(this, ___internal__method);
    }
    // private System.Void Normal.Realtime.IConfigurableComponent.SetModel(Normal.Realtime.RealtimeModel model)
    // Offset: 0xFFFFFFFF
    void Normal_Realtime_IConfigurableComponent_SetModel(::Normal::Realtime::RealtimeModel* model) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::Normal.Realtime.IConfigurableComponent.SetModel");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Normal.Realtime.IConfigurableComponent.SetModel", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(model)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, model);
    }
    // private System.Void Normal.Realtime.IConfigurableComponent.SetView(Normal.Realtime.RealtimeView view)
    // Offset: 0xFFFFFFFF
    void Normal_Realtime_IConfigurableComponent_SetView(::Normal::Realtime::RealtimeView* view) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::Normal.Realtime.IConfigurableComponent.SetView");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Normal.Realtime.IConfigurableComponent.SetView", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(view)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, view);
    }
    // private System.Void ThrowIfModelMissing()
    // Offset: 0xFFFFFFFF
    void ThrowIfModelMissing() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::ThrowIfModelMissing");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ThrowIfModelMissing", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void RequestOwnership()
    // Offset: 0xFFFFFFFF
    void RequestOwnership() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::RequestOwnership");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RequestOwnership", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void SetOwnership(System.Int32 clientID)
    // Offset: 0xFFFFFFFF
    void SetOwnership(int clientID) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::SetOwnership");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetOwnership", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(clientID)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, clientID);
    }
    // public System.Void ClearOwnership()
    // Offset: 0xFFFFFFFF
    void ClearOwnership() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::ClearOwnership");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ClearOwnership", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeComponent_1<TModel>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeComponent_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeComponent_1<TModel>*, creationType>()));
    }
  }; // Normal.Realtime.RealtimeComponent`1
  // Could not write size check! Type: Normal.Realtime.RealtimeComponent`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
