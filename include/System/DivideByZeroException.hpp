// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArithmeticException
#include "System/ArithmeticException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: DivideByZeroException
  class DivideByZeroException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::DivideByZeroException);
DEFINE_IL2CPP_ARG_TYPE(::System::DivideByZeroException*, "System", "DivideByZeroException");
// Type namespace: System
namespace System {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.DivideByZeroException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class DivideByZeroException : public ::System::ArithmeticException {
    public:
    // public System.Void .ctor()
    // Offset: 0x2DE010
    // Implemented from: System.ArithmeticException
    // Base method: System.Void ArithmeticException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DivideByZeroException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::DivideByZeroException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DivideByZeroException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2DE060
    // Implemented from: System.ArithmeticException
    // Base method: System.Void ArithmeticException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DivideByZeroException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::DivideByZeroException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DivideByZeroException*, creationType>(info, context)));
    }
  }; // System.DivideByZeroException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DivideByZeroException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::DivideByZeroException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
