// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarTextureCopyManager
#include "GlobalNamespace/OvrAvatarTextureCopyManager.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*, "", "OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public OvrAvatarTextureCopyManager/TextureSet textureSetToDelete
    // Size: 0x9
    // Offset: 0x20
    ::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet textureSetToDelete;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet) == 0x9);
    // Padding between fields: textureSetToDelete and: $$4__this
    char __padding2[0x7] = {};
    // public OvrAvatarTextureCopyManager <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OvrAvatarTextureCopyManager* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatarTextureCopyManager*) == 0x8);
    // public System.Int32 gameobjectID
    // Size: 0x4
    // Offset: 0x38
    int gameobjectID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public OvrAvatarTextureCopyManager/TextureSet textureSetToDelete
    [[deprecated]] ::GlobalNamespace::OvrAvatarTextureCopyManager::TextureSet& dyn_textureSetToDelete();
    // Get instance field reference: public OvrAvatarTextureCopyManager <>4__this
    [[deprecated]] ::GlobalNamespace::OvrAvatarTextureCopyManager*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 gameobjectID
    [[deprecated]] int& dyn_gameobjectID();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1E1520
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1E1520
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x206110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1DDF00
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x6A9440
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x6A9990
    void System_Collections_IEnumerator_Reset();
  }; // OvrAvatarTextureCopyManager/<DeleteTextureSetCoroutine>d__24
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24), 56 + sizeof(int)> __GlobalNamespace_OvrAvatarTextureCopyManager_$DeleteTextureSetCoroutine$d__24SizeCheck;
  static_assert(sizeof(OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::*)()>(&GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarTextureCopyManager::$DeleteTextureSetCoroutine$d__24*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
