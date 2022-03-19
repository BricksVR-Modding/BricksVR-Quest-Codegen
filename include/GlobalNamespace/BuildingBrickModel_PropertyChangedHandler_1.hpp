// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BuildingBrickModel
#include "GlobalNamespace/BuildingBrickModel.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BuildingBrickModel::PropertyChangedHandler_1, "", "BuildingBrickModel/PropertyChangedHandler`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BuildingBrickModel/PropertyChangedHandler`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BuildingBrickModel::PropertyChangedHandler_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildingBrickModel::PropertyChangedHandler_1<T>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuildingBrickModel::PropertyChangedHandler_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildingBrickModel::PropertyChangedHandler_1<T>*, creationType>(object, method)));
    }
    // public System.Void Invoke(BuildingBrickModel model, T value)
    // Offset: 0xFFFFFFFF
    void Invoke(::GlobalNamespace::BuildingBrickModel* model, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuildingBrickModel::PropertyChangedHandler_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(model), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, model, value);
    }
    // public System.IAsyncResult BeginInvoke(BuildingBrickModel model, T value, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BuildingBrickModel* model, T value, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuildingBrickModel::PropertyChangedHandler_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(model), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, model, value, callback, object);
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuildingBrickModel::PropertyChangedHandler_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
    }
  }; // BuildingBrickModel/PropertyChangedHandler`1
  // Could not write size check! Type: BuildingBrickModel/PropertyChangedHandler`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
