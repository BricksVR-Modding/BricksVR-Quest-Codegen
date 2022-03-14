// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.Rendering.BatchVisibility
#include "UnityEngine/Rendering/BatchVisibility.hpp"
// Including type: UnityEngine.Rendering.LODParameters
#include "UnityEngine/Rendering/LODParameters.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchCullingContext
  struct BatchCullingContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchCullingContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6DA9E8
  // [NativeHeaderAttribute] Offset: 6DA9E8
  struct BatchCullingContext/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly Unity.Collections.NativeArray`1<UnityEngine.Plane> cullingPlanes
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes;
    // public Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> batchVisibility
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility;
    // public Unity.Collections.NativeArray`1<System.Int32> visibleIndices
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::Unity::Collections::NativeArray_1<int> visibleIndices;
    // public readonly UnityEngine.Rendering.LODParameters lodParameters
    // Size: 0x1C
    // Offset: 0x30
    ::UnityEngine::Rendering::LODParameters lodParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::LODParameters) == 0x1C);
    public:
    // Creating value type constructor for type: BatchCullingContext
    constexpr BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes_ = {}, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility_ = {}, ::Unity::Collections::NativeArray_1<int> visibleIndices_ = {}, ::UnityEngine::Rendering::LODParameters lodParameters_ = {}) noexcept : cullingPlanes{cullingPlanes_}, batchVisibility{batchVisibility_}, visibleIndices{visibleIndices_}, lodParameters{lodParameters_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly Unity.Collections.NativeArray`1<UnityEngine.Plane> cullingPlanes
    ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>& dyn_cullingPlanes();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> batchVisibility
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>& dyn_batchVisibility();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Int32> visibleIndices
    ::Unity::Collections::NativeArray_1<int>& dyn_visibleIndices();
    // Get instance field reference: public readonly UnityEngine.Rendering.LODParameters lodParameters
    ::UnityEngine::Rendering::LODParameters& dyn_lodParameters();
    // public System.Void .ctor(Unity.Collections.NativeArray`1<UnityEngine.Plane> inCullingPlanes, Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> inOutBatchVisibility, Unity.Collections.NativeArray`1<System.Int32> outVisibleIndices, UnityEngine.Rendering.LODParameters inLodParameters)
    // Offset: 0x116288C
    // ABORTED: conflicts with another method.  BatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, ::Unity::Collections::NativeArray_1<int> outVisibleIndices, ::UnityEngine::Rendering::LODParameters inLodParameters);
  }; // UnityEngine.Rendering.BatchCullingContext
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchCullingContext::BatchCullingContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
