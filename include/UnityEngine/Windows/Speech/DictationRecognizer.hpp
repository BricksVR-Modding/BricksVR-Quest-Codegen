// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Windows::Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: ConfidenceLevel
  struct ConfidenceLevel;
  // Forward declaring type: DictationCompletionCause
  struct DictationCompletionCause;
}
// Completed forward declares
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: DictationRecognizer
  class DictationRecognizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::Speech::DictationRecognizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::DictationRecognizer*, "UnityEngine.Windows.Speech", "DictationRecognizer");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.DictationRecognizer
  // [TokenAttribute] Offset: FFFFFFFF
  class DictationRecognizer : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate
    class DictationHypothesisDelegate;
    // Nested type: ::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate
    class DictationResultDelegate;
    // Nested type: ::UnityEngine::Windows::Speech::DictationRecognizer::DictationCompletedDelegate
    class DictationCompletedDelegate;
    // Nested type: ::UnityEngine::Windows::Speech::DictationRecognizer::DictationErrorHandler
    class DictationErrorHandler;
    public:
    // private System.IntPtr m_Recognizer
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Recognizer;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationHypothesisDelegate DictationHypothesis
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate* DictationHypothesis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationResultDelegate DictationResult
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate* DictationResult;
    // Field size check
    static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationCompletedDelegate DictationComplete
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Windows::Speech::DictationRecognizer::DictationCompletedDelegate* DictationComplete;
    // Field size check
    static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer::DictationCompletedDelegate*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationErrorHandler DictationError
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Windows::Speech::DictationRecognizer::DictationErrorHandler* DictationError;
    // Field size check
    static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer::DictationErrorHandler*) == 0x8);
    public:
    // Get instance field reference: private System.IntPtr m_Recognizer
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Recognizer();
    // Get instance field reference: private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationHypothesisDelegate DictationHypothesis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Windows::Speech::DictationRecognizer::DictationHypothesisDelegate*& dyn_DictationHypothesis();
    // Get instance field reference: private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationResultDelegate DictationResult
    [[deprecated("Use field access instead!")]] ::UnityEngine::Windows::Speech::DictationRecognizer::DictationResultDelegate*& dyn_DictationResult();
    // Get instance field reference: private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationCompletedDelegate DictationComplete
    [[deprecated("Use field access instead!")]] ::UnityEngine::Windows::Speech::DictationRecognizer::DictationCompletedDelegate*& dyn_DictationComplete();
    // Get instance field reference: private UnityEngine.Windows.Speech.DictationRecognizer/UnityEngine.Windows.Speech.DictationErrorHandler DictationError
    [[deprecated("Use field access instead!")]] ::UnityEngine::Windows::Speech::DictationRecognizer::DictationErrorHandler*& dyn_DictationError();
    // private System.Void DictationRecognizer_InvokeHypothesisGeneratedEvent(System.String keyword)
    // Offset: 0xA38DD0
    void DictationRecognizer_InvokeHypothesisGeneratedEvent(::StringW keyword);
    // private System.Void DictationRecognizer_InvokeResultGeneratedEvent(System.String keyword, UnityEngine.Windows.Speech.ConfidenceLevel minimumConfidence)
    // Offset: 0xA38DF0
    void DictationRecognizer_InvokeResultGeneratedEvent(::StringW keyword, ::UnityEngine::Windows::Speech::ConfidenceLevel minimumConfidence);
    // private System.Void DictationRecognizer_InvokeCompletedEvent(UnityEngine.Windows.Speech.DictationCompletionCause cause)
    // Offset: 0xA38D90
    void DictationRecognizer_InvokeCompletedEvent(::UnityEngine::Windows::Speech::DictationCompletionCause cause);
    // private System.Void DictationRecognizer_InvokeErrorEvent(System.String error, System.Int32 hresult)
    // Offset: 0xA38DB0
    void DictationRecognizer_InvokeErrorEvent(::StringW error, int hresult);
  }; // UnityEngine.Windows.Speech.DictationRecognizer
  #pragma pack(pop)
  static check_size<sizeof(DictationRecognizer), 48 + sizeof(::UnityEngine::Windows::Speech::DictationRecognizer::DictationErrorHandler*)> __UnityEngine_Windows_Speech_DictationRecognizerSizeCheck;
  static_assert(sizeof(DictationRecognizer) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent
// Il2CppName: DictationRecognizer_InvokeHypothesisGeneratedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::*)(::StringW)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeHypothesisGeneratedEvent)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer*), "DictationRecognizer_InvokeHypothesisGeneratedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent
// Il2CppName: DictationRecognizer_InvokeResultGeneratedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::*)(::StringW, ::UnityEngine::Windows::Speech::ConfidenceLevel)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeResultGeneratedEvent)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimumConfidence = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "ConfidenceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer*), "DictationRecognizer_InvokeResultGeneratedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword, minimumConfidence});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeCompletedEvent
// Il2CppName: DictationRecognizer_InvokeCompletedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::*)(::UnityEngine::Windows::Speech::DictationCompletionCause)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeCompletedEvent)> {
  static const MethodInfo* get() {
    static auto* cause = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "DictationCompletionCause")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer*), "DictationRecognizer_InvokeCompletedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cause});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeErrorEvent
// Il2CppName: DictationRecognizer_InvokeErrorEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::DictationRecognizer::*)(::StringW, int)>(&UnityEngine::Windows::Speech::DictationRecognizer::DictationRecognizer_InvokeErrorEvent)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hresult = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::DictationRecognizer*), "DictationRecognizer_InvokeErrorEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, hresult});
  }
};
