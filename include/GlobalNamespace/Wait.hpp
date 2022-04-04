// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Wait
  class Wait;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Wait);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Wait*, "", "Wait");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Wait
  // [TokenAttribute] Offset: FFFFFFFF
  class Wait : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::Wait::$ForFramesIEnum$d__6
    class $ForFramesIEnum$d__6;
    // Nested type: ::GlobalNamespace::Wait::$UntilIEnum$d__7
    class $UntilIEnum$d__7;
    // Get static field: static private Wait _instance
    static ::GlobalNamespace::Wait* _get__instance();
    // Set static field: static private Wait _instance
    static void _set__instance(::GlobalNamespace::Wait* value);
    // static private Wait GetInstance()
    // Offset: 0x928150
    static ::GlobalNamespace::Wait* GetInstance();
    // static public System.Void ForFrames(System.Int32 frames, System.Action function)
    // Offset: 0x9280B0
    static void ForFrames(int frames, ::System::Action* function);
    // static public System.Void Until(System.Func`1<System.Boolean> until, System.Action function)
    // Offset: 0x928340
    static void Until(::System::Func_1<bool>* until, ::System::Action* function);
    // private System.Void ForFramesInstance(System.Int32 frames, System.Action function)
    // Offset: 0x928020
    void ForFramesInstance(int frames, ::System::Action* function);
    // private System.Void UntilInstance(System.Func`1<System.Boolean> until, System.Action function)
    // Offset: 0x9282A0
    void UntilInstance(::System::Func_1<bool>* until, ::System::Action* function);
    // static private System.Collections.IEnumerator ForFramesIEnum(System.Int32 frames, System.Action function)
    // Offset: 0x927FA0
    static ::System::Collections::IEnumerator* ForFramesIEnum(int frames, ::System::Action* function);
    // static public System.Collections.IEnumerator UntilIEnum(System.Func`1<System.Boolean> until, System.Action function)
    // Offset: 0x928210
    static ::System::Collections::IEnumerator* UntilIEnum(::System::Func_1<bool>* until, ::System::Action* function);
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Wait* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Wait::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Wait*, creationType>()));
    }
  }; // Wait
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Wait::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Wait* (*)()>(&GlobalNamespace::Wait::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::ForFrames
// Il2CppName: ForFrames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::System::Action*)>(&GlobalNamespace::Wait::ForFrames)> {
  static const MethodInfo* get() {
    static auto* frames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "ForFrames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frames, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::Until
// Il2CppName: Until
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<bool>*, ::System::Action*)>(&GlobalNamespace::Wait::Until)> {
  static const MethodInfo* get() {
    static auto* until = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "Until", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{until, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::ForFramesInstance
// Il2CppName: ForFramesInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Wait::*)(int, ::System::Action*)>(&GlobalNamespace::Wait::ForFramesInstance)> {
  static const MethodInfo* get() {
    static auto* frames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "ForFramesInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frames, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::UntilInstance
// Il2CppName: UntilInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Wait::*)(::System::Func_1<bool>*, ::System::Action*)>(&GlobalNamespace::Wait::UntilInstance)> {
  static const MethodInfo* get() {
    static auto* until = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "UntilInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{until, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::ForFramesIEnum
// Il2CppName: ForFramesIEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(int, ::System::Action*)>(&GlobalNamespace::Wait::ForFramesIEnum)> {
  static const MethodInfo* get() {
    static auto* frames = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "ForFramesIEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frames, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::UntilIEnum
// Il2CppName: UntilIEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::System::Func_1<bool>*, ::System::Action*)>(&GlobalNamespace::Wait::UntilIEnum)> {
  static const MethodInfo* get() {
    static auto* until = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Wait*), "UntilIEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{until, function});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Wait::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
