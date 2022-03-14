// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ILogHandler
#include "UnityEngine/ILogHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ILogger
  class ILogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ILogger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ILogger*, "UnityEngine", "ILogger");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ILogger
  // [TokenAttribute] Offset: FFFFFFFF
  class ILogger/*, public ::UnityEngine::ILogHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ILogHandler
    operator ::UnityEngine::ILogHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::ILogHandler*>(this);
    }
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0xFFFFFFFF
    ::UnityEngine::ILogHandler* get_logHandler();
    // public System.Boolean get_logEnabled()
    // Offset: 0xFFFFFFFF
    bool get_logEnabled();
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0xFFFFFFFF
    void Log(::UnityEngine::LogType logType, ::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0xFFFFFFFF
    void Log(::UnityEngine::LogType logType, ::Il2CppObject* message, ::UnityEngine::Object* context);
    // public System.Void LogError(System.String tag, System.Object message)
    // Offset: 0xFFFFFFFF
    void LogError(::StringW tag, ::Il2CppObject* message);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    void LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::Il2CppObject*> args);
  }; // UnityEngine.ILogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ILogger::get_logHandler
// Il2CppName: get_logHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ILogHandler* (UnityEngine::ILogger::*)()>(&UnityEngine::ILogger::get_logHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "get_logHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::get_logEnabled
// Il2CppName: get_logEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ILogger::*)()>(&UnityEngine::ILogger::get_logEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "get_logEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(::UnityEngine::LogType, ::Il2CppObject*)>(&UnityEngine::ILogger::Log)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(::UnityEngine::LogType, ::Il2CppObject*, ::UnityEngine::Object*)>(&UnityEngine::ILogger::Log)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(::StringW, ::Il2CppObject*)>(&UnityEngine::ILogger::LogError)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::ILogger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ILogger::*)(::UnityEngine::LogType, ::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::ILogger::LogFormat)> {
  static const MethodInfo* get() {
    static auto* logType = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ILogger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logType, format, args});
  }
};
