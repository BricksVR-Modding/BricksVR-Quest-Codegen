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
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSON
  class JSON;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVRSimpleJSON::JSON);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSON*, "OVRSimpleJSON", "JSON");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSON
  // [TokenAttribute] Offset: FFFFFFFF
  class JSON : public ::Il2CppObject {
    public:
    // static public OVRSimpleJSON.JSONNode Parse(System.String aJSON)
    // Offset: 0x390B80
    static ::OVRSimpleJSON::JSONNode* Parse(::StringW aJSON);
  }; // OVRSimpleJSON.JSON
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSON::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&OVRSimpleJSON::JSON::Parse)> {
  static const MethodInfo* get() {
    static auto* aJSON = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSON*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aJSON});
  }
};
