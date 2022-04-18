// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ResourceRequest
  class ResourceRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceRequest*, "UnityEngine", "ResourceRequest");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceRequest
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: BB1F0
  class ResourceRequest : public ::UnityEngine::AsyncOperation {
    public:
    public:
    // System.String m_Path
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_Path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Type m_Type
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* m_Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: System.String m_Path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Path();
    // Get instance field reference: System.Type m_Type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_Type();
  }; // UnityEngine.ResourceRequest
  #pragma pack(pop)
  static check_size<sizeof(ResourceRequest), 40 + sizeof(::System::Type*)> __UnityEngine_ResourceRequestSizeCheck;
  static_assert(sizeof(ResourceRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
