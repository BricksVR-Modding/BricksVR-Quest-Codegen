// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Boolean
#include "System/Boolean.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BaseEntitlementCheck
  class BaseEntitlementCheck;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EntitlementCheckManager
  class EntitlementCheckManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EntitlementCheckManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EntitlementCheckManager*, "", "EntitlementCheckManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: EntitlementCheckManager
  // [TokenAttribute] Offset: FFFFFFFF
  class EntitlementCheckManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms
    struct EntitlementPlatforms;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EntitlementCheckManager/EntitlementPlatforms
    // [TokenAttribute] Offset: FFFFFFFF
    struct EntitlementPlatforms/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EntitlementPlatforms
      constexpr EntitlementPlatforms(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EntitlementCheckManager/EntitlementPlatforms None
      static constexpr const int None = 0;
      // Get static field: static public EntitlementCheckManager/EntitlementPlatforms None
      static ::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms _get_None();
      // Set static field: static public EntitlementCheckManager/EntitlementPlatforms None
      static void _set_None(::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms value);
      // static field const value: static public EntitlementCheckManager/EntitlementPlatforms OculusQuest
      static constexpr const int OculusQuest = 1;
      // Get static field: static public EntitlementCheckManager/EntitlementPlatforms OculusQuest
      static ::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms _get_OculusQuest();
      // Set static field: static public EntitlementCheckManager/EntitlementPlatforms OculusQuest
      static void _set_OculusQuest(::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms value);
      // static field const value: static public EntitlementCheckManager/EntitlementPlatforms Steam
      static constexpr const int Steam = 2;
      // Get static field: static public EntitlementCheckManager/EntitlementPlatforms Steam
      static ::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms _get_Steam();
      // Set static field: static public EntitlementCheckManager/EntitlementPlatforms Steam
      static void _set_Steam(::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EntitlementCheckManager/EntitlementPlatforms
    #pragma pack(pop)
    static check_size<sizeof(EntitlementCheckManager::EntitlementPlatforms), 0 + sizeof(int)> __GlobalNamespace_EntitlementCheckManager_EntitlementPlatformsSizeCheck;
    static_assert(sizeof(EntitlementCheckManager::EntitlementPlatforms) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public EntitlementCheckManager/EntitlementPlatforms entitlementPlatform
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms entitlementPlatform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms) == 0x4);
    // Padding between fields: entitlementPlatform and: userId
    char __padding0[0x4] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isAwaitingEntitlementResults
    // Size: 0x1
    // Offset: 0x28
    bool isAwaitingEntitlementResults;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isAwaitingEntitlementResults and: timeEntitlementStarted
    char __padding2[0x3] = {};
    // private System.Single _timeEntitlementStarted
    // Size: 0x4
    // Offset: 0x2C
    float timeEntitlementStarted;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single EntitlementTimeout
    static constexpr const float EntitlementTimeout = 8;
    // Get static field: static private System.Single EntitlementTimeout
    static float _get_EntitlementTimeout();
    // Set static field: static private System.Single EntitlementTimeout
    static void _set_EntitlementTimeout(float value);
    // static field const value: static private System.Boolean KillAppOnEntitlementFailure
    static constexpr const bool KillAppOnEntitlementFailure = true;
    // Get static field: static private System.Boolean KillAppOnEntitlementFailure
    static bool _get_KillAppOnEntitlementFailure();
    // Set static field: static private System.Boolean KillAppOnEntitlementFailure
    static void _set_KillAppOnEntitlementFailure(bool value);
    // Get instance field reference: public EntitlementCheckManager/EntitlementPlatforms entitlementPlatform
    ::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms& dyn_entitlementPlatform();
    // Get instance field reference: public System.String userId
    ::StringW& dyn_userId();
    // Get instance field reference: private System.Boolean _isAwaitingEntitlementResults
    bool& dyn__isAwaitingEntitlementResults();
    // Get instance field reference: private System.Single _timeEntitlementStarted
    float& dyn__timeEntitlementStarted();
    // private System.Void Awake()
    // Offset: 0x10A4A94
    void Awake();
    // private System.Void Update()
    // Offset: 0x10A4FA4
    void Update();
    // private System.Void EntitlementCallback(System.Boolean isEntitled, System.String entitlementUserId)
    // Offset: 0x10A4CA0
    void EntitlementCallback(bool isEntitled, ::StringW entitlementUserId);
    // private BaseEntitlementCheck EntitlementCheckToUse()
    // Offset: 0x10A4C34
    ::GlobalNamespace::BaseEntitlementCheck* EntitlementCheckToUse();
    // static private System.Void QuitApp()
    // Offset: 0x10A5060
    static void QuitApp();
    // public System.Void .ctor()
    // Offset: 0x10A5068
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntitlementCheckManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EntitlementCheckManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntitlementCheckManager*, creationType>()));
    }
  }; // EntitlementCheckManager
  #pragma pack(pop)
  static check_size<sizeof(EntitlementCheckManager), 44 + sizeof(float)> __GlobalNamespace_EntitlementCheckManagerSizeCheck;
  static_assert(sizeof(EntitlementCheckManager) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EntitlementCheckManager::EntitlementPlatforms, "", "EntitlementCheckManager/EntitlementPlatforms");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EntitlementCheckManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EntitlementCheckManager::*)()>(&GlobalNamespace::EntitlementCheckManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EntitlementCheckManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EntitlementCheckManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EntitlementCheckManager::*)()>(&GlobalNamespace::EntitlementCheckManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EntitlementCheckManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EntitlementCheckManager::EntitlementCallback
// Il2CppName: EntitlementCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EntitlementCheckManager::*)(bool, ::StringW)>(&GlobalNamespace::EntitlementCheckManager::EntitlementCallback)> {
  static const MethodInfo* get() {
    static auto* isEntitled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* entitlementUserId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EntitlementCheckManager*), "EntitlementCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isEntitled, entitlementUserId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EntitlementCheckManager::EntitlementCheckToUse
// Il2CppName: EntitlementCheckToUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BaseEntitlementCheck* (GlobalNamespace::EntitlementCheckManager::*)()>(&GlobalNamespace::EntitlementCheckManager::EntitlementCheckToUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EntitlementCheckManager*), "EntitlementCheckToUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EntitlementCheckManager::QuitApp
// Il2CppName: QuitApp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::EntitlementCheckManager::QuitApp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EntitlementCheckManager*), "QuitApp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EntitlementCheckManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
