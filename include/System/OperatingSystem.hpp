// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.PlatformID
#include "System/PlatformID.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: OperatingSystem
  class OperatingSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::OperatingSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::OperatingSystem*, "System", "OperatingSystem");
// Type namespace: System
namespace System {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.OperatingSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class OperatingSystem : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.PlatformID _platform
    // Size: 0x4
    // Offset: 0x10
    ::System::PlatformID platform;
    // Field size check
    static_assert(sizeof(::System::PlatformID) == 0x4);
    // Padding between fields: platform and: version
    char __padding0[0x4] = {};
    // private System.Version _version
    // Size: 0x8
    // Offset: 0x18
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.String _servicePack
    // Size: 0x8
    // Offset: 0x20
    ::StringW servicePack;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get instance field reference: private System.PlatformID _platform
    [[deprecated("Use field access instead!")]] ::System::PlatformID& dyn__platform();
    // Get instance field reference: private System.Version _version
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn__version();
    // Get instance field reference: private System.String _servicePack
    [[deprecated("Use field access instead!")]] ::StringW& dyn__servicePack();
    // public System.PlatformID get_Platform()
    // Offset: 0x1DD410
    ::System::PlatformID get_Platform();
    // public System.Version get_Version()
    // Offset: 0x1E1520
    ::System::Version* get_Version();
    // public System.String get_ServicePack()
    // Offset: 0x1E1950
    ::StringW get_ServicePack();
    // public System.Void .ctor(System.PlatformID platform, System.Version version)
    // Offset: 0x548E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperatingSystem* New_ctor(::System::PlatformID platform, ::System::Version* version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::OperatingSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperatingSystem*, creationType>(platform, version)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x548F70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperatingSystem* New_ctor(::System::Runtime::Serialization::SerializationInfo* information, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::OperatingSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperatingSystem*, creationType>(information, context)));
    }
    // public System.Object Clone()
    // Offset: 0x548AD0
    ::Il2CppObject* Clone();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x548C40
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x548CE0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.OperatingSystem
  #pragma pack(pop)
  static check_size<sizeof(OperatingSystem), 32 + sizeof(::StringW)> __System_OperatingSystemSizeCheck;
  static_assert(sizeof(OperatingSystem) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::OperatingSystem::get_Platform
// Il2CppName: get_Platform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::PlatformID (System::OperatingSystem::*)()>(&System::OperatingSystem::get_Platform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OperatingSystem*), "get_Platform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::OperatingSystem::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::OperatingSystem::*)()>(&System::OperatingSystem::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OperatingSystem*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::OperatingSystem::get_ServicePack
// Il2CppName: get_ServicePack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::OperatingSystem::*)()>(&System::OperatingSystem::get_ServicePack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OperatingSystem*), "get_ServicePack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::OperatingSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OperatingSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::OperatingSystem::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::OperatingSystem::*)()>(&System::OperatingSystem::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OperatingSystem*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::OperatingSystem::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::OperatingSystem::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::OperatingSystem::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::OperatingSystem*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::OperatingSystem::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::OperatingSystem::*)()>(&System::OperatingSystem::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::OperatingSystem*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
