// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClientClass`1
#include "Steamworks/SteamClientClass_1.hpp"
// Including type: Steamworks.Data.InputHandle_t
#include "Steamworks/Data/InputHandle_t.hpp"
// Including type: Steamworks.Data.InputDigitalActionHandle_t
#include "Steamworks/Data/InputDigitalActionHandle_t.hpp"
// Including type: Steamworks.Data.InputAnalogActionHandle_t
#include "Steamworks/Data/InputAnalogActionHandle_t.hpp"
// Including type: Steamworks.Data.InputActionSetHandle_t
#include "Steamworks/Data/InputActionSetHandle_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamInput
  class SteamInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamInput);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamInput*, "Steamworks", "SteamInput");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamInput
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamInput : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamInput*> {
    public:
    // Get static field: static private readonly Steamworks.Data.InputHandle_t[] queryArray
    static ::ArrayW<::Steamworks::Data::InputHandle_t> _get_queryArray();
    // Set static field: static private readonly Steamworks.Data.InputHandle_t[] queryArray
    static void _set_queryArray(::ArrayW<::Steamworks::Data::InputHandle_t> value);
    // Get static field: static System.Collections.Generic.Dictionary`2<System.String,Steamworks.Data.InputDigitalActionHandle_t> DigitalHandles
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::Steamworks::Data::InputDigitalActionHandle_t>* _get_DigitalHandles();
    // Set static field: static System.Collections.Generic.Dictionary`2<System.String,Steamworks.Data.InputDigitalActionHandle_t> DigitalHandles
    static void _set_DigitalHandles(::System::Collections::Generic::Dictionary_2<::StringW, ::Steamworks::Data::InputDigitalActionHandle_t>* value);
    // Get static field: static System.Collections.Generic.Dictionary`2<System.String,Steamworks.Data.InputAnalogActionHandle_t> AnalogHandles
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::Steamworks::Data::InputAnalogActionHandle_t>* _get_AnalogHandles();
    // Set static field: static System.Collections.Generic.Dictionary`2<System.String,Steamworks.Data.InputAnalogActionHandle_t> AnalogHandles
    static void _set_AnalogHandles(::System::Collections::Generic::Dictionary_2<::StringW, ::Steamworks::Data::InputAnalogActionHandle_t>* value);
    // Get static field: static System.Collections.Generic.Dictionary`2<System.String,Steamworks.Data.InputActionSetHandle_t> ActionSets
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::Steamworks::Data::InputActionSetHandle_t>* _get_ActionSets();
    // Set static field: static System.Collections.Generic.Dictionary`2<System.String,Steamworks.Data.InputActionSetHandle_t> ActionSets
    static void _set_ActionSets(::System::Collections::Generic::Dictionary_2<::StringW, ::Steamworks::Data::InputActionSetHandle_t>* value);
    // static private System.Void .cctor()
    // Offset: 0xE3A9F8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xE3A9A8
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamInput*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0xE3A91C
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamInput
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamInput::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamInput::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInput*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamInput::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamInput::*)(bool)>(&Steamworks::SteamInput::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamInput*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};
