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
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphValueRecord
  struct GlyphValueRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, "UnityEngine.TextCore.LowLevel", "GlyphValueRecord");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphValueRecord
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: BB1F0
  struct GlyphValueRecord/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0xC86D0
    // private System.Single m_XPlacement
    // Size: 0x4
    // Offset: 0x0
    float m_XPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xC87C0
    // private System.Single m_YPlacement
    // Size: 0x4
    // Offset: 0x4
    float m_YPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xC88C0
    // private System.Single m_XAdvance
    // Size: 0x4
    // Offset: 0x8
    float m_XAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xC8930
    // private System.Single m_YAdvance
    // Size: 0x4
    // Offset: 0xC
    float m_YAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GlyphValueRecord
    constexpr GlyphValueRecord(float m_XPlacement_ = {}, float m_YPlacement_ = {}, float m_XAdvance_ = {}, float m_YAdvance_ = {}) noexcept : m_XPlacement{m_XPlacement_}, m_YPlacement{m_YPlacement_}, m_XAdvance{m_XAdvance_}, m_YAdvance{m_YAdvance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>
    operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>*>(this);
    }
    // Get instance field reference: private System.Single m_XPlacement
    [[deprecated]] float& dyn_m_XPlacement();
    // Get instance field reference: private System.Single m_YPlacement
    [[deprecated]] float& dyn_m_YPlacement();
    // Get instance field reference: private System.Single m_XAdvance
    [[deprecated]] float& dyn_m_XAdvance();
    // Get instance field reference: private System.Single m_YAdvance
    [[deprecated]] float& dyn_m_YAdvance();
    // public System.Single get_xPlacement()
    // Offset: 0x2A5AA0
    float get_xPlacement();
    // public System.Single get_yPlacement()
    // Offset: 0x653940
    float get_yPlacement();
    // public System.Single get_xAdvance()
    // Offset: 0x653960
    float get_xAdvance();
    // public System.Single get_yAdvance()
    // Offset: 0x653970
    float get_yAdvance();
    // public System.Boolean Equals(UnityEngine.TextCore.LowLevel.GlyphValueRecord other)
    // Offset: 0x653BE0
    bool Equals(::UnityEngine::TextCore::LowLevel::GlyphValueRecord other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x653CE0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x653C70
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.TextCore.LowLevel.GlyphValueRecord
  #pragma pack(pop)
  static check_size<sizeof(GlyphValueRecord), 12 + sizeof(float)> __UnityEngine_TextCore_LowLevel_GlyphValueRecordSizeCheck;
  static_assert(sizeof(GlyphValueRecord) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_xPlacement
// Il2CppName: get_xPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_xPlacement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "get_xPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_yPlacement
// Il2CppName: get_yPlacement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_yPlacement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "get_yPlacement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_xAdvance
// Il2CppName: get_xAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_xAdvance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "get_xAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_yAdvance
// Il2CppName: get_yAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::get_yAdvance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "get_yAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord)>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.LowLevel", "GlyphValueRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphValueRecord::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::LowLevel::GlyphValueRecord::*)(::Il2CppObject*)>(&UnityEngine::TextCore::LowLevel::GlyphValueRecord::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphValueRecord), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
