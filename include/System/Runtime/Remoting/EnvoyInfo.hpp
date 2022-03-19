// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.IEnvoyInfo
#include "System/Runtime/Remoting/IEnvoyInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: EnvoyInfo
  class EnvoyInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::EnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::EnvoyInfo*, "System.Runtime.Remoting", "EnvoyInfo");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.EnvoyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvoyInfo : public ::Il2CppObject/*, public ::System::Runtime::Remoting::IEnvoyInfo*/ {
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
    // private System.Runtime.Remoting.Messaging.IMessageSink envoySinks
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Messaging::IMessageSink* envoySinks;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::IEnvoyInfo
    operator ::System::Runtime::Remoting::IEnvoyInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::IEnvoyInfo*>(this);
    }
    // Creating conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessageSink*
    constexpr operator ::System::Runtime::Remoting::Messaging::IMessageSink*() const noexcept {
      return envoySinks;
    }
    // Get instance field reference: private System.Runtime.Remoting.Messaging.IMessageSink envoySinks
    ::System::Runtime::Remoting::Messaging::IMessageSink*& dyn_envoySinks();
    // public System.Runtime.Remoting.Messaging.IMessageSink get_EnvoySinks()
    // Offset: 0x972530
    ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink sinks)
    // Offset: 0x972504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvoyInfo* New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::EnvoyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvoyInfo*, creationType>(sinks)));
    }
  }; // System.Runtime.Remoting.EnvoyInfo
  #pragma pack(pop)
  static check_size<sizeof(EnvoyInfo), 16 + sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*)> __System_Runtime_Remoting_EnvoyInfoSizeCheck;
  static_assert(sizeof(EnvoyInfo) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks
// Il2CppName: get_EnvoySinks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::EnvoyInfo::*)()>(&System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::EnvoyInfo*), "get_EnvoySinks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::EnvoyInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
