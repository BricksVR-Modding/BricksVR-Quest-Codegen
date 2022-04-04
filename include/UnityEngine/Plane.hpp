// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Plane, "UnityEngine", "Plane");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Plane
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: BB1F0
  struct Plane/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0xC
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Plane
    constexpr Plane(::UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}) noexcept : m_Normal{m_Normal_}, m_Distance{m_Distance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_Normal
    [[deprecated]] ::UnityEngine::Vector3& dyn_m_Normal();
    // Get instance field reference: private System.Single m_Distance
    [[deprecated]] float& dyn_m_Distance();
    // public System.Void .ctor(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0x972FF0
    Plane(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint);
    // public System.Void .ctor(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c)
    // Offset: 0x972E70
    Plane(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c);
    // public System.Boolean GetSide(UnityEngine.Vector3 point)
    // Offset: 0x972A20
    bool GetSide(::UnityEngine::Vector3 point);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out System.Single enter)
    // Offset: 0x972AD0
    bool Raycast(::UnityEngine::Ray ray, ByRef<float> enter);
    // public override System.String ToString()
    // Offset: 0x972C30
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Plane
  #pragma pack(pop)
  static check_size<sizeof(Plane), 12 + sizeof(float)> __UnityEngine_PlaneSizeCheck;
  static_assert(sizeof(Plane) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::GetSide
// Il2CppName: GetSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Plane::*)(::UnityEngine::Vector3)>(&UnityEngine::Plane::GetSide)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "GetSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Plane::*)(::UnityEngine::Ray, ByRef<float>)>(&UnityEngine::Plane::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* enter = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, enter});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Plane::*)()>(&UnityEngine::Plane::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
