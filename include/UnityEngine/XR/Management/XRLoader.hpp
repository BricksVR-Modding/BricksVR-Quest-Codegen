// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Rendering.GraphicsDeviceType
#include "UnityEngine/Rendering/GraphicsDeviceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystem
  class ISubsystem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Forward declaring type: XRLoader
  class XRLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoader*, "UnityEngine.XR.Management", "XRLoader");
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Management.XRLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class XRLoader : public ::UnityEngine::ScriptableObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x27AD80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRLoader*, creationType>()));
    }
    // public System.Boolean Initialize()
    // Offset: 0x2188C0
    bool Initialize();
    // public System.Boolean Start()
    // Offset: 0x2188C0
    bool Start();
    // public System.Boolean Stop()
    // Offset: 0x2188C0
    bool Stop();
    // public System.Boolean Deinitialize()
    // Offset: 0x2188C0
    bool Deinitialize();
    // public T GetLoadedSubsystem()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetLoadedSubsystem() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoader::GetLoadedSubsystem");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Management::XRLoader*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public System.Collections.Generic.List`1<UnityEngine.Rendering.GraphicsDeviceType> GetSupportedGraphicsDeviceTypes(System.Boolean buildingPlayer)
    // Offset: 0x65F990
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::GraphicsDeviceType>* GetSupportedGraphicsDeviceTypes(bool buildingPlayer);
  }; // UnityEngine.XR.Management.XRLoader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRLoader::*)()>(&UnityEngine::XR::Management::XRLoader::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRLoader*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRLoader::*)()>(&UnityEngine::XR::Management::XRLoader::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRLoader*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRLoader::*)()>(&UnityEngine::XR::Management::XRLoader::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRLoader*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::Deinitialize
// Il2CppName: Deinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRLoader::*)()>(&UnityEngine::XR::Management::XRLoader::Deinitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRLoader*), "Deinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::GetLoadedSubsystem
// Il2CppName: GetLoadedSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoader::GetSupportedGraphicsDeviceTypes
// Il2CppName: GetSupportedGraphicsDeviceTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::GraphicsDeviceType>* (UnityEngine::XR::Management::XRLoader::*)(bool)>(&UnityEngine::XR::Management::XRLoader::GetSupportedGraphicsDeviceTypes)> {
  static const MethodInfo* get() {
    static auto* buildingPlayer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRLoader*), "GetSupportedGraphicsDeviceTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buildingPlayer});
  }
};
