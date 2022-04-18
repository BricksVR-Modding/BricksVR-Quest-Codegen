// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.GraphicRaycaster
#include "UnityEngine/UI/GraphicRaycaster.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::GraphicRaycaster::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRaycaster::$$c*, "UnityEngine.UI", "GraphicRaycaster/<>c");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.GraphicRaycaster/UnityEngine.UI.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GraphicRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UI.GraphicRaycaster/UnityEngine.UI.<>c <>9
    static ::UnityEngine::UI::GraphicRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.GraphicRaycaster/UnityEngine.UI.<>c <>9
    static void _set_$$9(::UnityEngine::UI::GraphicRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.UI.Graphic> <>9__24_0
    static ::System::Comparison_1<::UnityEngine::UI::Graphic*>* _get_$$9__24_0();
    // Set static field: static public System.Comparison`1<UnityEngine.UI.Graphic> <>9__24_0
    static void _set_$$9__24_0(::System::Comparison_1<::UnityEngine::UI::Graphic*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4CBAA0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphicRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::GraphicRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphicRaycaster::$$c*, creationType>()));
    }
    // System.Int32 <Raycast>b__24_0(UnityEngine.UI.Graphic g1, UnityEngine.UI.Graphic g2)
    // Offset: 0x4CBA20
    int $Raycast$b__24_0(::UnityEngine::UI::Graphic* g1, ::UnityEngine::UI::Graphic* g2);
  }; // UnityEngine.UI.GraphicRaycaster/UnityEngine.UI.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::GraphicRaycaster::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::GraphicRaycaster::$$c::$Raycast$b__24_0
// Il2CppName: <Raycast>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::GraphicRaycaster::$$c::*)(::UnityEngine::UI::Graphic*, ::UnityEngine::UI::Graphic*)>(&UnityEngine::UI::GraphicRaycaster::$$c::$Raycast$b__24_0)> {
  static const MethodInfo* get() {
    static auto* g1 = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")->byval_arg;
    static auto* g2 = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Graphic")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GraphicRaycaster::$$c*), "<Raycast>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g1, g2});
  }
};
