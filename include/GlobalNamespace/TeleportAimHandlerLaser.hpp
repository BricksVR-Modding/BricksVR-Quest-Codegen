// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportAimHandler
#include "GlobalNamespace/TeleportAimHandler.hpp"
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
  // Forward declaring type: TeleportAimHandlerLaser
  class TeleportAimHandlerLaser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportAimHandlerLaser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportAimHandlerLaser*, "", "TeleportAimHandlerLaser");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: TeleportAimHandlerLaser
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportAimHandlerLaser : public ::GlobalNamespace::TeleportAimHandler {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    public:
    // [TooltipAttribute] Offset: 0xFF8E0
    // public System.Single Range
    // Size: 0x4
    // Offset: 0x28
    float Range;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single Range
    [[deprecated]] float& dyn_Range();
    // public System.Void .ctor()
    // Offset: 0x616240
    // Implemented from: TeleportAimHandler
    // Base method: System.Void TeleportAimHandler::.ctor()
    // Base method: System.Void TeleportSupport::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportAimHandlerLaser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportAimHandlerLaser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportAimHandlerLaser*, creationType>()));
    }
    // public override System.Void GetPoints(System.Collections.Generic.List`1<UnityEngine.Vector3> points)
    // Offset: 0x616060
    // Implemented from: TeleportAimHandler
    // Base method: System.Void TeleportAimHandler::GetPoints(System.Collections.Generic.List`1<UnityEngine.Vector3> points)
    void GetPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points);
  }; // TeleportAimHandlerLaser
  #pragma pack(pop)
  static check_size<sizeof(TeleportAimHandlerLaser), 40 + sizeof(float)> __GlobalNamespace_TeleportAimHandlerLaserSizeCheck;
  static_assert(sizeof(TeleportAimHandlerLaser) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimHandlerLaser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimHandlerLaser::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimHandlerLaser::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&GlobalNamespace::TeleportAimHandlerLaser::GetPoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimHandlerLaser*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
