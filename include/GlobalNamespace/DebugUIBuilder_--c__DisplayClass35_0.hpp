// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DebugUIBuilder
#include "GlobalNamespace/DebugUIBuilder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0*, "", "DebugUIBuilder/<>c__DisplayClass35_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DebugUIBuilder/<>c__DisplayClass35_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugUIBuilder::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    public:
    // public DebugUIBuilder/OnClick handler
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::DebugUIBuilder::OnClick* handler;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DebugUIBuilder::OnClick*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::DebugUIBuilder::OnClick*
    constexpr operator ::GlobalNamespace::DebugUIBuilder::OnClick*() const noexcept {
      return handler;
    }
    // Get instance field reference: public DebugUIBuilder/OnClick handler
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DebugUIBuilder::OnClick*& dyn_handler();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUIBuilder::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUIBuilder::$$c__DisplayClass35_0*, creationType>()));
    }
    // System.Void <AddButton>b__0()
    // Offset: 0x29B840
    void $AddButton$b__0();
  }; // DebugUIBuilder/<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(DebugUIBuilder::$$c__DisplayClass35_0), 16 + sizeof(::GlobalNamespace::DebugUIBuilder::OnClick*)> __GlobalNamespace_DebugUIBuilder_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(DebugUIBuilder::$$c__DisplayClass35_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0::$AddButton$b__0
// Il2CppName: <AddButton>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0::*)()>(&GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0::$AddButton$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::$$c__DisplayClass35_0*), "<AddButton>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
