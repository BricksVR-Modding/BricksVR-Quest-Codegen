// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMethodMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMethodMessage*, "System.Runtime.Remoting.Messaging", "IMethodMessage");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IMethodMessage
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6CA3B0
  class IMethodMessage/*, public ::System::Runtime::Remoting::Messaging::IMessage*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessage
    operator ::System::Runtime::Remoting::Messaging::IMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessage*>(this);
    }
    // public System.Int32 get_ArgCount()
    // Offset: 0xFFFFFFFF
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0xFFFFFFFF
    ::ArrayW<::Il2CppObject*> get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0xFFFFFFFF
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0xFFFFFFFF
    ::System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0xFFFFFFFF
    ::StringW get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_MethodSignature();
    // public System.String get_TypeName()
    // Offset: 0xFFFFFFFF
    ::StringW get_TypeName();
    // public System.String get_Uri()
    // Offset: 0xFFFFFFFF
    ::StringW get_Uri();
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* GetArg(int argNum);
  }; // System.Runtime.Remoting.Messaging.IMethodMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_ArgCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_Args)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_MethodSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::IMethodMessage::*)()>(&System::Runtime::Remoting::Messaging::IMethodMessage::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMethodMessage::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::IMethodMessage::*)(int)>(&System::Runtime::Remoting::Messaging::IMethodMessage::GetArg)> {
  static const MethodInfo* get() {
    static auto* argNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMethodMessage*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argNum});
  }
};
