// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.SoundEmitter
#include "OVR/SoundEmitter.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::SoundEmitter::$DelayedSyncTo$d__57);
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundEmitter::$DelayedSyncTo$d__57*, "OVR", "SoundEmitter/<DelayedSyncTo>d__57");
// Type namespace: OVR
namespace OVR {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundEmitter/OVR.<DelayedSyncTo>d__57
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SoundEmitter::$DelayedSyncTo$d__57 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    // public OVR.SoundEmitter <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::OVR::SoundEmitter* $$4__this;
    // Field size check
    static_assert(sizeof(::OVR::SoundEmitter*) == 0x8);
    // public OVR.SoundEmitter other
    // Size: 0x8
    // Offset: 0x28
    ::OVR::SoundEmitter* other;
    // Field size check
    static_assert(sizeof(::OVR::SoundEmitter*) == 0x8);
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x30
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single toVolume
    // Size: 0x4
    // Offset: 0x34
    float toVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public OVR.SoundEmitter <>4__this
    ::OVR::SoundEmitter*& dyn_$$4__this();
    // Get instance field reference: public OVR.SoundEmitter other
    ::OVR::SoundEmitter*& dyn_other();
    // Get instance field reference: public System.Single fadeTime
    float& dyn_fadeTime();
    // Get instance field reference: public System.Single toVolume
    float& dyn_toVolume();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10DF3A4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10DF40C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10DEE5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundEmitter::$DelayedSyncTo$d__57* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::SoundEmitter::$DelayedSyncTo$d__57::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundEmitter::$DelayedSyncTo$d__57*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10DF2B4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10DF2B8
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10DF3AC
    void System_Collections_IEnumerator_Reset();
  }; // OVR.SoundEmitter/OVR.<DelayedSyncTo>d__57
  #pragma pack(pop)
  static check_size<sizeof(SoundEmitter::$DelayedSyncTo$d__57), 52 + sizeof(float)> __OVR_SoundEmitter_$DelayedSyncTo$d__57SizeCheck;
  static_assert(sizeof(SoundEmitter::$DelayedSyncTo$d__57) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::SoundEmitter::$DelayedSyncTo$d__57::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVR::SoundEmitter::$DelayedSyncTo$d__57::*)()>(&OVR::SoundEmitter::$DelayedSyncTo$d__57::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$DelayedSyncTo$d__57*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$DelayedSyncTo$d__57::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVR::SoundEmitter::$DelayedSyncTo$d__57::*)()>(&OVR::SoundEmitter::$DelayedSyncTo$d__57::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$DelayedSyncTo$d__57*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$DelayedSyncTo$d__57::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::SoundEmitter::$DelayedSyncTo$d__57::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::$DelayedSyncTo$d__57::*)()>(&OVR::SoundEmitter::$DelayedSyncTo$d__57::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$DelayedSyncTo$d__57*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$DelayedSyncTo$d__57::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundEmitter::$DelayedSyncTo$d__57::*)()>(&OVR::SoundEmitter::$DelayedSyncTo$d__57::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$DelayedSyncTo$d__57*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$DelayedSyncTo$d__57::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::$DelayedSyncTo$d__57::*)()>(&OVR::SoundEmitter::$DelayedSyncTo$d__57::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$DelayedSyncTo$d__57*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
