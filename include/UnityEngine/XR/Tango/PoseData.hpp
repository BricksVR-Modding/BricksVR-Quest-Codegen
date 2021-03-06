// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.XR.Tango.PoseStatus
#include "UnityEngine/XR/Tango/PoseStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Tango
namespace UnityEngine::XR::Tango {
  // Forward declaring type: PoseData
  struct PoseData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Tango::PoseData, "UnityEngine.XR.Tango", "PoseData");
// Type namespace: UnityEngine.XR.Tango
namespace UnityEngine::XR::Tango {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Tango.PoseData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: D9200
  // [NativeHeaderAttribute] Offset: D9200
  struct PoseData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double orientation_x
    // Size: 0x8
    // Offset: 0x0
    double orientation_x;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double orientation_y
    // Size: 0x8
    // Offset: 0x8
    double orientation_y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double orientation_z
    // Size: 0x8
    // Offset: 0x10
    double orientation_z;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double orientation_w
    // Size: 0x8
    // Offset: 0x18
    double orientation_w;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double translation_x
    // Size: 0x8
    // Offset: 0x20
    double translation_x;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double translation_y
    // Size: 0x8
    // Offset: 0x28
    double translation_y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double translation_z
    // Size: 0x8
    // Offset: 0x30
    double translation_z;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public UnityEngine.XR.Tango.PoseStatus statusCode
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::XR::Tango::PoseStatus statusCode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Tango::PoseStatus) == 0x4);
    public:
    // Creating value type constructor for type: PoseData
    constexpr PoseData(double orientation_x_ = {}, double orientation_y_ = {}, double orientation_z_ = {}, double orientation_w_ = {}, double translation_x_ = {}, double translation_y_ = {}, double translation_z_ = {}, ::UnityEngine::XR::Tango::PoseStatus statusCode_ = {}) noexcept : orientation_x{orientation_x_}, orientation_y{orientation_y_}, orientation_z{orientation_z_}, orientation_w{orientation_w_}, translation_x{translation_x_}, translation_y{translation_y_}, translation_z{translation_z_}, statusCode{statusCode_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double orientation_x
    [[deprecated("Use field access instead!")]] double& dyn_orientation_x();
    // Get instance field reference: public System.Double orientation_y
    [[deprecated("Use field access instead!")]] double& dyn_orientation_y();
    // Get instance field reference: public System.Double orientation_z
    [[deprecated("Use field access instead!")]] double& dyn_orientation_z();
    // Get instance field reference: public System.Double orientation_w
    [[deprecated("Use field access instead!")]] double& dyn_orientation_w();
    // Get instance field reference: public System.Double translation_x
    [[deprecated("Use field access instead!")]] double& dyn_translation_x();
    // Get instance field reference: public System.Double translation_y
    [[deprecated("Use field access instead!")]] double& dyn_translation_y();
    // Get instance field reference: public System.Double translation_z
    [[deprecated("Use field access instead!")]] double& dyn_translation_z();
    // Get instance field reference: public UnityEngine.XR.Tango.PoseStatus statusCode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Tango::PoseStatus& dyn_statusCode();
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x671AF0
    ::UnityEngine::Quaternion get_rotation();
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x671A90
    ::UnityEngine::Vector3 get_position();
  }; // UnityEngine.XR.Tango.PoseData
  #pragma pack(pop)
  static check_size<sizeof(PoseData), 56 + sizeof(::UnityEngine::XR::Tango::PoseStatus)> __UnityEngine_XR_Tango_PoseDataSizeCheck;
  static_assert(sizeof(PoseData) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Tango::PoseData::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::XR::Tango::PoseData::*)()>(&UnityEngine::XR::Tango::PoseData::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Tango::PoseData), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Tango::PoseData::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::XR::Tango::PoseData::*)()>(&UnityEngine::XR::Tango::PoseData::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Tango::PoseData), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
