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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventListener
  class EventListener;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventDispatcher
  class EventDispatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventDispatcher*, "System.Diagnostics.Tracing", "EventDispatcher");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventDispatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class EventDispatcher : public ::Il2CppObject {
    public:
    public:
    // readonly System.Diagnostics.Tracing.EventListener m_Listener
    // Size: 0x8
    // Offset: 0x10
    ::System::Diagnostics::Tracing::EventListener* m_Listener;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventListener*) == 0x8);
    // System.Boolean[] m_EventEnabled
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<bool> m_EventEnabled;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // System.Boolean m_activityFilteringEnabled
    // Size: 0x1
    // Offset: 0x20
    bool m_activityFilteringEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_activityFilteringEnabled and: m_Next
    char __padding2[0x7] = {};
    // System.Diagnostics.Tracing.EventDispatcher m_Next
    // Size: 0x8
    // Offset: 0x28
    ::System::Diagnostics::Tracing::EventDispatcher* m_Next;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventDispatcher*) == 0x8);
    public:
    // Get instance field reference: readonly System.Diagnostics.Tracing.EventListener m_Listener
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventListener*& dyn_m_Listener();
    // Get instance field reference: System.Boolean[] m_EventEnabled
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_m_EventEnabled();
    // Get instance field reference: System.Boolean m_activityFilteringEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_activityFilteringEnabled();
    // Get instance field reference: System.Diagnostics.Tracing.EventDispatcher m_Next
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventDispatcher*& dyn_m_Next();
    // System.Void .ctor(System.Diagnostics.Tracing.EventDispatcher next, System.Boolean[] eventEnabled, System.Diagnostics.Tracing.EventListener listener)
    // Offset: 0x217880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventDispatcher* New_ctor(::System::Diagnostics::Tracing::EventDispatcher* next, ::ArrayW<bool> eventEnabled, ::System::Diagnostics::Tracing::EventListener* listener) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventDispatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventDispatcher*, creationType>(next, eventEnabled, listener)));
    }
  }; // System.Diagnostics.Tracing.EventDispatcher
  #pragma pack(pop)
  static check_size<sizeof(EventDispatcher), 40 + sizeof(::System::Diagnostics::Tracing::EventDispatcher*)> __System_Diagnostics_Tracing_EventDispatcherSizeCheck;
  static_assert(sizeof(EventDispatcher) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventDispatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!