// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: WebRequestUtils
  class WebRequestUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::WebRequestUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::WebRequestUtils*, "UnityEngineInternal", "WebRequestUtils");
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.WebRequestUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestUtils : public ::Il2CppObject {
    public:
    // Get static field: static private System.Text.RegularExpressions.Regex domainRegex
    static ::System::Text::RegularExpressions::Regex* _get_domainRegex();
    // Set static field: static private System.Text.RegularExpressions.Regex domainRegex
    static void _set_domainRegex(::System::Text::RegularExpressions::Regex* value);
    // static private System.Void .cctor()
    // Offset: 0x1025288
    static void _cctor();
    // static System.String RedirectTo(System.String baseUri, System.String redirectUri)
    // Offset: 0x1024D7C
    static ::StringW RedirectTo(::StringW baseUri, ::StringW redirectUri);
    // static System.String MakeInitialUrl(System.String targetUrl, System.String localUrl)
    // Offset: 0x1021DBC
    static ::StringW MakeInitialUrl(::StringW targetUrl, ::StringW localUrl);
    // static System.String MakeUriString(System.Uri targetUri, System.String targetUrl, System.Boolean prependProtocol)
    // Offset: 0x1024E84
    static ::StringW MakeUriString(::System::Uri* targetUri, ::StringW targetUrl, bool prependProtocol);
    // static private System.String URLDecode(System.String encoded)
    // Offset: 0x10251D4
    static ::StringW URLDecode(::StringW encoded);
  }; // UnityEngineInternal.WebRequestUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::WebRequestUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngineInternal::WebRequestUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::WebRequestUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::WebRequestUtils::RedirectTo
// Il2CppName: RedirectTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngineInternal::WebRequestUtils::RedirectTo)> {
  static const MethodInfo* get() {
    static auto* baseUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* redirectUri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::WebRequestUtils*), "RedirectTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseUri, redirectUri});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::WebRequestUtils::MakeInitialUrl
// Il2CppName: MakeInitialUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngineInternal::WebRequestUtils::MakeInitialUrl)> {
  static const MethodInfo* get() {
    static auto* targetUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::WebRequestUtils*), "MakeInitialUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetUrl, localUrl});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::WebRequestUtils::MakeUriString
// Il2CppName: MakeUriString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Uri*, ::StringW, bool)>(&UnityEngineInternal::WebRequestUtils::MakeUriString)> {
  static const MethodInfo* get() {
    static auto* targetUri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* targetUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* prependProtocol = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::WebRequestUtils*), "MakeUriString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetUri, targetUrl, prependProtocol});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::WebRequestUtils::URLDecode
// Il2CppName: URLDecode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngineInternal::WebRequestUtils::URLDecode)> {
  static const MethodInfo* get() {
    static auto* encoded = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::WebRequestUtils*), "URLDecode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encoded});
  }
};
