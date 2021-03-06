// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Time
  class Time;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Time);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Time*, "UnityEngine", "Time");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Time
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: C04C0
  // [NativeHeaderAttribute] Offset: C04C0
  class Time : public ::Il2CppObject {
    public:
    // static public System.Single get_time()
    // Offset: 0xA42250
    static float get_time();
    // static public System.Single get_timeSinceLevelLoad()
    // Offset: 0xA42220
    static float get_timeSinceLevelLoad();
    // static public System.Single get_deltaTime()
    // Offset: 0xA420D0
    static float get_deltaTime();
    // static public System.Single get_fixedTime()
    // Offset: 0xA42130
    static float get_fixedTime();
    // static public System.Single get_unscaledTime()
    // Offset: 0xA422B0
    static float get_unscaledTime();
    // static public System.Single get_unscaledDeltaTime()
    // Offset: 0xA42280
    static float get_unscaledDeltaTime();
    // static public System.Single get_fixedDeltaTime()
    // Offset: 0xA42100
    static float get_fixedDeltaTime();
    // static public System.Void set_fixedDeltaTime(System.Single value)
    // Offset: 0xA422E0
    static void set_fixedDeltaTime(float value);
    // static public System.Single get_smoothDeltaTime()
    // Offset: 0xA421C0
    static float get_smoothDeltaTime();
    // static public System.Single get_timeScale()
    // Offset: 0xA421F0
    static float get_timeScale();
    // static public System.Void set_timeScale(System.Single value)
    // Offset: 0xA42320
    static void set_timeScale(float value);
    // static public System.Int32 get_frameCount()
    // Offset: 0xA42160
    static int get_frameCount();
    // static public System.Single get_realtimeSinceStartup()
    // Offset: 0xA42190
    static float get_realtimeSinceStartup();
  }; // UnityEngine.Time
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Time::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_timeSinceLevelLoad
// Il2CppName: get_timeSinceLevelLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_timeSinceLevelLoad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_timeSinceLevelLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_deltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_fixedTime
// Il2CppName: get_fixedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_fixedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_fixedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_unscaledTime
// Il2CppName: get_unscaledTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_unscaledTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_unscaledTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_unscaledDeltaTime
// Il2CppName: get_unscaledDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_unscaledDeltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_unscaledDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_fixedDeltaTime
// Il2CppName: get_fixedDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_fixedDeltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_fixedDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::set_fixedDeltaTime
// Il2CppName: set_fixedDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::Time::set_fixedDeltaTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "set_fixedDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_smoothDeltaTime
// Il2CppName: get_smoothDeltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_smoothDeltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_smoothDeltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_timeScale
// Il2CppName: get_timeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_timeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_timeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::set_timeScale
// Il2CppName: set_timeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::Time::set_timeScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "set_timeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_frameCount
// Il2CppName: get_frameCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Time::get_frameCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_frameCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Time::get_realtimeSinceStartup
// Il2CppName: get_realtimeSinceStartup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Time::get_realtimeSinceStartup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Time*), "get_realtimeSinceStartup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
