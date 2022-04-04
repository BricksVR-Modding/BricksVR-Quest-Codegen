// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: RuntimeWrappedException
  class RuntimeWrappedException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeWrappedException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeWrappedException*, "System.Runtime.CompilerServices", "RuntimeWrappedException");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeWrappedException
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeWrappedException : public ::System::Exception {
    public:
    public:
    // private System.Object m_wrappedException
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppObject* m_wrappedException;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return m_wrappedException;
    }
    // Get instance field reference: private System.Object m_wrappedException
    [[deprecated]] ::Il2CppObject*& dyn_m_wrappedException();
    // private System.Void .ctor(System.Object thrownObject)
    // Offset: 0x4AF000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeWrappedException* New_ctor(::Il2CppObject* thrownObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::RuntimeWrappedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeWrappedException*, creationType>(thrownObject)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4AF0D0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeWrappedException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::RuntimeWrappedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeWrappedException*, creationType>(info, context)));
    }
    // System.Void .ctor()
    // Offset: 0x4AF0A0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeWrappedException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::RuntimeWrappedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeWrappedException*, creationType>()));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4AEF10
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Runtime.CompilerServices.RuntimeWrappedException
  #pragma pack(pop)
  static check_size<sizeof(RuntimeWrappedException), 136 + sizeof(::Il2CppObject*)> __System_Runtime_CompilerServices_RuntimeWrappedExceptionSizeCheck;
  static_assert(sizeof(RuntimeWrappedException) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeWrappedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeWrappedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeWrappedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeWrappedException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeWrappedException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::CompilerServices::RuntimeWrappedException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeWrappedException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
