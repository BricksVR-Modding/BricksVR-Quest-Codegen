// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaSize
  struct YogaSize;
  // Forward declaring type: YogaNode
  class YogaNode;
  // Forward declaring type: YogaMeasureMode
  struct YogaMeasureMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: MeasureFunction
  class MeasureFunction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Yoga::MeasureFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::MeasureFunction*, "UnityEngine.Yoga", "MeasureFunction");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.MeasureFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class MeasureFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeasureFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Yoga::MeasureFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeasureFunction*, creationType>(object, method)));
    }
    // public UnityEngine.Yoga.YogaSize Invoke(UnityEngine.Yoga.YogaNode node, System.Single width, UnityEngine.Yoga.YogaMeasureMode widthMode, System.Single height, UnityEngine.Yoga.YogaMeasureMode heightMode)
    // Offset: 0x654720
    ::UnityEngine::Yoga::YogaSize Invoke(::UnityEngine::Yoga::YogaNode* node, float width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, ::UnityEngine::Yoga::YogaMeasureMode heightMode);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Yoga.YogaNode node, System.Single width, UnityEngine.Yoga.YogaMeasureMode widthMode, System.Single height, UnityEngine.Yoga.YogaMeasureMode heightMode, System.AsyncCallback callback, System.Object object)
    // Offset: 0x654650
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Yoga::YogaNode* node, float width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Yoga.YogaSize EndInvoke(System.IAsyncResult result)
    // Offset: 0x243600
    ::UnityEngine::Yoga::YogaSize EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Yoga.MeasureFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Yoga::MeasureFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Yoga::MeasureFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Yoga::YogaSize (UnityEngine::Yoga::MeasureFunction::*)(::UnityEngine::Yoga::YogaNode*, float, ::UnityEngine::Yoga::YogaMeasureMode, float, ::UnityEngine::Yoga::YogaMeasureMode)>(&UnityEngine::Yoga::MeasureFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaNode")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* widthMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaMeasureMode")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaMeasureMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::MeasureFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, width, widthMode, height, heightMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::MeasureFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Yoga::MeasureFunction::*)(::UnityEngine::Yoga::YogaNode*, float, ::UnityEngine::Yoga::YogaMeasureMode, float, ::UnityEngine::Yoga::YogaMeasureMode, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Yoga::MeasureFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaNode")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* widthMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaMeasureMode")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaMeasureMode")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::MeasureFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, width, widthMode, height, heightMode, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::MeasureFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Yoga::YogaSize (UnityEngine::Yoga::MeasureFunction::*)(::System::IAsyncResult*)>(&UnityEngine::Yoga::MeasureFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::MeasureFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
