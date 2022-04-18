// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.RealtimeModel
#include "Normal/Realtime/RealtimeModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: ReliableProperty`1<T>
  template<typename T>
  class ReliableProperty_1;
}
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Skipping declaration: StreamContext because it is already included!
  // Forward declaring type: WriteStream
  class WriteStream;
  // Forward declaring type: ReadStream
  class ReadStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickStorePlayerModel
  class BrickStorePlayerModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickStorePlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickStorePlayerModel*, "", "BrickStorePlayerModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: BrickStorePlayerModel
  // [TokenAttribute] Offset: FFFFFFFF
  // [RealtimeModelAttribute] Offset: D4660
  class BrickStorePlayerModel : public ::Normal::Realtime::RealtimeModel {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    // Nested type: ::GlobalNamespace::BrickStorePlayerModel::PropertyID
    struct PropertyID;
    public:
    // [RealtimePropertyAttribute] Offset: 0xF3E40
    // private System.Int32 _brickId
    // Size: 0x4
    // Offset: 0x90
    int brickId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: brickId and: brickIdProperty
    char __padding0[0x4] = {};
    // private Normal.Realtime.ReliableProperty`1<System.Int32> _brickIdProperty
    // Size: 0x8
    // Offset: 0x98
    ::Normal::Realtime::ReliableProperty_1<int>* brickIdProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<int>*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _brickId
    [[deprecated("Use field access instead!")]] int& dyn__brickId();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.Int32> _brickIdProperty
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::ReliableProperty_1<int>*& dyn__brickIdProperty();
    // public System.Int32 get_brickId()
    // Offset: 0x6F4410
    int get_brickId();
    // public System.Void set_brickId(System.Int32 value)
    // Offset: 0x6F4450
    void set_brickId(int value);
    // public System.Void .ctor()
    // Offset: 0x6F4380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickStorePlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickStorePlayerModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickStorePlayerModel*, creationType>()));
    }
    // private System.Void UpdateBackingFields()
    // Offset: 0x6F4220
    void UpdateBackingFields();
    // protected override System.Void OnParentReplaced(Normal.Realtime.RealtimeModel previousParent, Normal.Realtime.RealtimeModel currentParent)
    // Offset: 0x6F40C0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::OnParentReplaced(Normal.Realtime.RealtimeModel previousParent, Normal.Realtime.RealtimeModel currentParent)
    void OnParentReplaced(::Normal::Realtime::RealtimeModel* previousParent, ::Normal::Realtime::RealtimeModel* currentParent);
    // protected override System.Int32 WriteLength(Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x6F4270
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Int32 RealtimeModel::WriteLength(Normal.Realtime.Serialization.StreamContext context)
    int WriteLength(::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x6F42E0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Write(::Normal::Realtime::Serialization::WriteStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x6F4110
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Read(::Normal::Realtime::Serialization::ReadStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
  }; // BrickStorePlayerModel
  #pragma pack(pop)
  static check_size<sizeof(BrickStorePlayerModel), 152 + sizeof(::Normal::Realtime::ReliableProperty_1<int>*)> __GlobalNamespace_BrickStorePlayerModelSizeCheck;
  static_assert(sizeof(BrickStorePlayerModel) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::get_brickId
// Il2CppName: get_brickId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BrickStorePlayerModel::*)()>(&GlobalNamespace::BrickStorePlayerModel::get_brickId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "get_brickId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::set_brickId
// Il2CppName: set_brickId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickStorePlayerModel::*)(int)>(&GlobalNamespace::BrickStorePlayerModel::set_brickId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "set_brickId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::UpdateBackingFields
// Il2CppName: UpdateBackingFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickStorePlayerModel::*)()>(&GlobalNamespace::BrickStorePlayerModel::UpdateBackingFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "UpdateBackingFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::OnParentReplaced
// Il2CppName: OnParentReplaced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickStorePlayerModel::*)(::Normal::Realtime::RealtimeModel*, ::Normal::Realtime::RealtimeModel*)>(&GlobalNamespace::BrickStorePlayerModel::OnParentReplaced)> {
  static const MethodInfo* get() {
    static auto* previousParent = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    static auto* currentParent = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "OnParentReplaced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousParent, currentParent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::WriteLength
// Il2CppName: WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BrickStorePlayerModel::*)(::Normal::Realtime::Serialization::StreamContext)>(&GlobalNamespace::BrickStorePlayerModel::WriteLength)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickStorePlayerModel::*)(::Normal::Realtime::Serialization::WriteStream*, ::Normal::Realtime::Serialization::StreamContext)>(&GlobalNamespace::BrickStorePlayerModel::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickStorePlayerModel::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickStorePlayerModel::*)(::Normal::Realtime::Serialization::ReadStream*, ::Normal::Realtime::Serialization::StreamContext)>(&GlobalNamespace::BrickStorePlayerModel::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickStorePlayerModel*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
