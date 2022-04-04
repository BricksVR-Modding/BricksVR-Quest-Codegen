// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Forward declaring type: UsedByNativeCodeAttribute
  class UsedByNativeCodeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.UsedByNativeCodeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DE3D0
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class UsedByNativeCodeAttribute : public ::System::Attribute {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Name;
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated]] ::StringW& dyn_$Name$k__BackingField();
    // public System.Void set_Name(System.String value)
    // Offset: 0x269100
    void set_Name(::StringW value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x209300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedByNativeCodeAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Scripting::UsedByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedByNativeCodeAttribute*, creationType>(name)));
    }
    // public System.Void .ctor()
    // Offset: 0x1E10D0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedByNativeCodeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Scripting::UsedByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedByNativeCodeAttribute*, creationType>()));
    }
  }; // UnityEngine.Scripting.UsedByNativeCodeAttribute
  #pragma pack(pop)
  static check_size<sizeof(UsedByNativeCodeAttribute), 16 + sizeof(::StringW)> __UnityEngine_Scripting_UsedByNativeCodeAttributeSizeCheck;
  static_assert(sizeof(UsedByNativeCodeAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Scripting::UsedByNativeCodeAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::UsedByNativeCodeAttribute::*)(::StringW)>(&UnityEngine::Scripting::UsedByNativeCodeAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::UsedByNativeCodeAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::UsedByNativeCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Scripting::UsedByNativeCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
