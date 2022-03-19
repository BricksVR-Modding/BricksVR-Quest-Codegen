// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Media
#include "GlobalNamespace/OVRPlugin_Media.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_38_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_38_0*, "", "OVRPlugin/OVRP_1_38_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_38_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_38_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x97F168
    static void _cctor();
    // static public OVRPlugin/Result ovrp_GetTrackingTransformRelativePose(ref OVRPlugin/Posef trackingTransformRelativePose, OVRPlugin/TrackingOrigin trackingOrigin)
    // Offset: 0x97E4AC
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetTrackingTransformRelativePose(ByRef<::GlobalNamespace::OVRPlugin::Posef> trackingTransformRelativePose, ::GlobalNamespace::OVRPlugin::TrackingOrigin trackingOrigin);
    // static public OVRPlugin/Result ovrp_Media_Initialize()
    // Offset: 0x97E53C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_Initialize();
    // static public OVRPlugin/Result ovrp_Media_Shutdown()
    // Offset: 0x97E5B0
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_Shutdown();
    // static public OVRPlugin/Result ovrp_Media_GetInitialized(out OVRPlugin/Bool initialized)
    // Offset: 0x97E624
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_GetInitialized(ByRef<::GlobalNamespace::OVRPlugin::Bool> initialized);
    // static public OVRPlugin/Result ovrp_Media_Update()
    // Offset: 0x97E6A4
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_Update();
    // static public OVRPlugin/Result ovrp_Media_GetMrcActivationMode(out OVRPlugin/Media/MrcActivationMode activationMode)
    // Offset: 0x97E718
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcActivationMode(ByRef<::GlobalNamespace::OVRPlugin::Media::MrcActivationMode> activationMode);
    // static public OVRPlugin/Result ovrp_Media_SetMrcActivationMode(OVRPlugin/Media/MrcActivationMode activationMode)
    // Offset: 0x97E798
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcActivationMode(::GlobalNamespace::OVRPlugin::Media::MrcActivationMode activationMode);
    // static public OVRPlugin/Result ovrp_Media_IsMrcEnabled(out OVRPlugin/Bool mrcEnabled)
    // Offset: 0x97E818
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_IsMrcEnabled(ByRef<::GlobalNamespace::OVRPlugin::Bool> mrcEnabled);
    // static public OVRPlugin/Result ovrp_Media_IsMrcActivated(out OVRPlugin/Bool mrcActivated)
    // Offset: 0x97E898
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_IsMrcActivated(ByRef<::GlobalNamespace::OVRPlugin::Bool> mrcActivated);
    // static public OVRPlugin/Result ovrp_Media_UseMrcDebugCamera(out OVRPlugin/Bool useMrcDebugCamera)
    // Offset: 0x97E918
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_UseMrcDebugCamera(ByRef<::GlobalNamespace::OVRPlugin::Bool> useMrcDebugCamera);
    // static public OVRPlugin/Result ovrp_Media_SetMrcInputVideoBufferType(OVRPlugin/Media/InputVideoBufferType inputVideoBufferType)
    // Offset: 0x97E998
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcInputVideoBufferType(::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType inputVideoBufferType);
    // static public OVRPlugin/Result ovrp_Media_GetMrcInputVideoBufferType(ref OVRPlugin/Media/InputVideoBufferType inputVideoBufferType)
    // Offset: 0x97EA18
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcInputVideoBufferType(ByRef<::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType> inputVideoBufferType);
    // static public OVRPlugin/Result ovrp_Media_SetMrcFrameSize(System.Int32 frameWidth, System.Int32 frameHeight)
    // Offset: 0x97EA98
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcFrameSize(int frameWidth, int frameHeight);
    // static public OVRPlugin/Result ovrp_Media_GetMrcFrameSize(ref System.Int32 frameWidth, ref System.Int32 frameHeight)
    // Offset: 0x97EB28
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcFrameSize(ByRef<int> frameWidth, ByRef<int> frameHeight);
    // static public OVRPlugin/Result ovrp_Media_SetMrcAudioSampleRate(System.Int32 sampleRate)
    // Offset: 0x97EBB8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcAudioSampleRate(int sampleRate);
    // static public OVRPlugin/Result ovrp_Media_GetMrcAudioSampleRate(ref System.Int32 sampleRate)
    // Offset: 0x97EC38
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcAudioSampleRate(ByRef<int> sampleRate);
    // static public OVRPlugin/Result ovrp_Media_SetMrcFrameImageFlipped(OVRPlugin/Bool flipped)
    // Offset: 0x97ECB8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_SetMrcFrameImageFlipped(::GlobalNamespace::OVRPlugin::Bool flipped);
    // static public OVRPlugin/Result ovrp_Media_GetMrcFrameImageFlipped(ref OVRPlugin/Bool flipped)
    // Offset: 0x97ED38
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_GetMrcFrameImageFlipped(ByRef<::GlobalNamespace::OVRPlugin::Bool> flipped);
    // static public OVRPlugin/Result ovrp_Media_EncodeMrcFrame(System.IntPtr rawBuffer, System.IntPtr audioDataPtr, System.Int32 audioDataLen, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0x97EDB8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_EncodeMrcFrame(::System::IntPtr rawBuffer, ::System::IntPtr audioDataPtr, int audioDataLen, int audioChannels, double timestamp, ByRef<int> outSyncId);
    // static public OVRPlugin/Result ovrp_Media_EncodeMrcFrameWithDualTextures(System.IntPtr backgroundTextureHandle, System.IntPtr foregroundTextureHandle, System.IntPtr audioData, System.Int32 audioDataLen, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0x97EE78
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_EncodeMrcFrameWithDualTextures(::System::IntPtr backgroundTextureHandle, ::System::IntPtr foregroundTextureHandle, ::System::IntPtr audioData, int audioDataLen, int audioChannels, double timestamp, ByRef<int> outSyncId);
    // static public OVRPlugin/Result ovrp_Media_SyncMrcFrame(System.Int32 syncId)
    // Offset: 0x97EF48
    static ::GlobalNamespace::OVRPlugin::Result ovrp_Media_SyncMrcFrame(int syncId);
    // static public OVRPlugin/Result ovrp_SetDeveloperMode(OVRPlugin/Bool active)
    // Offset: 0x97EFC8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetDeveloperMode(::GlobalNamespace::OVRPlugin::Bool active);
    // static public OVRPlugin/Result ovrp_GetNodeOrientationValid(OVRPlugin/Node nodeId, ref OVRPlugin/Bool nodeOrientationValid)
    // Offset: 0x97F048
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetNodeOrientationValid(::GlobalNamespace::OVRPlugin::Node nodeId, ByRef<::GlobalNamespace::OVRPlugin::Bool> nodeOrientationValid);
    // static public OVRPlugin/Result ovrp_GetNodePositionValid(OVRPlugin/Node nodeId, ref OVRPlugin/Bool nodePositionValid)
    // Offset: 0x97F0D8
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetNodePositionValid(::GlobalNamespace::OVRPlugin::Node nodeId, ByRef<::GlobalNamespace::OVRPlugin::Bool> nodePositionValid);
  }; // OVRPlugin/OVRP_1_38_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetTrackingTransformRelativePose
