// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine/EventSystems/ExecuteEvents.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IEventSystemHandler
  class IEventSystemHandler;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::ExecuteEvents::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::ExecuteEvents::$$c*, "UnityEngine.EventSystems", "ExecuteEvents/<>c");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.ExecuteEvents/UnityEngine.EventSystems.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ExecuteEvents::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.EventSystems.ExecuteEvents/UnityEngine.EventSystems.<>c <>9
    static ::UnityEngine::EventSystems::ExecuteEvents::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.EventSystems.ExecuteEvents/UnityEngine.EventSystems.<>c <>9
    static void _set_$$9(::UnityEngine::EventSystems::ExecuteEvents::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x3238C0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteEvents::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::ExecuteEvents::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteEvents::$$c*, creationType>()));
    }
    // System.Void <.cctor>b__79_0(System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler> l)
    // Offset: 0x323870
    void $_cctor$b__79_0(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>* l);
  }; // UnityEngine.EventSystems.ExecuteEvents/UnityEngine.EventSystems.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::ExecuteEvents::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EventSystems::ExecuteEvents::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::ExecuteEvents::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::ExecuteEvents::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::ExecuteEvents::$$c::$_cctor$b__79_0
// Il2CppName: <.cctor>b__79_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::ExecuteEvents::$$c::*)(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*)>(&UnityEngine::EventSystems::ExecuteEvents::$$c::$_cctor$b__79_0)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "IEventSystemHandler")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::ExecuteEvents::$$c*), "<.cctor>b__79_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
