// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.SessionCapture
#include "Normal/Realtime/SessionCapture.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::SessionCapture::DeltaUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::SessionCapture::DeltaUpdate*, "Normal.Realtime", "SessionCapture/DeltaUpdate");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.SessionCapture/Normal.Realtime.DeltaUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionCapture::DeltaUpdate : public ::Il2CppObject {
    public:
    public:
    // public System.Double timestamp
    // Size: 0x8
    // Offset: 0x10
    double timestamp;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int32 sender
    // Size: 0x4
    // Offset: 0x18
    int sender;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sender and: data
    char __padding1[0x4] = {};
    // public System.Byte[] data
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Boolean reliable
    // Size: 0x1
    // Offset: 0x28
    bool reliable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reliable and: updateID
    char __padding3[0x3] = {};
    // public System.UInt32 updateID
    // Size: 0x4
    // Offset: 0x2C
    uint updateID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Boolean incoming
    // Size: 0x1
    // Offset: 0x30
    bool incoming;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Double timestamp
    [[deprecated("Use field access instead!")]] double& dyn_timestamp();
    // Get instance field reference: public System.Int32 sender
    [[deprecated("Use field access instead!")]] int& dyn_sender();
    // Get instance field reference: public System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // Get instance field reference: public System.Boolean reliable
    [[deprecated("Use field access instead!")]] bool& dyn_reliable();
    // Get instance field reference: public System.UInt32 updateID
    [[deprecated("Use field access instead!")]] uint& dyn_updateID();
    // Get instance field reference: public System.Boolean incoming
    [[deprecated("Use field access instead!")]] bool& dyn_incoming();
    // public System.Boolean get_unreliable()
    // Offset: 0x88C190
    bool get_unreliable();
    // public System.Boolean get_outgoing()
    // Offset: 0x88C180
    bool get_outgoing();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionCapture::DeltaUpdate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::SessionCapture::DeltaUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionCapture::DeltaUpdate*, creationType>()));
    }
  }; // Normal.Realtime.SessionCapture/Normal.Realtime.DeltaUpdate
  #pragma pack(pop)
  static check_size<sizeof(SessionCapture::DeltaUpdate), 48 + sizeof(bool)> __Normal_Realtime_SessionCapture_DeltaUpdateSizeCheck;
  static_assert(sizeof(SessionCapture::DeltaUpdate) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::DeltaUpdate::get_unreliable
// Il2CppName: get_unreliable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::SessionCapture::DeltaUpdate::*)()>(&Normal::Realtime::SessionCapture::DeltaUpdate::get_unreliable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::DeltaUpdate*), "get_unreliable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::DeltaUpdate::get_outgoing
// Il2CppName: get_outgoing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::SessionCapture::DeltaUpdate::*)()>(&Normal::Realtime::SessionCapture::DeltaUpdate::get_outgoing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::DeltaUpdate*), "get_outgoing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::DeltaUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
