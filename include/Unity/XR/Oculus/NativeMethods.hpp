// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.Oculus.Boundary
#include "Unity/XR/Oculus/Boundary.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::XR::Oculus
namespace Unity::XR::Oculus {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: NativeMethods
  class NativeMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods*, "Unity.XR.Oculus", "NativeMethods");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.NativeMethods
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeMethods : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::XR::Oculus::NativeMethods::UserDefinedSettings
    struct UserDefinedSettings;
    // Nested type: ::Unity::XR::Oculus::NativeMethods::OvrProperty
    struct OvrProperty;
    // Nested type: ::Unity::XR::Oculus::NativeMethods::Internal
    class Internal;
    // static System.Void SetColorScale(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0x64F5C0
    static void SetColorScale(float x, float y, float z, float w);
    // static System.Void SetColorOffset(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0x64F500
    static void SetColorOffset(float x, float y, float z, float w);
    // static System.IntPtr GetOvrJava()
    // Offset: 0x64FA50
    static ::System::IntPtr GetOvrJava();
    // static System.Void SetPropertyInt(System.IntPtr java, Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.OvrProperty prop, System.Int32 val)
    // Offset: 0x1DDF00
    static void SetPropertyInt(::System::IntPtr java, ::Unity::XR::Oculus::NativeMethods::OvrProperty prop, int val);
    // static System.Boolean GetPropertyInt(System.IntPtr java, Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.OvrProperty propType, out System.Int32 intVal)
    // Offset: 0x64FA80
    static bool GetPropertyInt(::System::IntPtr java, ::Unity::XR::Oculus::NativeMethods::OvrProperty propType, ByRef<int> intVal);
    // static System.Boolean GetIsSupportedDevice()
    // Offset: 0x28A560
    static bool GetIsSupportedDevice();
    // static System.Boolean LoadOVRPlugin(System.String ovrpPath)
    // Offset: 0x64F3F0
    static bool LoadOVRPlugin(::StringW ovrpPath);
    // static System.Void UnloadOVRPlugin()
    // Offset: 0x64F8A0
    static void UnloadOVRPlugin();
    // static System.Void SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.UserDefinedSettings settings)
    // Offset: 0x64F810
    static void SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods::UserDefinedSettings settings);
    // static System.Int32 SetCPULevel(System.Int32 cpuLevel)
    // Offset: 0x64F480
    static int SetCPULevel(int cpuLevel);
    // static System.Int32 SetGPULevel(System.Int32 gpuLevel)
    // Offset: 0x64F790
    static int SetGPULevel(int gpuLevel);
    // static System.Void GetOVRPVersion(System.Byte[] version)
    // Offset: 0x64F2F0
    static void GetOVRPVersion(::ArrayW<uint8_t> version);
    // static System.Void EnablePerfMetrics(System.Boolean enable)
    // Offset: 0x64F080
    static void EnablePerfMetrics(bool enable);
    // static System.Void EnableAppMetrics(System.Boolean enable)
    // Offset: 0x64E930
    static void EnableAppMetrics(bool enable);
    // static System.Boolean SetDeveloperModeStrict(System.Boolean active)
    // Offset: 0x64F680
    static bool SetDeveloperModeStrict(bool active);
    // static System.Boolean GetBoundaryConfigured()
    // Offset: 0x64ECC0
    static bool GetBoundaryConfigured();
    // static System.Boolean GetBoundaryDimensions(Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType boundaryType, out UnityEngine.Vector3 dimensions)
    // Offset: 0x64ED30
    static bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary::BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions);
    // static System.Boolean GetBoundaryVisible()
    // Offset: 0x64EDC0
    static bool GetBoundaryVisible();
    // static System.Void SetBoundaryVisible(System.Boolean boundaryVisible)
    // Offset: 0x64EE30
    static void SetBoundaryVisible(bool boundaryVisible);
    // static System.Boolean GetAppShouldQuit()
    // Offset: 0x64F100
    static bool GetAppShouldQuit();
    // static System.Boolean IsOculusXRModuleLoaded()
    // Offset: 0x64FA90
    static bool IsOculusXRModuleLoaded();
    // static System.Boolean GetDisplayAvailableFrequencies(System.IntPtr ptr, ref System.Int32 numFrequencies)
    // Offset: 0x64F170
    static bool GetDisplayAvailableFrequencies(::System::IntPtr ptr, ByRef<int> numFrequencies);
    // static System.Boolean SetDisplayFrequency(System.Single refreshRate)
    // Offset: 0x64F700
    static bool SetDisplayFrequency(float refreshRate);
    // static System.Boolean GetDisplayFrequency(out System.Single refreshRate)
    // Offset: 0x64F200
    static bool GetDisplayFrequency(ByRef<float> refreshRate);
  }; // Unity.XR.Oculus.NativeMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetColorScale
