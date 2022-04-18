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
  // Forward declaring type: SteamSharedClass`1<T>
  template<typename T>
  class SteamSharedClass_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Steamworks::SteamSharedClass_1, "Steamworks", "SteamSharedClass`1");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamSharedClass`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class SteamSharedClass_1 : public ::Steamworks::SteamClass {
    public:
    // Autogenerated static field getter
    // Get static field: static Steamworks.SteamInterface InterfaceClient
    static ::Steamworks::SteamInterface* _get_InterfaceClient() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::_get_InterfaceClient");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Steamworks::SteamInterface*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamSharedClass_1<T>*>::get(), "InterfaceClient"));
    }
    // Autogenerated static field setter
    // Set static field: static Steamworks.SteamInterface InterfaceClient
    static void _set_InterfaceClient(::Steamworks::SteamInterface* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::_set_InterfaceClient");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamSharedClass_1<T>*>::get(), "InterfaceClient", value));
    }
    // Autogenerated static field getter
    // Get static field: static Steamworks.SteamInterface InterfaceServer
    static ::Steamworks::SteamInterface* _get_InterfaceServer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::_get_InterfaceServer");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Steamworks::SteamInterface*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamSharedClass_1<T>*>::get(), "InterfaceServer"));
    }
    // Autogenerated static field setter
    // Set static field: static Steamworks.SteamInterface InterfaceServer
    static void _set_InterfaceServer(::Steamworks::SteamInterface* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::_set_InterfaceServer");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamSharedClass_1<T>*>::get(), "InterfaceServer", value));
    }
    // static Steamworks.SteamInterface get_Interface()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Steamworks::SteamInterface* get_Interface() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::get_Interface");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SteamSharedClass_1<T>*>::get(), "get_Interface", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Steamworks::SteamInterface*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // System.Void SetInterface(System.Boolean server, Steamworks.SteamInterface iface)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetInterface(bool server, ::Steamworks::SteamInterface* iface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::SetInterface");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Steamworks::SteamSharedClass_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, server, iface);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Steamworks.SteamClass
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamSharedClass_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamSharedClass_1<T>*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Steamworks.SteamClass
    // Base method: System.Void SteamClass::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::InitializeInterface");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Steamworks::SteamClass*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, server);
    }
    // override System.Void DestroyInterface(System.Boolean server)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Steamworks.SteamClass
    // Base method: System.Void SteamClass::DestroyInterface(System.Boolean server)
    void DestroyInterface(bool server) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamSharedClass_1::DestroyInterface");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Steamworks::SteamClass*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, server);
    }
  }; // Steamworks.SteamSharedClass`1
  // Could not write size check! Type: Steamworks.SteamSharedClass`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
