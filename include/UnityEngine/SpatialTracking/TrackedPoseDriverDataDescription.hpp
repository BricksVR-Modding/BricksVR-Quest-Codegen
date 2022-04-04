// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.SpatialTracking.TrackedPoseDriver/UnityEngine.SpatialTracking.TrackedPose
#include "UnityEngine/SpatialTracking/TrackedPoseDriver.hpp"
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
// Type namespace: UnityEngine.SpatialTracking
namespace UnityEngine::SpatialTracking {
  // Forward declaring type: TrackedPoseDriverDataDescription
  class TrackedPoseDriverDataDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription");
// Type namespace: UnityEngine.SpatialTracking
namespace UnityEngine::SpatialTracking {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackedPoseDriverDataDescription : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::PoseData
    struct PoseData;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/UnityEngine.SpatialTracking.PoseData
    // [TokenAttribute] Offset: FFFFFFFF
    struct PoseData/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Collections.Generic.List`1<System.String> PoseNames
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::List_1<::StringW>* PoseNames;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
      // public System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/UnityEngine.SpatialTracking.TrackedPose> Poses
      // Size: 0x8
      // Offset: 0x8
      ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPose>* Poses;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPose>*) == 0x8);
      public:
      // Creating value type constructor for type: PoseData
      constexpr PoseData(::System::Collections::Generic::List_1<::StringW>* PoseNames_ = {}, ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPose>* Poses_ = {}) noexcept : PoseNames{PoseNames_}, Poses{Poses_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Collections.Generic.List`1<System.String> PoseNames
      [[deprecated]] ::System::Collections::Generic::List_1<::StringW>*& dyn_PoseNames();
      // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/UnityEngine.SpatialTracking.TrackedPose> Poses
      [[deprecated]] ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPose>*& dyn_Poses();
    }; // UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/UnityEngine.SpatialTracking.PoseData
    #pragma pack(pop)
    static check_size<sizeof(TrackedPoseDriverDataDescription::PoseData), 8 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriver::TrackedPose>*)> __UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_PoseDataSizeCheck;
    static_assert(sizeof(TrackedPoseDriverDataDescription::PoseData) == 0x10);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/UnityEngine.SpatialTracking.PoseData> DeviceData
    static ::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::PoseData>* _get_DeviceData();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/UnityEngine.SpatialTracking.PoseData> DeviceData
    static void _set_DeviceData(::System::Collections::Generic::List_1<::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::PoseData>* value);
    // static private System.Void .cctor()
    // Offset: 0x6634B0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackedPoseDriverDataDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackedPoseDriverDataDescription*, creationType>()));
    }
  }; // UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::PoseData, "UnityEngine.SpatialTracking", "TrackedPoseDriverDataDescription/PoseData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpatialTracking::TrackedPoseDriverDataDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
