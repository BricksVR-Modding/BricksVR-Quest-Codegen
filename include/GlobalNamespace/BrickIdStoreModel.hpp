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
  // Forward declaring type: BrickStorePlayerModel
  class BrickStorePlayerModel;
}
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: RealtimeDictionary`1<TValue>
  template<typename TValue>
  class RealtimeDictionary_1;
  // Skipping declaration: StreamContext because it is already included!
  // Forward declaring type: WriteStream
  class WriteStream;
  // Forward declaring type: ReadStream
  class ReadStream;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: ModelProperty`1<T>
  template<typename T>
  class ModelProperty_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickIdStoreModel
  class BrickIdStoreModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickIdStoreModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickIdStoreModel*, "", "BrickIdStoreModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: BrickIdStoreModel
  // [TokenAttribute] Offset: FFFFFFFF
  // [RealtimeModelAttribute] Offset: D4660
  class BrickIdStoreModel : public ::Normal::Realtime::RealtimeModel {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    // Nested type: ::GlobalNamespace::BrickIdStoreModel::PropertyID
    struct PropertyID;
    public:
    // [RealtimePropertyAttribute] Offset: 0xF3E40
    // private Normal.Realtime.Serialization.RealtimeDictionary`1<BrickStorePlayerModel> _players
    // Size: 0x8
    // Offset: 0x90
    ::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>* players;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>*) == 0x8);
    // private Normal.Realtime.ModelProperty`1<Normal.Realtime.Serialization.RealtimeDictionary`1<BrickStorePlayerModel>> _playersProperty
    // Size: 0x8
    // Offset: 0x98
    ::Normal::Realtime::ModelProperty_1<::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>*>* playersProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ModelProperty_1<::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>*>*) == 0x8);
    public:
    // Get instance field reference: private Normal.Realtime.Serialization.RealtimeDictionary`1<BrickStorePlayerModel> _players
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>*& dyn__players();
    // Get instance field reference: private Normal.Realtime.ModelProperty`1<Normal.Realtime.Serialization.RealtimeDictionary`1<BrickStorePlayerModel>> _playersProperty
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::ModelProperty_1<::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>*>*& dyn__playersProperty();
    // public Normal.Realtime.Serialization.RealtimeDictionary`1<BrickStorePlayerModel> get_players()
    // Offset: 0x237650
    ::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>* get_players();
    // public System.Void .ctor()
    // Offset: 0x6EF190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrickIdStoreModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BrickIdStoreModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrickIdStoreModel*, creationType>()));
    }
    // private System.Void UpdateBackingFields()
    // Offset: 0x6EF070
    void UpdateBackingFields();
    // protected override System.Int32 WriteLength(Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x6EF080
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Int32 RealtimeModel::WriteLength(Normal.Realtime.Serialization.StreamContext context)
    int WriteLength(::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x6EF0F0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Write(::Normal::Realtime::Serialization::WriteStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x6EEF80
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Read(::Normal::Realtime::Serialization::ReadStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
  }; // BrickIdStoreModel
  #pragma pack(pop)
  static check_size<sizeof(BrickIdStoreModel), 152 + sizeof(::Normal::Realtime::ModelProperty_1<::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>*>*)> __GlobalNamespace_BrickIdStoreModelSizeCheck;
  static_assert(sizeof(BrickIdStoreModel) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickIdStoreModel::get_players
// Il2CppName: get_players
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::RealtimeDictionary_1<::GlobalNamespace::BrickStorePlayerModel*>* (GlobalNamespace::BrickIdStoreModel::*)()>(&GlobalNamespace::BrickIdStoreModel::get_players)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickIdStoreModel*), "get_players", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickIdStoreModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BrickIdStoreModel::UpdateBackingFields
// Il2CppName: UpdateBackingFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickIdStoreModel::*)()>(&GlobalNamespace::BrickIdStoreModel::UpdateBackingFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickIdStoreModel*), "UpdateBackingFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickIdStoreModel::WriteLength
// Il2CppName: WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BrickIdStoreModel::*)(::Normal::Realtime::Serialization::StreamContext)>(&GlobalNamespace::BrickIdStoreModel::WriteLength)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickIdStoreModel*), "WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickIdStoreModel::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickIdStoreModel::*)(::Normal::Realtime::Serialization::WriteStream*, ::Normal::Realtime::Serialization::StreamContext)>(&GlobalNamespace::BrickIdStoreModel::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickIdStoreModel*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickIdStoreModel::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BrickIdStoreModel::*)(::Normal::Realtime::Serialization::ReadStream*, ::Normal::Realtime::Serialization::StreamContext)>(&GlobalNamespace::BrickIdStoreModel::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickIdStoreModel*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
