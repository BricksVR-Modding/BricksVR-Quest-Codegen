// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Realtime
#include "Normal/Realtime/Realtime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeView
  class RealtimeView;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Realtime::$$c__DisplayClass81_1);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Realtime::$$c__DisplayClass81_1*, "Normal.Realtime", "Realtime/<>c__DisplayClass81_1");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Realtime/Normal.Realtime.<>c__DisplayClass81_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Realtime::$$c__DisplayClass81_1 : public ::Il2CppObject {
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
    // public Normal.Realtime.RealtimeView view
    // Size: 0x8
    // Offset: 0x10
    ::Normal::Realtime::RealtimeView* view;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeView*) == 0x8);
    // public Normal.Realtime.Realtime/Normal.Realtime.<>c__DisplayClass81_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::Realtime::$$c__DisplayClass81_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Realtime::$$c__DisplayClass81_0*) == 0x8);
    public:
    // Get instance field reference: public Normal.Realtime.RealtimeView view
    ::Normal::Realtime::RealtimeView*& dyn_view();
    // Get instance field reference: public Normal.Realtime.Realtime/Normal.Realtime.<>c__DisplayClass81_0 CS$<>8__locals1
    ::Normal::Realtime::Realtime::$$c__DisplayClass81_0*& dyn_CS$$$8__locals1();
    // System.Void <ConnectSceneViewsToDatastore>b__0(System.Boolean success)
    // Offset: 0xAF56A0
    void $ConnectSceneViewsToDatastore$b__0(bool success);
    // public System.Void .ctor()
    // Offset: 0xAF4EC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Realtime::$$c__DisplayClass81_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Realtime::$$c__DisplayClass81_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Realtime::$$c__DisplayClass81_1*, creationType>()));
    }
  }; // Normal.Realtime.Realtime/Normal.Realtime.<>c__DisplayClass81_1
  #pragma pack(pop)
  static check_size<sizeof(Realtime::$$c__DisplayClass81_1), 24 + sizeof(::Normal::Realtime::Realtime::$$c__DisplayClass81_0*)> __Normal_Realtime_Realtime_$$c__DisplayClass81_1SizeCheck;
  static_assert(sizeof(Realtime::$$c__DisplayClass81_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Realtime::$$c__DisplayClass81_1::$ConnectSceneViewsToDatastore$b__0
// Il2CppName: <ConnectSceneViewsToDatastore>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Realtime::$$c__DisplayClass81_1::*)(bool)>(&Normal::Realtime::Realtime::$$c__DisplayClass81_1::$ConnectSceneViewsToDatastore$b__0)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Realtime::$$c__DisplayClass81_1*), "<ConnectSceneViewsToDatastore>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Realtime::$$c__DisplayClass81_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
