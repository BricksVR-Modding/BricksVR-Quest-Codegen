// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: MaterialReference
  struct MaterialReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaterialReference, "TMPro", "MaterialReference");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.MaterialReference
  // [TokenAttribute] Offset: FFFFFFFF
  struct MaterialReference/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: fontAsset
    char __padding0[0x4] = {};
    // public TMPro.TMP_FontAsset fontAsset
    // Size: 0x8
    // Offset: 0x8
    ::TMPro::TMP_FontAsset* fontAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_FontAsset*) == 0x8);
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Size: 0x8
    // Offset: 0x10
    ::TMPro::TMP_SpriteAsset* spriteAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_SpriteAsset*) == 0x8);
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Boolean isDefaultMaterial
    // Size: 0x1
    // Offset: 0x20
    bool isDefaultMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isFallbackMaterial
    // Size: 0x1
    // Offset: 0x21
    bool isFallbackMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isFallbackMaterial and: fallbackMaterial
    char __padding5[0x6] = {};
    // public UnityEngine.Material fallbackMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* fallbackMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Single padding
    // Size: 0x4
    // Offset: 0x30
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 referenceCount
    // Size: 0x4
    // Offset: 0x34
    int referenceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MaterialReference
    constexpr MaterialReference(int index_ = {}, ::TMPro::TMP_FontAsset* fontAsset_ = {}, ::TMPro::TMP_SpriteAsset* spriteAsset_ = {}, ::UnityEngine::Material* material_ = {}, bool isDefaultMaterial_ = {}, bool isFallbackMaterial_ = {}, ::UnityEngine::Material* fallbackMaterial_ = {}, float padding_ = {}, int referenceCount_ = {}) noexcept : index{index_}, fontAsset{fontAsset_}, spriteAsset{spriteAsset_}, material{material_}, isDefaultMaterial{isDefaultMaterial_}, isFallbackMaterial{isFallbackMaterial_}, fallbackMaterial{fallbackMaterial_}, padding{padding_}, referenceCount{referenceCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated]] int& dyn_index();
    // Get instance field reference: public TMPro.TMP_FontAsset fontAsset
    [[deprecated]] ::TMPro::TMP_FontAsset*& dyn_fontAsset();
    // Get instance field reference: public TMPro.TMP_SpriteAsset spriteAsset
    [[deprecated]] ::TMPro::TMP_SpriteAsset*& dyn_spriteAsset();
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public System.Boolean isDefaultMaterial
    [[deprecated]] bool& dyn_isDefaultMaterial();
    // Get instance field reference: public System.Boolean isFallbackMaterial
    [[deprecated]] bool& dyn_isFallbackMaterial();
    // Get instance field reference: public UnityEngine.Material fallbackMaterial
    [[deprecated]] ::UnityEngine::Material*& dyn_fallbackMaterial();
    // Get instance field reference: public System.Single padding
    [[deprecated]] float& dyn_padding();
    // Get instance field reference: public System.Int32 referenceCount
    [[deprecated]] int& dyn_referenceCount();
    // public System.Void .ctor(System.Int32 index, TMPro.TMP_FontAsset fontAsset, TMPro.TMP_SpriteAsset spriteAsset, UnityEngine.Material material, System.Single padding)
    // Offset: 0x76ED40
    MaterialReference(int index, ::TMPro::TMP_FontAsset* fontAsset, ::TMPro::TMP_SpriteAsset* spriteAsset, ::UnityEngine::Material* material, float padding);
    // static public System.Boolean Contains(TMPro.MaterialReference[] materialReferences, TMPro.TMP_FontAsset fontAsset)
    // Offset: 0x76EC20
    static bool Contains(::ArrayW<::TMPro::MaterialReference> materialReferences, ::TMPro::TMP_FontAsset* fontAsset);
    // static public System.Int32 AddMaterialReference(UnityEngine.Material material, TMPro.TMP_FontAsset fontAsset, ref TMPro.MaterialReference[] materialReferences, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> materialReferenceIndexLookup)
    // Offset: 0x76E9A0
    static int AddMaterialReference(::UnityEngine::Material* material, ::TMPro::TMP_FontAsset* fontAsset, ByRef<::ArrayW<::TMPro::MaterialReference>> materialReferences, ::System::Collections::Generic::Dictionary_2<int, int>* materialReferenceIndexLookup);
    // static public System.Int32 AddMaterialReference(UnityEngine.Material material, TMPro.TMP_SpriteAsset spriteAsset, ref TMPro.MaterialReference[] materialReferences, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> materialReferenceIndexLookup)
    // Offset: 0x76E720
    static int AddMaterialReference(::UnityEngine::Material* material, ::TMPro::TMP_SpriteAsset* spriteAsset, ByRef<::ArrayW<::TMPro::MaterialReference>> materialReferences, ::System::Collections::Generic::Dictionary_2<int, int>* materialReferenceIndexLookup);
  }; // TMPro.MaterialReference
  #pragma pack(pop)
  static check_size<sizeof(MaterialReference), 52 + sizeof(int)> __TMPro_MaterialReferenceSizeCheck;
  static_assert(sizeof(MaterialReference) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::MaterialReference::MaterialReference
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::MaterialReference::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::TMPro::MaterialReference>, ::TMPro::TMP_FontAsset*)>(&TMPro::MaterialReference::Contains)> {
  static const MethodInfo* get() {
    static auto* materialReferences = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("TMPro", "MaterialReference"), 1)->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReference), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialReferences, fontAsset});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReference::AddMaterialReference
// Il2CppName: AddMaterialReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Material*, ::TMPro::TMP_FontAsset*, ByRef<::ArrayW<::TMPro::MaterialReference>>, ::System::Collections::Generic::Dictionary_2<int, int>*)>(&TMPro::MaterialReference::AddMaterialReference)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* materialReferences = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("TMPro", "MaterialReference"), 1)->this_arg;
    static auto* materialReferenceIndexLookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReference), "AddMaterialReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, fontAsset, materialReferences, materialReferenceIndexLookup});
  }
};
// Writing MetadataGetter for method: TMPro::MaterialReference::AddMaterialReference
// Il2CppName: AddMaterialReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Material*, ::TMPro::TMP_SpriteAsset*, ByRef<::ArrayW<::TMPro::MaterialReference>>, ::System::Collections::Generic::Dictionary_2<int, int>*)>(&TMPro::MaterialReference::AddMaterialReference)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* spriteAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    static auto* materialReferences = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("TMPro", "MaterialReference"), 1)->this_arg;
    static auto* materialReferenceIndexLookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::MaterialReference), "AddMaterialReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, spriteAsset, materialReferences, materialReferenceIndexLookup});
  }
};
