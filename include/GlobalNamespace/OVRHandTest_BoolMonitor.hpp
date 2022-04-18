// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRHandTest
#include "GlobalNamespace/OVRHandTest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHandTest::BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHandTest::BoolMonitor*, "", "OVRHandTest/BoolMonitor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OVRHandTest/BoolMonitor
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHandTest::BoolMonitor : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator
    class BoolGenerator;
    public:
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private OVRHandTest/BoolMonitor/BoolGenerator m_generator
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator* m_generator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator*) == 0x8);
    // private System.Boolean m_prevValue
    // Size: 0x1
    // Offset: 0x20
    bool m_prevValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_currentValue
    // Size: 0x1
    // Offset: 0x21
    bool m_currentValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_currentValueRecentlyChanged
    // Size: 0x1
    // Offset: 0x22
    bool m_currentValueRecentlyChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_currentValueRecentlyChanged and: m_displayTimeout
    char __padding4[0x1] = {};
    // private System.Single m_displayTimeout
    // Size: 0x4
    // Offset: 0x24
    float m_displayTimeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_displayTimer
    // Size: 0x4
    // Offset: 0x28
    float m_displayTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.String m_name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_name();
    // Get instance field reference: private OVRHandTest/BoolMonitor/BoolGenerator m_generator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator*& dyn_m_generator();
    // Get instance field reference: private System.Boolean m_prevValue
    [[deprecated("Use field access instead!")]] bool& dyn_m_prevValue();
    // Get instance field reference: private System.Boolean m_currentValue
    [[deprecated("Use field access instead!")]] bool& dyn_m_currentValue();
    // Get instance field reference: private System.Boolean m_currentValueRecentlyChanged
    [[deprecated("Use field access instead!")]] bool& dyn_m_currentValueRecentlyChanged();
    // Get instance field reference: private System.Single m_displayTimeout
    [[deprecated("Use field access instead!")]] float& dyn_m_displayTimeout();
    // Get instance field reference: private System.Single m_displayTimer
    [[deprecated("Use field access instead!")]] float& dyn_m_displayTimer();
    // public System.Void .ctor(System.String name, OVRHandTest/BoolMonitor/BoolGenerator generator, System.Single displayTimeout)
    // Offset: 0x3C4D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHandTest::BoolMonitor* New_ctor(::StringW name, ::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator* generator, float displayTimeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHandTest::BoolMonitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHandTest::BoolMonitor*, creationType>(name, generator, displayTimeout)));
    }
    // public System.Void Update()
    // Offset: 0x22AEC0
    void Update();
    // public System.Void AppendToStringBuilder(ref System.Text.StringBuilder sb)
    // Offset: 0x3C4C80
    void AppendToStringBuilder(ByRef<::System::Text::StringBuilder*> sb);
  }; // OVRHandTest/BoolMonitor
  #pragma pack(pop)
  static check_size<sizeof(OVRHandTest::BoolMonitor), 40 + sizeof(float)> __GlobalNamespace_OVRHandTest_BoolMonitorSizeCheck;
  static_assert(sizeof(OVRHandTest::BoolMonitor) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHandTest::BoolMonitor::*)()>(&GlobalNamespace::OVRHandTest::BoolMonitor::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::BoolMonitor*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::BoolMonitor::AppendToStringBuilder
// Il2CppName: AppendToStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHandTest::BoolMonitor::*)(ByRef<::System::Text::StringBuilder*>)>(&GlobalNamespace::OVRHandTest::BoolMonitor::AppendToStringBuilder)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::BoolMonitor*), "AppendToStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb});
  }
};
