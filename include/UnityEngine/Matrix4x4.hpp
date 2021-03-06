// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Matrix4x4, "UnityEngine", "Matrix4x4");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Matrix4x4
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 103B40
  // [DefaultMemberAttribute] Offset: 103B40
  // [NativeTypeAttribute] Offset: 103B40
  // [RequiredByNativeCodeAttribute] Offset: 103B40
  // [NativeClassAttribute] Offset: 103B40
  struct Matrix4x4/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Matrix4x4>*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x103D30
    // public System.Single m00
    // Size: 0x4
    // Offset: 0x0
    float m00;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x103D90
    // public System.Single m10
    // Size: 0x4
    // Offset: 0x4
    float m10;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x103E40
    // public System.Single m20
    // Size: 0x4
    // Offset: 0x8
    float m20;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x103EC0
    // public System.Single m30
    // Size: 0x4
    // Offset: 0xC
    float m30;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x103F70
    // public System.Single m01
    // Size: 0x4
    // Offset: 0x10
    float m01;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x103FA0
    // public System.Single m11
    // Size: 0x4
    // Offset: 0x14
    float m11;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x1040B0
    // public System.Single m21
    // Size: 0x4
    // Offset: 0x18
    float m21;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x104130
    // public System.Single m31
    // Size: 0x4
    // Offset: 0x1C
    float m31;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x1041B0
    // public System.Single m02
    // Size: 0x4
    // Offset: 0x20
    float m02;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x104310
    // public System.Single m12
    // Size: 0x4
    // Offset: 0x24
    float m12;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x104340
    // public System.Single m22
    // Size: 0x4
    // Offset: 0x28
    float m22;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x1043A0
    // public System.Single m32
    // Size: 0x4
    // Offset: 0x2C
    float m32;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x104400
    // public System.Single m03
    // Size: 0x4
    // Offset: 0x30
    float m03;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x1044C0
    // public System.Single m13
    // Size: 0x4
    // Offset: 0x34
    float m13;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x1045E0
    // public System.Single m23
    // Size: 0x4
    // Offset: 0x38
    float m23;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0x104610
    // public System.Single m33
    // Size: 0x4
    // Offset: 0x3C
    float m33;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Matrix4x4
    constexpr Matrix4x4(float m00_ = {}, float m10_ = {}, float m20_ = {}, float m30_ = {}, float m01_ = {}, float m11_ = {}, float m21_ = {}, float m31_ = {}, float m02_ = {}, float m12_ = {}, float m22_ = {}, float m32_ = {}, float m03_ = {}, float m13_ = {}, float m23_ = {}, float m33_ = {}) noexcept : m00{m00_}, m10{m10_}, m20{m20_}, m30{m30_}, m01{m01_}, m11{m11_}, m21{m21_}, m31{m31_}, m02{m02_}, m12{m12_}, m22{m22_}, m32{m32_}, m03{m03_}, m13{m13_}, m23{m23_}, m33{m33_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Matrix4x4>
    operator ::System::IEquatable_1<::UnityEngine::Matrix4x4>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Matrix4x4>*>(this);
    }
    // Get static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
    static ::UnityEngine::Matrix4x4 _get_zeroMatrix();
    // Set static field: static private readonly UnityEngine.Matrix4x4 zeroMatrix
    static void _set_zeroMatrix(::UnityEngine::Matrix4x4 value);
    // Get static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
    static ::UnityEngine::Matrix4x4 _get_identityMatrix();
    // Set static field: static private readonly UnityEngine.Matrix4x4 identityMatrix
    static void _set_identityMatrix(::UnityEngine::Matrix4x4 value);
    // Get instance field reference: public System.Single m00
    [[deprecated("Use field access instead!")]] float& dyn_m00();
    // Get instance field reference: public System.Single m10
    [[deprecated("Use field access instead!")]] float& dyn_m10();
    // Get instance field reference: public System.Single m20
    [[deprecated("Use field access instead!")]] float& dyn_m20();
    // Get instance field reference: public System.Single m30
    [[deprecated("Use field access instead!")]] float& dyn_m30();
    // Get instance field reference: public System.Single m01
    [[deprecated("Use field access instead!")]] float& dyn_m01();
    // Get instance field reference: public System.Single m11
    [[deprecated("Use field access instead!")]] float& dyn_m11();
    // Get instance field reference: public System.Single m21
    [[deprecated("Use field access instead!")]] float& dyn_m21();
    // Get instance field reference: public System.Single m31
    [[deprecated("Use field access instead!")]] float& dyn_m31();
    // Get instance field reference: public System.Single m02
    [[deprecated("Use field access instead!")]] float& dyn_m02();
    // Get instance field reference: public System.Single m12
    [[deprecated("Use field access instead!")]] float& dyn_m12();
    // Get instance field reference: public System.Single m22
    [[deprecated("Use field access instead!")]] float& dyn_m22();
    // Get instance field reference: public System.Single m32
    [[deprecated("Use field access instead!")]] float& dyn_m32();
    // Get instance field reference: public System.Single m03
    [[deprecated("Use field access instead!")]] float& dyn_m03();
    // Get instance field reference: public System.Single m13
    [[deprecated("Use field access instead!")]] float& dyn_m13();
    // Get instance field reference: public System.Single m23
    [[deprecated("Use field access instead!")]] float& dyn_m23();
    // Get instance field reference: public System.Single m33
    [[deprecated("Use field access instead!")]] float& dyn_m33();
    // public UnityEngine.Vector3 get_lossyScale()
    // Offset: 0x96ACF0
    ::UnityEngine::Vector3 get_lossyScale();
    // public UnityEngine.Matrix4x4 get_inverse()
    // Offset: 0x96AB70
    ::UnityEngine::Matrix4x4 get_inverse();
    // public UnityEngine.Matrix4x4 get_transpose()
    // Offset: 0x96ADA0
    ::UnityEngine::Matrix4x4 get_transpose();
    // public System.Single get_Item(System.Int32 row, System.Int32 column)
    // Offset: 0x96A910
    float get_Item(int row, int column);
    // public System.Void set_Item(System.Int32 row, System.Int32 column, System.Single value)
    // Offset: 0x96B830
    void set_Item(int row, int column, float value);
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0x96A920
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0x96B620
    void set_Item(int index, float value);
    // static public UnityEngine.Matrix4x4 get_identity()
    // Offset: 0x96AAE0
    static ::UnityEngine::Matrix4x4 get_identity();
    // public System.Void .ctor(UnityEngine.Vector4 column0, UnityEngine.Vector4 column1, UnityEngine.Vector4 column2, UnityEngine.Vector4 column3)
    // Offset: 0x96A870
    Matrix4x4(::UnityEngine::Vector4 column0, ::UnityEngine::Vector4 column1, ::UnityEngine::Vector4 column2, ::UnityEngine::Vector4 column3);
    // static private System.Void .cctor()
    // Offset: 0x96A520
    static void _cctor();
    // private UnityEngine.Vector3 GetLossyScale()
    // Offset: 0x969460
    ::UnityEngine::Vector3 GetLossyScale();
    // static public UnityEngine.Matrix4x4 TRS(UnityEngine.Vector3 pos, UnityEngine.Quaternion q, UnityEngine.Vector3 s)
    // Offset: 0x969B40
    static ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s);
    // static public UnityEngine.Matrix4x4 Inverse(UnityEngine.Matrix4x4 m)
    // Offset: 0x969540
    static ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 m);
    // static public UnityEngine.Matrix4x4 Transpose(UnityEngine.Matrix4x4 m)
    // Offset: 0x96A490
    static ::UnityEngine::Matrix4x4 Transpose(::UnityEngine::Matrix4x4 m);
    // public System.Boolean Equals(UnityEngine.Matrix4x4 other)
    // Offset: 0x968DF0
    bool Equals(::UnityEngine::Matrix4x4 other);
    // public UnityEngine.Vector4 GetColumn(System.Int32 index)
    // Offset: 0x969110
    ::UnityEngine::Vector4 GetColumn(int index);
    // public System.Void SetColumn(System.Int32 index, UnityEngine.Vector4 column)
    // Offset: 0x969A50
    void SetColumn(int index, ::UnityEngine::Vector4 column);
    // public UnityEngine.Vector3 MultiplyPoint(UnityEngine.Vector3 point)
    // Offset: 0x969690
    ::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 MultiplyPoint3x4(UnityEngine.Vector3 point)
    // Offset: 0x9695D0
    ::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 point);
    // public UnityEngine.Vector3 MultiplyVector(UnityEngine.Vector3 vector)
    // Offset: 0x9697C0
    ::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 vector);
    // static public UnityEngine.Matrix4x4 Translate(UnityEngine.Vector3 vector)
    // Offset: 0x96A3A0
    static ::UnityEngine::Matrix4x4 Translate(::UnityEngine::Vector3 vector);
    // static public UnityEngine.Matrix4x4 Rotate(UnityEngine.Quaternion q)
    // Offset: 0x969870
    static ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion q);
    // static private System.Void GetLossyScale_Injected(ref UnityEngine.Matrix4x4 _unity_self, out UnityEngine.Vector3 ret)
    // Offset: 0x969410
    static void GetLossyScale_Injected(ByRef<::UnityEngine::Matrix4x4> _unity_self, ByRef<::UnityEngine::Vector3> ret);
    // static private System.Void TRS_Injected(ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion q, ref UnityEngine.Vector3 s, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x969AD0
    static void TRS_Injected(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> q, ByRef<::UnityEngine::Vector3> s, ByRef<::UnityEngine::Matrix4x4> ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x9694F0
    static void Inverse_Injected(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Matrix4x4> ret);
    // static private System.Void Transpose_Injected(ref UnityEngine.Matrix4x4 m, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x96A440
    static void Transpose_Injected(ByRef<::UnityEngine::Matrix4x4> m, ByRef<::UnityEngine::Matrix4x4> ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0x969230
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x968D40
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x969BF0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Matrix4x4
  #pragma pack(pop)
  static check_size<sizeof(Matrix4x4), 60 + sizeof(float)> __UnityEngine_Matrix4x4SizeCheck;
  static_assert(sizeof(Matrix4x4) == 0x40);
  // static public UnityEngine.Matrix4x4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Matrix4x4 rhs)
  // Offset: 0x96B0C0
  ::UnityEngine::Matrix4x4 operator*(const ::UnityEngine::Matrix4x4& lhs, const ::UnityEngine::Matrix4x4& rhs);
  // static public UnityEngine.Vector4 op_Multiply(UnityEngine.Matrix4x4 lhs, UnityEngine.Vector4 vector)
  // Offset: 0x96AF20
  ::UnityEngine::Vector4 operator*(const ::UnityEngine::Matrix4x4& lhs, const ::UnityEngine::Vector4& vector);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_lossyScale
// Il2CppName: get_lossyScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::get_lossyScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_lossyScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_inverse
// Il2CppName: get_inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::get_inverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_transpose
// Il2CppName: get_transpose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::get_transpose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_transpose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Matrix4x4::*)(int, int)>(&UnityEngine::Matrix4x4::get_Item)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, column});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Matrix4x4::*)(int, int, float)>(&UnityEngine::Matrix4x4::set_Item)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, column, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Matrix4x4::*)(int)>(&UnityEngine::Matrix4x4::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Matrix4x4::*)(int, float)>(&UnityEngine::Matrix4x4::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&UnityEngine::Matrix4x4::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Matrix4x4
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Matrix4x4::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetLossyScale
// Il2CppName: GetLossyScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::GetLossyScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetLossyScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::TRS
// Il2CppName: TRS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::TRS)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "TRS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, q, s});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Matrix4x4::Inverse)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Transpose
// Il2CppName: Transpose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Matrix4x4::Transpose)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Transpose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Matrix4x4::*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Matrix4x4::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetColumn
// Il2CppName: GetColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Matrix4x4::*)(int)>(&UnityEngine::Matrix4x4::GetColumn)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::SetColumn
// Il2CppName: SetColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Matrix4x4::*)(int, ::UnityEngine::Vector4)>(&UnityEngine::Matrix4x4::SetColumn)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* column = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "SetColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, column});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::MultiplyPoint
// Il2CppName: MultiplyPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::MultiplyPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "MultiplyPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::MultiplyPoint3x4
// Il2CppName: MultiplyPoint3x4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::MultiplyPoint3x4)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "MultiplyPoint3x4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::MultiplyVector
// Il2CppName: MultiplyVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Matrix4x4::*)(::UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::MultiplyVector)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "MultiplyVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Translate
// Il2CppName: Translate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Vector3)>(&UnityEngine::Matrix4x4::Translate)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Translate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Quaternion)>(&UnityEngine::Matrix4x4::Rotate)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetLossyScale_Injected
// Il2CppName: GetLossyScale_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Matrix4x4::GetLossyScale_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetLossyScale_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::TRS_Injected
// Il2CppName: TRS_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Matrix4x4>)>(&UnityEngine::Matrix4x4::TRS_Injected)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "TRS_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, q, s, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Inverse_Injected
// Il2CppName: Inverse_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>)>(&UnityEngine::Matrix4x4::Inverse_Injected)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Inverse_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Transpose_Injected
// Il2CppName: Transpose_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>)>(&UnityEngine::Matrix4x4::Transpose_Injected)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Transpose_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Matrix4x4::*)(::Il2CppObject*)>(&UnityEngine::Matrix4x4::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Matrix4x4::*)()>(&UnityEngine::Matrix4x4::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Matrix4x4), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Matrix4x4::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
