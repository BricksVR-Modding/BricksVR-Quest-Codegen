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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::SessionCapture::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::SessionCapture::$$c*, "Normal.Realtime", "SessionCapture/<>c");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.SessionCapture/Normal.Realtime.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionCapture::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Normal.Realtime.SessionCapture/Normal.Realtime.<>c <>9
    static ::Normal::Realtime::SessionCapture::$$c* _get_$$9();
    // Set static field: static public readonly Normal.Realtime.SessionCapture/Normal.Realtime.<>c <>9
    static void _set_$$9(::Normal::Realtime::SessionCapture::$$c* value);
    // Get static field: static public System.Func`2<Normal.Realtime.SessionCapture/Normal.Realtime.DeltaUpdate,System.Double> <>9__28_0
    static ::System::Func_2<::Normal::Realtime::SessionCapture::DeltaUpdate*, double>* _get_$$9__28_0();
    // Set static field: static public System.Func`2<Normal.Realtime.SessionCapture/Normal.Realtime.DeltaUpdate,System.Double> <>9__28_0
    static void _set_$$9__28_0(::System::Func_2<::Normal::Realtime::SessionCapture::DeltaUpdate*, double>* value);
    // static private System.Void .cctor()
    // Offset: 0x8A2100
    static void _cctor();
    // System.Double <PlaybackTick>b__28_0(Normal.Realtime.SessionCapture/Normal.Realtime.DeltaUpdate playbackDeltaUpdate)
    // Offset: 0x8A1F70
    double $PlaybackTick$b__28_0(::Normal::Realtime::SessionCapture::DeltaUpdate* playbackDeltaUpdate);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionCapture::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::SessionCapture::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionCapture::$$c*, creationType>()));
    }
  }; // Normal.Realtime.SessionCapture/Normal.Realtime.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Normal::Realtime::SessionCapture::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::$$c::$PlaybackTick$b__28_0
// Il2CppName: <PlaybackTick>b__28_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::SessionCapture::$$c::*)(::Normal::Realtime::SessionCapture::DeltaUpdate*)>(&Normal::Realtime::SessionCapture::$$c::$PlaybackTick$b__28_0)> {
  static const MethodInfo* get() {
    static auto* playbackDeltaUpdate = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "SessionCapture/DeltaUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::$$c*), "<PlaybackTick>b__28_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playbackDeltaUpdate});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
