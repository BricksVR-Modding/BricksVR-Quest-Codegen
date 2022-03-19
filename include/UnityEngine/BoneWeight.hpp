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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoneWeight
  struct BoneWeight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight, "UnityEngine", "BoneWeight");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BoneWeight
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6D7F60
  struct BoneWeight/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::BoneWeight>*/ {
    public:
    public:
    // [SerializeField] Offset: 0x6DBB4C
    // private System.Single m_Weight0
    // Size: 0x4
    // Offset: 0x0
    float m_Weight0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SerializeField] Offset: 0x6DBB5C
    // private System.Single m_Weight1
    // Size: 0x4
    // Offset: 0x4
    float m_Weight1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SerializeField] Offset: 0x6DBB6C
    // private System.Single m_Weight2
    // Size: 0x4
    // Offset: 0x8
    float m_Weight2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SerializeField] Offset: 0x6DBB7C
    // private System.Single m_Weight3
    // Size: 0x4
    // Offset: 0xC
    float m_Weight3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SerializeField] Offset: 0x6DBB8C
    // private System.Int32 m_BoneIndex0
    // Size: 0x4
    // Offset: 0x10
    int m_BoneIndex0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SerializeField] Offset: 0x6DBB9C
    // private System.Int32 m_BoneIndex1
    // Size: 0x4
    // Offset: 0x14
    int m_BoneIndex1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SerializeField] Offset: 0x6DBBAC
    // private System.Int32 m_BoneIndex2
    // Size: 0x4
    // Offset: 0x18
    int m_BoneIndex2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SerializeField] Offset: 0x6DBBBC
    // private System.Int32 m_BoneIndex3
    // Size: 0x4
    // Offset: 0x1C
    int m_BoneIndex3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoneWeight
    constexpr BoneWeight(float m_Weight0_ = {}, float m_Weight1_ = {}, float m_Weight2_ = {}, float m_Weight3_ = {}, int m_BoneIndex0_ = {}, int m_BoneIndex1_ = {}, int m_BoneIndex2_ = {}, int m_BoneIndex3_ = {}) noexcept : m_Weight0{m_Weight0_}, m_Weight1{m_Weight1_}, m_Weight2{m_Weight2_}, m_Weight3{m_Weight3_}, m_BoneIndex0{m_BoneIndex0_}, m_BoneIndex1{m_BoneIndex1_}, m_BoneIndex2{m_BoneIndex2_}, m_BoneIndex3{m_BoneIndex3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::BoneWeight>
    operator ::System::IEquatable_1<::UnityEngine::BoneWeight>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::BoneWeight>*>(this);
    }
    // Get instance field reference: private System.Single m_Weight0
    float& dyn_m_Weight0();
    // Get instance field reference: private System.Single m_Weight1
    float& dyn_m_Weight1();
    // Get instance field reference: private System.Single m_Weight2
    float& dyn_m_Weight2();
    // Get instance field reference: private System.Single m_Weight3
    float& dyn_m_Weight3();
    // Get instance field reference: private System.Int32 m_BoneIndex0
    int& dyn_m_BoneIndex0();
    // Get instance field reference: private System.Int32 m_BoneIndex1
    int& dyn_m_BoneIndex1();
    // Get instance field reference: private System.Int32 m_BoneIndex2
    int& dyn_m_BoneIndex2();
    // Get instance field reference: private System.Int32 m_BoneIndex3
    int& dyn_m_BoneIndex3();
    // public System.Single get_weight0()
    // Offset: 0xC97460
    float get_weight0();
    // public System.Void set_weight0(System.Single value)
    // Offset: 0xC97468
    void set_weight0(float value);
    // public System.Single get_weight1()
    // Offset: 0xC97470
    float get_weight1();
    // public System.Void set_weight1(System.Single value)
    // Offset: 0xC97478
    void set_weight1(float value);
    // public System.Single get_weight2()
    // Offset: 0xC97480
    float get_weight2();
    // public System.Void set_weight2(System.Single value)
    // Offset: 0xC97488
    void set_weight2(float value);
    // public System.Single get_weight3()
    // Offset: 0xC97490
    float get_weight3();
    // public System.Void set_weight3(System.Single value)
    // Offset: 0xC97498
    void set_weight3(float value);
    // public System.Int32 get_boneIndex0()
    // Offset: 0xC974A0
    int get_boneIndex0();
    // public System.Void set_boneIndex0(System.Int32 value)
    // Offset: 0xC974A8
    void set_boneIndex0(int value);
    // public System.Int32 get_boneIndex1()
    // Offset: 0xC974B0
    int get_boneIndex1();
    // public System.Void set_boneIndex1(System.Int32 value)
    // Offset: 0xC974B8
    void set_boneIndex1(int value);
    // public System.Int32 get_boneIndex2()
    // Offset: 0xC974C0
    int get_boneIndex2();
    // public System.Void set_boneIndex2(System.Int32 value)
    // Offset: 0xC974C8
    void set_boneIndex2(int value);
    // public System.Int32 get_boneIndex3()
    // Offset: 0xC974D0
    int get_boneIndex3();
    // public System.Void set_boneIndex3(System.Int32 value)
    // Offset: 0xC974D8
    void set_boneIndex3(int value);
    // public System.Boolean Equals(UnityEngine.BoneWeight other)
    // Offset: 0xC9768C
    bool Equals(::UnityEngine::BoneWeight other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xC974E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xC975F4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.BoneWeight
  #pragma pack(pop)
  static check_size<sizeof(BoneWeight), 28 + sizeof(int)> __UnityEngine_BoneWeightSizeCheck;
  static_assert(sizeof(BoneWeight) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_weight0
// Il2CppName: get_weight0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_weight0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_weight0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_weight0
// Il2CppName: set_weight0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(float)>(&UnityEngine::BoneWeight::set_weight0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_weight0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_weight1
// Il2CppName: get_weight1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_weight1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_weight1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_weight1
// Il2CppName: set_weight1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(float)>(&UnityEngine::BoneWeight::set_weight1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_weight1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_weight2
// Il2CppName: get_weight2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_weight2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_weight2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_weight2
// Il2CppName: set_weight2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(float)>(&UnityEngine::BoneWeight::set_weight2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_weight2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_weight3
// Il2CppName: get_weight3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_weight3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_weight3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_weight3
// Il2CppName: set_weight3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(float)>(&UnityEngine::BoneWeight::set_weight3)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_weight3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_boneIndex0
// Il2CppName: get_boneIndex0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_boneIndex0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_boneIndex0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_boneIndex0
// Il2CppName: set_boneIndex0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(int)>(&UnityEngine::BoneWeight::set_boneIndex0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_boneIndex0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_boneIndex1
// Il2CppName: get_boneIndex1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_boneIndex1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_boneIndex1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_boneIndex1
// Il2CppName: set_boneIndex1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(int)>(&UnityEngine::BoneWeight::set_boneIndex1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_boneIndex1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_boneIndex2
// Il2CppName: get_boneIndex2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_boneIndex2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_boneIndex2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_boneIndex2
// Il2CppName: set_boneIndex2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(int)>(&UnityEngine::BoneWeight::set_boneIndex2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_boneIndex2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::get_boneIndex3
// Il2CppName: get_boneIndex3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::get_boneIndex3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "get_boneIndex3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::set_boneIndex3
// Il2CppName: set_boneIndex3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoneWeight::*)(int)>(&UnityEngine::BoneWeight::set_boneIndex3)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "set_boneIndex3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoneWeight::*)(::UnityEngine::BoneWeight)>(&UnityEngine::BoneWeight::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "BoneWeight")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight::*)()>(&UnityEngine::BoneWeight::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoneWeight::*)(::Il2CppObject*)>(&UnityEngine::BoneWeight::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
