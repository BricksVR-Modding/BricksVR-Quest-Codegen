// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Forward declaring type: TunnellingMaskObject
  class TunnellingMaskObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Sigtrap::VrTunnellingPro::TunnellingMaskObject);
DEFINE_IL2CPP_ARG_TYPE(::Sigtrap::VrTunnellingPro::TunnellingMaskObject*, "Sigtrap.VrTunnellingPro", "TunnellingMaskObject");
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Sigtrap.VrTunnellingPro.TunnellingMaskObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: BC260
  class TunnellingMaskObject : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean autoAddChildren
    // Size: 0x1
    // Offset: 0x18
    bool autoAddChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoAddChildren and: r
    char __padding0[0x7] = {};
    // private UnityEngine.Renderer _r
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* r;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x28
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean autoAddChildren
    [[deprecated]] bool& dyn_autoAddChildren();
    // Get instance field reference: private UnityEngine.Renderer _r
    [[deprecated]] ::UnityEngine::Renderer*& dyn__r();
    // Get instance field reference: private System.Boolean _started
    [[deprecated]] bool& dyn__started();
    // private System.Void Awake()
    // Offset: 0x6D76C0
    void Awake();
    // private System.Void Start()
    // Offset: 0x6D7BC0
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x6D7960
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x6D7710
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TunnellingMaskObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Sigtrap::VrTunnellingPro::TunnellingMaskObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TunnellingMaskObject*, creationType>()));
    }
  }; // Sigtrap.VrTunnellingPro.TunnellingMaskObject
  #pragma pack(pop)
  static check_size<sizeof(TunnellingMaskObject), 40 + sizeof(bool)> __Sigtrap_VrTunnellingPro_TunnellingMaskObjectSizeCheck;
  static_assert(sizeof(TunnellingMaskObject) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::TunnellingMaskObject::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Sigtrap::VrTunnellingPro::TunnellingMaskObject::*)()>(&Sigtrap::VrTunnellingPro::TunnellingMaskObject::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::TunnellingMaskObject*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::TunnellingMaskObject::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Sigtrap::VrTunnellingPro::TunnellingMaskObject::*)()>(&Sigtrap::VrTunnellingPro::TunnellingMaskObject::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::TunnellingMaskObject*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::TunnellingMaskObject::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Sigtrap::VrTunnellingPro::TunnellingMaskObject::*)()>(&Sigtrap::VrTunnellingPro::TunnellingMaskObject::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::TunnellingMaskObject*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::TunnellingMaskObject::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Sigtrap::VrTunnellingPro::TunnellingMaskObject::*)()>(&Sigtrap::VrTunnellingPro::TunnellingMaskObject::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sigtrap::VrTunnellingPro::TunnellingMaskObject*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Sigtrap::VrTunnellingPro::TunnellingMaskObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
