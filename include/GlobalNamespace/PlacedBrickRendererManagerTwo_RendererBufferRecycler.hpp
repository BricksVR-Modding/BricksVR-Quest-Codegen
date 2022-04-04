// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlacedBrickRendererManagerTwo
#include "GlobalNamespace/PlacedBrickRendererManagerTwo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler*, "", "PlacedBrickRendererManagerTwo/RendererBufferRecycler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlacedBrickRendererManagerTwo/RendererBufferRecycler
  // [TokenAttribute] Offset: FFFFFFFF
  class PlacedBrickRendererManagerTwo::RendererBufferRecycler : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<PlacedBrickRendererManagerTwo/RenderQueueGroup> _availableRenderQueueGroups
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*>* availableRenderQueueGroups;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*>*
    constexpr operator ::System::Collections::Generic::List_1<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*>*() const noexcept {
      return availableRenderQueueGroups;
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<PlacedBrickRendererManagerTwo/RenderQueueGroup> _availableRenderQueueGroups
    [[deprecated]] ::System::Collections::Generic::List_1<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*>*& dyn__availableRenderQueueGroups();
    // public PlacedBrickRendererManagerTwo/RenderQueueGroup RentRenderQueueGroup()
    // Offset: 0x6A9290
    ::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup* RentRenderQueueGroup();
    // public System.Void ReturnRenderQueueGroupToPool(PlacedBrickRendererManagerTwo/RenderQueueGroup renderQueueGroup)
    // Offset: 0x6A9340
    void ReturnRenderQueueGroupToPool(::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup* renderQueueGroup);
    // public System.Void .ctor()
    // Offset: 0x6A93A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRendererManagerTwo::RendererBufferRecycler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRendererManagerTwo::RendererBufferRecycler*, creationType>()));
    }
  }; // PlacedBrickRendererManagerTwo/RendererBufferRecycler
  #pragma pack(pop)
  static check_size<sizeof(PlacedBrickRendererManagerTwo::RendererBufferRecycler), 16 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*>*)> __GlobalNamespace_PlacedBrickRendererManagerTwo_RendererBufferRecyclerSizeCheck;
  static_assert(sizeof(PlacedBrickRendererManagerTwo::RendererBufferRecycler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::RentRenderQueueGroup
// Il2CppName: RentRenderQueueGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup* (GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::*)()>(&GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::RentRenderQueueGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler*), "RentRenderQueueGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::ReturnRenderQueueGroupToPool
// Il2CppName: ReturnRenderQueueGroupToPool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::*)(::GlobalNamespace::PlacedBrickRendererManagerTwo::RenderQueueGroup*)>(&GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::ReturnRenderQueueGroupToPool)> {
  static const MethodInfo* get() {
    static auto* renderQueueGroup = &::il2cpp_utils::GetClassFromName("", "PlacedBrickRendererManagerTwo/RenderQueueGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler*), "ReturnRenderQueueGroupToPool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderQueueGroup});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManagerTwo::RendererBufferRecycler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
