// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AudioSettings
#include "UnityEngine/AudioSettings.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioSettings::AudioConfigurationChangeHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSettings::AudioConfigurationChangeHandler*, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioSettings/UnityEngine.AudioConfigurationChangeHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioSettings::AudioConfigurationChangeHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1035C9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioSettings::AudioConfigurationChangeHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AudioSettings::AudioConfigurationChangeHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioSettings::AudioConfigurationChangeHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean deviceWasChanged)
    // Offset: 0x10359C4
    void Invoke(bool deviceWasChanged);
    // public System.IAsyncResult BeginInvoke(System.Boolean deviceWasChanged, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1035CAC
    ::System::IAsyncResult* BeginInvoke(bool deviceWasChanged, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1035D3C
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.AudioSettings/UnityEngine.AudioConfigurationChangeHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioSettings::AudioConfigurationChangeHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AudioSettings::AudioConfigurationChangeHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioSettings::AudioConfigurationChangeHandler::*)(bool)>(&UnityEngine::AudioSettings::AudioConfigurationChangeHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* deviceWasChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings::AudioConfigurationChangeHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceWasChanged});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::AudioConfigurationChangeHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::AudioSettings::AudioConfigurationChangeHandler::*)(bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::AudioSettings::AudioConfigurationChangeHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* deviceWasChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings::AudioConfigurationChangeHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceWasChanged, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioSettings::AudioConfigurationChangeHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioSettings::AudioConfigurationChangeHandler::*)(::System::IAsyncResult*)>(&UnityEngine::AudioSettings::AudioConfigurationChangeHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioSettings::AudioConfigurationChangeHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
