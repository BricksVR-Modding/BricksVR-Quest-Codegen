// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Windows.Speech.DictationRecognizer
#include "UnityEngine/Windows/Speech/DictationRecognizer.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Windows::Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: ConfidenceLevel
  struct ConfidenceLevel;
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
NEED_NO_BOX(::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate*, "UnityEngine.Windows.Speech", "DictationRecognizer/DictationResultDelegate");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationResultDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class DictationRecognizer::DictationResultDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictationRecognizer::DictationResultDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictationRecognizer::DictationResultDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String text, UnityEngine.Windows.Speech.ConfidenceLevel confidence)
    // Offset: 0x9C18C0
    void Invoke(::StringW text, ::UnityEngine::Windows::Speech::ConfidenceLevel confidence);
    // public System.IAsyncResult BeginInvoke(System.String text, UnityEngine.Windows.Speech.ConfidenceLevel confidence, System.AsyncCallback callback, System.Object object)
    // Offset: 0xA38E10
    ::System::IAsyncResult* BeginInvoke(::StringW text, ::UnityEngine::Windows::Speech::ConfidenceLevel confidence, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationResultDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::*)(::StringW, ::UnityEngine::Windows::Speech::ConfidenceLevel)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "ConfidenceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, confidence});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::*)(::StringW, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "ConfidenceLevel")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, confidence, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::*)(::System::IAsyncResult*)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};