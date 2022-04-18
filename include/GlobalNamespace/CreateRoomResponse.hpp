// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CreateRoomResponse
  class CreateRoomResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CreateRoomResponse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateRoomResponse*, "", "CreateRoomResponse");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: CreateRoomResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateRoomResponse : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x18
    ::StringW code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String normcoreRoom
    // Size: 0x8
    // Offset: 0x20
    ::StringW normcoreRoom;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String error
    // Size: 0x8
    // Offset: 0x28
    ::StringW error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean connectivityError
    // Size: 0x1
    // Offset: 0x30
    bool connectivityError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean upstreamError
    // Size: 0x1
    // Offset: 0x31
    bool upstreamError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String code
    [[deprecated("Use field access instead!")]] ::StringW& dyn_code();
    // Get instance field reference: public System.String normcoreRoom
    [[deprecated("Use field access instead!")]] ::StringW& dyn_normcoreRoom();
    // Get instance field reference: public System.String error
    [[deprecated("Use field access instead!")]] ::StringW& dyn_error();
    // Get instance field reference: public System.Boolean connectivityError
    [[deprecated("Use field access instead!")]] bool& dyn_connectivityError();
    // Get instance field reference: public System.Boolean upstreamError
    [[deprecated("Use field access instead!")]] bool& dyn_upstreamError();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateRoomResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CreateRoomResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateRoomResponse*, creationType>()));
    }
  }; // CreateRoomResponse
  #pragma pack(pop)
  static check_size<sizeof(CreateRoomResponse), 49 + sizeof(bool)> __GlobalNamespace_CreateRoomResponseSizeCheck;
  static_assert(sizeof(CreateRoomResponse) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreateRoomResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
