// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.Dispatch
#include "Steamworks/Dispatch.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ICallbackData
  class ICallbackData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Steamworks::Dispatch::$$c__DisplayClass29_0_1, "Steamworks", "Dispatch/<>c__DisplayClass29_0`1");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.Dispatch/Steamworks.<>c__DisplayClass29_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class Dispatch::$$c__DisplayClass29_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<T> p
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* p;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<T>*
    constexpr operator ::System::Action_1<T>*() const noexcept {
      return p;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T> p
    [[deprecated]] ::System::Action_1<T>*& dyn_p() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::Dispatch::$$c__DisplayClass29_0_1::dyn_p");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "p"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <Install>b__0(System.IntPtr x)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $Install$b__0(::System::IntPtr x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::Dispatch::$$c__DisplayClass29_0_1::<Install>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<Install>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, x);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dispatch::$$c__DisplayClass29_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::Dispatch::$$c__DisplayClass29_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dispatch::$$c__DisplayClass29_0_1<T>*, creationType>()));
    }
  }; // Steamworks.Dispatch/Steamworks.<>c__DisplayClass29_0`1
  // Could not write size check! Type: Steamworks.Dispatch/Steamworks.<>c__DisplayClass29_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
