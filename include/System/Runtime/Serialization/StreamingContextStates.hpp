// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContextStates
  struct StreamingContextStates;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContextStates, "System.Runtime.Serialization", "StreamingContextStates");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.StreamingContextStates
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CFBB0
  struct StreamingContextStates/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StreamingContextStates
    constexpr StreamingContextStates(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates CrossProcess
    static constexpr const int CrossProcess = 1;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates CrossProcess
    static ::System::Runtime::Serialization::StreamingContextStates _get_CrossProcess();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates CrossProcess
    static void _set_CrossProcess(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates CrossMachine
    static constexpr const int CrossMachine = 2;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates CrossMachine
    static ::System::Runtime::Serialization::StreamingContextStates _get_CrossMachine();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates CrossMachine
    static void _set_CrossMachine(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates File
    static constexpr const int File = 4;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates File
    static ::System::Runtime::Serialization::StreamingContextStates _get_File();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates File
    static void _set_File(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates Persistence
    static constexpr const int Persistence = 8;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates Persistence
    static ::System::Runtime::Serialization::StreamingContextStates _get_Persistence();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates Persistence
    static void _set_Persistence(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates Remoting
    static constexpr const int Remoting = 16;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates Remoting
    static ::System::Runtime::Serialization::StreamingContextStates _get_Remoting();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates Remoting
    static void _set_Remoting(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates Other
    static constexpr const int Other = 32;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates Other
    static ::System::Runtime::Serialization::StreamingContextStates _get_Other();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates Other
    static void _set_Other(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates Clone
    static constexpr const int Clone = 64;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates Clone
    static ::System::Runtime::Serialization::StreamingContextStates _get_Clone();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates Clone
    static void _set_Clone(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates CrossAppDomain
    static constexpr const int CrossAppDomain = 128;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates CrossAppDomain
    static ::System::Runtime::Serialization::StreamingContextStates _get_CrossAppDomain();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates CrossAppDomain
    static void _set_CrossAppDomain(::System::Runtime::Serialization::StreamingContextStates value);
    // static field const value: static public System.Runtime.Serialization.StreamingContextStates All
    static constexpr const int All = 255;
    // Get static field: static public System.Runtime.Serialization.StreamingContextStates All
    static ::System::Runtime::Serialization::StreamingContextStates _get_All();
    // Set static field: static public System.Runtime.Serialization.StreamingContextStates All
    static void _set_All(::System::Runtime::Serialization::StreamingContextStates value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.Serialization.StreamingContextStates
  #pragma pack(pop)
  static check_size<sizeof(StreamingContextStates), 0 + sizeof(int)> __System_Runtime_Serialization_StreamingContextStatesSizeCheck;
  static_assert(sizeof(StreamingContextStates) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
