// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_SpriteAnimator
#include "TMPro/TMP_SpriteAnimator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: TMPro.TMP_CharacterInfo
#include "TMPro/TMP_CharacterInfo.hpp"
// Including type: TMPro.TMP_MeshInfo
#include "TMPro/TMP_MeshInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*, "TMPro", "TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x224
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SpriteAnimator/TMPro.<DoSpriteAnimationInternal>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public TMPro.TMP_SpriteAnimator <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TMP_SpriteAnimator* $$4__this;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_SpriteAnimator*) == 0x8);
    // public System.Int32 start
    // Size: 0x4
    // Offset: 0x28
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 end
    // Size: 0x4
    // Offset: 0x2C
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TMP_SpriteAsset* spriteAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_SpriteAsset*) == 0x8);
    // public System.Int32 currentCharacter
    // Size: 0x4
    // Offset: 0x38
    int currentCharacter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 framerate
    // Size: 0x4
    // Offset: 0x3C
    int framerate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <currentFrame>5__2
    // Size: 0x4
    // Offset: 0x40
    int $currentFrame$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $currentFrame$5__2 and: $charInfo$5__3
    char __padding8[0x4] = {};
    // private TMPro.TMP_CharacterInfo <charInfo>5__3
    // Size: 0x175
    // Offset: 0x48
    ::TMPro::TMP_CharacterInfo $charInfo$5__3;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_CharacterInfo) == 0x175);
    // Padding between fields: $charInfo$5__3 and: $materialIndex$5__4
    char __padding9[0x3] = {};
    // private System.Int32 <materialIndex>5__4
    // Size: 0x4
    // Offset: 0x1C0
    int $materialIndex$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <vertexIndex>5__5
    // Size: 0x4
    // Offset: 0x1C4
    int $vertexIndex$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private TMPro.TMP_MeshInfo <meshInfo>5__6
    // Size: 0x50
    // Offset: 0x1C8
    ::TMPro::TMP_MeshInfo $meshInfo$5__6;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_MeshInfo) == 0x50);
    // private System.Single <baseSpriteScale>5__7
    // Size: 0x4
    // Offset: 0x218
    float $baseSpriteScale$5__7;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__8
    // Size: 0x4
    // Offset: 0x21C
    float $elapsedTime$5__8;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <targetTime>5__9
    // Size: 0x4
    // Offset: 0x220
    float $targetTime$5__9;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public TMPro.TMP_SpriteAnimator <>4__this
    [[deprecated]] ::TMPro::TMP_SpriteAnimator*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 start
    [[deprecated]] int& dyn_start();
    // Get instance field reference: public System.Int32 end
    [[deprecated]] int& dyn_end();
    // Get instance field reference: public TMPro.TMP_SpriteAsset spriteAsset
    [[deprecated]] ::TMPro::TMP_SpriteAsset*& dyn_spriteAsset();
    // Get instance field reference: public System.Int32 currentCharacter
    [[deprecated]] int& dyn_currentCharacter();
    // Get instance field reference: public System.Int32 framerate
    [[deprecated]] int& dyn_framerate();
    // Get instance field reference: private System.Int32 <currentFrame>5__2
    [[deprecated]] int& dyn_$currentFrame$5__2();
    // Get instance field reference: private TMPro.TMP_CharacterInfo <charInfo>5__3
    [[deprecated]] ::TMPro::TMP_CharacterInfo& dyn_$charInfo$5__3();
    // Get instance field reference: private System.Int32 <materialIndex>5__4
    [[deprecated]] int& dyn_$materialIndex$5__4();
    // Get instance field reference: private System.Int32 <vertexIndex>5__5
    [[deprecated]] int& dyn_$vertexIndex$5__5();
    // Get instance field reference: private TMPro.TMP_MeshInfo <meshInfo>5__6
    [[deprecated]] ::TMPro::TMP_MeshInfo& dyn_$meshInfo$5__6();
    // Get instance field reference: private System.Single <baseSpriteScale>5__7
    [[deprecated]] float& dyn_$baseSpriteScale$5__7();
    // Get instance field reference: private System.Single <elapsedTime>5__8
    [[deprecated]] float& dyn_$elapsedTime$5__8();
    // Get instance field reference: private System.Single <targetTime>5__9
    [[deprecated]] float& dyn_$targetTime$5__9();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1E1520
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1E1520
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x206110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1DDF00
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x205360
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2060C0
    void System_Collections_IEnumerator_Reset();
  }; // TMPro.TMP_SpriteAnimator/TMPro.<DoSpriteAnimationInternal>d__7
  #pragma pack(pop)
  static check_size<sizeof(TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7), 544 + sizeof(float)> __TMPro_TMP_SpriteAnimator_$DoSpriteAnimationInternal$d__7SizeCheck;
  static_assert(sizeof(TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7) == 0x224);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::*)()>(&TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::*)()>(&TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::*)()>(&TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::*)()>(&TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::*)()>(&TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
