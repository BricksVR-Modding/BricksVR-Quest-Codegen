// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BrickUuid
  class BrickUuid;
  // Forward declaring type: BulkGrabFollow
  class BulkGrabFollow;
  // Forward declaring type: LegoConnectorScript
  class LegoConnectorScript;
  // Forward declaring type: BuildingBrickSync
  class BuildingBrickSync;
  // Forward declaring type: UserSettings
  class UserSettings;
  // Forward declaring type: PlacedBrickRenderer
  class PlacedBrickRenderer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarManager
  class RealtimeAvatarManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickAttach
  class BrickAttach;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickAttach);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickAttach*, "", "BrickAttach");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x118
  #pragma pack(push, 1)
  // Autogenerated type: BrickAttach
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickAttach : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BrickAttach::$$c
    class $$c;
    public:
    // private UnityEngine.Color32 _color
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // private System.Boolean _hoveredLeft
    // Size: 0x1
    // Offset: 0x1C
    bool hoveredLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hoveredRight
    // Size: 0x1
    // Offset: 0x1D
    bool hoveredRight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Held>k__BackingField
    // Size: 0x1
    // Offset: 0x1E
    bool Held;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Held and: renderQueue
    char __padding3[0x1] = {};
    // public System.Int32 renderQueue
    // Size: 0x4
    // Offset: 0x20
    int renderQueue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: renderQueue and: maleConnectorParent
    char __padding4[0x4] = {};
    // public UnityEngine.GameObject maleConnectorParent
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* maleConnectorParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject femaleConnectorParent
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* femaleConnectorParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject model
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* model;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject combinedModel
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* combinedModel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private BrickUuid _brickUuid
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BrickUuid* brickUuid;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickUuid*) == 0x8);
    // private UnityEngine.GameObject _modularModel
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* modularModel;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private BulkGrabFollow[] _attachedBulkGrabFollows
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::GlobalNamespace::BulkGrabFollow*> attachedBulkGrabFollows;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BulkGrabFollow*>) == 0x8);
    // public System.String swapPrefab
    // Size: 0x8
    // Offset: 0x60
    ::StringW swapPrefab;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String normalPrefabName
    // Size: 0x8
    // Offset: 0x68
    ::StringW normalPrefabName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> maleConnectors
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* maleConnectors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> femaleConnectors
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* femaleConnectors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<LegoConnectorScript> maleConnectorScripts
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>* maleConnectorScripts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*) == 0x8);
    // public System.Collections.Generic.List`1<LegoConnectorScript> femaleConnectorScripts
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>* femaleConnectorScripts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,LegoConnectorScript> maleConnectorScriptsByName
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LegoConnectorScript*>* maleConnectorScriptsByName;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LegoConnectorScript*>*) == 0x8);
    // public UnityEngine.Mesh originalMesh
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Mesh* originalMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Material originalMaterial
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Material* originalMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private BuildingBrickSync _brickSync
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::BuildingBrickSync* brickSync;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BuildingBrickSync*) == 0x8);
    // private UserSettings _userSettings
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::UserSettings* userSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UserSettings*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _props
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::MaterialPropertyBlock* props;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // public UnityEngine.Mesh solidMesh
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::Mesh* solidMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Mesh hollowMesh
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::Mesh* hollowMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public UnityEngine.Mesh studMesh
    // Size: 0x8
    // Offset: 0xD0
    ::UnityEngine::Mesh* studMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public PlacedBrickRenderer placedBrickRenderer
    // Size: 0x8
    // Offset: 0xD8
    ::GlobalNamespace::PlacedBrickRenderer* placedBrickRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlacedBrickRenderer*) == 0x8);
    // public UnityEngine.MeshFilter meshFilter
    // Size: 0x8
    // Offset: 0xE0
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // public UnityEngine.MeshRenderer meshRenderer
    // Size: 0x8
    // Offset: 0xE8
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public System.Boolean renderHollowMesh
    // Size: 0x1
    // Offset: 0xF0
    bool renderHollowMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isPlayerHead
    // Size: 0x1
    // Offset: 0xF1
    bool isPlayerHead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPlayerHead and: headClientId
    char __padding31[0x2] = {};
    // public System.Int32 headClientId
    // Size: 0x4
    // Offset: 0xF4
    int headClientId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Normal.Realtime.RealtimeAvatarManager _realtimeAvatarManager
    // Size: 0x8
    // Offset: 0xF8
    ::Normal::Realtime::RealtimeAvatarManager* realtimeAvatarManager;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarManager*) == 0x8);
    // public System.Single texOffset
    // Size: 0x4
    // Offset: 0x100
    float texOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: texOffset and: colliderBuffer
    char __padding34[0x4] = {};
    // private readonly UnityEngine.Collider[] _colliderBuffer
    // Size: 0x8
    // Offset: 0x108
    ::ArrayW<::UnityEngine::Collider*> colliderBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<BrickAttach,System.Boolean> _attachBuffer
    // Size: 0x8
    // Offset: 0x110
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BrickAttach*, bool>* attachBuffer;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BrickAttach*, bool>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 ShaderColorProperty
    static int _get_ShaderColorProperty();
    // Set static field: static private readonly System.Int32 ShaderColorProperty
    static void _set_ShaderColorProperty(int value);
    // Get static field: static private readonly System.Int32 ShaderTexOffsetProperty
    static int _get_ShaderTexOffsetProperty();
    // Set static field: static private readonly System.Int32 ShaderTexOffsetProperty
    static void _set_ShaderTexOffsetProperty(int value);
    // Get instance field reference: private UnityEngine.Color32 _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn__color();
    // Get instance field reference: private System.Boolean _hoveredLeft
    [[deprecated("Use field access instead!")]] bool& dyn__hoveredLeft();
    // Get instance field reference: private System.Boolean _hoveredRight
    [[deprecated("Use field access instead!")]] bool& dyn__hoveredRight();
    // Get instance field reference: private System.Boolean <Held>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Held$k__BackingField();
    // Get instance field reference: public System.Int32 renderQueue
    [[deprecated("Use field access instead!")]] int& dyn_renderQueue();
    // Get instance field reference: public UnityEngine.GameObject maleConnectorParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_maleConnectorParent();
    // Get instance field reference: public UnityEngine.GameObject femaleConnectorParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_femaleConnectorParent();
    // Get instance field reference: public UnityEngine.GameObject model
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_model();
    // Get instance field reference: public UnityEngine.GameObject combinedModel
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_combinedModel();
    // Get instance field reference: private BrickUuid _brickUuid
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BrickUuid*& dyn__brickUuid();
    // Get instance field reference: private UnityEngine.GameObject _modularModel
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__modularModel();
    // Get instance field reference: private BulkGrabFollow[] _attachedBulkGrabFollows
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BulkGrabFollow*>& dyn__attachedBulkGrabFollows();
    // Get instance field reference: public System.String swapPrefab
    [[deprecated("Use field access instead!")]] ::StringW& dyn_swapPrefab();
    // Get instance field reference: public System.String normalPrefabName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_normalPrefabName();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> maleConnectors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_maleConnectors();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> femaleConnectors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_femaleConnectors();
    // Get instance field reference: public System.Collections.Generic.List`1<LegoConnectorScript> maleConnectorScripts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*& dyn_maleConnectorScripts();
    // Get instance field reference: public System.Collections.Generic.List`1<LegoConnectorScript> femaleConnectorScripts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LegoConnectorScript*>*& dyn_femaleConnectorScripts();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,LegoConnectorScript> maleConnectorScriptsByName
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LegoConnectorScript*>*& dyn_maleConnectorScriptsByName();
    // Get instance field reference: public UnityEngine.Mesh originalMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_originalMesh();
    // Get instance field reference: public UnityEngine.Material originalMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_originalMaterial();
    // Get instance field reference: private BuildingBrickSync _brickSync
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BuildingBrickSync*& dyn__brickSync();
    // Get instance field reference: private UserSettings _userSettings
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UserSettings*& dyn__userSettings();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _props
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__props();
    // Get instance field reference: public UnityEngine.Mesh solidMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_solidMesh();
    // Get instance field reference: public UnityEngine.Mesh hollowMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_hollowMesh();
    // Get instance field reference: public UnityEngine.Mesh studMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_studMesh();
    // Get instance field reference: public PlacedBrickRenderer placedBrickRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlacedBrickRenderer*& dyn_placedBrickRenderer();
    // Get instance field reference: public UnityEngine.MeshFilter meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn_meshFilter();
    // Get instance field reference: public UnityEngine.MeshRenderer meshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_meshRenderer();
    // Get instance field reference: public System.Boolean renderHollowMesh
    [[deprecated("Use field access instead!")]] bool& dyn_renderHollowMesh();
    // Get instance field reference: public System.Boolean isPlayerHead
    [[deprecated("Use field access instead!")]] bool& dyn_isPlayerHead();
    // Get instance field reference: public System.Int32 headClientId
    [[deprecated("Use field access instead!")]] int& dyn_headClientId();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarManager _realtimeAvatarManager
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarManager*& dyn__realtimeAvatarManager();
    // Get instance field reference: public System.Single texOffset
    [[deprecated("Use field access instead!")]] float& dyn_texOffset();
    // Get instance field reference: private readonly UnityEngine.Collider[] _colliderBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn__colliderBuffer();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<BrickAttach,System.Boolean> _attachBuffer
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BrickAttach*, bool>*& dyn__attachBuffer();
    // public UnityEngine.Color32 get_Color()
    // Offset: 0x1E1910
    ::UnityEngine::Color32 get_Color();
    // public System.Void set_Color(UnityEngine.Color32 value)
    // Offset: 0x6E92B0
    void set_Color(::UnityEngine::Color32 value);
    // public UnityEngine.Color32 get_HoverColor()
    // Offset: 0x6E9160
    ::UnityEngine::Color32 get_HoverColor();
    // public System.Boolean get_Held()
    // Offset: 0x6E9150
    bool get_Held();
    // private System.Void set_Held(System.Boolean value)
    // Offset: 0x6E92C0
    void set_Held(bool value);
    // public System.Void .ctor()
    // Offset: 0x6E9080
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickAttach* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickAttach::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickAttach*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x6E9010
    static void _cctor();
    // private System.Void Awake()
    // Offset: 0x6E6430
    void Awake();
    // private System.Void Start()
    // Offset: 0x6E8CA0
    void Start();
    // private System.Void SetSortedMaterial(UnityEngine.Mesh mesh)
    // Offset: 0x6E89E0
    void SetSortedMaterial(::UnityEngine::Mesh* mesh);
    // public System.String GetUuid()
    // Offset: 0x6E70B0
    ::StringW GetUuid();
    // private System.Void SetColor(UnityEngine.Color32 color)
    // Offset: 0x6E88E0
    void SetColor(::UnityEngine::Color32 color);
    // public System.Void SetHovered(System.Boolean hovered, System.Boolean left)
    // Offset: 0x6E89B0
    void SetHovered(bool hovered, bool left);
    // public System.Void SetHeld(System.Boolean held)
    // Offset: 0x6E89A0
    void SetHeld(bool held);
    // private System.Void UpdateBrickColor()
    // Offset: 0x6E8D90
    void UpdateBrickColor();
    // public System.Boolean ConnectBricks(UnityEngine.Vector3 newPos, UnityEngine.Quaternion newRot, UnityEngine.Vector3 connectionDirection)
    // Offset: 0x6E69F0
    bool ConnectBricks(::UnityEngine::Vector3 newPos, ::UnityEngine::Quaternion newRot, ::UnityEngine::Vector3 connectionDirection);
    // private System.Void ConfigureNeighboringBrick(BrickAttach attach, UnityEngine.GameObject brick, System.Boolean below)
    // Offset: 0x6E6930
    void ConfigureNeighboringBrick(::GlobalNamespace::BrickAttach* attach, ::UnityEngine::GameObject* brick, bool below);
    // private System.Collections.Generic.List`1<UnityEngine.GameObject> OverlappingBricksFromConnectors(System.Collections.Generic.List`1<UnityEngine.GameObject> connectors)
    // Offset: 0x6E7A90
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* OverlappingBricksFromConnectors(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* connectors);
    // private UnityEngine.GameObject OverlappingBrickFromConnector(UnityEngine.GameObject connector)
    // Offset: 0x6E7A30
    ::UnityEngine::GameObject* OverlappingBrickFromConnector(::UnityEngine::GameObject* connector);
    // public System.Void RecalculateEnabledConnectors()
    // Offset: 0x6E7BF0
    void RecalculateEnabledConnectors();
    // public System.Void RecalculateRenderedGeometry()
    // Offset: 0x6E7DD0
    void RecalculateRenderedGeometry();
    // public System.Void DelayedDestroy()
    // Offset: 0x6E7060
    void DelayedDestroy();
    // public System.Boolean IsOnCarpet()
    // Offset: 0x6E70D0
    bool IsOnCarpet();
    // private System.Void OnValidate()
    // Offset: 0x6E7490
    void OnValidate();
    // public System.Void NotifyNearbyBricksToRecalculateMesh()
    // Offset: 0x6E71B0
    void NotifyNearbyBricksToRecalculateMesh();
  }; // BrickAttach
  #pragma pack(pop)
  static check_size<sizeof(BrickAttach), 272 + sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BrickAttach*, bool>*)> __GlobalNamespace_BrickAttachSizeCheck;
  static_assert(sizeof(BrickAttach) == 0x118);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(::UnityEngine::Color32)>(&GlobalNamespace::BrickAttach::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::get_HoverColor
// Il2CppName: get_HoverColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::get_HoverColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "get_HoverColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::get_Held
// Il2CppName: get_Held
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::get_Held)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "get_Held", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::set_Held
// Il2CppName: set_Held
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(bool)>(&GlobalNamespace::BrickAttach::set_Held)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "set_Held", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickAttach::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::SetSortedMaterial
// Il2CppName: SetSortedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(::UnityEngine::Mesh*)>(&GlobalNamespace::BrickAttach::SetSortedMaterial)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "SetSortedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::GetUuid
// Il2CppName: GetUuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::GetUuid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "GetUuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(::UnityEngine::Color32)>(&GlobalNamespace::BrickAttach::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::SetHovered
// Il2CppName: SetHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(bool, bool)>(&GlobalNamespace::BrickAttach::SetHovered)> {
  static const MethodInfo* get() {
    static auto* hovered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "SetHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovered, left});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::SetHeld
// Il2CppName: SetHeld
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(bool)>(&GlobalNamespace::BrickAttach::SetHeld)> {
  static const MethodInfo* get() {
    static auto* held = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "SetHeld", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{held});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::UpdateBrickColor
// Il2CppName: UpdateBrickColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::UpdateBrickColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "UpdateBrickColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::ConnectBricks
// Il2CppName: ConnectBricks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttach::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&GlobalNamespace::BrickAttach::ConnectBricks)> {
  static const MethodInfo* get() {
    static auto* newPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newRot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* connectionDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "ConnectBricks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPos, newRot, connectionDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::ConfigureNeighboringBrick
// Il2CppName: ConfigureNeighboringBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)(::GlobalNamespace::BrickAttach*, ::UnityEngine::GameObject*, bool)>(&GlobalNamespace::BrickAttach::ConfigureNeighboringBrick)> {
  static const MethodInfo* get() {
    static auto* attach = &::il2cpp_utils::GetClassFromName("", "BrickAttach")->byval_arg;
    static auto* brick = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* below = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "ConfigureNeighboringBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attach, brick, below});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::OverlappingBricksFromConnectors
// Il2CppName: OverlappingBricksFromConnectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (GlobalNamespace::BrickAttach::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&GlobalNamespace::BrickAttach::OverlappingBricksFromConnectors)> {
  static const MethodInfo* get() {
    static auto* connectors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "OverlappingBricksFromConnectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectors});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::OverlappingBrickFromConnector
// Il2CppName: OverlappingBrickFromConnector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::BrickAttach::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::BrickAttach::OverlappingBrickFromConnector)> {
  static const MethodInfo* get() {
    static auto* connector = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "OverlappingBrickFromConnector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connector});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::RecalculateEnabledConnectors
// Il2CppName: RecalculateEnabledConnectors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::RecalculateEnabledConnectors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "RecalculateEnabledConnectors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::RecalculateRenderedGeometry
// Il2CppName: RecalculateRenderedGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::RecalculateRenderedGeometry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "RecalculateRenderedGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::DelayedDestroy
// Il2CppName: DelayedDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::DelayedDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "DelayedDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::IsOnCarpet
// Il2CppName: IsOnCarpet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::IsOnCarpet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "IsOnCarpet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickAttach::NotifyNearbyBricksToRecalculateMesh
// Il2CppName: NotifyNearbyBricksToRecalculateMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickAttach::*)()>(&GlobalNamespace::BrickAttach::NotifyNearbyBricksToRecalculateMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickAttach*), "NotifyNearbyBricksToRecalculateMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
