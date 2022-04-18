// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: ArgumentOutOfRangeException
  class ArgumentOutOfRangeException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ArgumentOutOfRangeException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentOutOfRangeException*, "System", "ArgumentOutOfRangeException");
// Type namespace: System
namespace System {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.ArgumentOutOfRangeException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class ArgumentOutOfRangeException : public ::System::ArgumentException {
    public:
    public:
    // private System.Object m_actualValue
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* m_actualValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get static field: static private System.String _rangeMessage
    static ::StringW _get__rangeMessage();
    // Set static field: static private System.String _rangeMessage
    static void _set__rangeMessage(::StringW value);
    // Get instance field reference: private System.Object m_actualValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_actualValue();
    // static private System.String get_RangeMessage()
    // Offset: 0x46B1C0
    static ::StringW get_RangeMessage();
    // public System.Void .ctor(System.String paramName, System.Object actualValue, System.String message)
    // Offset: 0x46AF30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::StringW paramName, ::Il2CppObject* actualValue, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(paramName, actualValue, message)));
    }
    // public override System.String get_Message()
    // Offset: 0x46AFB0
    // Implemented from: System.ArgumentException
    // Base method: System.String ArgumentException::get_Message()
    ::StringW get_Message();
    // public System.Void .ctor()
    // Offset: 0x46AD00
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>()));
    }
    // public System.Void .ctor(System.String paramName)
    // Offset: 0x46ADB0
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName)
    // Base method: System.Void SystemException::.ctor(System.String paramName)
    // Base method: System.Void Exception::.ctor(System.String paramName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::StringW paramName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(paramName)));
    }
    // public System.Void .ctor(System.String paramName, System.String message)
    // Offset: 0x46AD50
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::StringW paramName, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(paramName, message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x46AE20
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentOutOfRangeException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ArgumentOutOfRangeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentOutOfRangeException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x46AB90
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.ArgumentOutOfRangeException
  #pragma pack(pop)
  static check_size<sizeof(ArgumentOutOfRangeException), 144 + sizeof(::Il2CppObject*)> __System_ArgumentOutOfRangeExceptionSizeCheck;
  static_assert(sizeof(ArgumentOutOfRangeException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::get_RangeMessage
// Il2CppName: get_RangeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::ArgumentOutOfRangeException::get_RangeMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArgumentOutOfRangeException*), "get_RangeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ArgumentOutOfRangeException::*)()>(&System::ArgumentOutOfRangeException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ArgumentOutOfRangeException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ArgumentOutOfRangeException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ArgumentOutOfRangeException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::ArgumentOutOfRangeException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ArgumentOutOfRangeException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
