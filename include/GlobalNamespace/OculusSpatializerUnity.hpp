// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.Particle
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Renderer
  class Renderer;
  // Skipping declaration: ParticleSystem because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusSpatializerUnity
  class OculusSpatializerUnity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusSpatializerUnity);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusSpatializerUnity*, "", "OculusSpatializerUnity");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OculusSpatializerUnity
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusSpatializerUnity : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback
    class AudioRaycastCallback;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.LayerMask layerMask
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::LayerMask layerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Boolean visualizeRoom
    // Size: 0x1
    // Offset: 0x1C
    bool visualizeRoom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean roomVisualizationInitialized
    // Size: 0x1
    // Offset: 0x1D
    bool roomVisualizationInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: roomVisualizationInitialized and: raysPerSecond
    char __padding2[0x2] = {};
    // public System.Int32 raysPerSecond
    // Size: 0x4
    // Offset: 0x20
    int raysPerSecond;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single roomInterpSpeed
    // Size: 0x4
    // Offset: 0x24
    float roomInterpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxWallDistance
    // Size: 0x4
    // Offset: 0x28
    float maxWallDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 rayCacheSize
    // Size: 0x4
    // Offset: 0x2C
    int rayCacheSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean dynamicReflectionsEnabled
    // Size: 0x1
    // Offset: 0x30
    bool dynamicReflectionsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: dynamicReflectionsEnabled and: particleSize
    char __padding7[0x3] = {};
    // private System.Single particleSize
    // Size: 0x4
    // Offset: 0x34
    float particleSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single particleOffset
    // Size: 0x4
    // Offset: 0x38
    float particleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: particleOffset and: room
    char __padding9[0x4] = {};
    // private UnityEngine.GameObject room
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* room;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Renderer[] wallRenderer
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Renderer*> wallRenderer;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    // private System.Single[] dims
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<float> dims;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Single[] coefs
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<float> coefs;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private UnityEngine.Vector3[] points
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::UnityEngine::Vector3> points;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] normals
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Vector3> normals;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.ParticleSystem sys
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::ParticleSystem* sys;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.Particle[] particles
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::UnityEngine::ParticleSystem::Particle> particles;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ParticleSystem::Particle>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 HIT_COUNT
    static constexpr const int HIT_COUNT = 2048;
    // Get static field: static private System.Int32 HIT_COUNT
    static int _get_HIT_COUNT();
    // Set static field: static private System.Int32 HIT_COUNT
    static void _set_HIT_COUNT(int value);
    // Get static field: static private UnityEngine.LayerMask gLayerMask
    static ::UnityEngine::LayerMask _get_gLayerMask();
    // Set static field: static private UnityEngine.LayerMask gLayerMask
    static void _set_gLayerMask(::UnityEngine::LayerMask value);
    // static field const value: static private System.String strOSP
    static constexpr const char* strOSP = "AudioPluginOculusSpatializer";
    // Get static field: static private System.String strOSP
    static ::StringW _get_strOSP();
    // Set static field: static private System.String strOSP
    static void _set_strOSP(::StringW value);
    // Get instance field reference: public UnityEngine.LayerMask layerMask
    ::UnityEngine::LayerMask& dyn_layerMask();
    // Get instance field reference: public System.Boolean visualizeRoom
    bool& dyn_visualizeRoom();
    // Get instance field reference: private System.Boolean roomVisualizationInitialized
    bool& dyn_roomVisualizationInitialized();
    // Get instance field reference: public System.Int32 raysPerSecond
    int& dyn_raysPerSecond();
    // Get instance field reference: public System.Single roomInterpSpeed
    float& dyn_roomInterpSpeed();
    // Get instance field reference: public System.Single maxWallDistance
    float& dyn_maxWallDistance();
    // Get instance field reference: public System.Int32 rayCacheSize
    int& dyn_rayCacheSize();
    // Get instance field reference: public System.Boolean dynamicReflectionsEnabled
    bool& dyn_dynamicReflectionsEnabled();
    // Get instance field reference: private System.Single particleSize
    float& dyn_particleSize();
    // Get instance field reference: private System.Single particleOffset
    float& dyn_particleOffset();
    // Get instance field reference: private UnityEngine.GameObject room
    ::UnityEngine::GameObject*& dyn_room();
    // Get instance field reference: private UnityEngine.Renderer[] wallRenderer
    ::ArrayW<::UnityEngine::Renderer*>& dyn_wallRenderer();
    // Get instance field reference: private System.Single[] dims
    ::ArrayW<float>& dyn_dims();
    // Get instance field reference: private System.Single[] coefs
    ::ArrayW<float>& dyn_coefs();
    // Get instance field reference: private UnityEngine.Vector3[] points
    ::ArrayW<::UnityEngine::Vector3>& dyn_points();
    // Get instance field reference: private UnityEngine.Vector3[] normals
    ::ArrayW<::UnityEngine::Vector3>& dyn_normals();
    // Get instance field reference: private UnityEngine.ParticleSystem sys
    ::UnityEngine::ParticleSystem*& dyn_sys();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.Particle[] particles
    ::ArrayW<::UnityEngine::ParticleSystem::Particle>& dyn_particles();
    // static private UnityEngine.Vector3 swapHandedness(UnityEngine.Vector3 vec)
    // Offset: 0x111AAEC
    static ::UnityEngine::Vector3 swapHandedness(::UnityEngine::Vector3 vec);
    // static private System.Void AudioRaycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.Vector3 point, out UnityEngine.Vector3 normal, System.IntPtr data)
    // Offset: 0x111A91C
    static void AudioRaycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> normal, ::System::IntPtr data);
    // private System.Void Start()
    // Offset: 0x111AB24
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x111AC58
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x111AD4C
    void Update();
    // private System.Void inititalizeRoomVisualization()
    // Offset: 0x111B704
    void inititalizeRoomVisualization();
    // static private System.Int32 OSP_Unity_AssignRaycastCallback(OculusSpatializerUnity/AudioRaycastCallback callback, System.IntPtr data)
    // Offset: 0x111ABC4
    static int OSP_Unity_AssignRaycastCallback(::GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback* callback, ::System::IntPtr data);
    // static private System.Int32 OSP_Unity_AssignRaycastCallback(System.IntPtr callback, System.IntPtr data)
    // Offset: 0x111ACBC
    static int OSP_Unity_AssignRaycastCallback(::System::IntPtr callback, ::System::IntPtr data);
    // static private System.Int32 OSP_Unity_SetDynamicRoomRaysPerSecond(System.Int32 RaysPerSecond)
    // Offset: 0x111B46C
    static int OSP_Unity_SetDynamicRoomRaysPerSecond(int RaysPerSecond);
    // static private System.Int32 OSP_Unity_SetDynamicRoomInterpSpeed(System.Single InterpSpeed)
    // Offset: 0x111B4EC
    static int OSP_Unity_SetDynamicRoomInterpSpeed(float InterpSpeed);
    // static private System.Int32 OSP_Unity_SetDynamicRoomMaxWallDistance(System.Single MaxWallDistance)
    // Offset: 0x111B574
    static int OSP_Unity_SetDynamicRoomMaxWallDistance(float MaxWallDistance);
    // static private System.Int32 OSP_Unity_SetDynamicRoomRaysRayCacheSize(System.Int32 RayCacheSize)
    // Offset: 0x111B5FC
    static int OSP_Unity_SetDynamicRoomRaysRayCacheSize(int RayCacheSize);
    // static private System.Int32 OSP_Unity_UpdateRoomModel(System.Single wetLevel)
    // Offset: 0x111B67C
    static int OSP_Unity_UpdateRoomModel(float wetLevel);
    // static private System.Int32 OSP_Unity_GetRoomDimensions(System.Single[] roomDimensions, System.Single[] reflectionsCoefs, out UnityEngine.Vector3 position)
    // Offset: 0x111C53C
    static int OSP_Unity_GetRoomDimensions(::ArrayW<float> roomDimensions, ::ArrayW<float> reflectionsCoefs, ByRef<::UnityEngine::Vector3> position);
    // static private System.Int32 OSP_Unity_GetRaycastHits(UnityEngine.Vector3[] points, UnityEngine.Vector3[] normals, System.Int32 length)
    // Offset: 0x111C5E4
    static int OSP_Unity_GetRaycastHits(::ArrayW<::UnityEngine::Vector3> points, ::ArrayW<::UnityEngine::Vector3> normals, int length);
    // public System.Void .ctor()
    // Offset: 0x111C68C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusSpatializerUnity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusSpatializerUnity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusSpatializerUnity*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x111C7B8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OculusSpatializerUnity
  #pragma pack(pop)
  static check_size<sizeof(OculusSpatializerUnity), 120 + sizeof(::ArrayW<::UnityEngine::ParticleSystem::Particle>)> __GlobalNamespace_OculusSpatializerUnitySizeCheck;
  static_assert(sizeof(OculusSpatializerUnity) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::swapHandedness
// Il2CppName: swapHandedness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&GlobalNamespace::OculusSpatializerUnity::swapHandedness)> {
  static const MethodInfo* get() {
    static auto* vec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "swapHandedness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::AudioRaycast
// Il2CppName: AudioRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ::System::IntPtr)>(&GlobalNamespace::OculusSpatializerUnity::AudioRaycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "AudioRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, point, normal, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusSpatializerUnity::*)()>(&GlobalNamespace::OculusSpatializerUnity::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusSpatializerUnity::*)()>(&GlobalNamespace::OculusSpatializerUnity::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusSpatializerUnity::*)()>(&GlobalNamespace::OculusSpatializerUnity::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::inititalizeRoomVisualization
// Il2CppName: inititalizeRoomVisualization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusSpatializerUnity::*)()>(&GlobalNamespace::OculusSpatializerUnity::inititalizeRoomVisualization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "inititalizeRoomVisualization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_AssignRaycastCallback
// Il2CppName: OSP_Unity_AssignRaycastCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::OculusSpatializerUnity::AudioRaycastCallback*, ::System::IntPtr)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_AssignRaycastCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("", "OculusSpatializerUnity/AudioRaycastCallback")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_AssignRaycastCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_AssignRaycastCallback
// Il2CppName: OSP_Unity_AssignRaycastCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ::System::IntPtr)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_AssignRaycastCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_AssignRaycastCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomRaysPerSecond
// Il2CppName: OSP_Unity_SetDynamicRoomRaysPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomRaysPerSecond)> {
  static const MethodInfo* get() {
    static auto* RaysPerSecond = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_SetDynamicRoomRaysPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{RaysPerSecond});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomInterpSpeed
// Il2CppName: OSP_Unity_SetDynamicRoomInterpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomInterpSpeed)> {
  static const MethodInfo* get() {
    static auto* InterpSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_SetDynamicRoomInterpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{InterpSpeed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomMaxWallDistance
// Il2CppName: OSP_Unity_SetDynamicRoomMaxWallDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomMaxWallDistance)> {
  static const MethodInfo* get() {
    static auto* MaxWallDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_SetDynamicRoomMaxWallDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{MaxWallDistance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomRaysRayCacheSize
// Il2CppName: OSP_Unity_SetDynamicRoomRaysRayCacheSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_SetDynamicRoomRaysRayCacheSize)> {
  static const MethodInfo* get() {
    static auto* RayCacheSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_SetDynamicRoomRaysRayCacheSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{RayCacheSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_UpdateRoomModel
// Il2CppName: OSP_Unity_UpdateRoomModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_UpdateRoomModel)> {
  static const MethodInfo* get() {
    static auto* wetLevel = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_UpdateRoomModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wetLevel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_GetRoomDimensions
// Il2CppName: OSP_Unity_GetRoomDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<float>, ::ArrayW<float>, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_GetRoomDimensions)> {
  static const MethodInfo* get() {
    static auto* roomDimensions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* reflectionsCoefs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_GetRoomDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomDimensions, reflectionsCoefs, position});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::OSP_Unity_GetRaycastHits
// Il2CppName: OSP_Unity_GetRaycastHits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, int)>(&GlobalNamespace::OculusSpatializerUnity::OSP_Unity_GetRaycastHits)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* normals = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), "OSP_Unity_GetRaycastHits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, normals, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusSpatializerUnity::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OculusSpatializerUnity::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusSpatializerUnity*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