// Il2CppName: SetColorScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float)>(&Unity::XR::Oculus::NativeMethods::SetColorScale)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetColorScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, w});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetColorOffset
// Il2CppName: SetColorOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float)>(&Unity::XR::Oculus::NativeMethods::SetColorOffset)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetColorOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, w});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetOvrJava
// Il2CppName: GetOvrJava
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Unity::XR::Oculus::NativeMethods::GetOvrJava)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetOvrJava", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetPropertyInt
// Il2CppName: SetPropertyInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::Unity::XR::Oculus::NativeMethods::OvrProperty, int)>(&Unity::XR::Oculus::NativeMethods::SetPropertyInt)> {
  static const MethodInfo* get() {
    static auto* java = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "NativeMethods/OvrProperty")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetPropertyInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{java, prop, val});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetPropertyInt
// Il2CppName: GetPropertyInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::Unity::XR::Oculus::NativeMethods::OvrProperty, ByRef<int>)>(&Unity::XR::Oculus::NativeMethods::GetPropertyInt)> {
  static const MethodInfo* get() {
    static auto* java = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* propType = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "NativeMethods/OvrProperty")->byval_arg;
    static auto* intVal = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetPropertyInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{java, propType, intVal});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice
// Il2CppName: GetIsSupportedDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetIsSupportedDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::LoadOVRPlugin
// Il2CppName: LoadOVRPlugin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Unity::XR::Oculus::NativeMethods::LoadOVRPlugin)> {
  static const MethodInfo* get() {
    static auto* ovrpPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "LoadOVRPlugin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ovrpPath});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin
// Il2CppName: UnloadOVRPlugin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "UnloadOVRPlugin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings
// Il2CppName: SetUserDefinedSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::NativeMethods::UserDefinedSettings)>(&Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "NativeMethods/UserDefinedSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetUserDefinedSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetCPULevel
// Il2CppName: SetCPULevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Unity::XR::Oculus::NativeMethods::SetCPULevel)> {
  static const MethodInfo* get() {
    static auto* cpuLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetCPULevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cpuLevel});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetGPULevel
// Il2CppName: SetGPULevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Unity::XR::Oculus::NativeMethods::SetGPULevel)> {
  static const MethodInfo* get() {
    static auto* gpuLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetGPULevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gpuLevel});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetOVRPVersion
// Il2CppName: GetOVRPVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&Unity::XR::Oculus::NativeMethods::GetOVRPVersion)> {
  static const MethodInfo* get() {
    static auto* version = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetOVRPVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::EnablePerfMetrics
// Il2CppName: EnablePerfMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::EnablePerfMetrics)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "EnablePerfMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::EnableAppMetrics
// Il2CppName: EnableAppMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::EnableAppMetrics)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "EnableAppMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict
// Il2CppName: SetDeveloperModeStrict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetDeveloperModeStrict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured
// Il2CppName: GetBoundaryConfigured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetBoundaryConfigured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions
// Il2CppName: GetBoundaryDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::Boundary::BoundaryType, ByRef<::UnityEngine::Vector3>)>(&Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "Boundary/BoundaryType")->byval_arg;
    static auto* dimensions = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetBoundaryDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType, dimensions});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetBoundaryVisible
// Il2CppName: GetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetBoundaryVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetBoundaryVisible
// Il2CppName: SetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::SetBoundaryVisible)> {
  static const MethodInfo* get() {
    static auto* boundaryVisible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryVisible});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetAppShouldQuit
// Il2CppName: GetAppShouldQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetAppShouldQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetAppShouldQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::IsOculusXRModuleLoaded
// Il2CppName: IsOculusXRModuleLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::IsOculusXRModuleLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "IsOculusXRModuleLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies
// Il2CppName: GetDisplayAvailableFrequencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<int>)>(&Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* numFrequencies = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetDisplayAvailableFrequencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, numFrequencies});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::SetDisplayFrequency
// Il2CppName: SetDisplayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&Unity::XR::Oculus::NativeMethods::SetDisplayFrequency)> {
  static const MethodInfo* get() {
    static auto* refreshRate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "SetDisplayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshRate});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::GetDisplayFrequency
// Il2CppName: GetDisplayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float>)>(&Unity::XR::Oculus::NativeMethods::GetDisplayFrequency)> {
  static const MethodInfo* get() {
    static auto* refreshRate = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods*), "GetDisplayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshRate});
  }
};
