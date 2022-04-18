// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_LinkInfo
  struct TMP_LinkInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_LinkInfo, "TMPro", "TMP_LinkInfo");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_LinkInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_LinkInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public TMPro.TMP_Text textComponent
    // Size: 0x8
    // Offset: 0x0
    ::TMPro::TMP_Text* textComponent;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Text*) == 0x8);
    // public System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x8
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkIdFirstCharacterIndex
    // Size: 0x4
    // Offset: 0xC
    int linkIdFirstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkIdLength
    // Size: 0x4
    // Offset: 0x10
    int linkIdLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkTextfirstCharacterIndex
    // Size: 0x4
    // Offset: 0x14
    int linkTextfirstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 linkTextLength
    // Size: 0x4
    // Offset: 0x18
    int linkTextLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: linkTextLength and: linkID
    char __padding5[0x4] = {};
    // System.Char[] linkID
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppChar> linkID;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    public:
    // Creating value type constructor for type: TMP_LinkInfo
    constexpr TMP_LinkInfo(::TMPro::TMP_Text* textComponent_ = {}, int hashCode_ = {}, int linkIdFirstCharacterIndex_ = {}, int linkIdLength_ = {}, int linkTextfirstCharacterIndex_ = {}, int linkTextLength_ = {}, ::ArrayW<::Il2CppChar> linkID_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr))) noexcept : textComponent{textComponent_}, hashCode{hashCode_}, linkIdFirstCharacterIndex{linkIdFirstCharacterIndex_}, linkIdLength{linkIdLength_}, linkTextfirstCharacterIndex{linkTextfirstCharacterIndex_}, linkTextLength{linkTextLength_}, linkID{linkID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public TMPro.TMP_Text textComponent
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_Text*& dyn_textComponent();
    // Get instance field reference: public System.Int32 hashCode
    [[deprecated("Use field access instead!")]] int& dyn_hashCode();
    // Get instance field reference: public System.Int32 linkIdFirstCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_linkIdFirstCharacterIndex();
    // Get instance field reference: public System.Int32 linkIdLength
    [[deprecated("Use field access instead!")]] int& dyn_linkIdLength();
    // Get instance field reference: public System.Int32 linkTextfirstCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_linkTextfirstCharacterIndex();
    // Get instance field reference: public System.Int32 linkTextLength
    [[deprecated("Use field access instead!")]] int& dyn_linkTextLength();
    // Get instance field reference: System.Char[] linkID
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_linkID();
    // System.Void SetLinkID(System.Char[] text, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x27AF10
    void SetLinkID(::ArrayW<::Il2CppChar> text, int startIndex, int length);
    // public System.String GetLinkText()
    // Offset: 0x27AE30
    ::StringW GetLinkText();
    // public System.String GetLinkID()
    // Offset: 0x27AD90
    ::StringW GetLinkID();
  }; // TMPro.TMP_LinkInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_LinkInfo), 32 + sizeof(::ArrayW<::Il2CppChar>)> __TMPro_TMP_LinkInfoSizeCheck;
  static_assert(sizeof(TMP_LinkInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_LinkInfo::SetLinkID
// Il2CppName: SetLinkID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_LinkInfo::*)(::ArrayW<::Il2CppChar>, int, int)>(&TMPro::TMP_LinkInfo::SetLinkID)> {
  static const MethodInfo* get() {
    static auto* text = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_LinkInfo), "SetLinkID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, startIndex, length});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_LinkInfo::GetLinkText
// Il2CppName: GetLinkText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::TMP_LinkInfo::*)()>(&TMPro::TMP_LinkInfo::GetLinkText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_LinkInfo), "GetLinkText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_LinkInfo::GetLinkID
// Il2CppName: GetLinkID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (TMPro::TMP_LinkInfo::*)()>(&TMPro::TMP_LinkInfo::GetLinkID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_LinkInfo), "GetLinkID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
