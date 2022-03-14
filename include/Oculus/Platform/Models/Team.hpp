// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Team
  class Team;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Team);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Team*, "Oculus.Platform.Models", "Team");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Team
  // [TokenAttribute] Offset: FFFFFFFF
  class Team : public ::Il2CppObject {
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
    // public readonly Oculus.Platform.Models.UserList AssignedUsers
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::UserList* AssignedUsers;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly System.Int32 MaxUsers
    // Size: 0x4
    // Offset: 0x18
    int MaxUsers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 MinUsers
    // Size: 0x4
    // Offset: 0x1C
    int MinUsers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList AssignedUsers
    ::Oculus::Platform::Models::UserList*& dyn_AssignedUsers();
    // Get instance field reference: public readonly System.Int32 MaxUsers
    int& dyn_MaxUsers();
    // Get instance field reference: public readonly System.Int32 MinUsers
    int& dyn_MinUsers();
    // Get instance field reference: public readonly System.String Name
    ::StringW& dyn_Name();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x95AD30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Team* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Team::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Team*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Team
  #pragma pack(pop)
  static check_size<sizeof(Team), 32 + sizeof(::StringW)> __Oculus_Platform_Models_TeamSizeCheck;
  static_assert(sizeof(Team) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Team::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
