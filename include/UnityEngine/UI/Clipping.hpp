// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Clipping
  class Clipping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Clipping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Clipping*, "UnityEngine.UI", "Clipping");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Clipping
  // [TokenAttribute] Offset: FFFFFFFF
  class Clipping : public ::Il2CppObject {
    public:
    // static public UnityEngine.Rect FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> rectMaskParents, out System.Boolean validRect)
    // Offset: 0x8E1B24
    static ::UnityEngine::Rect FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* rectMaskParents, ByRef<bool> validRect);
  }; // UnityEngine.UI.Clipping
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Clipping::FindCullAndClipWorldRect
// Il2CppName: FindCullAndClipWorldRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*, ByRef<bool>)>(&UnityEngine::UI::Clipping::FindCullAndClipWorldRect)> {
  static const MethodInfo* get() {
    static auto* rectMaskParents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "RectMask2D")})->byval_arg;
    static auto* validRect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Clipping*), "FindCullAndClipWorldRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rectMaskParents, validRect});
  }
};
