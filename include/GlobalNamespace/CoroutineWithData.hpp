// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CoroutineWithData
  class CoroutineWithData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CoroutineWithData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineWithData*, "", "CoroutineWithData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CoroutineWithData
  // [TokenAttribute] Offset: FFFFFFFF
  class CoroutineWithData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::CoroutineWithData::$Run$d__7
    class $Run$d__7;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Coroutine <coroutine>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Coroutine* coroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // public System.Object result
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* result;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.IEnumerator target
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::IEnumerator* target;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Coroutine <coroutine>k__BackingField
    ::UnityEngine::Coroutine*& dyn_$coroutine$k__BackingField();
    // Get instance field reference: public System.Object result
    ::Il2CppObject*& dyn_result();
    // Get instance field reference: private System.Collections.IEnumerator target
    ::System::Collections::IEnumerator*& dyn_target();
    // public UnityEngine.Coroutine get_coroutine()
    // Offset: 0x10A27D8
    ::UnityEngine::Coroutine* get_coroutine();
    // private System.Void set_coroutine(UnityEngine.Coroutine value)
    // Offset: 0x10A27E0
    void set_coroutine(::UnityEngine::Coroutine* value);
    // public System.Void .ctor(UnityEngine.MonoBehaviour owner, System.Collections.IEnumerator target)
    // Offset: 0x10A27E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineWithData* New_ctor(::UnityEngine::MonoBehaviour* owner, ::System::Collections::IEnumerator* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CoroutineWithData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineWithData*, creationType>(owner, target)));
    }
    // private System.Collections.IEnumerator Run()
    // Offset: 0x10A2844
    ::System::Collections::IEnumerator* Run();
  }; // CoroutineWithData
  #pragma pack(pop)
  static check_size<sizeof(CoroutineWithData), 32 + sizeof(::System::Collections::IEnumerator*)> __GlobalNamespace_CoroutineWithDataSizeCheck;
  static_assert(sizeof(CoroutineWithData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CoroutineWithData::get_coroutine
// Il2CppName: get_coroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (GlobalNamespace::CoroutineWithData::*)()>(&GlobalNamespace::CoroutineWithData::get_coroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoroutineWithData*), "get_coroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoroutineWithData::set_coroutine
// Il2CppName: set_coroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoroutineWithData::*)(::UnityEngine::Coroutine*)>(&GlobalNamespace::CoroutineWithData::set_coroutine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Coroutine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoroutineWithData*), "set_coroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoroutineWithData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CoroutineWithData::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::CoroutineWithData::*)()>(&GlobalNamespace::CoroutineWithData::Run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoroutineWithData*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
