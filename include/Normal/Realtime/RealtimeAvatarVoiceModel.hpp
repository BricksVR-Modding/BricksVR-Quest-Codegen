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
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarVoiceModel
  class RealtimeAvatarVoiceModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeAvatarVoiceModel);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeAvatarVoiceModel*, "Normal.Realtime", "RealtimeAvatarVoiceModel");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeAvatarVoiceModel
  // [TokenAttribute] Offset: FFFFFFFF
  // [RealtimeModelAttribute] Offset: D4660
  class RealtimeAvatarVoiceModel : public ::Normal::Realtime::RealtimeModel {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    // Nested type: ::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<T>
    template<typename T>
    class PropertyChangedHandler_1;
    // Nested type: ::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyID
    struct PropertyID;
    public:
    // [RealtimePropertyAttribute] Offset: 0xF03F0
    // private System.Int32 _clientID
    // Size: 0x4
    // Offset: 0x90
    int clientID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RealtimePropertyAttribute] Offset: 0xF0420
    // private System.Int32 _streamID
    // Size: 0x4
    // Offset: 0x94
    int streamID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> clientIDDidChange
    // Size: 0x8
    // Offset: 0x98
    ::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>* clientIDDidChange;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*) == 0x8);
    // private Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> streamIDDidChange
    // Size: 0x8
    // Offset: 0xA0
    ::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>* streamIDDidChange;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.Int32> _clientIDProperty
    // Size: 0x8
    // Offset: 0xA8
    ::Normal::Realtime::ReliableProperty_1<int>* clientIDProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<int>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.Int32> _streamIDProperty
    // Size: 0x8
    // Offset: 0xB0
    ::Normal::Realtime::ReliableProperty_1<int>* streamIDProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<int>*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _clientID
    [[deprecated("Use field access instead!")]] int& dyn__clientID();
    // Get instance field reference: private System.Int32 _streamID
    [[deprecated("Use field access instead!")]] int& dyn__streamID();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> clientIDDidChange
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*& dyn_clientIDDidChange();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> streamIDDidChange
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*& dyn_streamIDDidChange();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.Int32> _clientIDProperty
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::ReliableProperty_1<int>*& dyn__clientIDProperty();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.Int32> _streamIDProperty
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::ReliableProperty_1<int>*& dyn__streamIDProperty();
    // public System.Int32 get_clientID()
    // Offset: 0xBDEFA0
    int get_clientID();
    // public System.Void set_clientID(System.Int32 value)
    // Offset: 0xBDF160
    void set_clientID(int value);
    // public System.Int32 get_streamID()
    // Offset: 0xBDEFE0
    int get_streamID();
    // public System.Void set_streamID(System.Int32 value)
    // Offset: 0xBDF1E0
    void set_streamID(int value);
    // public System.Void add_clientIDDidChange(Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> value)
    // Offset: 0xBDEE60
    void add_clientIDDidChange(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>* value);
    // public System.Void remove_clientIDDidChange(Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> value)
    // Offset: 0xBDF020
    void remove_clientIDDidChange(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>* value);
    // public System.Void add_streamIDDidChange(Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> value)
    // Offset: 0xBDEF00
    void add_streamIDDidChange(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>* value);
    // public System.Void remove_streamIDDidChange(Normal.Realtime.RealtimeAvatarVoiceModel/Normal.Realtime.PropertyChangedHandler`1<System.Int32> value)
    // Offset: 0xBDF0C0
    void remove_streamIDDidChange(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>* value);
    // public System.Void .ctor()
    // Offset: 0xBDED80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeAvatarVoiceModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeAvatarVoiceModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeAvatarVoiceModel*, creationType>()));
    }
    // private System.Void FireClientIDDidChange(System.Int32 value)
    // Offset: 0xBDE7A0
    void FireClientIDDidChange(int value);
    // private System.Void FireStreamIDDidChange(System.Int32 value)
    // Offset: 0xBDE840
    void FireStreamIDDidChange(int value);
    // private System.Void UpdateBackingFields()
    // Offset: 0xBDEB60
    void UpdateBackingFields();
    // protected override System.Void OnParentReplaced(Normal.Realtime.RealtimeModel previousParent, Normal.Realtime.RealtimeModel currentParent)
    // Offset: 0xBDE8E0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::OnParentReplaced(Normal.Realtime.RealtimeModel previousParent, Normal.Realtime.RealtimeModel currentParent)
    void OnParentReplaced(::Normal::Realtime::RealtimeModel* previousParent, ::Normal::Realtime::RealtimeModel* currentParent);
    // protected override System.Int32 WriteLength(Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xBDEBE0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Int32 RealtimeModel::WriteLength(Normal.Realtime.Serialization.StreamContext context)
    int WriteLength(::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xBDEC90
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Write(::Normal::Realtime::Serialization::WriteStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xBDE940
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Read(::Normal::Realtime::Serialization::ReadStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
  }; // Normal.Realtime.RealtimeAvatarVoiceModel
  #pragma pack(pop)
  static check_size<sizeof(RealtimeAvatarVoiceModel), 176 + sizeof(::Normal::Realtime::ReliableProperty_1<int>*)> __Normal_Realtime_RealtimeAvatarVoiceModelSizeCheck;
  static_assert(sizeof(RealtimeAvatarVoiceModel) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::get_clientID
// Il2CppName: get_clientID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::RealtimeAvatarVoiceModel::*)()>(&Normal::Realtime::RealtimeAvatarVoiceModel::get_clientID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "get_clientID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::set_clientID
// Il2CppName: set_clientID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(int)>(&Normal::Realtime::RealtimeAvatarVoiceModel::set_clientID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "set_clientID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::get_streamID
// Il2CppName: get_streamID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::RealtimeAvatarVoiceModel::*)()>(&Normal::Realtime::RealtimeAvatarVoiceModel::get_streamID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "get_streamID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::set_streamID
// Il2CppName: set_streamID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(int)>(&Normal::Realtime::RealtimeAvatarVoiceModel::set_streamID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "set_streamID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::add_clientIDDidChange
// Il2CppName: add_clientIDDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*)>(&Normal::Realtime::RealtimeAvatarVoiceModel::add_clientIDDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarVoiceModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "add_clientIDDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::remove_clientIDDidChange
// Il2CppName: remove_clientIDDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*)>(&Normal::Realtime::RealtimeAvatarVoiceModel::remove_clientIDDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarVoiceModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "remove_clientIDDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::add_streamIDDidChange
// Il2CppName: add_streamIDDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*)>(&Normal::Realtime::RealtimeAvatarVoiceModel::add_streamIDDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarVoiceModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "add_streamIDDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::remove_streamIDDidChange
// Il2CppName: remove_streamIDDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::RealtimeAvatarVoiceModel::PropertyChangedHandler_1<int>*)>(&Normal::Realtime::RealtimeAvatarVoiceModel::remove_streamIDDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarVoiceModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "remove_streamIDDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::FireClientIDDidChange
// Il2CppName: FireClientIDDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(int)>(&Normal::Realtime::RealtimeAvatarVoiceModel::FireClientIDDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "FireClientIDDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::FireStreamIDDidChange
// Il2CppName: FireStreamIDDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(int)>(&Normal::Realtime::RealtimeAvatarVoiceModel::FireStreamIDDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "FireStreamIDDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::UpdateBackingFields
// Il2CppName: UpdateBackingFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)()>(&Normal::Realtime::RealtimeAvatarVoiceModel::UpdateBackingFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "UpdateBackingFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::OnParentReplaced
// Il2CppName: OnParentReplaced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::RealtimeModel*, ::Normal::Realtime::RealtimeModel*)>(&Normal::Realtime::RealtimeAvatarVoiceModel::OnParentReplaced)> {
  static const MethodInfo* get() {
    static auto* previousParent = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    static auto* currentParent = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "OnParentReplaced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousParent, currentParent});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::WriteLength
// Il2CppName: WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::RealtimeAvatarVoiceModel::WriteLength)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::Serialization::WriteStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::RealtimeAvatarVoiceModel::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarVoiceModel::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarVoiceModel::*)(::Normal::Realtime::Serialization::ReadStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::RealtimeAvatarVoiceModel::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarVoiceModel*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
