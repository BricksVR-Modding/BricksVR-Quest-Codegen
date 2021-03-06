// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.ICustomMarshaler
#include "System/Runtime/InteropServices/ICustomMarshaler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: Utf8StringToNative
  class Utf8StringToNative;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::Utf8StringToNative);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Utf8StringToNative*, "Steamworks", "Utf8StringToNative");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.Utf8StringToNative
  // [TokenAttribute] Offset: FFFFFFFF
  class Utf8StringToNative : public ::Il2CppObject/*, public ::System::Runtime::InteropServices::ICustomMarshaler*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::ICustomMarshaler
    operator ::System::Runtime::InteropServices::ICustomMarshaler() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::ICustomMarshaler*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Utf8StringToNative* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::Utf8StringToNative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Utf8StringToNative*, creationType>()));
    }
    // public System.IntPtr MarshalManagedToNative(System.Object managedObj)
    // Offset: 0x5C9F60
    ::System::IntPtr MarshalManagedToNative(::Il2CppObject* managedObj);
    // public System.Object MarshalNativeToManaged(System.IntPtr pNativeData)
    // Offset: 0x5CA0A0
    ::Il2CppObject* MarshalNativeToManaged(::System::IntPtr pNativeData);
    // public System.Void CleanUpNativeData(System.IntPtr pNativeData)
    // Offset: 0x5C9EB0
    void CleanUpNativeData(::System::IntPtr pNativeData);
    // public System.Void CleanUpManagedData(System.Object managedObj)
    // Offset: 0x5C9E60
    void CleanUpManagedData(::Il2CppObject* managedObj);
    // public System.Int32 GetNativeDataSize()
    // Offset: 0x28E280
    int GetNativeDataSize();
    // static public System.Runtime.InteropServices.ICustomMarshaler GetInstance(System.String cookie)
    // Offset: 0x5C9F10
    static ::System::Runtime::InteropServices::ICustomMarshaler* GetInstance(::StringW cookie);
  }; // Steamworks.Utf8StringToNative
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::MarshalManagedToNative
// Il2CppName: MarshalManagedToNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Steamworks::Utf8StringToNative::*)(::Il2CppObject*)>(&Steamworks::Utf8StringToNative::MarshalManagedToNative)> {
  static const MethodInfo* get() {
    static auto* managedObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Utf8StringToNative*), "MarshalManagedToNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{managedObj});
  }
};
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::MarshalNativeToManaged
// Il2CppName: MarshalNativeToManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Steamworks::Utf8StringToNative::*)(::System::IntPtr)>(&Steamworks::Utf8StringToNative::MarshalNativeToManaged)> {
  static const MethodInfo* get() {
    static auto* pNativeData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Utf8StringToNative*), "MarshalNativeToManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pNativeData});
  }
};
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::CleanUpNativeData
// Il2CppName: CleanUpNativeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::Utf8StringToNative::*)(::System::IntPtr)>(&Steamworks::Utf8StringToNative::CleanUpNativeData)> {
  static const MethodInfo* get() {
    static auto* pNativeData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Utf8StringToNative*), "CleanUpNativeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pNativeData});
  }
};
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::CleanUpManagedData
// Il2CppName: CleanUpManagedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::Utf8StringToNative::*)(::Il2CppObject*)>(&Steamworks::Utf8StringToNative::CleanUpManagedData)> {
  static const MethodInfo* get() {
    static auto* managedObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Utf8StringToNative*), "CleanUpManagedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{managedObj});
  }
};
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::GetNativeDataSize
// Il2CppName: GetNativeDataSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Utf8StringToNative::*)()>(&Steamworks::Utf8StringToNative::GetNativeDataSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Utf8StringToNative*), "GetNativeDataSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Utf8StringToNative::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::ICustomMarshaler* (*)(::StringW)>(&Steamworks::Utf8StringToNative::GetInstance)> {
  static const MethodInfo* get() {
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Utf8StringToNative*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie});
  }
};
