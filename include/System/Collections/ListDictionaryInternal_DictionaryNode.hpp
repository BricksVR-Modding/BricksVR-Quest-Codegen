// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::ListDictionaryInternal::DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ListDictionaryInternal::DictionaryNode*, "System.Collections", "ListDictionaryInternal/DictionaryNode");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode
  // [TokenAttribute] Offset: FFFFFFFF
  class ListDictionaryInternal::DictionaryNode : public ::Il2CppObject {
    public:
    public:
    // public System.Object key
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode next
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ListDictionaryInternal::DictionaryNode* next;
    // Field size check
    static_assert(sizeof(::System::Collections::ListDictionaryInternal::DictionaryNode*) == 0x8);
    public:
    // Get instance field reference: public System.Object key
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_key();
    // Get instance field reference: public System.Object value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_value();
    // Get instance field reference: public System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode next
    [[deprecated("Use field access instead!")]] ::System::Collections::ListDictionaryInternal::DictionaryNode*& dyn_next();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionaryInternal::DictionaryNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::ListDictionaryInternal::DictionaryNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionaryInternal::DictionaryNode*, creationType>()));
    }
  }; // System.Collections.ListDictionaryInternal/System.Collections.DictionaryNode
  #pragma pack(pop)
  static check_size<sizeof(ListDictionaryInternal::DictionaryNode), 32 + sizeof(::System::Collections::ListDictionaryInternal::DictionaryNode*)> __System_Collections_ListDictionaryInternal_DictionaryNodeSizeCheck;
  static_assert(sizeof(ListDictionaryInternal::DictionaryNode) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::ListDictionaryInternal::DictionaryNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
