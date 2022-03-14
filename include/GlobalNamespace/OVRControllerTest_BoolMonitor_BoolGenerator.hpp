// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRControllerTest/BoolMonitor
#include "GlobalNamespace/OVRControllerTest_BoolMonitor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator*, "", "OVRControllerTest/BoolMonitor/BoolGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVRControllerTest/BoolMonitor/BoolGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRControllerTest::BoolMonitor::BoolGenerator : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x7F9E54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRControllerTest::BoolMonitor::BoolGenerator* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRControllerTest::BoolMonitor::BoolGenerator*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x7FB7C8
    bool Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x7FB9E0
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x7FBA0C
    bool EndInvoke(::System::IAsyncResult* result);
  }; // OVRControllerTest/BoolMonitor/BoolGenerator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::*)()>(&GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::*)(::System::IAsyncResult*)>(&GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRControllerTest::BoolMonitor::BoolGenerator*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
