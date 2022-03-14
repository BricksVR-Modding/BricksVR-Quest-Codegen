// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Sigtrap.VrTunnellingPro.Angle
#include "Sigtrap/VrTunnellingPro/Angle.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Forward declaring type: Angle3
  struct Angle3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Sigtrap::VrTunnellingPro::Angle3, "Sigtrap.VrTunnellingPro", "Angle3");
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Sigtrap.VrTunnellingPro.Angle3
  // [TokenAttribute] Offset: FFFFFFFF
  struct Angle3/*, public ::System::ValueType*/ {
    public:
    public:
    // public Sigtrap.VrTunnellingPro.Angle x
    // Size: 0x4
    // Offset: 0x0
    ::Sigtrap::VrTunnellingPro::Angle x;
    // Field size check
    static_assert(sizeof(::Sigtrap::VrTunnellingPro::Angle) == 0x4);
    // public Sigtrap.VrTunnellingPro.Angle y
    // Size: 0x4
    // Offset: 0x4
    ::Sigtrap::VrTunnellingPro::Angle y;
    // Field size check
    static_assert(sizeof(::Sigtrap::VrTunnellingPro::Angle) == 0x4);
    // public Sigtrap.VrTunnellingPro.Angle z
    // Size: 0x4
    // Offset: 0x8
    ::Sigtrap::VrTunnellingPro::Angle z;
    // Field size check
    static_assert(sizeof(::Sigtrap::VrTunnellingPro::Angle) == 0x4);
    public:
    // Creating value type constructor for type: Angle3
    constexpr Angle3(::Sigtrap::VrTunnellingPro::Angle x_ = {}, ::Sigtrap::VrTunnellingPro::Angle y_ = {}, ::Sigtrap::VrTunnellingPro::Angle z_ = {}) noexcept : x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Sigtrap.VrTunnellingPro.Angle x
    ::Sigtrap::VrTunnellingPro::Angle& dyn_x();
    // Get instance field reference: public Sigtrap.VrTunnellingPro.Angle y
    ::Sigtrap::VrTunnellingPro::Angle& dyn_y();
    // Get instance field reference: public Sigtrap.VrTunnellingPro.Angle z
    ::Sigtrap::VrTunnellingPro::Angle& dyn_z();
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0x10BA240
    ::UnityEngine::Vector3 get_eulerAngles();
    // public UnityEngine.Vector3 get_eulerAcute()
    // Offset: 0x10BA27C
    ::UnityEngine::Vector3 get_eulerAcute();
    // public UnityEngine.Vector3 get_eulerReflex()
    // Offset: 0x10BA304
    ::UnityEngine::Vector3 get_eulerReflex();
    // public Sigtrap.VrTunnellingPro.Angle get_angle()
    // Offset: 0x10BA38C
    ::Sigtrap::VrTunnellingPro::Angle get_angle();
    // public UnityEngine.Vector3 get_axis()
    // Offset: 0x10BA4B4
    ::UnityEngine::Vector3 get_axis();
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z)
    // Offset: 0x10BA4EC
    Angle3(float x, float y, float z);
    // public System.Void .ctor(Sigtrap.VrTunnellingPro.Angle x, Sigtrap.VrTunnellingPro.Angle y, Sigtrap.VrTunnellingPro.Angle z)
    // Offset: 0x10BA544
    // ABORTED: conflicts with another method.  Angle3(::Sigtrap::VrTunnellingPro::Angle x, ::Sigtrap::VrTunnellingPro::Angle y, ::Sigtrap::VrTunnellingPro::Angle z);
    // public System.Void .ctor(UnityEngine.Vector3 euler)
    // Offset: 0x10BA548
    Angle3(::UnityEngine::Vector3 euler);
    // public System.Void .ctor(UnityEngine.Quaternion rotation)
    // Offset: 0x10BA54C
    Angle3(::UnityEngine::Quaternion rotation);
    // public System.Void ToAxisAngle(out UnityEngine.Vector3 axis, out Sigtrap.VrTunnellingPro.Angle angle)
    // Offset: 0x10BA3C0
    void ToAxisAngle(ByRef<::UnityEngine::Vector3> axis, ByRef<::Sigtrap::VrTunnellingPro::Angle> angle);
    // public UnityEngine.Vector3 ToEuler(Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType type)
    // Offset: 0x10BA58C
    ::UnityEngine::Vector3 ToEuler(::Sigtrap::VrTunnellingPro::Angle::AngleType type);
    // public override System.String ToString()
    // Offset: 0x10BA618
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10BA8C4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10BA9AC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Sigtrap.VrTunnellingPro.Angle3
  #pragma pack(pop)
  static check_size<sizeof(Angle3), 8 + sizeof(::Sigtrap::VrTunnellingPro::Angle)> __Sigtrap_VrTunnellingPro_Angle3SizeCheck;
  static_assert(sizeof(Angle3) == 0xC);
  // static public Sigtrap.VrTunnellingPro.Angle3 op_Addition(Sigtrap.VrTunnellingPro.Angle3 a, Sigtrap.VrTunnellingPro.Angle3 b)
  // Offset: 0x10BA6D8
  ::Sigtrap::VrTunnellingPro::Angle3 operator+(const ::Sigtrap::VrTunnellingPro::Angle3& a, const ::Sigtrap::VrTunnellingPro::Angle3& b);
  // static public Sigtrap.VrTunnellingPro.Angle3 op_Subtraction(Sigtrap.VrTunnellingPro.Angle3 a, Sigtrap.VrTunnellingPro.Angle3 b)
  // Offset: 0x10BA768
  ::Sigtrap::VrTunnellingPro::Angle3 operator-(const ::Sigtrap::VrTunnellingPro::Angle3& a, const ::Sigtrap::VrTunnellingPro::Angle3& b);
  // static public Sigtrap.VrTunnellingPro.Angle3 op_Multiply(Sigtrap.VrTunnellingPro.Angle3 a, System.Single b)
  // Offset: 0x10BA7F8
  ::Sigtrap::VrTunnellingPro::Angle3 operator*(const ::Sigtrap::VrTunnellingPro::Angle3& a, const float& b);
  // static public System.Boolean op_Equality(Sigtrap.VrTunnellingPro.Angle3 a, Sigtrap.VrTunnellingPro.Angle3 b)
  // Offset: 0x10BA87C
  bool operator ==(const ::Sigtrap::VrTunnellingPro::Angle3& a, const ::Sigtrap::VrTunnellingPro::Angle3& b);
  // static public System.Boolean op_Inequality(Sigtrap.VrTunnellingPro.Angle3 a, Sigtrap.VrTunnellingPro.Angle3 b)
  // Offset: 0x10BA8A0
  bool operator !=(const ::Sigtrap::VrTunnellingPro::Angle3& a, const ::Sigtrap::VrTunnellingPro::Angle3& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::get_eulerAngles
// Il2CppName: get_eulerAngles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::get_eulerAngles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "get_eulerAngles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::get_eulerAcute
// Il2CppName: get_eulerAcute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::get_eulerAcute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "get_eulerAcute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::get_eulerReflex
// Il2CppName: get_eulerReflex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::get_eulerReflex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "get_eulerReflex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::get_angle
// Il2CppName: get_angle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Sigtrap::VrTunnellingPro::Angle (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::get_angle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "get_angle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::get_axis
// Il2CppName: get_axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::get_axis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "get_axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::Angle3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::Angle3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::Angle3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::Angle3
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::ToAxisAngle
// Il2CppName: ToAxisAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Sigtrap::VrTunnellingPro::Angle3::*)(ByRef<::UnityEngine::Vector3>, ByRef<::Sigtrap::VrTunnellingPro::Angle>)>(&Sigtrap::VrTunnellingPro::Angle3::ToAxisAngle)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* angle = &::il2cpp_utils::GetClassFromName("Sigtrap.VrTunnellingPro", "Angle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "ToAxisAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis, angle});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::ToEuler
// Il2CppName: ToEuler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Sigtrap::VrTunnellingPro::Angle3::*)(::Sigtrap::VrTunnellingPro::Angle::AngleType)>(&Sigtrap::VrTunnellingPro::Angle3::ToEuler)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Sigtrap.VrTunnellingPro", "Angle/AngleType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "ToEuler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Sigtrap::VrTunnellingPro::Angle3::*)(::Il2CppObject*)>(&Sigtrap::VrTunnellingPro::Angle3::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Sigtrap::VrTunnellingPro::Angle3::*)()>(&Sigtrap::VrTunnellingPro::Angle3::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::Angle3), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::Angle3::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
