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
  // Forward declaring type: YogaNode
  class YogaNode;
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
  // Forward declaring type: BaselineFunction
  class BaselineFunction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Yoga::BaselineFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::BaselineFunction*, "UnityEngine.Yoga", "BaselineFunction");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.BaselineFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class BaselineFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaselineFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Yoga::BaselineFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaselineFunction*, creationType>(object, method)));
    }
    // public System.Single Invoke(UnityEngine.Yoga.YogaNode node, System.Single width, System.Single height)
    // Offset: 0x653F70
    float Invoke(::UnityEngine::Yoga::YogaNode* node, float width, float height);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Yoga.YogaNode node, System.Single width, System.Single height, System.AsyncCallback callback, System.Object object)
    // Offset: 0x653ED0
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Yoga::YogaNode* node, float width, float height, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Single EndInvoke(System.IAsyncResult result)
    // Offset: 0x59D470
    float EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Yoga.BaselineFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Yoga::BaselineFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Yoga::BaselineFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Yoga::BaselineFunction::*)(::UnityEngine::Yoga::YogaNode*, float, float)>(&UnityEngine::Yoga::BaselineFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaNode")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::BaselineFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::BaselineFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Yoga::BaselineFunction::*)(::UnityEngine::Yoga::YogaNode*, float, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Yoga::BaselineFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaNode")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::BaselineFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, width, height, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::BaselineFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Yoga::BaselineFunction::*)(::System::IAsyncResult*)>(&UnityEngine::Yoga::BaselineFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::BaselineFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
