// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AlignToBrickGrid
  class AlignToBrickGrid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AlignToBrickGrid);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlignToBrickGrid*, "", "AlignToBrickGrid");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: AlignToBrickGrid
  // [TokenAttribute] Offset: FFFFFFFF
  class AlignToBrickGrid : public ::UnityEngine::MonoBehaviour {
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
    // public System.Boolean align
    // Size: 0x1
    // Offset: 0x18
    bool align;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single X_BRICK_INTERVAL
    static constexpr const float X_BRICK_INTERVAL = 0.0560751;
    // Get static field: static private System.Single X_BRICK_INTERVAL
    static float _get_X_BRICK_INTERVAL();
    // Set static field: static private System.Single X_BRICK_INTERVAL
    static void _set_X_BRICK_INTERVAL(float value);
    // static field const value: static private System.Single Y_BRICK_INTERVAL
    static constexpr const float Y_BRICK_INTERVAL = 0.067136;
    // Get static field: static private System.Single Y_BRICK_INTERVAL
    static float _get_Y_BRICK_INTERVAL();
    // Set static field: static private System.Single Y_BRICK_INTERVAL
    static void _set_Y_BRICK_INTERVAL(float value);
    // static field const value: static private System.Single Z_BRICK_INTERVAL
    static constexpr const float Z_BRICK_INTERVAL = 0.0560751;
    // Get static field: static private System.Single Z_BRICK_INTERVAL
    static float _get_Z_BRICK_INTERVAL();
    // Set static field: static private System.Single Z_BRICK_INTERVAL
    static void _set_Z_BRICK_INTERVAL(float value);
    // Get instance field reference: public System.Boolean align
    bool& dyn_align();
    // private System.Void OnValidate()
    // Offset: 0x10C72B0
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x10C791C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlignToBrickGrid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AlignToBrickGrid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlignToBrickGrid*, creationType>()));
    }
  }; // AlignToBrickGrid
  #pragma pack(pop)
  static check_size<sizeof(AlignToBrickGrid), 24 + sizeof(bool)> __GlobalNamespace_AlignToBrickGridSizeCheck;
  static_assert(sizeof(AlignToBrickGrid) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AlignToBrickGrid::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AlignToBrickGrid::*)()>(&GlobalNamespace::AlignToBrickGrid::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AlignToBrickGrid*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AlignToBrickGrid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
