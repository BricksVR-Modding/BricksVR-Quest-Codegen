// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISerializationCallbackReceiver
  class ISerializationCallbackReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ISerializationCallbackReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISerializationCallbackReceiver*, "UnityEngine", "ISerializationCallbackReceiver");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ISerializationCallbackReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 6D94B4
  class ISerializationCallbackReceiver {
    public:
    // public System.Void OnBeforeSerialize()
    // Offset: 0xFFFFFFFF
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0xFFFFFFFF
    void OnAfterDeserialize();
  }; // UnityEngine.ISerializationCallbackReceiver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ISerializationCallbackReceiver::*)()>(&UnityEngine::ISerializationCallbackReceiver::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ISerializationCallbackReceiver*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ISerializationCallbackReceiver::*)()>(&UnityEngine::ISerializationCallbackReceiver::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ISerializationCallbackReceiver*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
