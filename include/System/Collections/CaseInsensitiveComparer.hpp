// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: CaseInsensitiveComparer
  class CaseInsensitiveComparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::CaseInsensitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CaseInsensitiveComparer*, "System.Collections", "CaseInsensitiveComparer");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.CaseInsensitiveComparer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class CaseInsensitiveComparer : public ::Il2CppObject/*, public ::System::Collections::IComparer*/ {
    public:
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Globalization::CompareInfo* m_compareInfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating conversion operator: operator ::System::Globalization::CompareInfo*
    constexpr operator ::System::Globalization::CompareInfo*() const noexcept {
      return m_compareInfo;
    }
    // Get instance field reference: private System.Globalization.CompareInfo m_compareInfo
    [[deprecated]] ::System::Globalization::CompareInfo*& dyn_m_compareInfo();
    // static public System.Collections.CaseInsensitiveComparer get_Default()
    // Offset: 0x574050
    static ::System::Collections::CaseInsensitiveComparer* get_Default();
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x573F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveComparer* New_ctor(::System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::CaseInsensitiveComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveComparer*, creationType>(culture)));
    }
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x573CF0
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Void .ctor()
    // Offset: 0x573FC0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::CaseInsensitiveComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveComparer*, creationType>()));
    }
  }; // System.Collections.CaseInsensitiveComparer
  #pragma pack(pop)
  static check_size<sizeof(CaseInsensitiveComparer), 16 + sizeof(::System::Globalization::CompareInfo*)> __System_Collections_CaseInsensitiveComparerSizeCheck;
  static_assert(sizeof(CaseInsensitiveComparer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::CaseInsensitiveComparer* (*)()>(&System::Collections::CaseInsensitiveComparer::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CaseInsensitiveComparer*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::CaseInsensitiveComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::CaseInsensitiveComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::CaseInsensitiveComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Collections::CaseInsensitiveComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
