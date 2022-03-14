// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap
#include "UnityEngine/Experimental/TerrainAPI/TerrainUtility_TerrainMap.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0*, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility/TerrainMap/<>c__DisplayClass4_0");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TerrainUtility::TerrainMap::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 groupID
    // Size: 0x4
    // Offset: 0x10
    int groupID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return groupID;
    }
    // Get instance field reference: public System.Int32 groupID
    int& dyn_groupID();
    // System.Boolean <CreateFromPlacement>b__0(UnityEngine.Terrain x)
    // Offset: 0x102E374
    bool $CreateFromPlacement$b__0(::UnityEngine::Terrain* x);
    // public System.Void .ctor()
    // Offset: 0x102D254
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainUtility::TerrainMap::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainUtility::TerrainMap::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // UnityEngine.Experimental.TerrainAPI.TerrainUtility/UnityEngine.Experimental.TerrainAPI.TerrainMap/UnityEngine.Experimental.TerrainAPI.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(TerrainUtility::TerrainMap::$$c__DisplayClass4_0), 16 + sizeof(int)> __UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(TerrainUtility::TerrainMap::$$c__DisplayClass4_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0::$CreateFromPlacement$b__0
// Il2CppName: <CreateFromPlacement>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0::*)(::UnityEngine::Terrain*)>(&UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0::$CreateFromPlacement$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0*), "<CreateFromPlacement>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainUtility::TerrainMap::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
