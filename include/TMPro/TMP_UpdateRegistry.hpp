// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_UpdateRegistry
  class TMP_UpdateRegistry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_UpdateRegistry);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_UpdateRegistry*, "TMPro", "TMP_UpdateRegistry");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_UpdateRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_UpdateRegistry : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.Int32> m_LayoutQueueLookup
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::HashSet_1<int>* m_LayoutQueueLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.Int32> m_GraphicQueueLookup
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::HashSet_1<int>* m_GraphicQueueLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    public:
    // Get static field: static private TMPro.TMP_UpdateRegistry s_Instance
    static ::TMPro::TMP_UpdateRegistry* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateRegistry s_Instance
    static void _set_s_Instance(::TMPro::TMP_UpdateRegistry* value);
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*& dyn_m_LayoutRebuildQueue();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> m_LayoutQueueLookup
    ::System::Collections::Generic::HashSet_1<int>*& dyn_m_LayoutQueueLookup();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>*& dyn_m_GraphicRebuildQueue();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> m_GraphicQueueLookup
    ::System::Collections::Generic::HashSet_1<int>*& dyn_m_GraphicQueueLookup();
    // static public TMPro.TMP_UpdateRegistry get_instance()
    // Offset: 0x81E754
    static ::TMPro::TMP_UpdateRegistry* get_instance();
    // static public System.Void RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81E8E0
    static void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81E90C
    bool InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);
    // static public System.Void RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81EA0C
    static void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81EA38
    bool InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);
    // private System.Void PerformUpdateForCanvasRendererObjects()
    // Offset: 0x81EB38
    void PerformUpdateForCanvasRendererObjects();
    // private System.Void PerformUpdateForMeshRendererObjects()
    // Offset: 0x81ED78
    void PerformUpdateForMeshRendererObjects();
    // static public System.Void UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81EDE4
    static void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81EE20
    void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x81EEF4
    void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);
    // protected System.Void .ctor()
    // Offset: 0x81E7D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_UpdateRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_UpdateRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_UpdateRegistry*, creationType>()));
    }
  }; // TMPro.TMP_UpdateRegistry
  #pragma pack(pop)
  static check_size<sizeof(TMP_UpdateRegistry), 40 + sizeof(::System::Collections::Generic::HashSet_1<int>*)> __TMPro_TMP_UpdateRegistrySizeCheck;
  static_assert(sizeof(TMP_UpdateRegistry) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_UpdateRegistry* (*)()>(&TMPro::TMP_UpdateRegistry::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild
// Il2CppName: RegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::RegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "RegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild
// Il2CppName: InternalRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild
// Il2CppName: RegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::RegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "RegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild
// Il2CppName: InternalRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects
// Il2CppName: PerformUpdateForCanvasRendererObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)()>(&TMPro::TMP_UpdateRegistry::PerformUpdateForCanvasRendererObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "PerformUpdateForCanvasRendererObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects
// Il2CppName: PerformUpdateForMeshRendererObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)()>(&TMPro::TMP_UpdateRegistry::PerformUpdateForMeshRendererObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "PerformUpdateForMeshRendererObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild
// Il2CppName: UnRegisterCanvasElementForRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::UnRegisterCanvasElementForRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "UnRegisterCanvasElementForRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild
// Il2CppName: InternalUnRegisterCanvasElementForLayoutRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalUnRegisterCanvasElementForLayoutRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild
// Il2CppName: InternalUnRegisterCanvasElementForGraphicRebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_UpdateRegistry::*)(::UnityEngine::UI::ICanvasElement*)>(&TMPro::TMP_UpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "ICanvasElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_UpdateRegistry*), "InternalUnRegisterCanvasElementForGraphicRebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_UpdateRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
