// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClass
#include "Steamworks/SteamClass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamInterface
  class SteamInterface;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamClientClass`1<T>
  template<typename T>
  class SteamClientClass_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Steamworks::SteamClientClass_1, "Steamworks", "SteamClientClass`1");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamClientClass`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class SteamClientClass_1 : public ::Steamworks::SteamClass {
    public:
    // Autogenerated static field getter
    // Get static field: static Steamworks.SteamInterface Interface
    static ::Steamworks::SteamInterface* _get_Interface() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamClientClass_1::_get_Interface");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Steamworks::SteamInterface*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamClientClass_1<T>*>::get(), "Interface"));
    }
    // Autogenerated static field setter
    // Set static field: static Steamworks.SteamInterface Interface
    static void _set_Interface(::Steamworks::SteamInterface* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamClientClass_1::_set_Interface");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamClientClass_1<T>*>::get(), "Interface", value));
    }
    // System.Void SetInterface(System.Boolean server, Steamworks.SteamInterface iface)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetInterface(bool server, ::Steamworks::SteamInterface* iface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamClientClass_1::SetInterface");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Steamworks::SteamClientClass_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, server, iface);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Steamworks.SteamClass
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamClientClass_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamClientClass_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamClientClass_1<T>*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Steamworks.SteamClass
    // Base method: System.Void SteamClass::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamClientClass_1::InitializeInterface");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Steamworks::SteamClass*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, server);
    }
    // override System.Void DestroyInterface(System.Boolean server)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Steamworks.SteamClass
    // Base method: System.Void SteamClass::DestroyInterface(System.Boolean server)
    void DestroyInterface(bool server) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamClientClass_1::DestroyInterface");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Steamworks::SteamClass*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, server);
    }
  }; // Steamworks.SteamClientClass`1
  // Could not write size check! Type: Steamworks.SteamClientClass`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
