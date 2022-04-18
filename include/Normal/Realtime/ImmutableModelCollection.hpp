// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.RealtimeModel
#include "Normal/Realtime/RealtimeModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
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
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: ImmutableModelCollection
  class ImmutableModelCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::ImmutableModelCollection);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::ImmutableModelCollection*, "Normal.Realtime", "ImmutableModelCollection");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.ImmutableModelCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  class ImmutableModelCollection : public ::Normal::Realtime::RealtimeModel/*, public ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint, ::Normal::Realtime::RealtimeModel*>>*/ {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    // Nested type: ::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry
    struct RealtimeModelListEntry;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Normal.Realtime.ImmutableModelCollection/Normal.Realtime.RealtimeModelListEntry
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct RealtimeModelListEntry/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.UInt32 propertyID
      // Size: 0x4
      // Offset: 0x0
      uint propertyID;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // Padding between fields: propertyID and: model
      char __padding0[0x4] = {};
      // public readonly Normal.Realtime.RealtimeModel model
      // Size: 0x8
      // Offset: 0x8
      ::Normal::Realtime::RealtimeModel* model;
      // Field size check
      static_assert(sizeof(::Normal::Realtime::RealtimeModel*) == 0x8);
      public:
      // Creating value type constructor for type: RealtimeModelListEntry
      constexpr RealtimeModelListEntry(uint propertyID_ = {}, ::Normal::Realtime::RealtimeModel* model_ = {}) noexcept : propertyID{propertyID_}, model{model_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.UInt32 propertyID
      [[deprecated("Use field access instead!")]] uint& dyn_propertyID();
      // Get instance field reference: public readonly Normal.Realtime.RealtimeModel model
      [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeModel*& dyn_model();
      // public System.Void .ctor(System.UInt32 propertyID, Normal.Realtime.RealtimeModel model)
      // Offset: 0x540440
      // ABORTED: conflicts with another method.  RealtimeModelListEntry(uint propertyID, ::Normal::Realtime::RealtimeModel* model);
    }; // Normal.Realtime.ImmutableModelCollection/Normal.Realtime.RealtimeModelListEntry
    #pragma pack(pop)
    static check_size<sizeof(ImmutableModelCollection::RealtimeModelListEntry), 8 + sizeof(::Normal::Realtime::RealtimeModel*)> __Normal_Realtime_ImmutableModelCollection_RealtimeModelListEntrySizeCheck;
    static_assert(sizeof(ImmutableModelCollection::RealtimeModelListEntry) == 0x10);
    public:
    // private readonly System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,Normal.Realtime.RealtimeModel> _modelDict
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::IReadOnlyDictionary_2<uint, ::Normal::Realtime::RealtimeModel*>* modelDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyDictionary_2<uint, ::Normal::Realtime::RealtimeModel*>*) == 0x8);
    // private readonly Normal.Realtime.ImmutableModelCollection/Normal.Realtime.RealtimeModelListEntry[] _modelList
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry> modelList;
    // Field size check
    static_assert(sizeof(::ArrayW<::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint, ::Normal::Realtime::RealtimeModel*>>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint, ::Normal::Realtime::RealtimeModel*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<uint, ::Normal::Realtime::RealtimeModel*>>*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,Normal.Realtime.RealtimeModel> _modelDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyDictionary_2<uint, ::Normal::Realtime::RealtimeModel*>*& dyn__modelDict();
    // Get instance field reference: private readonly Normal.Realtime.ImmutableModelCollection/Normal.Realtime.RealtimeModelListEntry[] _modelList
    [[deprecated("Use field access instead!")]] ::ArrayW<::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry>& dyn__modelList();
    // public Normal.Realtime.RealtimeModel get_Item(System.UInt32 id)
    // Offset: 0x8B9130
    ::Normal::Realtime::RealtimeModel* get_Item(uint id);
    // public System.Void .ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,Normal.Realtime.RealtimeModel> models)
    // Offset: 0x8B8F00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImmutableModelCollection* New_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<uint, ::Normal::Realtime::RealtimeModel*>* models) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::ImmutableModelCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImmutableModelCollection*, creationType>(models)));
    }
    // static private Normal.Realtime.ImmutableModelCollection/Normal.Realtime.RealtimeModelListEntry[] FlattenModelDictionary(System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,Normal.Realtime.RealtimeModel> models)
    // Offset: 0x8B88B0
    static ::ArrayW<::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry> FlattenModelDictionary(::System::Collections::Generic::IReadOnlyDictionary_2<uint, ::Normal::Realtime::RealtimeModel*>* models);
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,Normal.Realtime.RealtimeModel>> GetEnumerator()
    // Offset: 0x8B8B60
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<uint, ::Normal::Realtime::RealtimeModel*>>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x8B8B60
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // protected override System.Int32 WriteLength(Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x8B8D30
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Int32 RealtimeModel::WriteLength(Normal.Realtime.Serialization.StreamContext context)
    int WriteLength(::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x8B8E10
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Write(::Normal::Realtime::Serialization::WriteStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0x8B8BB0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Read(::Normal::Realtime::Serialization::ReadStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
  }; // Normal.Realtime.ImmutableModelCollection
  #pragma pack(pop)
  static check_size<sizeof(ImmutableModelCollection), 152 + sizeof(::ArrayW<::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry>)> __Normal_Realtime_ImmutableModelCollectionSizeCheck;
  static_assert(sizeof(ImmutableModelCollection) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry, "Normal.Realtime", "ImmutableModelCollection/RealtimeModelListEntry");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeModel* (Normal::Realtime::ImmutableModelCollection::*)(uint)>(&Normal::Realtime::ImmutableModelCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::FlattenModelDictionary
// Il2CppName: FlattenModelDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Normal::Realtime::ImmutableModelCollection::RealtimeModelListEntry> (*)(::System::Collections::Generic::IReadOnlyDictionary_2<uint, ::Normal::Realtime::RealtimeModel*>*)>(&Normal::Realtime::ImmutableModelCollection::FlattenModelDictionary)> {
  static const MethodInfo* get() {
    static auto* models = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "FlattenModelDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{models});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<uint, ::Normal::Realtime::RealtimeModel*>>* (Normal::Realtime::ImmutableModelCollection::*)()>(&Normal::Realtime::ImmutableModelCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Normal::Realtime::ImmutableModelCollection::*)()>(&Normal::Realtime::ImmutableModelCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::WriteLength
// Il2CppName: WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::ImmutableModelCollection::*)(::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::ImmutableModelCollection::WriteLength)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::ImmutableModelCollection::*)(::Normal::Realtime::Serialization::WriteStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::ImmutableModelCollection::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::ImmutableModelCollection::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::ImmutableModelCollection::*)(::Normal::Realtime::Serialization::ReadStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::ImmutableModelCollection::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::ImmutableModelCollection*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
