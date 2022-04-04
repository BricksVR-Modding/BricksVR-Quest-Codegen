// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: AdvancedColorPicker.ColorType
#include "AdvancedColorPicker/ColorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: HSVColor
  struct HSVColor;
  // Forward declaring type: RGBColor
  struct RGBColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: HSLColor
  struct HSLColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::HSLColor, "AdvancedColorPicker", "HSLColor");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: AdvancedColorPicker.HSLColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct HSLColor/*, public ::System::ValueType, public ::System::IEquatable_1<::AdvancedColorPicker::HSLColor>*/ {
    public:
    public:
    // public System.Double H
    // Size: 0x8
    // Offset: 0x0
    double H;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double S
    // Size: 0x8
    // Offset: 0x8
    double S;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double L
    // Size: 0x8
    // Offset: 0x10
    double L;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: HSLColor
    constexpr HSLColor(double H_ = {}, double S_ = {}, double L_ = {}) noexcept : H{H_}, S{S_}, L{L_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::AdvancedColorPicker::HSLColor>
    operator ::System::IEquatable_1<::AdvancedColorPicker::HSLColor>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::AdvancedColorPicker::HSLColor>*>(this);
    }
    // static field const value: static public AdvancedColorPicker.ColorType Flag
    static constexpr const int Flag = 896;
    // Get static field: static public AdvancedColorPicker.ColorType Flag
    static ::AdvancedColorPicker::ColorType _get_Flag();
    // Set static field: static public AdvancedColorPicker.ColorType Flag
    static void _set_Flag(::AdvancedColorPicker::ColorType value);
    // Get instance field reference: public System.Double H
    [[deprecated]] double& dyn_H();
    // Get instance field reference: public System.Double S
    [[deprecated]] double& dyn_S();
    // Get instance field reference: public System.Double L
    [[deprecated]] double& dyn_L();
    // public System.Single get_NormalizedH()
    // Offset: 0x5B73F0
    float get_NormalizedH();
    // public System.Void set_NormalizedH(System.Single value)
    // Offset: 0x5B74B0
    void set_NormalizedH(float value);
    // public System.Single get_NormalizedS()
    // Offset: 0x5B7420
    float get_NormalizedS();
    // public System.Single get_NormalizedL()
    // Offset: 0x5B7410
    float get_NormalizedL();
    // public System.Void .ctor(System.Double h, System.Double s, System.Double l)
    // Offset: 0x5B7170
    // ABORTED: conflicts with another method.  HSLColor(double h, double s, double l);
    // public System.Void .ctor(System.Single h, System.Single s, System.Single l)
    // Offset: 0x5B7180
    HSLColor(float h, float s, float l);
    // public System.Void .ctor(AdvancedColorPicker.HSVColor hsv)
    // Offset: 0x5B71B0
    HSLColor(::AdvancedColorPicker::HSVColor hsv);
    // public System.Void .ctor(AdvancedColorPicker.RGBColor rgb)
    // Offset: 0x5B7240
    HSLColor(::AdvancedColorPicker::RGBColor rgb);
    // public UnityEngine.Color32 ToColor(System.Byte alpha)
    // Offset: 0x5B6E70
    ::UnityEngine::Color32 ToColor(uint8_t alpha);
    // public System.Boolean Equals(AdvancedColorPicker.HSLColor other)
    // Offset: 0x5B6E10
    bool Equals(::AdvancedColorPicker::HSLColor other);
    // public override System.String ToString()
    // Offset: 0x5B6EE0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x5B6D60
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5B6E50
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // AdvancedColorPicker.HSLColor
  #pragma pack(pop)
  static check_size<sizeof(HSLColor), 16 + sizeof(double)> __AdvancedColorPicker_HSLColorSizeCheck;
  static_assert(sizeof(HSLColor) == 0x18);
  // static public System.Boolean op_Equality(AdvancedColorPicker.HSLColor one, AdvancedColorPicker.HSLColor two)
  // Offset: 0x5B7430
  bool operator ==(const ::AdvancedColorPicker::HSLColor& one, const ::AdvancedColorPicker::HSLColor& two);
  // static public System.Boolean op_Inequality(AdvancedColorPicker.HSLColor one, AdvancedColorPicker.HSLColor two)
  // Offset: 0x5B7470
  bool operator !=(const ::AdvancedColorPicker::HSLColor& one, const ::AdvancedColorPicker::HSLColor& two);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::get_NormalizedH
// Il2CppName: get_NormalizedH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::HSLColor::*)()>(&AdvancedColorPicker::HSLColor::get_NormalizedH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "get_NormalizedH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::set_NormalizedH
// Il2CppName: set_NormalizedH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::HSLColor::*)(float)>(&AdvancedColorPicker::HSLColor::set_NormalizedH)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "set_NormalizedH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::get_NormalizedS
// Il2CppName: get_NormalizedS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::HSLColor::*)()>(&AdvancedColorPicker::HSLColor::get_NormalizedS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "get_NormalizedS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::get_NormalizedL
// Il2CppName: get_NormalizedL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::HSLColor::*)()>(&AdvancedColorPicker::HSLColor::get_NormalizedL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "get_NormalizedL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::HSLColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::HSLColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::HSLColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::HSLColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::ToColor
// Il2CppName: ToColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (AdvancedColorPicker::HSLColor::*)(uint8_t)>(&AdvancedColorPicker::HSLColor::ToColor)> {
  static const MethodInfo* get() {
    static auto* alpha = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "ToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alpha});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::HSLColor::*)(::AdvancedColorPicker::HSLColor)>(&AdvancedColorPicker::HSLColor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "HSLColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::HSLColor::*)()>(&AdvancedColorPicker::HSLColor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::HSLColor::*)(::Il2CppObject*)>(&AdvancedColorPicker::HSLColor::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AdvancedColorPicker::HSLColor::*)()>(&AdvancedColorPicker::HSLColor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSLColor), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: AdvancedColorPicker::HSLColor::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
