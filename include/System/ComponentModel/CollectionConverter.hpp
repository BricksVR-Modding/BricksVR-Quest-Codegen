// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CollectionConverter
  class CollectionConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::CollectionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CollectionConverter*, "System.ComponentModel", "CollectionConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.CollectionConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionConverter : public ::System::ComponentModel::TypeConverter {
    public:
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CollectionConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionConverter*, creationType>()));
    }
  }; // System.ComponentModel.CollectionConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::CollectionConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
