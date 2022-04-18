// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.IStyleValue`1
#include "UnityEngine/UIElements/IStyleValue_1.hpp"
// Including type: UnityEngine.UIElements.Length
#include "UnityEngine/UIElements/Length.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleLength
  struct StyleLength;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleLength, "UnityEngine.UIElements", "StyleLength");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleLength
  // [TokenAttribute] Offset: FFFFFFFF
  struct StyleLength/*, public ::System::ValueType, public ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>, public ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>*/ {
    public:
    public:
    // private UnityEngine.UIElements.StyleKeyword m_Keyword
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::UIElements::StyleKeyword m_Keyword;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleKeyword) == 0x4);
    // private UnityEngine.UIElements.Length m_Value
    // Size: 0x8
    // Offset: 0x4
    ::UnityEngine::UIElements::Length m_Value;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Length) == 0x8);
    // private System.Int32 m_Specificity
    // Size: 0x4
    // Offset: 0xC
    int m_Specificity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StyleLength
    constexpr StyleLength(::UnityEngine::UIElements::StyleKeyword m_Keyword_ = {}, ::UnityEngine::UIElements::Length m_Value_ = {}, int m_Specificity_ = {}) noexcept : m_Keyword{m_Keyword_}, m_Value{m_Value_}, m_Specificity{m_Specificity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>
    operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>*>(this);
    }
    // Get instance field reference: private UnityEngine.UIElements.StyleKeyword m_Keyword
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleKeyword& dyn_m_Keyword();
    // Get instance field reference: private UnityEngine.UIElements.Length m_Value
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Length& dyn_m_Value();
    // Get instance field reference: private System.Int32 m_Specificity
    [[deprecated("Use field access instead!")]] int& dyn_m_Specificity();
    // public UnityEngine.UIElements.Length get_value()
    // Offset: 0x2AD210
    ::UnityEngine::UIElements::Length get_value();
    // public UnityEngine.UIElements.StyleKeyword get_keyword()
    // Offset: 0x2AC700
    ::UnityEngine::UIElements::StyleKeyword get_keyword();
    // System.Void .ctor(UnityEngine.UIElements.Length v, UnityEngine.UIElements.StyleKeyword keyword)
    // Offset: 0x2AD200
    StyleLength(::UnityEngine::UIElements::Length v, ::UnityEngine::UIElements::StyleKeyword keyword);
    // public System.Boolean Equals(UnityEngine.UIElements.StyleLength other)
    // Offset: 0x2AD0C0
    bool Equals(::UnityEngine::UIElements::StyleLength other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2ACFE0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2AD120
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2AD1A0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleLength
  #pragma pack(pop)
  static check_size<sizeof(StyleLength), 12 + sizeof(int)> __UnityEngine_UIElements_StyleLengthSizeCheck;
  static_assert(sizeof(StyleLength) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.UIElements.StyleLength lhs, UnityEngine.UIElements.StyleLength rhs)
  // Offset: 0x2AD220
  bool operator ==(const ::UnityEngine::UIElements::StyleLength& lhs, const ::UnityEngine::UIElements::StyleLength& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Length (UnityEngine::UIElements::StyleLength::*)()>(&UnityEngine::UIElements::StyleLength::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleLength), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleKeyword (UnityEngine::UIElements::StyleLength::*)()>(&UnityEngine::UIElements::StyleLength::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleLength), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::StyleLength
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleLength::*)(::UnityEngine::UIElements::StyleLength)>(&UnityEngine::UIElements::StyleLength::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleLength")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleLength), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleLength::*)(::Il2CppObject*)>(&UnityEngine::UIElements::StyleLength::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleLength), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleLength::*)()>(&UnityEngine::UIElements::StyleLength::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleLength), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleLength::*)()>(&UnityEngine::UIElements::StyleLength::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleLength), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleLength::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
