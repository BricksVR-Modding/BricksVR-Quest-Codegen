// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_Dropdown::$$c__DisplayClass69_0);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Dropdown::$$c__DisplayClass69_0*, "TMPro", "TMP_Dropdown/<>c__DisplayClass69_0");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Dropdown/TMPro.<>c__DisplayClass69_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TMP_Dropdown::$$c__DisplayClass69_0 : public ::Il2CppObject {
    public:
    public:
    // public TMPro.TMP_Dropdown/TMPro.DropdownItem item
    // Size: 0x8
    // Offset: 0x10
    ::TMPro::TMP_Dropdown::DropdownItem* item;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Dropdown::DropdownItem*) == 0x8);
    // public TMPro.TMP_Dropdown <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TMP_Dropdown* $$4__this;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Dropdown*) == 0x8);
    public:
    // Get instance field reference: public TMPro.TMP_Dropdown/TMPro.DropdownItem item
    [[deprecated]] ::TMPro::TMP_Dropdown::DropdownItem*& dyn_item();
    // Get instance field reference: public TMPro.TMP_Dropdown <>4__this
    [[deprecated]] ::TMPro::TMP_Dropdown*& dyn_$$4__this();
    // System.Void <Show>b__0(System.Boolean x)
    // Offset: 0x781040
    void $Show$b__0(bool x);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::$$c__DisplayClass69_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_Dropdown::$$c__DisplayClass69_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::$$c__DisplayClass69_0*, creationType>()));
    }
  }; // TMPro.TMP_Dropdown/TMPro.<>c__DisplayClass69_0
  #pragma pack(pop)
  static check_size<sizeof(TMP_Dropdown::$$c__DisplayClass69_0), 24 + sizeof(::TMPro::TMP_Dropdown*)> __TMPro_TMP_Dropdown_$$c__DisplayClass69_0SizeCheck;
  static_assert(sizeof(TMP_Dropdown::$$c__DisplayClass69_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::$$c__DisplayClass69_0::$Show$b__0
// Il2CppName: <Show>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Dropdown::$$c__DisplayClass69_0::*)(bool)>(&TMPro::TMP_Dropdown::$$c__DisplayClass69_0::$Show$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::$$c__DisplayClass69_0*), "<Show>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::$$c__DisplayClass69_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
