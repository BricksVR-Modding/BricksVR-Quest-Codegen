// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_FrameTiming, "OVR.OpenVR", "Compositor_FrameTiming");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xAE
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.Compositor_FrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  struct Compositor_FrameTiming/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 m_nSize
    // Size: 0x4
    // Offset: 0x0
    uint m_nSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nFrameIndex
    // Size: 0x4
    // Offset: 0x4
    uint m_nFrameIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumFramePresents
    // Size: 0x4
    // Offset: 0x8
    uint m_nNumFramePresents;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumMisPresented
    // Size: 0x4
    // Offset: 0xC
    uint m_nNumMisPresented;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nNumDroppedFrames
    // Size: 0x4
    // Offset: 0x10
    uint m_nNumDroppedFrames;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 m_nReprojectionFlags
    // Size: 0x4
    // Offset: 0x14
    uint m_nReprojectionFlags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Double m_flSystemTimeInSeconds
    // Size: 0x8
    // Offset: 0x18
    double m_flSystemTimeInSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Single m_flPreSubmitGpuMs
    // Size: 0x4
    // Offset: 0x20
    float m_flPreSubmitGpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flPostSubmitGpuMs
    // Size: 0x4
    // Offset: 0x24
    float m_flPostSubmitGpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flTotalRenderGpuMs
    // Size: 0x4
    // Offset: 0x28
    float m_flTotalRenderGpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCompositorRenderGpuMs
    // Size: 0x4
    // Offset: 0x2C
    float m_flCompositorRenderGpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCompositorRenderCpuMs
    // Size: 0x4
    // Offset: 0x30
    float m_flCompositorRenderCpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCompositorIdleCpuMs
    // Size: 0x4
    // Offset: 0x34
    float m_flCompositorIdleCpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flClientFrameIntervalMs
    // Size: 0x4
    // Offset: 0x38
    float m_flClientFrameIntervalMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flPresentCallCpuMs
    // Size: 0x4
    // Offset: 0x3C
    float m_flPresentCallCpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flWaitForPresentCpuMs
    // Size: 0x4
    // Offset: 0x40
    float m_flWaitForPresentCpuMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flSubmitFrameMs
    // Size: 0x4
    // Offset: 0x44
    float m_flSubmitFrameMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flWaitGetPosesCalledMs
    // Size: 0x4
    // Offset: 0x48
    float m_flWaitGetPosesCalledMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flNewPosesReadyMs
    // Size: 0x4
    // Offset: 0x4C
    float m_flNewPosesReadyMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flNewFrameReadyMs
    // Size: 0x4
    // Offset: 0x50
    float m_flNewFrameReadyMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCompositorUpdateStartMs
    // Size: 0x4
    // Offset: 0x54
    float m_flCompositorUpdateStartMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCompositorUpdateEndMs
    // Size: 0x4
    // Offset: 0x58
    float m_flCompositorUpdateEndMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_flCompositorRenderStartMs
    // Size: 0x4
    // Offset: 0x5C
    float m_flCompositorRenderStartMs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVR.OpenVR.TrackedDevicePose_t m_HmdPose
    // Size: 0x4E
    // Offset: 0x60
    ::OVR::OpenVR::TrackedDevicePose_t m_HmdPose;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::TrackedDevicePose_t) == 0x4E);
    public:
    // Creating value type constructor for type: Compositor_FrameTiming
    constexpr Compositor_FrameTiming(uint m_nSize_ = {}, uint m_nFrameIndex_ = {}, uint m_nNumFramePresents_ = {}, uint m_nNumMisPresented_ = {}, uint m_nNumDroppedFrames_ = {}, uint m_nReprojectionFlags_ = {}, double m_flSystemTimeInSeconds_ = {}, float m_flPreSubmitGpuMs_ = {}, float m_flPostSubmitGpuMs_ = {}, float m_flTotalRenderGpuMs_ = {}, float m_flCompositorRenderGpuMs_ = {}, float m_flCompositorRenderCpuMs_ = {}, float m_flCompositorIdleCpuMs_ = {}, float m_flClientFrameIntervalMs_ = {}, float m_flPresentCallCpuMs_ = {}, float m_flWaitForPresentCpuMs_ = {}, float m_flSubmitFrameMs_ = {}, float m_flWaitGetPosesCalledMs_ = {}, float m_flNewPosesReadyMs_ = {}, float m_flNewFrameReadyMs_ = {}, float m_flCompositorUpdateStartMs_ = {}, float m_flCompositorUpdateEndMs_ = {}, float m_flCompositorRenderStartMs_ = {}, ::OVR::OpenVR::TrackedDevicePose_t m_HmdPose_ = {}) noexcept : m_nSize{m_nSize_}, m_nFrameIndex{m_nFrameIndex_}, m_nNumFramePresents{m_nNumFramePresents_}, m_nNumMisPresented{m_nNumMisPresented_}, m_nNumDroppedFrames{m_nNumDroppedFrames_}, m_nReprojectionFlags{m_nReprojectionFlags_}, m_flSystemTimeInSeconds{m_flSystemTimeInSeconds_}, m_flPreSubmitGpuMs{m_flPreSubmitGpuMs_}, m_flPostSubmitGpuMs{m_flPostSubmitGpuMs_}, m_flTotalRenderGpuMs{m_flTotalRenderGpuMs_}, m_flCompositorRenderGpuMs{m_flCompositorRenderGpuMs_}, m_flCompositorRenderCpuMs{m_flCompositorRenderCpuMs_}, m_flCompositorIdleCpuMs{m_flCompositorIdleCpuMs_}, m_flClientFrameIntervalMs{m_flClientFrameIntervalMs_}, m_flPresentCallCpuMs{m_flPresentCallCpuMs_}, m_flWaitForPresentCpuMs{m_flWaitForPresentCpuMs_}, m_flSubmitFrameMs{m_flSubmitFrameMs_}, m_flWaitGetPosesCalledMs{m_flWaitGetPosesCalledMs_}, m_flNewPosesReadyMs{m_flNewPosesReadyMs_}, m_flNewFrameReadyMs{m_flNewFrameReadyMs_}, m_flCompositorUpdateStartMs{m_flCompositorUpdateStartMs_}, m_flCompositorUpdateEndMs{m_flCompositorUpdateEndMs_}, m_flCompositorRenderStartMs{m_flCompositorRenderStartMs_}, m_HmdPose{m_HmdPose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 m_nSize
    [[deprecated]] uint& dyn_m_nSize();
    // Get instance field reference: public System.UInt32 m_nFrameIndex
    [[deprecated]] uint& dyn_m_nFrameIndex();
    // Get instance field reference: public System.UInt32 m_nNumFramePresents
    [[deprecated]] uint& dyn_m_nNumFramePresents();
    // Get instance field reference: public System.UInt32 m_nNumMisPresented
    [[deprecated]] uint& dyn_m_nNumMisPresented();
    // Get instance field reference: public System.UInt32 m_nNumDroppedFrames
    [[deprecated]] uint& dyn_m_nNumDroppedFrames();
    // Get instance field reference: public System.UInt32 m_nReprojectionFlags
    [[deprecated]] uint& dyn_m_nReprojectionFlags();
    // Get instance field reference: public System.Double m_flSystemTimeInSeconds
    [[deprecated]] double& dyn_m_flSystemTimeInSeconds();
    // Get instance field reference: public System.Single m_flPreSubmitGpuMs
    [[deprecated]] float& dyn_m_flPreSubmitGpuMs();
    // Get instance field reference: public System.Single m_flPostSubmitGpuMs
    [[deprecated]] float& dyn_m_flPostSubmitGpuMs();
    // Get instance field reference: public System.Single m_flTotalRenderGpuMs
    [[deprecated]] float& dyn_m_flTotalRenderGpuMs();
    // Get instance field reference: public System.Single m_flCompositorRenderGpuMs
    [[deprecated]] float& dyn_m_flCompositorRenderGpuMs();
    // Get instance field reference: public System.Single m_flCompositorRenderCpuMs
    [[deprecated]] float& dyn_m_flCompositorRenderCpuMs();
    // Get instance field reference: public System.Single m_flCompositorIdleCpuMs
    [[deprecated]] float& dyn_m_flCompositorIdleCpuMs();
    // Get instance field reference: public System.Single m_flClientFrameIntervalMs
    [[deprecated]] float& dyn_m_flClientFrameIntervalMs();
    // Get instance field reference: public System.Single m_flPresentCallCpuMs
    [[deprecated]] float& dyn_m_flPresentCallCpuMs();
    // Get instance field reference: public System.Single m_flWaitForPresentCpuMs
    [[deprecated]] float& dyn_m_flWaitForPresentCpuMs();
    // Get instance field reference: public System.Single m_flSubmitFrameMs
    [[deprecated]] float& dyn_m_flSubmitFrameMs();
    // Get instance field reference: public System.Single m_flWaitGetPosesCalledMs
    [[deprecated]] float& dyn_m_flWaitGetPosesCalledMs();
    // Get instance field reference: public System.Single m_flNewPosesReadyMs
    [[deprecated]] float& dyn_m_flNewPosesReadyMs();
    // Get instance field reference: public System.Single m_flNewFrameReadyMs
    [[deprecated]] float& dyn_m_flNewFrameReadyMs();
    // Get instance field reference: public System.Single m_flCompositorUpdateStartMs
    [[deprecated]] float& dyn_m_flCompositorUpdateStartMs();
    // Get instance field reference: public System.Single m_flCompositorUpdateEndMs
    [[deprecated]] float& dyn_m_flCompositorUpdateEndMs();
    // Get instance field reference: public System.Single m_flCompositorRenderStartMs
    [[deprecated]] float& dyn_m_flCompositorRenderStartMs();
    // Get instance field reference: public OVR.OpenVR.TrackedDevicePose_t m_HmdPose
    [[deprecated]] ::OVR::OpenVR::TrackedDevicePose_t& dyn_m_HmdPose();
  }; // OVR.OpenVR.Compositor_FrameTiming
  #pragma pack(pop)
  static check_size<sizeof(Compositor_FrameTiming), 96 + sizeof(::OVR::OpenVR::TrackedDevicePose_t)> __OVR_OpenVR_Compositor_FrameTimingSizeCheck;
  static_assert(sizeof(Compositor_FrameTiming) == 0xAE);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
