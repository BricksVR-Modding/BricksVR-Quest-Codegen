// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Windows.Speech.PhraseRecognitionSystem
#include "UnityEngine/Windows/Speech/PhraseRecognitionSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Windows::Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: SpeechSystemStatus
  struct SpeechSystemStatus;
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
NEED_NO_BOX(::UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate*, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem/StatusDelegate");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.PhraseRecognitionSystem/UnityEngine.Windows.Speech.StatusDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class PhraseRecognitionSystem::StatusDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhraseRecognitionSystem::StatusDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhraseRecognitionSystem::StatusDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Windows.Speech.SpeechSystemStatus status)
    // Offset: 0x5A5C30
    void Invoke(::UnityEngine::Windows::Speech::SpeechSystemStatus status);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Windows.Speech.SpeechSystemStatus status, System.AsyncCallback callback, System.Object object)
    // Offset: 0xA3E0F0
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::Speech::SpeechSystemStatus status, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Windows.Speech.PhraseRecognitionSystem/UnityEngine.Windows.Speech.StatusDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::*)(::UnityEngine::Windows::Speech::SpeechSystemStatus)>(&UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "SpeechSystemStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::*)(::UnityEngine::Windows::Speech::SpeechSystemStatus, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "SpeechSystemStatus")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::*)(::System::IAsyncResult*)>(&UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::PhraseRecognitionSystem::StatusDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
