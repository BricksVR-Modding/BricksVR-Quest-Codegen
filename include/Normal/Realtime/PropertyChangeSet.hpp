// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: PropertyChangeSet
  class PropertyChangeSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::PropertyChangeSet);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::PropertyChangeSet*, "Normal.Realtime", "PropertyChangeSet");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.PropertyChangeSet
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  class PropertyChangeSet : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Boolean[] _changeset
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<bool> changeset;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private System.Boolean <anyPropertiesChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool anyPropertiesChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private readonly System.Boolean[] _changeset
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn__changeset();
    // Get instance field reference: private System.Boolean <anyPropertiesChanged>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$anyPropertiesChanged$k__BackingField();
    // public System.Boolean get_anyPropertiesChanged()
    // Offset: 0x2512D0
    bool get_anyPropertiesChanged();
    // private System.Void set_anyPropertiesChanged(System.Boolean value)
    // Offset: 0x251660
    void set_anyPropertiesChanged(bool value);
    // public System.Boolean get_Item(System.UInt32 propertyID)
    // Offset: 0x8BEB50
    bool get_Item(uint propertyID);
    // public System.Void .ctor(System.UInt32 max)
    // Offset: 0x8BEAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyChangeSet* New_ctor(uint max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::PropertyChangeSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyChangeSet*, creationType>(max)));
    }
    // public System.Void Clear()
    // Offset: 0x8BE9D0
    void Clear();
    // public System.Void SetPropertyChanged(System.UInt32 propertyID)
    // Offset: 0x8BEA40
    void SetPropertyChanged(uint propertyID);
  }; // Normal.Realtime.PropertyChangeSet
  #pragma pack(pop)
  static check_size<sizeof(PropertyChangeSet), 24 + sizeof(bool)> __Normal_Realtime_PropertyChangeSetSizeCheck;
  static_assert(sizeof(PropertyChangeSet) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::PropertyChangeSet::get_anyPropertiesChanged
// Il2CppName: get_anyPropertiesChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::PropertyChangeSet::*)()>(&Normal::Realtime::PropertyChangeSet::get_anyPropertiesChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::PropertyChangeSet*), "get_anyPropertiesChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::PropertyChangeSet::set_anyPropertiesChanged
// Il2CppName: set_anyPropertiesChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::PropertyChangeSet::*)(bool)>(&Normal::Realtime::PropertyChangeSet::set_anyPropertiesChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::PropertyChangeSet*), "set_anyPropertiesChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::PropertyChangeSet::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::PropertyChangeSet::*)(uint)>(&Normal::Realtime::PropertyChangeSet::get_Item)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::PropertyChangeSet*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::PropertyChangeSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::PropertyChangeSet::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::PropertyChangeSet::*)()>(&Normal::Realtime::PropertyChangeSet::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::PropertyChangeSet*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::PropertyChangeSet::SetPropertyChanged
// Il2CppName: SetPropertyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::PropertyChangeSet::*)(uint)>(&Normal::Realtime::PropertyChangeSet::SetPropertyChanged)> {
  static const MethodInfo* get() {
    static auto* propertyID = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::PropertyChangeSet*), "SetPropertyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyID});
  }
};
