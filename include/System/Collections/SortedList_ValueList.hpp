// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::SortedList::ValueList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::SortedList::ValueList*, "System.Collections", "SortedList/ValueList");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.SortedList/System.Collections.ValueList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  class SortedList::ValueList : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.SortedList sortedList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::SortedList* sortedList;
    // Field size check
    static_assert(sizeof(::System::Collections::SortedList*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::SortedList*
    constexpr operator ::System::Collections::SortedList*() const noexcept {
      return sortedList;
    }
    // Get instance field reference: private System.Collections.SortedList sortedList
    [[deprecated]] ::System::Collections::SortedList*& dyn_sortedList();
  }; // System.Collections.SortedList/System.Collections.ValueList
  #pragma pack(pop)
  static check_size<sizeof(SortedList::ValueList), 16 + sizeof(::System::Collections::SortedList*)> __System_Collections_SortedList_ValueListSizeCheck;
  static_assert(sizeof(SortedList::ValueList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
