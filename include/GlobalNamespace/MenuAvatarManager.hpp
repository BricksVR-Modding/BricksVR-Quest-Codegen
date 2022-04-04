// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SetColorOnPrefabBrick
  class SetColorOnPrefabBrick;
  // Forward declaring type: SetHandColors
  class SetHandColors;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MenuAvatarManager
  class MenuAvatarManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuAvatarManager*, "", "MenuAvatarManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: MenuAvatarManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuAvatarManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject head
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* head;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject leftHand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* leftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject rightHand
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* rightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject positionInMenuObject
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* positionInMenuObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Color primaryColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color primaryColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color secondaryColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color secondaryColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.UI.Image eyesImage
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::UI::Image* eyesImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // public UnityEngine.UI.Image mouthImage
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::UI::Image* mouthImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // public SetColorOnPrefabBrick[] primaryBrickColors
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::GlobalNamespace::SetColorOnPrefabBrick*> primaryBrickColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SetColorOnPrefabBrick*>) == 0x8);
    // public SetColorOnPrefabBrick[] secondaryBrickColors
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::GlobalNamespace::SetColorOnPrefabBrick*> secondaryBrickColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SetColorOnPrefabBrick*>) == 0x8);
    // public SetHandColors[] setHandColors
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::GlobalNamespace::SetHandColors*> setHandColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SetHandColors*>) == 0x8);
    // public UnityEngine.GameObject playerHead
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::GameObject* playerHead;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single bounceSpeed
    // Size: 0x4
    // Offset: 0x88
    float bounceSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single bounceHeight
    // Size: 0x4
    // Offset: 0x8C
    float bounceHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single handsBounceOffset
    // Size: 0x4
    // Offset: 0x90
    float handsBounceOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _appearanceKeyframe
    // Size: 0x4
    // Offset: 0x94
    float appearanceKeyframe;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _visible
    // Size: 0x1
    // Offset: 0x98
    bool visible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visible and: defaultLeftHandY
    char __padding16[0x3] = {};
    // private System.Single _defaultLeftHandY
    // Size: 0x4
    // Offset: 0x9C
    float defaultLeftHandY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _defaultRightHandY
    // Size: 0x4
    // Offset: 0xA0
    float defaultRightHandY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _defaultHeadY
    // Size: 0x4
    // Offset: 0xA4
    float defaultHeadY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _scale
    // Size: 0x4
    // Offset: 0xA8
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single BounceAmount
    static constexpr const float BounceAmount = 0.2;
    // Get static field: static private System.Single BounceAmount
    static float _get_BounceAmount();
    // Set static field: static private System.Single BounceAmount
    static void _set_BounceAmount(float value);
    // Get instance field reference: public UnityEngine.GameObject head
    [[deprecated]] ::UnityEngine::GameObject*& dyn_head();
    // Get instance field reference: public UnityEngine.GameObject leftHand
    [[deprecated]] ::UnityEngine::GameObject*& dyn_leftHand();
    // Get instance field reference: public UnityEngine.GameObject rightHand
    [[deprecated]] ::UnityEngine::GameObject*& dyn_rightHand();
    // Get instance field reference: public UnityEngine.GameObject positionInMenuObject
    [[deprecated]] ::UnityEngine::GameObject*& dyn_positionInMenuObject();
    // Get instance field reference: public UnityEngine.Color primaryColor
    [[deprecated]] ::UnityEngine::Color& dyn_primaryColor();
    // Get instance field reference: public UnityEngine.Color secondaryColor
    [[deprecated]] ::UnityEngine::Color& dyn_secondaryColor();
    // Get instance field reference: public UnityEngine.UI.Image eyesImage
    [[deprecated]] ::UnityEngine::UI::Image*& dyn_eyesImage();
    // Get instance field reference: public UnityEngine.UI.Image mouthImage
    [[deprecated]] ::UnityEngine::UI::Image*& dyn_mouthImage();
    // Get instance field reference: public SetColorOnPrefabBrick[] primaryBrickColors
    [[deprecated]] ::ArrayW<::GlobalNamespace::SetColorOnPrefabBrick*>& dyn_primaryBrickColors();
    // Get instance field reference: public SetColorOnPrefabBrick[] secondaryBrickColors
    [[deprecated]] ::ArrayW<::GlobalNamespace::SetColorOnPrefabBrick*>& dyn_secondaryBrickColors();
    // Get instance field reference: public SetHandColors[] setHandColors
    [[deprecated]] ::ArrayW<::GlobalNamespace::SetHandColors*>& dyn_setHandColors();
    // Get instance field reference: public UnityEngine.GameObject playerHead
    [[deprecated]] ::UnityEngine::GameObject*& dyn_playerHead();
    // Get instance field reference: public System.Single bounceSpeed
    [[deprecated]] float& dyn_bounceSpeed();
    // Get instance field reference: public System.Single bounceHeight
    [[deprecated]] float& dyn_bounceHeight();
    // Get instance field reference: public System.Single handsBounceOffset
    [[deprecated]] float& dyn_handsBounceOffset();
    // Get instance field reference: private System.Single _appearanceKeyframe
    [[deprecated]] float& dyn__appearanceKeyframe();
    // Get instance field reference: private System.Boolean _visible
    [[deprecated]] bool& dyn__visible();
    // Get instance field reference: private System.Single _defaultLeftHandY
    [[deprecated]] float& dyn__defaultLeftHandY();
    // Get instance field reference: private System.Single _defaultRightHandY
    [[deprecated]] float& dyn__defaultRightHandY();
    // Get instance field reference: private System.Single _defaultHeadY
    [[deprecated]] float& dyn__defaultHeadY();
    // Get instance field reference: private System.Single _scale
    [[deprecated]] float& dyn__scale();
    // private System.Void Start()
    // Offset: 0x6BE140
    void Start();
    // private System.Void Update()
    // Offset: 0x6BE2F0
    void Update();
    // public System.Void SetVisible(System.Boolean value)
    // Offset: 0x6BDF20
    void SetVisible(bool value);
    // public System.Void SetPrimaryColor(System.Int32 color)
    // Offset: 0x6BDBC0
    void SetPrimaryColor(int color);
    // public System.Void SetSecondaryColor(System.Int32 color)
    // Offset: 0x6BDDF0
    void SetSecondaryColor(int color);
    // public System.Void SetEyes(System.Int32 value)
    // Offset: 0x6BDB20
    void SetEyes(int value);
    // public System.Void SetScale(System.Int32 sliderValue)
    // Offset: 0x6BDCF0
    void SetScale(int sliderValue);
    // public System.Void SetMouth(System.Int32 value)
    // Offset: 0x6BDB70
    void SetMouth(int value);
    // private System.Void AnimateVisibility()
    // Offset: 0x6BD9D0
    void AnimateVisibility();
    // private System.Void AnimateBounciness()
    // Offset: 0x6BD560
    void AnimateBounciness();
    // private System.Void AnimateHead()
    // Offset: 0x6BD8A0
    void AnimateHead();
    // private System.Void AnimateHands()
    // Offset: 0x6BD690
    void AnimateHands();
    // public System.Void .ctor()
    // Offset: 0x6BE590
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuAvatarManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuAvatarManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuAvatarManager*, creationType>()));
    }
  }; // MenuAvatarManager
  #pragma pack(pop)
  static check_size<sizeof(MenuAvatarManager), 168 + sizeof(float)> __GlobalNamespace_MenuAvatarManagerSizeCheck;
  static_assert(sizeof(MenuAvatarManager) == 0xAC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)()>(&GlobalNamespace::MenuAvatarManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)()>(&GlobalNamespace::MenuAvatarManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::SetVisible
// Il2CppName: SetVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)(bool)>(&GlobalNamespace::MenuAvatarManager::SetVisible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "SetVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::SetPrimaryColor
// Il2CppName: SetPrimaryColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)(int)>(&GlobalNamespace::MenuAvatarManager::SetPrimaryColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "SetPrimaryColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::SetSecondaryColor
// Il2CppName: SetSecondaryColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)(int)>(&GlobalNamespace::MenuAvatarManager::SetSecondaryColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "SetSecondaryColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::SetEyes
// Il2CppName: SetEyes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)(int)>(&GlobalNamespace::MenuAvatarManager::SetEyes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "SetEyes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::SetScale
// Il2CppName: SetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)(int)>(&GlobalNamespace::MenuAvatarManager::SetScale)> {
  static const MethodInfo* get() {
    static auto* sliderValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "SetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::SetMouth
// Il2CppName: SetMouth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)(int)>(&GlobalNamespace::MenuAvatarManager::SetMouth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "SetMouth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::AnimateVisibility
// Il2CppName: AnimateVisibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)()>(&GlobalNamespace::MenuAvatarManager::AnimateVisibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "AnimateVisibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::AnimateBounciness
// Il2CppName: AnimateBounciness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)()>(&GlobalNamespace::MenuAvatarManager::AnimateBounciness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "AnimateBounciness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::AnimateHead
// Il2CppName: AnimateHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)()>(&GlobalNamespace::MenuAvatarManager::AnimateHead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "AnimateHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::AnimateHands
// Il2CppName: AnimateHands
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuAvatarManager::*)()>(&GlobalNamespace::MenuAvatarManager::AnimateHands)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuAvatarManager*), "AnimateHands", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuAvatarManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
