// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.RealtimeView
#include "Normal/Realtime/RealtimeView.hpp"
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
  // Forward declaring type: Realtime
  class Realtime;
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
NEED_NO_BOX(::Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate*, "Normal.Realtime", "RealtimeView/SceneViewWillRegisterDelegate");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeView/Normal.Realtime.SceneViewWillRegisterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class RealtimeView::SceneViewWillRegisterDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeView::SceneViewWillRegisterDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeView::SceneViewWillRegisterDelegate*, creationType>(object, method)));
    }
    // public Normal.Realtime.Realtime Invoke(Normal.Realtime.RealtimeView realtimeView)
    // Offset: 0x540C00
    ::Normal::Realtime::Realtime* Invoke(::Normal::Realtime::RealtimeView* realtimeView);
    // public System.IAsyncResult BeginInvoke(Normal.Realtime.RealtimeView realtimeView, System.AsyncCallback callback, System.Object object)
    // Offset: 0x299A30
    ::System::IAsyncResult* BeginInvoke(::Normal::Realtime::RealtimeView* realtimeView, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Normal.Realtime.Realtime EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    ::Normal::Realtime::Realtime* EndInvoke(::System::IAsyncResult* result);
  }; // Normal.Realtime.RealtimeView/Normal.Realtime.SceneViewWillRegisterDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Realtime* (Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::*)(::Normal::Realtime::RealtimeView*)>(&Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* realtimeView = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{realtimeView});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::*)(::Normal::Realtime::RealtimeView*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* realtimeView = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeView")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{realtimeView, callback, object});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Realtime* (Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::*)(::System::IAsyncResult*)>(&Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeView::SceneViewWillRegisterDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
