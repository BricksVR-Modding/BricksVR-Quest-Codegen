// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarMaterialManager
#include "GlobalNamespace/OvrAvatarMaterialManager.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*, "", "OvrAvatarMaterialManager/<RunLoadingAnimation>d__49");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5D
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarMaterialManager/<RunLoadingAnimation>d__49
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OvrAvatarMaterialManager::$RunLoadingAnimation$d__49 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public OvrAvatarMaterialManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OvrAvatarMaterialManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatarMaterialManager*) == 0x8);
    // public System.Action callBack
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* callBack;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Int32 <srcBlend>5__2
    // Size: 0x4
    // Offset: 0x30
    int $srcBlend$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <dstBlend>5__3
    // Size: 0x4
    // Offset: 0x34
    int $dstBlend$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <lightModeTag>5__4
    // Size: 0x8
    // Offset: 0x38
    ::StringW $lightModeTag$5__4;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <renderTypeTag>5__5
    // Size: 0x8
    // Offset: 0x40
    ::StringW $renderTypeTag$5__5;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <renderQueueTag>5__6
    // Size: 0x8
    // Offset: 0x48
    ::StringW $renderQueueTag$5__6;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <ignoreProjectorTag>5__7
    // Size: 0x8
    // Offset: 0x50
    ::StringW $ignoreProjectorTag$5__7;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <renderQueue>5__8
    // Size: 0x4
    // Offset: 0x58
    int $renderQueue$5__8;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <transparentQueue>5__9
    // Size: 0x1
    // Offset: 0x5C
    bool $transparentQueue$5__9;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public OvrAvatarMaterialManager <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OvrAvatarMaterialManager*& dyn_$$4__this();
    // Get instance field reference: public System.Action callBack
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_callBack();
    // Get instance field reference: private System.Int32 <srcBlend>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$srcBlend$5__2();
    // Get instance field reference: private System.Int32 <dstBlend>5__3
    [[deprecated("Use field access instead!")]] int& dyn_$dstBlend$5__3();
    // Get instance field reference: private System.String <lightModeTag>5__4
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$lightModeTag$5__4();
    // Get instance field reference: private System.String <renderTypeTag>5__5
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$renderTypeTag$5__5();
    // Get instance field reference: private System.String <renderQueueTag>5__6
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$renderQueueTag$5__6();
    // Get instance field reference: private System.String <ignoreProjectorTag>5__7
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ignoreProjectorTag$5__7();
    // Get instance field reference: private System.Int32 <renderQueue>5__8
    [[deprecated("Use field access instead!")]] int& dyn_$renderQueue$5__8();
    // Get instance field reference: private System.Boolean <transparentQueue>5__9
    [[deprecated("Use field access instead!")]] bool& dyn_$transparentQueue$5__9();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1E1520
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1E1520
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x206110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarMaterialManager::$RunLoadingAnimation$d__49* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1DDF00
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x7EAB70
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x7EB300
    void System_Collections_IEnumerator_Reset();
  }; // OvrAvatarMaterialManager/<RunLoadingAnimation>d__49
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarMaterialManager::$RunLoadingAnimation$d__49), 92 + sizeof(bool)> __GlobalNamespace_OvrAvatarMaterialManager_$RunLoadingAnimation$d__49SizeCheck;
  static_assert(sizeof(OvrAvatarMaterialManager::$RunLoadingAnimation$d__49) == 0x5D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::*)()>(&GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::*)()>(&GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::*)()>(&GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::*)()>(&GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::*)()>(&GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarMaterialManager::$RunLoadingAnimation$d__49*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
