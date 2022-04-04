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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate*, "UnityEngine.Windows.Speech", "DictationRecognizer/DictationHypothesisDelegate");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationHypothesisDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class DictationRecognizer::DictationHypothesisDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictationRecognizer::DictationHypothesisDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictationRecognizer::DictationHypothesisDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String text)
    // Offset: 0x299A60
    void Invoke(::StringW text);
    // public System.IAsyncResult BeginInvoke(System.String text, System.AsyncCallback callback, System.Object object)
    // Offset: 0x299A30
    ::System::IAsyncResult* BeginInvoke(::StringW text, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationHypothesisDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::*)(::StringW)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::*)(::System::IAsyncResult*)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
