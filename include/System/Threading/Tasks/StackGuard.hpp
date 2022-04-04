// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: StackGuard
  class StackGuard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::StackGuard);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StackGuard*, "System.Threading.Tasks", "StackGuard");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.StackGuard
  // [TokenAttribute] Offset: FFFFFFFF
  class StackGuard : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 m_inliningDepth
    // Size: 0x4
    // Offset: 0x10
    int m_inliningDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_inliningDepth;
    }
    // static field const value: static private System.Int32 MAX_UNCHECKED_INLINING_DEPTH
    static constexpr const int MAX_UNCHECKED_INLINING_DEPTH = 20;
    // Get static field: static private System.Int32 MAX_UNCHECKED_INLINING_DEPTH
    static int _get_MAX_UNCHECKED_INLINING_DEPTH();
    // Set static field: static private System.Int32 MAX_UNCHECKED_INLINING_DEPTH
    static void _set_MAX_UNCHECKED_INLINING_DEPTH(int value);
    // Get instance field reference: private System.Int32 m_inliningDepth
    [[deprecated]] int& dyn_m_inliningDepth();
    // System.Boolean TryBeginInliningScope()
    // Offset: 0x34C090
    bool TryBeginInliningScope();
    // System.Void EndInliningScope()
    // Offset: 0x34C070
    void EndInliningScope();
    // private System.Boolean CheckForSufficientStack()
    // Offset: 0x2188C0
    bool CheckForSufficientStack();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackGuard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::StackGuard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackGuard*, creationType>()));
    }
  }; // System.Threading.Tasks.StackGuard
  #pragma pack(pop)
  static check_size<sizeof(StackGuard), 16 + sizeof(int)> __System_Threading_Tasks_StackGuardSizeCheck;
  static_assert(sizeof(StackGuard) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::StackGuard::TryBeginInliningScope
// Il2CppName: TryBeginInliningScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::StackGuard::*)()>(&System::Threading::Tasks::StackGuard::TryBeginInliningScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::StackGuard*), "TryBeginInliningScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::StackGuard::EndInliningScope
// Il2CppName: EndInliningScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::StackGuard::*)()>(&System::Threading::Tasks::StackGuard::EndInliningScope)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::StackGuard*), "EndInliningScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::StackGuard::CheckForSufficientStack
// Il2CppName: CheckForSufficientStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::StackGuard::*)()>(&System::Threading::Tasks::StackGuard::CheckForSufficientStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::StackGuard*), "CheckForSufficientStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::StackGuard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
