// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BrickColorMap
#include "GlobalNamespace/BrickColorMap.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickColorMap::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickColorMap::$$c*, "", "BrickColorMap/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BrickColorMap/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BrickColorMap::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BrickColorMap/<>c <>9
    static ::GlobalNamespace::BrickColorMap::$$c* _get_$$9();
    // Set static field: static public readonly BrickColorMap/<>c <>9
    static void _set_$$9(::GlobalNamespace::BrickColorMap::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color32>,UnityEngine.Color32> <>9__5_0
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32>, ::UnityEngine::Color32>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color32>,UnityEngine.Color32> <>9__5_0
    static void _set_$$9__5_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32>, ::UnityEngine::Color32>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color32>,System.Int32> <>9__5_1
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32>, int>* _get_$$9__5_1();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color32>,System.Int32> <>9__5_1
    static void _set_$$9__5_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32>, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x6F7E90
    static void _cctor();
    // UnityEngine.Color32 <InitializeDictionary>b__5_0(System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color32> i)
    // Offset: 0x6F7C00
    ::UnityEngine::Color32 $InitializeDictionary$b__5_0(::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32> i);
    // System.Int32 <InitializeDictionary>b__5_1(System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Color32> i)
    // Offset: 0x6F7C30
    int $InitializeDictionary$b__5_1(::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32> i);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickColorMap::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickColorMap::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickColorMap::$$c*, creationType>()));
    }
  }; // BrickColorMap/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickColorMap::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::$$c::$InitializeDictionary$b__5_0
// Il2CppName: <InitializeDictionary>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (GlobalNamespace::BrickColorMap::$$c::*)(::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32>)>(&GlobalNamespace::BrickColorMap::$$c::$InitializeDictionary$b__5_0)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap::$$c*), "<InitializeDictionary>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::$$c::$InitializeDictionary$b__5_1
// Il2CppName: <InitializeDictionary>b__5_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BrickColorMap::$$c::*)(::System::Collections::Generic::KeyValuePair_2<int, ::UnityEngine::Color32>)>(&GlobalNamespace::BrickColorMap::$$c::$InitializeDictionary$b__5_1)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap::$$c*), "<InitializeDictionary>b__5_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
