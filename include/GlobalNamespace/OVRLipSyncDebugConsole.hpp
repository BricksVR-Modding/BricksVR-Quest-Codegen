// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncDebugConsole
  class OVRLipSyncDebugConsole;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSyncDebugConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncDebugConsole*, "", "OVRLipSyncDebugConsole");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSyncDebugConsole
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRLipSyncDebugConsole : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Collections.ArrayList messages
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* messages;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // public System.Int32 maxMessages
    // Size: 0x4
    // Offset: 0x20
    int maxMessages;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxMessages and: textMsg
    char __padding1[0x4] = {};
    // public UnityEngine.UI.Text textMsg
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* textMsg;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.Boolean clearTimeoutOn
    // Size: 0x1
    // Offset: 0x30
    bool clearTimeoutOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: clearTimeoutOn and: clearTimeout
    char __padding3[0x3] = {};
    // private System.Single clearTimeout
    // Size: 0x4
    // Offset: 0x34
    float clearTimeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private OVRLipSyncDebugConsole s_Instance
    static ::GlobalNamespace::OVRLipSyncDebugConsole* _get_s_Instance();
    // Set static field: static private OVRLipSyncDebugConsole s_Instance
    static void _set_s_Instance(::GlobalNamespace::OVRLipSyncDebugConsole* value);
    // Get instance field reference: public System.Collections.ArrayList messages
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_messages();
    // Get instance field reference: public System.Int32 maxMessages
    [[deprecated("Use field access instead!")]] int& dyn_maxMessages();
    // Get instance field reference: public UnityEngine.UI.Text textMsg
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_textMsg();
    // Get instance field reference: private System.Boolean clearTimeoutOn
    [[deprecated("Use field access instead!")]] bool& dyn_clearTimeoutOn();
    // Get instance field reference: private System.Single clearTimeout
    [[deprecated("Use field access instead!")]] float& dyn_clearTimeout();
    // static public OVRLipSyncDebugConsole get_instance()
    // Offset: 0x72F690
    static ::GlobalNamespace::OVRLipSyncDebugConsole* get_instance();
    // public System.Void .ctor()
    // Offset: 0x72F620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSyncDebugConsole* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSyncDebugConsole::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSyncDebugConsole*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DDF00
    static void _cctor();
    // private System.Void Awake()
    // Offset: 0x72EE70
    void Awake();
    // private System.Void Update()
    // Offset: 0x72F590
    void Update();
    // public System.Void Init()
    // Offset: 0x72F310
    void Init();
    // static public System.Void Log(System.String message)
    // Offset: 0x72F450
    static void Log(::StringW message);
    // static public System.Void Log(System.String message, UnityEngine.Color color)
    // Offset: 0x72F3C0
    static void Log(::StringW message, ::UnityEngine::Color color);
    // static public System.Void Clear()
    // Offset: 0x72F020
    static void Clear();
    // static public System.Void ClearTimeout(System.Single timeToClear)
    // Offset: 0x72EFB0
    static void ClearTimeout(float timeToClear);
    // public System.Void AddMessage(System.String message, UnityEngine.Color color)
    // Offset: 0x72EDA0
    void AddMessage(::StringW message, ::UnityEngine::Color color);
    // public System.Void ClearMessages()
    // Offset: 0x72EF70
    void ClearMessages();
    // public System.Void SetClearTimeout(System.Single timeout)
    // Offset: 0x72F580
    void SetClearTimeout(float timeout);
    // private System.Void Prune()
    // Offset: 0x72F4E0
    void Prune();
    // private System.Void Display()
    // Offset: 0x72F0A0
    void Display();
  }; // OVRLipSyncDebugConsole
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSyncDebugConsole), 52 + sizeof(float)> __GlobalNamespace_OVRLipSyncDebugConsoleSizeCheck;
  static_assert(sizeof(OVRLipSyncDebugConsole) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRLipSyncDebugConsole* (*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OVRLipSyncDebugConsole::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Color)>(&GlobalNamespace::OVRLipSyncDebugConsole::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::ClearTimeout
// Il2CppName: ClearTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&GlobalNamespace::OVRLipSyncDebugConsole::ClearTimeout)> {
  static const MethodInfo* get() {
    static auto* timeToClear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "ClearTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeToClear});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::AddMessage
// Il2CppName: AddMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)(::StringW, ::UnityEngine::Color)>(&GlobalNamespace::OVRLipSyncDebugConsole::AddMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "AddMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::ClearMessages
// Il2CppName: ClearMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::ClearMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "ClearMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::SetClearTimeout
// Il2CppName: SetClearTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)(float)>(&GlobalNamespace::OVRLipSyncDebugConsole::SetClearTimeout)> {
  static const MethodInfo* get() {
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "SetClearTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Prune
// Il2CppName: Prune
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::Prune)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Prune", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncDebugConsole::Display
// Il2CppName: Display
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncDebugConsole::*)()>(&GlobalNamespace::OVRLipSyncDebugConsole::Display)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncDebugConsole*), "Display", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
