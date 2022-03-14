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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FingertipReference
  class FingertipReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FingertipReference);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FingertipReference*, "", "FingertipReference");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FingertipReference
  // [TokenAttribute] Offset: FFFFFFFF
  class FingertipReference : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.GameObject leftIndexFingertip
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* leftIndexFingertip;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject rightIndexFingertip
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* rightIndexFingertip;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject leftIndexFingertip
    ::UnityEngine::GameObject*& dyn_leftIndexFingertip();
    // Get instance field reference: public UnityEngine.GameObject rightIndexFingertip
    ::UnityEngine::GameObject*& dyn_rightIndexFingertip();
    // public System.Void .ctor()
    // Offset: 0x10A63D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingertipReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FingertipReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingertipReference*, creationType>()));
    }
  }; // FingertipReference
  #pragma pack(pop)
  static check_size<sizeof(FingertipReference), 32 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_FingertipReferenceSizeCheck;
  static_assert(sizeof(FingertipReference) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FingertipReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
