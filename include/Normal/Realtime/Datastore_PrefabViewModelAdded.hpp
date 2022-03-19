// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Datastore
#include "Normal/Realtime/Datastore.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeViewModel
  class RealtimeViewModel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Datastore::PrefabViewModelAdded);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Datastore::PrefabViewModelAdded*, "Normal.Realtime", "Datastore/PrefabViewModelAdded");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Datastore/Normal.Realtime.PrefabViewModelAdded
  // [TokenAttribute] Offset: FFFFFFFF
  class Datastore::PrefabViewModelAdded : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xAE8B64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Datastore::PrefabViewModelAdded* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Datastore::PrefabViewModelAdded::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Datastore::PrefabViewModelAdded*, creationType>(object, method)));
    }
    // public System.Void Invoke(Normal.Realtime.Datastore datastore, Normal.Realtime.RealtimeViewModel model, System.Boolean remote)
    // Offset: 0xAE7BF0
    void Invoke(::Normal::Realtime::Datastore* datastore, ::Normal::Realtime::RealtimeViewModel* model, bool remote);
    // public System.IAsyncResult BeginInvoke(Normal.Realtime.Datastore datastore, Normal.Realtime.RealtimeViewModel model, System.Boolean remote, System.AsyncCallback callback, System.Object object)
    // Offset: 0xAE8B74
    ::System::IAsyncResult* BeginInvoke(::Normal::Realtime::Datastore* datastore, ::Normal::Realtime::RealtimeViewModel* model, bool remote, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xAE8C18
    void EndInvoke(::System::IAsyncResult* result);
  }; // Normal.Realtime.Datastore/Normal.Realtime.PrefabViewModelAdded
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Datastore::PrefabViewModelAdded::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Datastore::PrefabViewModelAdded::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Datastore::PrefabViewModelAdded::*)(::Normal::Realtime::Datastore*, ::Normal::Realtime::RealtimeViewModel*, bool)>(&Normal::Realtime::Datastore::PrefabViewModelAdded::Invoke)> {
  static const MethodInfo* get() {
    static auto* datastore = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Datastore")->byval_arg;
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeViewModel")->byval_arg;
    static auto* remote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Datastore::PrefabViewModelAdded*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{datastore, model, remote});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Datastore::PrefabViewModelAdded::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Normal::Realtime::Datastore::PrefabViewModelAdded::*)(::Normal::Realtime::Datastore*, ::Normal::Realtime::RealtimeViewModel*, bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&Normal::Realtime::Datastore::PrefabViewModelAdded::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* datastore = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Datastore")->byval_arg;
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeViewModel")->byval_arg;
    static auto* remote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Datastore::PrefabViewModelAdded*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{datastore, model, remote, callback, object});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Datastore::PrefabViewModelAdded::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Datastore::PrefabViewModelAdded::*)(::System::IAsyncResult*)>(&Normal::Realtime::Datastore::PrefabViewModelAdded::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Datastore::PrefabViewModelAdded*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
