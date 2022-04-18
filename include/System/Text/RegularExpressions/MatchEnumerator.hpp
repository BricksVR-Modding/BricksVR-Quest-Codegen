// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: MatchCollection
  class MatchCollection;
  // Forward declaring type: Match
  class Match;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: MatchEnumerator
  class MatchEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::MatchEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchEnumerator*, "System.Text.RegularExpressions", "MatchEnumerator");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.MatchEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // System.Text.RegularExpressions.MatchCollection _matchcoll
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::MatchCollection* matchcoll;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::MatchCollection*) == 0x8);
    // System.Text.RegularExpressions.Match _match
    // Size: 0x8
    // Offset: 0x18
    ::System::Text::RegularExpressions::Match* match;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::Match*) == 0x8);
    // System.Int32 _curindex
    // Size: 0x4
    // Offset: 0x20
    int curindex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _done
    // Size: 0x1
    // Offset: 0x24
    bool done;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: System.Text.RegularExpressions.MatchCollection _matchcoll
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::MatchCollection*& dyn__matchcoll();
    // Get instance field reference: System.Text.RegularExpressions.Match _match
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::Match*& dyn__match();
    // Get instance field reference: System.Int32 _curindex
    [[deprecated("Use field access instead!")]] int& dyn__curindex();
    // Get instance field reference: System.Boolean _done
    [[deprecated("Use field access instead!")]] bool& dyn__done();
    // public System.Object get_Current()
    // Offset: 0x400A90
    ::Il2CppObject* get_Current();
    // System.Void .ctor(System.Text.RegularExpressions.MatchCollection matchcoll)
    // Offset: 0x2CC970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchEnumerator* New_ctor(::System::Text::RegularExpressions::MatchCollection* matchcoll) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::MatchEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchEnumerator*, creationType>(matchcoll)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x400A00
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x400A70
    void Reset();
  }; // System.Text.RegularExpressions.MatchEnumerator
  #pragma pack(pop)
  static check_size<sizeof(MatchEnumerator), 36 + sizeof(bool)> __System_Text_RegularExpressions_MatchEnumeratorSizeCheck;
  static_assert(sizeof(MatchEnumerator) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::MatchEnumerator::*)()>(&System::Text::RegularExpressions::MatchEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::MatchEnumerator::*)()>(&System::Text::RegularExpressions::MatchEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::MatchEnumerator::*)()>(&System::Text::RegularExpressions::MatchEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
