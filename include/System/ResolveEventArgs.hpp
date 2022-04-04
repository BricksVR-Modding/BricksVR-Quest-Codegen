// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ResolveEventArgs
  class ResolveEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ResolveEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ResolveEventArgs*, "System", "ResolveEventArgs");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ResolveEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class ResolveEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Reflection.Assembly m_Requesting
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::Assembly* m_Requesting;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    public:
    // Get instance field reference: private System.String m_Name
    [[deprecated]] ::StringW& dyn_m_Name();
    // Get instance field reference: private System.Reflection.Assembly m_Requesting
    [[deprecated]] ::System::Reflection::Assembly*& dyn_m_Requesting();
    // public System.Void .ctor(System.String name)
    // Offset: 0x4A4180
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveEventArgs* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ResolveEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveEventArgs*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.Reflection.Assembly requestingAssembly)
    // Offset: 0x4A40F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveEventArgs* New_ctor(::StringW name, ::System::Reflection::Assembly* requestingAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ResolveEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveEventArgs*, creationType>(name, requestingAssembly)));
    }
  }; // System.ResolveEventArgs
  #pragma pack(pop)
  static check_size<sizeof(ResolveEventArgs), 24 + sizeof(::System::Reflection::Assembly*)> __System_ResolveEventArgsSizeCheck;
  static_assert(sizeof(ResolveEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ResolveEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ResolveEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
