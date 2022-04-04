// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.IRealtimeTransformStrategy
#include "Normal/Realtime/IRealtimeTransformStrategy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeTransform
  class RealtimeTransform;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeTransformSnapping
  class RealtimeTransformSnapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeTransformSnapping);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeTransformSnapping*, "Normal.Realtime", "RealtimeTransformSnapping");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeTransformSnapping
  // [TokenAttribute] Offset: FFFFFFFF
  class RealtimeTransformSnapping : public ::Il2CppObject/*, public ::Normal::Realtime::IRealtimeTransformStrategy*/ {
    public:
    public:
    // private readonly Normal.Realtime.RealtimeTransform _component
    // Size: 0x8
    // Offset: 0x10
    ::Normal::Realtime::RealtimeTransform* component;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeTransform*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::IRealtimeTransformStrategy
    operator ::Normal::Realtime::IRealtimeTransformStrategy() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IRealtimeTransformStrategy*>(this);
    }
    // Creating conversion operator: operator ::Normal::Realtime::RealtimeTransform*
    constexpr operator ::Normal::Realtime::RealtimeTransform*() const noexcept {
      return component;
    }
    // Get instance field reference: private readonly Normal.Realtime.RealtimeTransform _component
    [[deprecated]] ::Normal::Realtime::RealtimeTransform*& dyn__component();
    // public System.Boolean get_isInterpolationWarmedUp()
    // Offset: 0x2188C0
    bool get_isInterpolationWarmedUp();
    // public System.Void .ctor(Normal.Realtime.RealtimeTransform realtimeTransform)
    // Offset: 0x2CC970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeTransformSnapping* New_ctor(::Normal::Realtime::RealtimeTransform* realtimeTransform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeTransformSnapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeTransformSnapping*, creationType>(realtimeTransform)));
    }
    // public System.Void Reset(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x891420
    void Reset(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void Update(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x1DDF00
    void Update(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void OnLocalModelWillWrite(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8913E0
    void OnLocalModelWillWrite(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void OnRemoteModelDidRead(Normal.Realtime.RealtimeTransformModel model, Normal.Realtime.RealtimeTransformModel/Normal.Realtime.PropertyChangeSet changes)
    // Offset: 0x891400
    void OnRemoteModelDidRead(::Normal::Realtime::RealtimeTransformModel* model, ::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet* changes);
  }; // Normal.Realtime.RealtimeTransformSnapping
  #pragma pack(pop)
  static check_size<sizeof(RealtimeTransformSnapping), 16 + sizeof(::Normal::Realtime::RealtimeTransform*)> __Normal_Realtime_RealtimeTransformSnappingSizeCheck;
  static_assert(sizeof(RealtimeTransformSnapping) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformSnapping::get_isInterpolationWarmedUp
// Il2CppName: get_isInterpolationWarmedUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeTransformSnapping::*)()>(&Normal::Realtime::RealtimeTransformSnapping::get_isInterpolationWarmedUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformSnapping*), "get_isInterpolationWarmedUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformSnapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformSnapping::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformSnapping::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformSnapping::Reset)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformSnapping*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformSnapping::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformSnapping::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformSnapping::Update)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformSnapping*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformSnapping::OnLocalModelWillWrite
// Il2CppName: OnLocalModelWillWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformSnapping::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformSnapping::OnLocalModelWillWrite)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformSnapping*), "OnLocalModelWillWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformSnapping::OnRemoteModelDidRead
// Il2CppName: OnRemoteModelDidRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformSnapping::*)(::Normal::Realtime::RealtimeTransformModel*, ::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet*)>(&Normal::Realtime::RealtimeTransformSnapping::OnRemoteModelDidRead)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    static auto* changes = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel/PropertyChangeSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformSnapping*), "OnRemoteModelDidRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, changes});
  }
};
