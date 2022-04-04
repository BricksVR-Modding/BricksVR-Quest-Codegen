// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.TerrainAPI.TerrainCallbacks
#include "UnityEngine/Experimental/TerrainAPI/TerrainCallbacks.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
  // Forward declaring type: RectInt
  struct RectInt;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback*, "UnityEngine.Experimental.TerrainAPI", "TerrainCallbacks/TextureChangedCallback");
// Type namespace: UnityEngine.Experimental.TerrainAPI
namespace UnityEngine::Experimental::TerrainAPI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/UnityEngine.Experimental.TerrainAPI.TextureChangedCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainCallbacks::TextureChangedCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainCallbacks::TextureChangedCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainCallbacks::TextureChangedCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Terrain terrain, System.String textureName, UnityEngine.RectInt texelRegion, System.Boolean synched)
    // Offset: 0x64DAD0
    void Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Terrain terrain, System.String textureName, UnityEngine.RectInt texelRegion, System.Boolean synched, System.AsyncCallback callback, System.Object object)
    // Offset: 0x64DA20
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Experimental.TerrainAPI.TerrainCallbacks/UnityEngine.Experimental.TerrainAPI.TextureChangedCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::*)(::UnityEngine::Terrain*, ::StringW, ::UnityEngine::RectInt, bool)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* textureName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* texelRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, textureName, texelRegion, synched});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::*)(::UnityEngine::Terrain*, ::StringW, ::UnityEngine::RectInt, bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* textureName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* texelRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, textureName, texelRegion, synched, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::*)(::System::IAsyncResult*)>(&UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::TerrainAPI::TerrainCallbacks::TextureChangedCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
