// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: ContextBoundObject
  class ContextBoundObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ContextBoundObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ContextBoundObject*, "System", "ContextBoundObject");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ContextBoundObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class ContextBoundObject : public ::System::MarshalByRefObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x1E10D0
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextBoundObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ContextBoundObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextBoundObject*, creationType>()));
    }
  }; // System.ContextBoundObject
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ContextBoundObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
