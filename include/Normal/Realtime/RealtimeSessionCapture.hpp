// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: Realtime
  class Realtime;
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeSessionCapture
  class RealtimeSessionCapture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeSessionCapture);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeSessionCapture*, "Normal.Realtime", "RealtimeSessionCapture");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeSessionCapture
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 103630
  class RealtimeSessionCapture : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Normal::Realtime::RealtimeSessionCapture::Mode
    struct Mode;
    // Nested type: ::Normal::Realtime::RealtimeSessionCapture::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Off
      static constexpr const int Off = 0;
      // Get static field: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Off
      static ::Normal::Realtime::RealtimeSessionCapture::Mode _get_Off();
      // Set static field: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Off
      static void _set_Off(::Normal::Realtime::RealtimeSessionCapture::Mode value);
      // static field const value: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Record
      static constexpr const int Record = 1;
      // Get static field: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Record
      static ::Normal::Realtime::RealtimeSessionCapture::Mode _get_Record();
      // Set static field: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Record
      static void _set_Record(::Normal::Realtime::RealtimeSessionCapture::Mode value);
      // static field const value: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Playback
      static constexpr const int Playback = 2;
      // Get static field: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Playback
      static ::Normal::Realtime::RealtimeSessionCapture::Mode _get_Playback();
      // Set static field: static public Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode Playback
      static void _set_Playback(::Normal::Realtime::RealtimeSessionCapture::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode
    #pragma pack(pop)
    static check_size<sizeof(RealtimeSessionCapture::Mode), 0 + sizeof(int)> __Normal_Realtime_RealtimeSessionCapture_ModeSizeCheck;
    static_assert(sizeof(RealtimeSessionCapture::Mode) == 0x4);
    public:
    // private Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode _mode
    // Size: 0x4
    // Offset: 0x18
    ::Normal::Realtime::RealtimeSessionCapture::Mode mode;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeSessionCapture::Mode) == 0x4);
    // Padding between fields: mode and: playbackCaptureFiles
    char __padding0[0x4] = {};
    // [HeaderAttribute] Offset: 0x1037F0
    // private System.String[] _playbackCaptureFiles
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::StringW> playbackCaptureFiles;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private Normal.Realtime.Realtime _realtime
    // Size: 0x8
    // Offset: 0x28
    ::Normal::Realtime::Realtime* realtime;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Realtime*) == 0x8);
    // private Normal.Realtime.Room _room
    // Size: 0x8
    // Offset: 0x30
    ::Normal::Realtime::Room* room;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Room*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Normal.Realtime.RealtimeSessionCapture/Normal.Realtime.Mode _mode
    [[deprecated]] ::Normal::Realtime::RealtimeSessionCapture::Mode& dyn__mode();
    // Get instance field reference: private System.String[] _playbackCaptureFiles
    [[deprecated]] ::ArrayW<::StringW>& dyn__playbackCaptureFiles();
    // Get instance field reference: private Normal.Realtime.Realtime _realtime
    [[deprecated]] ::Normal::Realtime::Realtime*& dyn__realtime();
    // Get instance field reference: private Normal.Realtime.Room _room
    [[deprecated]] ::Normal::Realtime::Room*& dyn__room();
    // private System.Void Awake()
    // Offset: 0x8C1540
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeSessionCapture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeSessionCapture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeSessionCapture*, creationType>()));
    }
  }; // Normal.Realtime.RealtimeSessionCapture
  #pragma pack(pop)
  static check_size<sizeof(RealtimeSessionCapture), 48 + sizeof(::Normal::Realtime::Room*)> __Normal_Realtime_RealtimeSessionCaptureSizeCheck;
  static_assert(sizeof(RealtimeSessionCapture) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeSessionCapture::Mode, "Normal.Realtime", "RealtimeSessionCapture/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeSessionCapture::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeSessionCapture::*)()>(&Normal::Realtime::RealtimeSessionCapture::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeSessionCapture*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeSessionCapture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
