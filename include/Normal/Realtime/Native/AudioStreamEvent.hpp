// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Forward declaring type: AudioStreamEvent
  struct AudioStreamEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::AudioStreamEvent, "Normal.Realtime.Native", "AudioStreamEvent");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Native.AudioStreamEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct AudioStreamEvent/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Normal::Realtime::Native::AudioStreamEvent::EventType
    struct EventType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType
    // [TokenAttribute] Offset: FFFFFFFF
    struct EventType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EventType
      constexpr EventType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioInputStreamClosed
      static constexpr const int AudioInputStreamClosed = 0;
      // Get static field: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioInputStreamClosed
      static ::Normal::Realtime::Native::AudioStreamEvent::EventType _get_AudioInputStreamClosed();
      // Set static field: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioInputStreamClosed
      static void _set_AudioInputStreamClosed(::Normal::Realtime::Native::AudioStreamEvent::EventType value);
      // static field const value: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioOutputStreamOpened
      static constexpr const int AudioOutputStreamOpened = 1;
      // Get static field: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioOutputStreamOpened
      static ::Normal::Realtime::Native::AudioStreamEvent::EventType _get_AudioOutputStreamOpened();
      // Set static field: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioOutputStreamOpened
      static void _set_AudioOutputStreamOpened(::Normal::Realtime::Native::AudioStreamEvent::EventType value);
      // static field const value: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioOutputStreamClosed
      static constexpr const int AudioOutputStreamClosed = 2;
      // Get static field: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioOutputStreamClosed
      static ::Normal::Realtime::Native::AudioStreamEvent::EventType _get_AudioOutputStreamClosed();
      // Set static field: static public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType AudioOutputStreamClosed
      static void _set_AudioOutputStreamClosed(::Normal::Realtime::Native::AudioStreamEvent::EventType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType
    #pragma pack(pop)
    static check_size<sizeof(AudioStreamEvent::EventType), 0 + sizeof(int)> __Normal_Realtime_Native_AudioStreamEvent_EventTypeSizeCheck;
    static_assert(sizeof(AudioStreamEvent::EventType) == 0x4);
    public:
    // public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType eventType
    // Size: 0x4
    // Offset: 0x0
    ::Normal::Realtime::Native::AudioStreamEvent::EventType eventType;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Native::AudioStreamEvent::EventType) == 0x4);
    // Padding between fields: eventType and: nativePointer
    char __padding0[0x4] = {};
    // public System.IntPtr nativePointer
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr nativePointer;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr nativeIdentifier
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr nativeIdentifier;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: AudioStreamEvent
    constexpr AudioStreamEvent(::Normal::Realtime::Native::AudioStreamEvent::EventType eventType_ = {}, ::System::IntPtr nativePointer_ = {}, ::System::IntPtr nativeIdentifier_ = {}) noexcept : eventType{eventType_}, nativePointer{nativePointer_}, nativeIdentifier{nativeIdentifier_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Normal.Realtime.Native.AudioStreamEvent/Normal.Realtime.Native.EventType eventType
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Native::AudioStreamEvent::EventType& dyn_eventType();
    // Get instance field reference: public System.IntPtr nativePointer
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_nativePointer();
    // Get instance field reference: public System.IntPtr nativeIdentifier
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_nativeIdentifier();
  }; // Normal.Realtime.Native.AudioStreamEvent
  #pragma pack(pop)
  static check_size<sizeof(AudioStreamEvent), 16 + sizeof(::System::IntPtr)> __Normal_Realtime_Native_AudioStreamEventSizeCheck;
  static_assert(sizeof(AudioStreamEvent) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::AudioStreamEvent::EventType, "Normal.Realtime.Native", "AudioStreamEvent/EventType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
