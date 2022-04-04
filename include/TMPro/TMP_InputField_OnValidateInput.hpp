// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
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
NEED_NO_BOX(::TMPro::TMP_InputField::OnValidateInput);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_InputField::OnValidateInput*, "TMPro", "TMP_InputField/OnValidateInput");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_InputField/TMPro.OnValidateInput
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_InputField::OnValidateInput : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_InputField::OnValidateInput* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_InputField::OnValidateInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_InputField::OnValidateInput*, creationType>(object, method)));
    }
    // public System.Char Invoke(System.String text, System.Int32 charIndex, System.Char addedChar)
    // Offset: 0x267A40
    ::Il2CppChar Invoke(::StringW text, int charIndex, ::Il2CppChar addedChar);
    // public System.IAsyncResult BeginInvoke(System.String text, System.Int32 charIndex, System.Char addedChar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x267970
    ::System::IAsyncResult* BeginInvoke(::StringW text, int charIndex, ::Il2CppChar addedChar, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Char EndInvoke(System.IAsyncResult result)
    // Offset: 0x267A10
    ::Il2CppChar EndInvoke(::System::IAsyncResult* result);
  }; // TMPro.TMP_InputField/TMPro.OnValidateInput
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_InputField::OnValidateInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_InputField::OnValidateInput::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (TMPro::TMP_InputField::OnValidateInput::*)(::StringW, int, ::Il2CppChar)>(&TMPro::TMP_InputField::OnValidateInput::Invoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addedChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_InputField::OnValidateInput*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, charIndex, addedChar});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_InputField::OnValidateInput::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (TMPro::TMP_InputField::OnValidateInput::*)(::StringW, int, ::Il2CppChar, ::System::AsyncCallback*, ::Il2CppObject*)>(&TMPro::TMP_InputField::OnValidateInput::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addedChar = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_InputField::OnValidateInput*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, charIndex, addedChar, callback, object});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_InputField::OnValidateInput::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (TMPro::TMP_InputField::OnValidateInput::*)(::System::IAsyncResult*)>(&TMPro::TMP_InputField::OnValidateInput::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_InputField::OnValidateInput*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
