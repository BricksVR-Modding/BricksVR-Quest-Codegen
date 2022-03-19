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
// Completed includes
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: PreserveAttribute
  class PreserveAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::PreserveAttribute*, "Steamworks", "PreserveAttribute");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.PreserveAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class PreserveAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0xE38D8C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::PreserveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveAttribute*, creationType>()));
    }
  }; // Steamworks.PreserveAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::PreserveAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
