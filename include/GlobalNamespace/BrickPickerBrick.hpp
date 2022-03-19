// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickInteractable
#include "GlobalNamespace/QuickInteractable.hpp"
// Including type: BrickData/Brick
#include "GlobalNamespace/BrickData.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BrickPickerManager
  class BrickPickerManager;
  // Forward declaring type: QuickInteractor
  class QuickInteractor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickPickerBrick
  class BrickPickerBrick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickPickerBrick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickPickerBrick*, "", "BrickPickerBrick");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: BrickPickerBrick
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickPickerBrick : public ::GlobalNamespace::QuickInteractable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Image backgroundImage
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Image* backgroundImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x729E44
    // public TMPro.TextMeshProUGUI brickLabel
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* brickLabel;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private BrickData/Brick _brickData
    // Size: 0x44
    // Offset: 0x28
    ::GlobalNamespace::BrickData::Brick brickData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickData::Brick) == 0x44);
    // Padding between fields: brickData and: brickMeshRenderer
    char __padding2[0x4] = {};
    // private UnityEngine.MeshRenderer _brickMeshRenderer
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::MeshRenderer* brickMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public UnityEngine.Color32 backgroundColor
    // Size: 0x4
    // Offset: 0x78
    ::UnityEngine::Color32 backgroundColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 hoveredColor
    // Size: 0x4
    // Offset: 0x7C
    ::UnityEngine::Color32 hoveredColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x80
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private BrickPickerManager _manager
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::BrickPickerManager* manager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickPickerManager*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _isHovered
    // Size: 0x1
    // Offset: 0xA8
    bool isHovered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isHovered and: hoveringCollider
    char __padding10[0x7] = {};
    // private UnityEngine.Collider _hoveringCollider
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Collider* hoveringCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private System.Single _lastHoveredFixedTime
    // Size: 0x4
    // Offset: 0xB8
    float lastHoveredFixedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.Int32 ShaderColorProperty
    static int _get_ShaderColorProperty();
    // Set static field: static private readonly System.Int32 ShaderColorProperty
    static void _set_ShaderColorProperty(int value);
    // Get instance field reference: public UnityEngine.UI.Image backgroundImage
    ::UnityEngine::UI::Image*& dyn_backgroundImage();
    // Get instance field reference: public TMPro.TextMeshProUGUI brickLabel
    ::TMPro::TextMeshProUGUI*& dyn_brickLabel();
    // Get instance field reference: private BrickData/Brick _brickData
    ::GlobalNamespace::BrickData::Brick& dyn__brickData();
    // Get instance field reference: private UnityEngine.MeshRenderer _brickMeshRenderer
    ::UnityEngine::MeshRenderer*& dyn__brickMeshRenderer();
    // Get instance field reference: public UnityEngine.Color32 backgroundColor
    ::UnityEngine::Color32& dyn_backgroundColor();
    // Get instance field reference: public UnityEngine.Color32 hoveredColor
    ::UnityEngine::Color32& dyn_hoveredColor();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    ::UnityEngine::MaterialPropertyBlock*& dyn__materialPropertyBlock();
    // Get instance field reference: private BrickPickerManager _manager
    ::GlobalNamespace::BrickPickerManager*& dyn__manager();
    // Get instance field reference: private UnityEngine.Transform _transform
    ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private System.Boolean _isHovered
    bool& dyn__isHovered();
    // Get instance field reference: private UnityEngine.Collider _hoveringCollider
    ::UnityEngine::Collider*& dyn__hoveringCollider();
    // Get instance field reference: private System.Single _lastHoveredFixedTime
    float& dyn__lastHoveredFixedTime();
    // public System.Void Initialize(BrickData/Brick brickData, UnityEngine.Color color, BrickPickerManager manager)
    // Offset: 0x10D6F80
    void Initialize(::GlobalNamespace::BrickData::Brick brickData, ::UnityEngine::Color color, ::GlobalNamespace::BrickPickerManager* manager);
    // private System.Void Update()
    // Offset: 0x10D7244
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x10D73F8
    void FixedUpdate();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x10D7170
    void SetColor(::UnityEngine::Color color);
    // private System.Void OnTriggerStay(UnityEngine.Collider c)
    // Offset: 0x10D7760
    void OnTriggerStay(::UnityEngine::Collider* c);
    // private System.Void OnTriggerExit(UnityEngine.Collider c)
    // Offset: 0x10D778C
    void OnTriggerExit(::UnityEngine::Collider* c);
    // public System.Void SetIsHovered(System.Boolean hovered)
    // Offset: 0x10D7798
    void SetIsHovered(bool hovered);
    // public UnityEngine.Color Color()
    // Offset: 0x10D77E8
    ::UnityEngine::Color Color();
    // public System.String PrefabName()
    // Offset: 0x10D77F4
    ::StringW PrefabName();
    // public System.Void .ctor()
    // Offset: 0x10D77FC
    // Implemented from: QuickInteractable
    // Base method: System.Void QuickInteractable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickPickerBrick* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickPickerBrick::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickPickerBrick*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x10D787C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // public override System.Void Interact(QuickInteractor interactor)
    // Offset: 0x10D7488
    // Implemented from: QuickInteractable
    // Base method: System.Void QuickInteractable::Interact(QuickInteractor interactor)
    void Interact(::GlobalNamespace::QuickInteractor* interactor);
  }; // BrickPickerBrick
  #pragma pack(pop)
  static check_size<sizeof(BrickPickerBrick), 184 + sizeof(float)> __GlobalNamespace_BrickPickerBrickSizeCheck;
  static_assert(sizeof(BrickPickerBrick) == 0xBC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)(::GlobalNamespace::BrickData::Brick, ::UnityEngine::Color, ::GlobalNamespace::BrickPickerManager*)>(&GlobalNamespace::BrickPickerBrick::Initialize)> {
  static const MethodInfo* get() {
    static auto* brickData = &::il2cpp_utils::GetClassFromName("", "BrickData/Brick")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "BrickPickerManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{brickData, color, manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)()>(&GlobalNamespace::BrickPickerBrick::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)()>(&GlobalNamespace::BrickPickerBrick::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)(::UnityEngine::Color)>(&GlobalNamespace::BrickPickerBrick::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::OnTriggerStay
// Il2CppName: OnTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)(::UnityEngine::Collider*)>(&GlobalNamespace::BrickPickerBrick::OnTriggerStay)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "OnTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)(::UnityEngine::Collider*)>(&GlobalNamespace::BrickPickerBrick::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::SetIsHovered
// Il2CppName: SetIsHovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)(bool)>(&GlobalNamespace::BrickPickerBrick::SetIsHovered)> {
  static const MethodInfo* get() {
    static auto* hovered = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "SetIsHovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovered});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::Color
// Il2CppName: Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::BrickPickerBrick::*)()>(&GlobalNamespace::BrickPickerBrick::Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::PrefabName
// Il2CppName: PrefabName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BrickPickerBrick::*)()>(&GlobalNamespace::BrickPickerBrick::PrefabName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "PrefabName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickPickerBrick::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickPickerBrick::Interact
// Il2CppName: Interact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickPickerBrick::*)(::GlobalNamespace::QuickInteractor*)>(&GlobalNamespace::BrickPickerBrick::Interact)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("", "QuickInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickPickerBrick*), "Interact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
