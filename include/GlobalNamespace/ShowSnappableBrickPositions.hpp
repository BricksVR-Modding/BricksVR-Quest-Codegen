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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BrickAttachDetector
  class BrickAttachDetector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShowSnappableBrickPositions
  class ShowSnappableBrickPositions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShowSnappableBrickPositions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShowSnappableBrickPositions*, "", "ShowSnappableBrickPositions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: ShowSnappableBrickPositions
  // [TokenAttribute] Offset: FFFFFFFF
  class ShowSnappableBrickPositions : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BrickAttachDetector _detector
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BrickAttachDetector* detector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickAttachDetector*) == 0x8);
    // public UnityEngine.GameObject currentGhostPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* currentGhostPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.String _prefabName
    // Size: 0x8
    // Offset: 0x28
    ::StringW prefabName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _isGhostVisible
    // Size: 0x1
    // Offset: 0x30
    bool isGhostVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BrickAttachDetector _detector
    [[deprecated]] ::GlobalNamespace::BrickAttachDetector*& dyn__detector();
    // Get instance field reference: public UnityEngine.GameObject currentGhostPrefab
    [[deprecated]] ::UnityEngine::GameObject*& dyn_currentGhostPrefab();
    // Get instance field reference: private System.String _prefabName
    [[deprecated]] ::StringW& dyn__prefabName();
    // Get instance field reference: private System.Boolean _isGhostVisible
    [[deprecated]] bool& dyn__isGhostVisible();
    // private System.Void Start()
    // Offset: 0x6CE380
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x6CE280
    void OnDestroy();
    // public System.Void ResetAndDisable()
    // Offset: 0x6CE290
    void ResetAndDisable();
    // private System.Void Reset()
    // Offset: 0x6CE2C0
    void Reset();
    // private System.Void Update()
    // Offset: 0x6CE400
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowSnappableBrickPositions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShowSnappableBrickPositions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowSnappableBrickPositions*, creationType>()));
    }
  }; // ShowSnappableBrickPositions
  #pragma pack(pop)
  static check_size<sizeof(ShowSnappableBrickPositions), 48 + sizeof(bool)> __GlobalNamespace_ShowSnappableBrickPositionsSizeCheck;
  static_assert(sizeof(ShowSnappableBrickPositions) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowSnappableBrickPositions::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowSnappableBrickPositions::*)()>(&GlobalNamespace::ShowSnappableBrickPositions::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowSnappableBrickPositions*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowSnappableBrickPositions::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowSnappableBrickPositions::*)()>(&GlobalNamespace::ShowSnappableBrickPositions::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowSnappableBrickPositions*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowSnappableBrickPositions::ResetAndDisable
// Il2CppName: ResetAndDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowSnappableBrickPositions::*)()>(&GlobalNamespace::ShowSnappableBrickPositions::ResetAndDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowSnappableBrickPositions*), "ResetAndDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowSnappableBrickPositions::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowSnappableBrickPositions::*)()>(&GlobalNamespace::ShowSnappableBrickPositions::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowSnappableBrickPositions*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowSnappableBrickPositions::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowSnappableBrickPositions::*)()>(&GlobalNamespace::ShowSnappableBrickPositions::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowSnappableBrickPositions*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowSnappableBrickPositions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
