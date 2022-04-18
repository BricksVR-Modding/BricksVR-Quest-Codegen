// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: RegionInfo
  class RegionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::RegionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::RegionInfo*, "System.Globalization", "RegionInfo");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Globalization.RegionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class RegionInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 regionId
    // Size: 0x4
    // Offset: 0x10
    int regionId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: regionId and: iso2Name
    char __padding0[0x4] = {};
    // private System.String iso2Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW iso2Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String iso3Name
    // Size: 0x8
    // Offset: 0x20
    ::StringW iso3Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String win3Name
    // Size: 0x8
    // Offset: 0x28
    ::StringW win3Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String englishName
    // Size: 0x8
    // Offset: 0x30
    ::StringW englishName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String nativeName
    // Size: 0x8
    // Offset: 0x38
    ::StringW nativeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String currencySymbol
    // Size: 0x8
    // Offset: 0x40
    ::StringW currencySymbol;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String isoCurrencySymbol
    // Size: 0x8
    // Offset: 0x48
    ::StringW isoCurrencySymbol;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String currencyEnglishName
    // Size: 0x8
    // Offset: 0x50
    ::StringW currencyEnglishName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String currencyNativeName
    // Size: 0x8
    // Offset: 0x58
    ::StringW currencyNativeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Globalization.RegionInfo currentRegion
    static ::System::Globalization::RegionInfo* _get_currentRegion();
    // Set static field: static private System.Globalization.RegionInfo currentRegion
    static void _set_currentRegion(::System::Globalization::RegionInfo* value);
    // Get instance field reference: private System.Int32 regionId
    [[deprecated("Use field access instead!")]] int& dyn_regionId();
    // Get instance field reference: private System.String iso2Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_iso2Name();
    // Get instance field reference: private System.String iso3Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_iso3Name();
    // Get instance field reference: private System.String win3Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_win3Name();
    // Get instance field reference: private System.String englishName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_englishName();
    // Get instance field reference: private System.String nativeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_nativeName();
    // Get instance field reference: private System.String currencySymbol
    [[deprecated("Use field access instead!")]] ::StringW& dyn_currencySymbol();
    // Get instance field reference: private System.String isoCurrencySymbol
    [[deprecated("Use field access instead!")]] ::StringW& dyn_isoCurrencySymbol();
    // Get instance field reference: private System.String currencyEnglishName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_currencyEnglishName();
    // Get instance field reference: private System.String currencyNativeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_currencyNativeName();
    // static public System.Globalization.RegionInfo get_CurrentRegion()
    // Offset: 0x3F7BD0
    static ::System::Globalization::RegionInfo* get_CurrentRegion();
    // public System.String get_CurrencyEnglishName()
    // Offset: 0x2321C0
    ::StringW get_CurrencyEnglishName();
    // public System.String get_CurrencySymbol()
    // Offset: 0x1E0CA0
    ::StringW get_CurrencySymbol();
    // public System.String get_DisplayName()
    // Offset: 0x1E0EB0
    ::StringW get_DisplayName();
    // public System.String get_EnglishName()
    // Offset: 0x1E0EB0
    ::StringW get_EnglishName();
    // public System.Int32 get_GeoId()
    // Offset: 0x1DD410
    int get_GeoId();
    // public System.Boolean get_IsMetric()
    // Offset: 0x3F7DD0
    bool get_IsMetric();
    // public System.String get_ISOCurrencySymbol()
    // Offset: 0x232190
    ::StringW get_ISOCurrencySymbol();
    // public System.String get_NativeName()
    // Offset: 0x1E1940
    ::StringW get_NativeName();
    // public System.String get_CurrencyNativeName()
    // Offset: 0x2321F0
    ::StringW get_CurrencyNativeName();
    // public System.String get_Name()
    // Offset: 0x1E1520
    ::StringW get_Name();
    // public System.String get_ThreeLetterISORegionName()
    // Offset: 0x1E1950
    ::StringW get_ThreeLetterISORegionName();
    // public System.String get_ThreeLetterWindowsRegionName()
    // Offset: 0x1E1930
    ::StringW get_ThreeLetterWindowsRegionName();
    // public System.String get_TwoLetterISORegionName()
    // Offset: 0x1E1520
    ::StringW get_TwoLetterISORegionName();
    // public System.Void .ctor(System.Int32 culture)
    // Offset: 0x3F7A60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionInfo* New_ctor(int culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::RegionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionInfo*, creationType>(culture)));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x3F78C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionInfo* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::RegionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionInfo*, creationType>(name)));
    }
    // private System.Void .ctor(System.Globalization.CultureInfo ci)
    // Offset: 0x3F7750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionInfo* New_ctor(::System::Globalization::CultureInfo* ci) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::RegionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionInfo*, creationType>(ci)));
    }
    // private System.Boolean GetByTerritory(System.Globalization.CultureInfo ci)
    // Offset: 0x3F7660
    bool GetByTerritory(::System::Globalization::CultureInfo* ci);
    // private System.Boolean construct_internal_region_from_name(System.String name)
    // Offset: 0x3F7BC0
    bool construct_internal_region_from_name(::StringW name);
    // static System.Void ClearCachedData()
    // Offset: 0x3F7570
    static void ClearCachedData();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x3F75B0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x3F7710
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x3391E0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Globalization.RegionInfo
  #pragma pack(pop)
  static check_size<sizeof(RegionInfo), 88 + sizeof(::StringW)> __System_Globalization_RegionInfoSizeCheck;
  static_assert(sizeof(RegionInfo) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_CurrentRegion
// Il2CppName: get_CurrentRegion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::RegionInfo* (*)()>(&System::Globalization::RegionInfo::get_CurrentRegion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_CurrentRegion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_CurrencyEnglishName
// Il2CppName: get_CurrencyEnglishName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_CurrencyEnglishName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_CurrencyEnglishName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_CurrencySymbol
// Il2CppName: get_CurrencySymbol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_CurrencySymbol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_CurrencySymbol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_EnglishName
// Il2CppName: get_EnglishName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_EnglishName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_EnglishName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_GeoId
// Il2CppName: get_GeoId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_GeoId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_GeoId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_IsMetric
// Il2CppName: get_IsMetric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_IsMetric)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_IsMetric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_ISOCurrencySymbol
// Il2CppName: get_ISOCurrencySymbol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_ISOCurrencySymbol)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_ISOCurrencySymbol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_NativeName
// Il2CppName: get_NativeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_NativeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_NativeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_CurrencyNativeName
// Il2CppName: get_CurrencyNativeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_CurrencyNativeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_CurrencyNativeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_ThreeLetterISORegionName
// Il2CppName: get_ThreeLetterISORegionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_ThreeLetterISORegionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_ThreeLetterISORegionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_ThreeLetterWindowsRegionName
// Il2CppName: get_ThreeLetterWindowsRegionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_ThreeLetterWindowsRegionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_ThreeLetterWindowsRegionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::get_TwoLetterISORegionName
// Il2CppName: get_TwoLetterISORegionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::get_TwoLetterISORegionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "get_TwoLetterISORegionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::RegionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::RegionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::RegionInfo::GetByTerritory
// Il2CppName: GetByTerritory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::RegionInfo::*)(::System::Globalization::CultureInfo*)>(&System::Globalization::RegionInfo::GetByTerritory)> {
  static const MethodInfo* get() {
    static auto* ci = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "GetByTerritory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ci});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::construct_internal_region_from_name
// Il2CppName: construct_internal_region_from_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::RegionInfo::*)(::StringW)>(&System::Globalization::RegionInfo::construct_internal_region_from_name)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "construct_internal_region_from_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::ClearCachedData
// Il2CppName: ClearCachedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::RegionInfo::ClearCachedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "ClearCachedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::RegionInfo::*)(::Il2CppObject*)>(&System::Globalization::RegionInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::RegionInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::RegionInfo::*)()>(&System::Globalization::RegionInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::RegionInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
