// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexTree
  class RegexTree;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexTree*, "System.Text.RegularExpressions", "RegexTree");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexTree
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexTree : public ::Il2CppObject {
    public:
    public:
    // System.Text.RegularExpressions.RegexNode _root
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::RegexNode* root;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.Int32[] _capnumlist
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> capnumlist;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Collections.Hashtable _capnames
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Hashtable* capnames;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.String[] _capslist
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> capslist;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Text.RegularExpressions.RegexOptions _options
    // Size: 0x4
    // Offset: 0x38
    ::System::Text::RegularExpressions::RegexOptions options;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexOptions) == 0x4);
    // System.Int32 _captop
    // Size: 0x4
    // Offset: 0x3C
    int captop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Text.RegularExpressions.RegexNode _root
    [[deprecated]] ::System::Text::RegularExpressions::RegexNode*& dyn__root();
    // Get instance field reference: System.Collections.Hashtable _caps
    [[deprecated]] ::System::Collections::Hashtable*& dyn__caps();
    // Get instance field reference: System.Int32[] _capnumlist
    [[deprecated]] ::ArrayW<int>& dyn__capnumlist();
    // Get instance field reference: System.Collections.Hashtable _capnames
    [[deprecated]] ::System::Collections::Hashtable*& dyn__capnames();
    // Get instance field reference: System.String[] _capslist
    [[deprecated]] ::ArrayW<::StringW>& dyn__capslist();
    // Get instance field reference: System.Text.RegularExpressions.RegexOptions _options
    [[deprecated]] ::System::Text::RegularExpressions::RegexOptions& dyn__options();
    // Get instance field reference: System.Int32 _captop
    [[deprecated]] int& dyn__captop();
    // System.Void .ctor(System.Text.RegularExpressions.RegexNode root, System.Collections.Hashtable caps, System.Int32[] capnumlist, System.Int32 captop, System.Collections.Hashtable capnames, System.String[] capslist, System.Text.RegularExpressions.RegexOptions opts)
    // Offset: 0x5CC330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexTree* New_ctor(::System::Text::RegularExpressions::RegexNode* root, ::System::Collections::Hashtable* caps, ::ArrayW<int> capnumlist, int captop, ::System::Collections::Hashtable* capnames, ::ArrayW<::StringW> capslist, ::System::Text::RegularExpressions::RegexOptions opts) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexTree::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexTree*, creationType>(root, caps, capnumlist, captop, capnames, capslist, opts)));
    }
  }; // System.Text.RegularExpressions.RegexTree
  #pragma pack(pop)
  static check_size<sizeof(RegexTree), 60 + sizeof(int)> __System_Text_RegularExpressions_RegexTreeSizeCheck;
  static_assert(sizeof(RegexTree) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexTree::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
