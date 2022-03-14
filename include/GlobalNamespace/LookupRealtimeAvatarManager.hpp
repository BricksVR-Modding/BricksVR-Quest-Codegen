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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarManager
  class RealtimeAvatarManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LookupRealtimeAvatarManager
  class LookupRealtimeAvatarManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LookupRealtimeAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LookupRealtimeAvatarManager*, "", "LookupRealtimeAvatarManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LookupRealtimeAvatarManager
  // [TokenAttribute] Offset: FFFFFFFF
  class LookupRealtimeAvatarManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static private Normal.Realtime.RealtimeAvatarManager _instance
    static ::Normal::Realtime::RealtimeAvatarManager* _get__instance();
    // Set static field: static private Normal.Realtime.RealtimeAvatarManager _instance
    static void _set__instance(::Normal::Realtime::RealtimeAvatarManager* value);
    // static public Normal.Realtime.RealtimeAvatarManager GetInstance()
    // Offset: 0x10A3814
    static ::Normal::Realtime::RealtimeAvatarManager* GetInstance();
    // public System.Void .ctor()
    // Offset: 0x10AD1AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookupRealtimeAvatarManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LookupRealtimeAvatarManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookupRealtimeAvatarManager*, creationType>()));
    }
  }; // LookupRealtimeAvatarManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LookupRealtimeAvatarManager::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeAvatarManager* (*)()>(&GlobalNamespace::LookupRealtimeAvatarManager::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LookupRealtimeAvatarManager*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LookupRealtimeAvatarManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
