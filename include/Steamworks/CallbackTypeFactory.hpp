// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.CallbackType
#include "Steamworks/CallbackType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: CallbackTypeFactory
  class CallbackTypeFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::CallbackTypeFactory);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::CallbackTypeFactory*, "Steamworks", "CallbackTypeFactory");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.CallbackTypeFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class CallbackTypeFactory : public ::Il2CppObject {
    public:
    // Get static field: static System.Collections.Generic.Dictionary`2<Steamworks.CallbackType,System.Type> All
    static ::System::Collections::Generic::Dictionary_2<::Steamworks::CallbackType, ::System::Type*>* _get_All();
    // Set static field: static System.Collections.Generic.Dictionary`2<Steamworks.CallbackType,System.Type> All
    static void _set_All(::System::Collections::Generic::Dictionary_2<::Steamworks::CallbackType, ::System::Type*>* value);
    // static private System.Void .cctor()
    // Offset: 0x45AC70
    static void _cctor();
  }; // Steamworks.CallbackTypeFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::CallbackTypeFactory::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::CallbackTypeFactory::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::CallbackTypeFactory*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
