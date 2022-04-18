// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISubsystemDescriptorImpl
#include "UnityEngine/ISubsystemDescriptorImpl.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystem
  class ISubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystemDescriptor
  class IntegratedSubsystemDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.IntegratedSubsystemDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: EBFD0
  class IntegratedSubsystemDescriptor : public ::Il2CppObject/*, public ::UnityEngine::ISubsystemDescriptorImpl*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISubsystemDescriptorImpl
    operator ::UnityEngine::ISubsystemDescriptorImpl() noexcept {
      return *reinterpret_cast<::UnityEngine::ISubsystemDescriptorImpl*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public System.String get_id()
    // Offset: 0x66C190
    ::StringW get_id();
    // private System.Void UnityEngine.ISubsystemDescriptorImpl.set_ptr(System.IntPtr value)
    // Offset: 0x29F1D0
    void UnityEngine_ISubsystemDescriptorImpl_set_ptr(::System::IntPtr value);
    // protected System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntegratedSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::IntegratedSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntegratedSubsystemDescriptor*, creationType>()));
    }
    // private UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor.Create()
    // Offset: 0x2166C0
    ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create();
    // UnityEngine.ISubsystem CreateImpl()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::ISubsystem* CreateImpl();
  }; // UnityEngine.IntegratedSubsystemDescriptor
  #pragma pack(pop)
  static check_size<sizeof(IntegratedSubsystemDescriptor), 16 + sizeof(::System::IntPtr)> __UnityEngine_IntegratedSubsystemDescriptorSizeCheck;
  static_assert(sizeof(IntegratedSubsystemDescriptor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::IntegratedSubsystemDescriptor::*)()>(&UnityEngine::IntegratedSubsystemDescriptor::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystemDescriptor*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptorImpl_set_ptr
// Il2CppName: UnityEngine.ISubsystemDescriptorImpl.set_ptr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::IntegratedSubsystemDescriptor::*)(::System::IntPtr)>(&UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptorImpl_set_ptr)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystemDescriptor*), "UnityEngine.ISubsystemDescriptorImpl.set_ptr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create
// Il2CppName: UnityEngine.ISubsystemDescriptor.Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (UnityEngine::IntegratedSubsystemDescriptor::*)()>(&UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystemDescriptor*), "UnityEngine.ISubsystemDescriptor.Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::IntegratedSubsystemDescriptor::CreateImpl
// Il2CppName: CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (UnityEngine::IntegratedSubsystemDescriptor::*)()>(&UnityEngine::IntegratedSubsystemDescriptor::CreateImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IntegratedSubsystemDescriptor*), "CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
