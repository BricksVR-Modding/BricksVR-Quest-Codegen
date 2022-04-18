// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Windows.Speech.SemanticMeaning
#include "UnityEngine/Windows/Speech/SemanticMeaning.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Windows::Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: ConfidenceLevel
  struct ConfidenceLevel;
}
// Completed forward declares
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Forward declaring type: PhraseRecognizer
  class PhraseRecognizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::Speech::PhraseRecognizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::Speech::PhraseRecognizer*, "UnityEngine.Windows.Speech", "PhraseRecognizer");
// Type namespace: UnityEngine.Windows.Speech
namespace UnityEngine::Windows::Speech {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.Speech.PhraseRecognizer
  // [TokenAttribute] Offset: FFFFFFFF
  class PhraseRecognizer : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizedDelegate
    class PhraseRecognizedDelegate;
    public:
    // protected System.IntPtr m_Recognizer
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Recognizer;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private UnityEngine.Windows.Speech.PhraseRecognizer/UnityEngine.Windows.Speech.PhraseRecognizedDelegate OnPhraseRecognized
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizedDelegate* OnPhraseRecognized;
    // Field size check
    static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizedDelegate*) == 0x8);
    public:
    // Get instance field reference: protected System.IntPtr m_Recognizer
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Recognizer();
    // Get instance field reference: private UnityEngine.Windows.Speech.PhraseRecognizer/UnityEngine.Windows.Speech.PhraseRecognizedDelegate OnPhraseRecognized
    [[deprecated("Use field access instead!")]] ::UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizedDelegate*& dyn_OnPhraseRecognized();
    // private System.Void InvokePhraseRecognizedEvent(System.String text, UnityEngine.Windows.Speech.ConfidenceLevel confidence, UnityEngine.Windows.Speech.SemanticMeaning[] semanticMeanings, System.Int64 phraseStartFileTime, System.Int64 phraseDurationTicks)
    // Offset: 0xA3A910
    void InvokePhraseRecognizedEvent(::StringW text, ::UnityEngine::Windows::Speech::ConfidenceLevel confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning> semanticMeanings, int64_t phraseStartFileTime, int64_t phraseDurationTicks);
    // static private UnityEngine.Windows.Speech.SemanticMeaning[] MarshalSemanticMeaning(System.IntPtr keys, System.IntPtr values, System.IntPtr valueSizes, System.Int32 valueCount)
    // Offset: 0xA3AA70
    static ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning> MarshalSemanticMeaning(::System::IntPtr keys, ::System::IntPtr values, ::System::IntPtr valueSizes, int valueCount);
  }; // UnityEngine.Windows.Speech.PhraseRecognizer
  #pragma pack(pop)
  static check_size<sizeof(PhraseRecognizer), 24 + sizeof(::UnityEngine::Windows::Speech::PhraseRecognizer::PhraseRecognizedDelegate*)> __UnityEngine_Windows_Speech_PhraseRecognizerSizeCheck;
  static_assert(sizeof(PhraseRecognizer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::PhraseRecognizer::InvokePhraseRecognizedEvent
// Il2CppName: InvokePhraseRecognizedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::Speech::PhraseRecognizer::*)(::StringW, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>, int64_t, int64_t)>(&UnityEngine::Windows::Speech::PhraseRecognizer::InvokePhraseRecognizedEvent)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "ConfidenceLevel")->byval_arg;
    static auto* semanticMeanings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.Windows.Speech", "SemanticMeaning"), 1)->byval_arg;
    static auto* phraseStartFileTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* phraseDurationTicks = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::PhraseRecognizer*), "InvokePhraseRecognizedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, confidence, semanticMeanings, phraseStartFileTime, phraseDurationTicks});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::Speech::PhraseRecognizer::MarshalSemanticMeaning
// Il2CppName: MarshalSemanticMeaning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning> (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int)>(&UnityEngine::Windows::Speech::PhraseRecognizer::MarshalSemanticMeaning)> {
  static const MethodInfo* get() {
    static auto* keys = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* values = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* valueSizes = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* valueCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::Speech::PhraseRecognizer*), "MarshalSemanticMeaning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keys, values, valueSizes, valueCount});
  }
};
