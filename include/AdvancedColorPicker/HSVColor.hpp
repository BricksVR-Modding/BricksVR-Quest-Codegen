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
  // Forward declaring type: RGBColor
  struct RGBColor;
  // Forward declaring type: HSLColor
  struct HSLColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: HSVColor
  struct HSVColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::HSVColor, "AdvancedColorPicker", "HSVColor");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: AdvancedColorPicker.HSVColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct HSVColor/*, public ::System::ValueType, public ::System::IEquatable_1<::AdvancedColorPicker::HSVColor>*/ {
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
    // public System.Double V
    // Size: 0x8
    // Offset: 0x10
    double V;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: HSVColor
    constexpr HSVColor(double H_ = {}, double S_ = {}, double V_ = {}) noexcept : H{H_}, S{S_}, V{V_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::AdvancedColorPicker::HSVColor>
    operator ::System::IEquatable_1<::AdvancedColorPicker::HSVColor>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::AdvancedColorPicker::HSVColor>*>(this);
    }
    // static field const value: static public AdvancedColorPicker.ColorType Flag
    static constexpr const int Flag = 112;
    // Get static field: static public AdvancedColorPicker.ColorType Flag
    static ::AdvancedColorPicker::ColorType _get_Flag();
    // Set static field: static public AdvancedColorPicker.ColorType Flag
    static void _set_Flag(::AdvancedColorPicker::ColorType value);
    // Get instance field reference: public System.Double H
    double& dyn_H();
    // Get instance field reference: public System.Double S
    double& dyn_S();
    // Get instance field reference: public System.Double V
    double& dyn_V();
    // public System.Single get_NormalizedH()
    // Offset: 0xE18CD0
    float get_NormalizedH();
    // public System.Void set_NormalizedH(System.Single value)
    // Offset: 0xE22130
    void set_NormalizedH(float value);
    // public System.Single get_NormalizedS()
    // Offset: 0xE18CE8
    float get_NormalizedS();
    // public System.Void set_NormalizedS(System.Single value)
    // Offset: 0xE22148
    void set_NormalizedS(float value);
    // public System.Single get_NormalizedV()
    // Offset: 0xE18CF4
    float get_NormalizedV();
    // public System.Void set_NormalizedV(System.Single value)
    // Offset: 0xE22154
    void set_NormalizedV(float value);
    // public System.Void .ctor(System.Double h, System.Double s, System.Double v)
    // Offset: 0xE18F60
    // ABORTED: conflicts with another method.  HSVColor(double h, double s, double v);
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v)
    // Offset: 0xE19290
    HSVColor(float h, float s, float v);
    // public System.Void .ctor(AdvancedColorPicker.RGBColor rgb)
    // Offset: 0xE18598
    HSVColor(::AdvancedColorPicker::RGBColor rgb);
    // public System.Void .ctor(AdvancedColorPicker.HSLColor hsl)
    // Offset: 0xE18AEC
    HSVColor(::AdvancedColorPicker::HSLColor hsl);
    // public UnityEngine.Color32 ToColor(System.Byte alpha)
    // Offset: 0xE192B4
    ::UnityEngine::Color32 ToColor(uint8_t alpha);
    // public System.Boolean Equals(AdvancedColorPicker.HSVColor other)
    // Offset: 0xE22320
    bool Equals(::AdvancedColorPicker::HSVColor other);
    // public override System.String ToString()
    // Offset: 0xE22160
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE22370
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE22418
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // AdvancedColorPicker.HSVColor
  #pragma pack(pop)
  static check_size<sizeof(HSVColor), 16 + sizeof(double)> __AdvancedColorPicker_HSVColorSizeCheck;
  static_assert(sizeof(HSVColor) == 0x18);
  // static public System.Boolean op_Equality(AdvancedColorPicker.HSVColor one, AdvancedColorPicker.HSVColor two)
  // Offset: 0xE181E0
  bool operator ==(const ::AdvancedColorPicker::HSVColor& one, const ::AdvancedColorPicker::HSVColor& two);
  // static public System.Boolean op_Inequality(AdvancedColorPicker.HSVColor one, AdvancedColorPicker.HSVColor two)
  // Offset: 0xE22350
  bool operator !=(const ::AdvancedColorPicker::HSVColor& one, const ::AdvancedColorPicker::HSVColor& two);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::get_NormalizedH
// Il2CppName: get_NormalizedH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::HSVColor::*)()>(&AdvancedColorPicker::HSVColor::get_NormalizedH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "get_NormalizedH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::set_NormalizedH
// Il2CppName: set_NormalizedH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::HSVColor::*)(float)>(&AdvancedColorPicker::HSVColor::set_NormalizedH)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "set_NormalizedH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::get_NormalizedS
// Il2CppName: get_NormalizedS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::HSVColor::*)()>(&AdvancedColorPicker::HSVColor::get_NormalizedS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "get_NormalizedS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::set_NormalizedS
// Il2CppName: set_NormalizedS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::HSVColor::*)(float)>(&AdvancedColorPicker::HSVColor::set_NormalizedS)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "set_NormalizedS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::get_NormalizedV
// Il2CppName: get_NormalizedV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AdvancedColorPicker::HSVColor::*)()>(&AdvancedColorPicker::HSVColor::get_NormalizedV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "get_NormalizedV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::set_NormalizedV
// Il2CppName: set_NormalizedV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::HSVColor::*)(float)>(&AdvancedColorPicker::HSVColor::set_NormalizedV)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "set_NormalizedV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::HSVColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::HSVColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::HSVColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::HSVColor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::ToColor
// Il2CppName: ToColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (AdvancedColorPicker::HSVColor::*)(uint8_t)>(&AdvancedColorPicker::HSVColor::ToColor)> {
  static const MethodInfo* get() {
    static auto* alpha = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "ToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alpha});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::HSVColor::*)(::AdvancedColorPicker::HSVColor)>(&AdvancedColorPicker::HSVColor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "HSVColor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::HSVColor::*)()>(&AdvancedColorPicker::HSVColor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::HSVColor::*)(::Il2CppObject*)>(&AdvancedColorPicker::HSVColor::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AdvancedColorPicker::HSVColor::*)()>(&AdvancedColorPicker::HSVColor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::HSVColor), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: AdvancedColorPicker::HSVColor::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
