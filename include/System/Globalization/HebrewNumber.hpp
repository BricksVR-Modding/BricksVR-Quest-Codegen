// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: HebrewNumberParsingState
  struct HebrewNumberParsingState;
  // Forward declaring type: HebrewNumberParsingContext
  struct HebrewNumberParsingContext;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: HebrewNumber
  class HebrewNumber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::HebrewNumber);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber*, "System.Globalization", "HebrewNumber");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.HebrewNumber
  // [TokenAttribute] Offset: FFFFFFFF
  class HebrewNumber : public ::Il2CppObject {
    public:
    // Nested type: ::System::Globalization::HebrewNumber::HebrewToken
    struct HebrewToken;
    // Nested type: ::System::Globalization::HebrewNumber::HebrewValue
    class HebrewValue;
    // Nested type: ::System::Globalization::HebrewNumber::HS
    struct HS;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Globalization.HebrewNumber/System.Globalization.HS
    // [TokenAttribute] Offset: FFFFFFFF
    struct HS/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: HS
      constexpr HS(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS _err
      static constexpr const int _err = -1;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS _err
      static ::System::Globalization::HebrewNumber::HS _get__err();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS _err
      static void _set__err(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS Start
      static constexpr const int Start = 0;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS Start
      static ::System::Globalization::HebrewNumber::HS _get_Start();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS Start
      static void _set_Start(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400
      static constexpr const int S400 = 1;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400
      static ::System::Globalization::HebrewNumber::HS _get_S400();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400
      static void _set_S400(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400
      static constexpr const int S400_400 = 2;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400
      static ::System::Globalization::HebrewNumber::HS _get_S400_400();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400
      static void _set_S400_400(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X00
      static constexpr const int S400_X00 = 3;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X00
      static ::System::Globalization::HebrewNumber::HS _get_S400_X00();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X00
      static void _set_S400_X00(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X0
      static constexpr const int S400_X0 = 4;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X0
      static ::System::Globalization::HebrewNumber::HS _get_S400_X0();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X0
      static void _set_S400_X0(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS X00_DQ
      static constexpr const int X00_DQ = 5;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X00_DQ
      static ::System::Globalization::HebrewNumber::HS _get_X00_DQ();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X00_DQ
      static void _set_X00_DQ(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X00_X0
      static constexpr const int S400_X00_X0 = 6;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X00_X0
      static ::System::Globalization::HebrewNumber::HS _get_S400_X00_X0();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_X00_X0
      static void _set_S400_X00_X0(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS X0_DQ
      static constexpr const int X0_DQ = 7;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X0_DQ
      static ::System::Globalization::HebrewNumber::HS _get_X0_DQ();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X0_DQ
      static void _set_X0_DQ(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS X
      static constexpr const int X = 8;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X
      static ::System::Globalization::HebrewNumber::HS _get_X();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X
      static void _set_X(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS X0
      static constexpr const int X0 = 9;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X0
      static ::System::Globalization::HebrewNumber::HS _get_X0();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X0
      static void _set_X0(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS X00
      static constexpr const int X00 = 10;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X00
      static ::System::Globalization::HebrewNumber::HS _get_X00();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X00
      static void _set_X00(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_DQ
      static constexpr const int S400_DQ = 11;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_DQ
      static ::System::Globalization::HebrewNumber::HS _get_S400_DQ();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_DQ
      static void _set_S400_DQ(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400_DQ
      static constexpr const int S400_400_DQ = 12;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400_DQ
      static ::System::Globalization::HebrewNumber::HS _get_S400_400_DQ();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400_DQ
      static void _set_S400_400_DQ(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400_100
      static constexpr const int S400_400_100 = 13;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400_100
      static ::System::Globalization::HebrewNumber::HS _get_S400_400_100();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S400_400_100
      static void _set_S400_400_100(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S9
      static constexpr const int S9 = 14;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S9
      static ::System::Globalization::HebrewNumber::HS _get_S9();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S9
      static void _set_S9(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS X00_S9
      static constexpr const int X00_S9 = 15;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X00_S9
      static ::System::Globalization::HebrewNumber::HS _get_X00_S9();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS X00_S9
      static void _set_X00_S9(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS S9_DQ
      static constexpr const int S9_DQ = 16;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S9_DQ
      static ::System::Globalization::HebrewNumber::HS _get_S9_DQ();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS S9_DQ
      static void _set_S9_DQ(::System::Globalization::HebrewNumber::HS value);
      // static field const value: static public System.Globalization.HebrewNumber/System.Globalization.HS END
      static constexpr const int END = 100;
      // Get static field: static public System.Globalization.HebrewNumber/System.Globalization.HS END
      static ::System::Globalization::HebrewNumber::HS _get_END();
      // Set static field: static public System.Globalization.HebrewNumber/System.Globalization.HS END
      static void _set_END(::System::Globalization::HebrewNumber::HS value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // System.Globalization.HebrewNumber/System.Globalization.HS
    #pragma pack(pop)
    static check_size<sizeof(HebrewNumber::HS), 0 + sizeof(int)> __System_Globalization_HebrewNumber_HSSizeCheck;
    static_assert(sizeof(HebrewNumber::HS) == 0x4);
    // Get static field: static private System.Globalization.HebrewNumber/System.Globalization.HebrewValue[] HebrewValues
    static ::ArrayW<::System::Globalization::HebrewNumber::HebrewValue*> _get_HebrewValues();
    // Set static field: static private System.Globalization.HebrewNumber/System.Globalization.HebrewValue[] HebrewValues
    static void _set_HebrewValues(::ArrayW<::System::Globalization::HebrewNumber::HebrewValue*> value);
    // Get static field: static private System.Char maxHebrewNumberCh
    static ::Il2CppChar _get_maxHebrewNumberCh();
    // Set static field: static private System.Char maxHebrewNumberCh
    static void _set_maxHebrewNumberCh(::Il2CppChar value);
    // Get static field: static private readonly System.Globalization.HebrewNumber/System.Globalization.HS[][] NumberPasingState
    static ::ArrayW<::ArrayW<::System::Globalization::HebrewNumber::HS>> _get_NumberPasingState();
    // Set static field: static private readonly System.Globalization.HebrewNumber/System.Globalization.HS[][] NumberPasingState
    static void _set_NumberPasingState(::ArrayW<::ArrayW<::System::Globalization::HebrewNumber::HS>> value);
    // static private System.Void .cctor()
    // Offset: 0xC3D878
    static void _cctor();
    // static System.String ToString(System.Int32 Number)
    // Offset: 0xC3D318
    static ::StringW ToString(int Number);
    // static System.Globalization.HebrewNumberParsingState ParseByChar(System.Char ch, ref System.Globalization.HebrewNumberParsingContext context)
    // Offset: 0xC3D584
    static ::System::Globalization::HebrewNumberParsingState ParseByChar(::Il2CppChar ch, ByRef<::System::Globalization::HebrewNumberParsingContext> context);
    // static System.Boolean IsDigit(System.Char ch)
    // Offset: 0xC3D778
    static bool IsDigit(::Il2CppChar ch);
  }; // System.Globalization.HebrewNumber
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumber::HS, "System.Globalization", "HebrewNumber/HS");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::HebrewNumber::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::HebrewNumber::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::HebrewNumber*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::HebrewNumber::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&System::Globalization::HebrewNumber::ToString)> {
  static const MethodInfo* get() {
    static auto* Number = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::HebrewNumber*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Number});
  }
};
// Writing MetadataGetter for method: System::Globalization::HebrewNumber::ParseByChar
// Il2CppName: ParseByChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::HebrewNumberParsingState (*)(::Il2CppChar, ByRef<::System::Globalization::HebrewNumberParsingContext>)>(&System::Globalization::HebrewNumber::ParseByChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Globalization", "HebrewNumberParsingContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::HebrewNumber*), "ParseByChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, context});
  }
};
// Writing MetadataGetter for method: System::Globalization::HebrewNumber::IsDigit
// Il2CppName: IsDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::Globalization::HebrewNumber::IsDigit)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::HebrewNumber*), "IsDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
