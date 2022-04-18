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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NormalSessionManager
  class NormalSessionManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RoomCodeScreen
  class RoomCodeScreen;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RoomCodeScreen);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomCodeScreen*, "", "RoomCodeScreen");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RoomCodeScreen
  // [TokenAttribute] Offset: FFFFFFFF
  class RoomCodeScreen : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public TMPro.TextMeshProUGUI text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // public NormalSessionManager normalSessionManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NormalSessionManager* normalSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NormalSessionManager*) == 0x8);
    // public UnityEngine.GameObject loadingScreen
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* loadingScreen;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.String _code
    // Size: 0x8
    // Offset: 0x30
    ::StringW code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public TMPro.TextMeshProUGUI text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn_text();
    // Get instance field reference: public NormalSessionManager normalSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NormalSessionManager*& dyn_normalSessionManager();
    // Get instance field reference: public UnityEngine.GameObject loadingScreen
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_loadingScreen();
    // Get instance field reference: private System.String _code
    [[deprecated("Use field access instead!")]] ::StringW& dyn__code();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoomCodeScreen* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RoomCodeScreen::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoomCodeScreen*, creationType>()));
    }
    // public System.Void JoinRoom()
    // Offset: 0x6CA5A0
    void JoinRoom();
    // public System.Void SetRoomCode(System.String code)
    // Offset: 0x6CA600
    void SetRoomCode(::StringW code);
    // private System.String FormatRoomName(System.String roomName)
    // Offset: 0x6C9FB0
    ::StringW FormatRoomName(::StringW roomName);
  }; // RoomCodeScreen
  #pragma pack(pop)
  static check_size<sizeof(RoomCodeScreen), 48 + sizeof(::StringW)> __GlobalNamespace_RoomCodeScreenSizeCheck;
  static_assert(sizeof(RoomCodeScreen) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RoomCodeScreen::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RoomCodeScreen::JoinRoom
// Il2CppName: JoinRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomCodeScreen::*)()>(&GlobalNamespace::RoomCodeScreen::JoinRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomCodeScreen*), "JoinRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomCodeScreen::SetRoomCode
// Il2CppName: SetRoomCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomCodeScreen::*)(::StringW)>(&GlobalNamespace::RoomCodeScreen::SetRoomCode)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomCodeScreen*), "SetRoomCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomCodeScreen::FormatRoomName
// Il2CppName: FormatRoomName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::RoomCodeScreen::*)(::StringW)>(&GlobalNamespace::RoomCodeScreen::FormatRoomName)> {
  static const MethodInfo* get() {
    static auto* roomName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomCodeScreen*), "FormatRoomName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomName});
  }
};