// Il2CppName: ovrp_GetTrackingTransformRelativePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Posef>, ::GlobalNamespace::OVRPlugin::TrackingOrigin)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetTrackingTransformRelativePose)> {
  static const MethodInfo* get() {
    static auto* trackingTransformRelativePose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->this_arg;
    static auto* trackingOrigin = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/TrackingOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_GetTrackingTransformRelativePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingTransformRelativePose, trackingOrigin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Initialize
// Il2CppName: ovrp_Media_Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Shutdown
// Il2CppName: ovrp_Media_Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Shutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetInitialized
// Il2CppName: ovrp_Media_GetInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetInitialized)> {
  static const MethodInfo* get() {
    static auto* initialized = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_GetInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initialized});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Update
// Il2CppName: ovrp_Media_Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcActivationMode
// Il2CppName: ovrp_Media_GetMrcActivationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Media::MrcActivationMode>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcActivationMode)> {
  static const MethodInfo* get() {
    static auto* activationMode = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/MrcActivationMode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_GetMrcActivationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activationMode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcActivationMode
// Il2CppName: ovrp_Media_SetMrcActivationMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Media::MrcActivationMode)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcActivationMode)> {
  static const MethodInfo* get() {
    static auto* activationMode = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/MrcActivationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_SetMrcActivationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activationMode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_IsMrcEnabled
// Il2CppName: ovrp_Media_IsMrcEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_IsMrcEnabled)> {
  static const MethodInfo* get() {
    static auto* mrcEnabled = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_IsMrcEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mrcEnabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_IsMrcActivated
// Il2CppName: ovrp_Media_IsMrcActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_IsMrcActivated)> {
  static const MethodInfo* get() {
    static auto* mrcActivated = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_IsMrcActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mrcActivated});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_UseMrcDebugCamera
// Il2CppName: ovrp_Media_UseMrcDebugCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_UseMrcDebugCamera)> {
  static const MethodInfo* get() {
    static auto* useMrcDebugCamera = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_UseMrcDebugCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMrcDebugCamera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcInputVideoBufferType
// Il2CppName: ovrp_Media_SetMrcInputVideoBufferType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcInputVideoBufferType)> {
  static const MethodInfo* get() {
    static auto* inputVideoBufferType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/InputVideoBufferType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_SetMrcInputVideoBufferType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputVideoBufferType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcInputVideoBufferType
// Il2CppName: ovrp_Media_GetMrcInputVideoBufferType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Media::InputVideoBufferType>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcInputVideoBufferType)> {
  static const MethodInfo* get() {
    static auto* inputVideoBufferType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Media/InputVideoBufferType")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_GetMrcInputVideoBufferType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputVideoBufferType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcFrameSize
// Il2CppName: ovrp_Media_SetMrcFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int, int)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcFrameSize)> {
  static const MethodInfo* get() {
    static auto* frameWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_SetMrcFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameWidth, frameHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcFrameSize
// Il2CppName: ovrp_Media_GetMrcFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcFrameSize)> {
  static const MethodInfo* get() {
    static auto* frameWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* frameHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_GetMrcFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameWidth, frameHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcAudioSampleRate
// Il2CppName: ovrp_Media_SetMrcAudioSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcAudioSampleRate)> {
  static const MethodInfo* get() {
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_SetMrcAudioSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleRate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcAudioSampleRate
// Il2CppName: ovrp_Media_GetMrcAudioSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcAudioSampleRate)> {
  static const MethodInfo* get() {
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_GetMrcAudioSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleRate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcFrameImageFlipped
// Il2CppName: ovrp_Media_SetMrcFrameImageFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcFrameImageFlipped)> {
  static const MethodInfo* get() {
    static auto* flipped = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_SetMrcFrameImageFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flipped});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcFrameImageFlipped
// Il2CppName: ovrp_Media_GetMrcFrameImageFlipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcFrameImageFlipped)> {
  static const MethodInfo* get() {
    static auto* flipped = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_GetMrcFrameImageFlipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flipped});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_EncodeMrcFrame
// Il2CppName: ovrp_Media_EncodeMrcFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::System::IntPtr, ::System::IntPtr, int, int, double, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_EncodeMrcFrame)> {
  static const MethodInfo* get() {
    static auto* rawBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioDataPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioDataLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* audioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* outSyncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_EncodeMrcFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawBuffer, audioDataPtr, audioDataLen, audioChannels, timestamp, outSyncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_EncodeMrcFrameWithDualTextures
// Il2CppName: ovrp_Media_EncodeMrcFrameWithDualTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int, int, double, ByRef<int>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_EncodeMrcFrameWithDualTextures)> {
  static const MethodInfo* get() {
    static auto* backgroundTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* foregroundTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* audioDataLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* audioChannels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* outSyncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_EncodeMrcFrameWithDualTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backgroundTextureHandle, foregroundTextureHandle, audioData, audioDataLen, audioChannels, timestamp, outSyncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SyncMrcFrame
// Il2CppName: ovrp_Media_SyncMrcFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(int)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SyncMrcFrame)> {
  static const MethodInfo* get() {
    static auto* syncId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_Media_SyncMrcFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_SetDeveloperMode
// Il2CppName: ovrp_SetDeveloperMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_SetDeveloperMode)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_SetDeveloperMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetNodeOrientationValid
// Il2CppName: ovrp_GetNodeOrientationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Node, ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetNodeOrientationValid)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* nodeOrientationValid = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_GetNodeOrientationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId, nodeOrientationValid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetNodePositionValid
// Il2CppName: ovrp_GetNodePositionValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Node, ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetNodePositionValid)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* nodePositionValid = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_38_0*), "ovrp_GetNodePositionValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId, nodePositionValid});
  }
};
