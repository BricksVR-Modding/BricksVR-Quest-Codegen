// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.VoipAudioSourceHiLevel
#include "Oculus/Platform/VoipAudioSourceHiLevel.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate*, "Oculus.Platform", "VoipAudioSourceHiLevel/FilterReadDelegate");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipAudioSourceHiLevel/Oculus.Platform.FilterReadDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class VoipAudioSourceHiLevel::FilterReadDelegate : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public Oculus.Platform.VoipAudioSourceHiLevel parent
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::VoipAudioSourceHiLevel* parent;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::VoipAudioSourceHiLevel*) == 0x8);
    // private System.Single[] scratchBuffer
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> scratchBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Oculus.Platform.VoipAudioSourceHiLevel parent
    ::Oculus::Platform::VoipAudioSourceHiLevel*& dyn_parent();
    // Get instance field reference: private System.Single[] scratchBuffer
    ::ArrayW<float>& dyn_scratchBuffer();
    // private System.Void Awake()
    // Offset: 0x1119648
    void Awake();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x1119700
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // public System.Void .ctor()
    // Offset: 0x1119BC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipAudioSourceHiLevel::FilterReadDelegate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipAudioSourceHiLevel::FilterReadDelegate*, creationType>()));
    }
  }; // Oculus.Platform.VoipAudioSourceHiLevel/Oculus.Platform.FilterReadDelegate
  #pragma pack(pop)
  static check_size<sizeof(VoipAudioSourceHiLevel::FilterReadDelegate), 32 + sizeof(::ArrayW<float>)> __Oculus_Platform_VoipAudioSourceHiLevel_FilterReadDelegateSizeCheck;
  static_assert(sizeof(VoipAudioSourceHiLevel::FilterReadDelegate) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::*)()>(&Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::*)(::ArrayW<float>, int)>(&Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::VoipAudioSourceHiLevel::FilterReadDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
