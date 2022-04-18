// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportSupport
#include "GlobalNamespace/TeleportSupport.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportAimHandler
  class TeleportAimHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportAimHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportAimHandler*, "", "TeleportAimHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: TeleportAimHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportAimHandler : public ::GlobalNamespace::TeleportSupport {
    public:
    // public System.Void GetPoints(System.Collections.Generic.List`1<UnityEngine.Vector3> points)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points);
    // protected System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportAimHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportAimHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportAimHandler*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x616680
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x6165C0
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::OnDisable()
    void OnDisable();
  }; // TeleportAimHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimHandler::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimHandler::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&GlobalNamespace::TeleportAimHandler::GetPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimHandler*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimHandler::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimHandler::*)()>(&GlobalNamespace::TeleportAimHandler::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimHandler*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimHandler::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimHandler::*)()>(&GlobalNamespace::TeleportAimHandler::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimHandler*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
