// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ICustomFormatter
  class ICustomFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ICustomFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::ICustomFormatter*, "System", "ICustomFormatter");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ICustomFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C6BBC
  class ICustomFormatter {
    public:
    // public System.String Format(System.String format, System.Object arg, System.IFormatProvider formatProvider)
    // Offset: 0xFFFFFFFF
    ::StringW Format(::StringW format, ::Il2CppObject* arg, ::System::IFormatProvider* formatProvider);
  }; // System.ICustomFormatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ICustomFormatter::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ICustomFormatter::*)(::StringW, ::Il2CppObject*, ::System::IFormatProvider*)>(&System::ICustomFormatter::Format)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ICustomFormatter*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arg, formatProvider});
  }
};
