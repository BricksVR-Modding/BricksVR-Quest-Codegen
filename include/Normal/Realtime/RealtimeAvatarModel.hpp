// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.RealtimeModel
#include "Normal/Realtime/RealtimeModel.hpp"
// Including type: Normal.Realtime.RealtimeAvatar/Normal.Realtime.DeviceType
#include "Normal/Realtime/RealtimeAvatar_DeviceType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: RealtimeAvatarModel
  class RealtimeAvatarModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeAvatarModel);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeAvatarModel*, "Normal.Realtime", "RealtimeAvatarModel");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeAvatarModel
  // [TokenAttribute] Offset: FFFFFFFF
  // [RealtimeModelAttribute] Offset: D4660
  class RealtimeAvatarModel : public ::Normal::Realtime::RealtimeModel {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    // Nested type: ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<T>
    template<typename T>
    class PropertyChangedHandler_1;
    // Nested type: ::Normal::Realtime::RealtimeAvatarModel::PropertyID
    struct PropertyID;
    public:
    // [RealtimePropertyAttribute] Offset: 0xF66B0
    // private Normal.Realtime.RealtimeAvatar/Normal.Realtime.DeviceType _deviceType
    // Size: 0x4
    // Offset: 0x90
    ::Normal::Realtime::RealtimeAvatar::DeviceType deviceType;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatar::DeviceType) == 0x4);
    // Padding between fields: deviceType and: deviceModel
    char __padding0[0x4] = {};
    // [RealtimePropertyAttribute] Offset: 0xF66E0
    // private System.String _deviceModel
    // Size: 0x8
    // Offset: 0x98
    ::StringW deviceModel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [RealtimePropertyAttribute] Offset: 0xF04B0
    // private System.Boolean _headActive
    // Size: 0x1
    // Offset: 0xA0
    bool headActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [RealtimePropertyAttribute] Offset: 0xF04E0
    // private System.Boolean _leftHandActive
    // Size: 0x1
    // Offset: 0xA1
    bool leftHandActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [RealtimePropertyAttribute] Offset: 0xF0510
    // private System.Boolean _rightHandActive
    // Size: 0x1
    // Offset: 0xA2
    bool rightHandActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rightHandActive and: headActiveDidChange
    char __padding4[0x5] = {};
    // private Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> headActiveDidChange
    // Size: 0x8
    // Offset: 0xA8
    ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* headActiveDidChange;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*) == 0x8);
    // private Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> leftHandActiveDidChange
    // Size: 0x8
    // Offset: 0xB0
    ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* leftHandActiveDidChange;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*) == 0x8);
    // private Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> rightHandActiveDidChange
    // Size: 0x8
    // Offset: 0xB8
    ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* rightHandActiveDidChange;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.UInt32> _deviceTypeProperty
    // Size: 0x8
    // Offset: 0xC0
    ::Normal::Realtime::ReliableProperty_1<uint>* deviceTypeProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<uint>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.String> _deviceModelProperty
    // Size: 0x8
    // Offset: 0xC8
    ::Normal::Realtime::ReliableProperty_1<::StringW>* deviceModelProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<::StringW>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.Boolean> _headActiveProperty
    // Size: 0x8
    // Offset: 0xD0
    ::Normal::Realtime::ReliableProperty_1<bool>* headActiveProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<bool>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.Boolean> _leftHandActiveProperty
    // Size: 0x8
    // Offset: 0xD8
    ::Normal::Realtime::ReliableProperty_1<bool>* leftHandActiveProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<bool>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<System.Boolean> _rightHandActiveProperty
    // Size: 0x8
    // Offset: 0xE0
    ::Normal::Realtime::ReliableProperty_1<bool>* rightHandActiveProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<bool>*) == 0x8);
    public:
    // Get instance field reference: private Normal.Realtime.RealtimeAvatar/Normal.Realtime.DeviceType _deviceType
    [[deprecated]] ::Normal::Realtime::RealtimeAvatar::DeviceType& dyn__deviceType();
    // Get instance field reference: private System.String _deviceModel
    [[deprecated]] ::StringW& dyn__deviceModel();
    // Get instance field reference: private System.Boolean _headActive
    [[deprecated]] bool& dyn__headActive();
    // Get instance field reference: private System.Boolean _leftHandActive
    [[deprecated]] bool& dyn__leftHandActive();
    // Get instance field reference: private System.Boolean _rightHandActive
    [[deprecated]] bool& dyn__rightHandActive();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> headActiveDidChange
    [[deprecated]] ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*& dyn_headActiveDidChange();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> leftHandActiveDidChange
    [[deprecated]] ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*& dyn_leftHandActiveDidChange();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> rightHandActiveDidChange
    [[deprecated]] ::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*& dyn_rightHandActiveDidChange();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.UInt32> _deviceTypeProperty
    [[deprecated]] ::Normal::Realtime::ReliableProperty_1<uint>*& dyn__deviceTypeProperty();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.String> _deviceModelProperty
    [[deprecated]] ::Normal::Realtime::ReliableProperty_1<::StringW>*& dyn__deviceModelProperty();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.Boolean> _headActiveProperty
    [[deprecated]] ::Normal::Realtime::ReliableProperty_1<bool>*& dyn__headActiveProperty();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.Boolean> _leftHandActiveProperty
    [[deprecated]] ::Normal::Realtime::ReliableProperty_1<bool>*& dyn__leftHandActiveProperty();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<System.Boolean> _rightHandActiveProperty
    [[deprecated]] ::Normal::Realtime::ReliableProperty_1<bool>*& dyn__rightHandActiveProperty();
    // public Normal.Realtime.RealtimeAvatar/Normal.Realtime.DeviceType get_deviceType()
    // Offset: 0xBDE250
    ::Normal::Realtime::RealtimeAvatar::DeviceType get_deviceType();
    // public System.Void set_deviceType(Normal.Realtime.RealtimeAvatar/Normal.Realtime.DeviceType value)
    // Offset: 0xBDE5B0
    void set_deviceType(::Normal::Realtime::RealtimeAvatar::DeviceType value);
    // public System.String get_deviceModel()
    // Offset: 0xBDE210
    ::StringW get_deviceModel();
    // public System.Void set_deviceModel(System.String value)
    // Offset: 0xBDE530
    void set_deviceModel(::StringW value);
    // public System.Boolean get_headActive()
    // Offset: 0xBDE290
    bool get_headActive();
    // public System.Void set_headActive(System.Boolean value)
    // Offset: 0xBDE620
    void set_headActive(bool value);
    // public System.Boolean get_leftHandActive()
    // Offset: 0xBDE2D0
    bool get_leftHandActive();
    // public System.Void set_leftHandActive(System.Boolean value)
    // Offset: 0xBDE6A0
    void set_leftHandActive(bool value);
    // public System.Boolean get_rightHandActive()
    // Offset: 0xBDE310
    bool get_rightHandActive();
    // public System.Void set_rightHandActive(System.Boolean value)
    // Offset: 0xBDE720
    void set_rightHandActive(bool value);
    // public System.Void add_headActiveDidChange(Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> value)
    // Offset: 0xBDE030
    void add_headActiveDidChange(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* value);
    // public System.Void remove_headActiveDidChange(Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> value)
    // Offset: 0xBDE350
    void remove_headActiveDidChange(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* value);
    // public System.Void add_leftHandActiveDidChange(Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> value)
    // Offset: 0xBDE0D0
    void add_leftHandActiveDidChange(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* value);
    // public System.Void remove_leftHandActiveDidChange(Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> value)
    // Offset: 0xBDE3F0
    void remove_leftHandActiveDidChange(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* value);
    // public System.Void add_rightHandActiveDidChange(Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> value)
    // Offset: 0xBDE170
    void add_rightHandActiveDidChange(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* value);
    // public System.Void remove_rightHandActiveDidChange(Normal.Realtime.RealtimeAvatarModel/Normal.Realtime.PropertyChangedHandler`1<System.Boolean> value)
    // Offset: 0xBDE490
    void remove_rightHandActiveDidChange(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>* value);
    // private System.Void FireHeadActiveDidChange(System.Boolean value)
    // Offset: 0xBDD3C0
    void FireHeadActiveDidChange(bool value);
    // private System.Void FireLeftHandActiveDidChange(System.Boolean value)
    // Offset: 0xBDD460
    void FireLeftHandActiveDidChange(bool value);
    // private System.Void FireRightHandActiveDidChange(System.Boolean value)
    // Offset: 0xBDD500
    void FireRightHandActiveDidChange(bool value);
    // private System.Void UpdateBackingFields()
    // Offset: 0xBDDA60
    void UpdateBackingFields();
    // public System.Void .ctor()
    // Offset: 0xBDDEA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeAvatarModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeAvatarModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeAvatarModel*, creationType>()));
    }
    // protected override System.Void OnParentReplaced(Normal.Realtime.RealtimeModel previousParent, Normal.Realtime.RealtimeModel currentParent)
    // Offset: 0xBDD5A0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::OnParentReplaced(Normal.Realtime.RealtimeModel previousParent, Normal.Realtime.RealtimeModel currentParent)
    void OnParentReplaced(::Normal::Realtime::RealtimeModel* previousParent, ::Normal::Realtime::RealtimeModel* currentParent);
    // protected override System.Int32 WriteLength(Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xBDDB80
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Int32 RealtimeModel::WriteLength(Normal.Realtime.Serialization.StreamContext context)
    int WriteLength(::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xBDDCF0
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Write(::Normal::Realtime::Serialization::WriteStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // protected override System.Void Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xBDD650
    // Implemented from: Normal.Realtime.RealtimeModel
    // Base method: System.Void RealtimeModel::Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    void Read(::Normal::Realtime::Serialization::ReadStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
  }; // Normal.Realtime.RealtimeAvatarModel
  #pragma pack(pop)
  static check_size<sizeof(RealtimeAvatarModel), 224 + sizeof(::Normal::Realtime::ReliableProperty_1<bool>*)> __Normal_Realtime_RealtimeAvatarModelSizeCheck;
  static_assert(sizeof(RealtimeAvatarModel) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::get_deviceType
// Il2CppName: get_deviceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeAvatar::DeviceType (Normal::Realtime::RealtimeAvatarModel::*)()>(&Normal::Realtime::RealtimeAvatarModel::get_deviceType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "get_deviceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::set_deviceType
// Il2CppName: set_deviceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatar::DeviceType)>(&Normal::Realtime::RealtimeAvatarModel::set_deviceType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatar/DeviceType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "set_deviceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::get_deviceModel
// Il2CppName: get_deviceModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Normal::Realtime::RealtimeAvatarModel::*)()>(&Normal::Realtime::RealtimeAvatarModel::get_deviceModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "get_deviceModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::set_deviceModel
// Il2CppName: set_deviceModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::StringW)>(&Normal::Realtime::RealtimeAvatarModel::set_deviceModel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "set_deviceModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::get_headActive
// Il2CppName: get_headActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeAvatarModel::*)()>(&Normal::Realtime::RealtimeAvatarModel::get_headActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "get_headActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::set_headActive
// Il2CppName: set_headActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(bool)>(&Normal::Realtime::RealtimeAvatarModel::set_headActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "set_headActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::get_leftHandActive
// Il2CppName: get_leftHandActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeAvatarModel::*)()>(&Normal::Realtime::RealtimeAvatarModel::get_leftHandActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "get_leftHandActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::set_leftHandActive
// Il2CppName: set_leftHandActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(bool)>(&Normal::Realtime::RealtimeAvatarModel::set_leftHandActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "set_leftHandActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::get_rightHandActive
// Il2CppName: get_rightHandActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeAvatarModel::*)()>(&Normal::Realtime::RealtimeAvatarModel::get_rightHandActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "get_rightHandActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::set_rightHandActive
// Il2CppName: set_rightHandActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(bool)>(&Normal::Realtime::RealtimeAvatarModel::set_rightHandActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "set_rightHandActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::add_headActiveDidChange
// Il2CppName: add_headActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*)>(&Normal::Realtime::RealtimeAvatarModel::add_headActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "add_headActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::remove_headActiveDidChange
// Il2CppName: remove_headActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*)>(&Normal::Realtime::RealtimeAvatarModel::remove_headActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "remove_headActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::add_leftHandActiveDidChange
// Il2CppName: add_leftHandActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*)>(&Normal::Realtime::RealtimeAvatarModel::add_leftHandActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "add_leftHandActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::remove_leftHandActiveDidChange
// Il2CppName: remove_leftHandActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*)>(&Normal::Realtime::RealtimeAvatarModel::remove_leftHandActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "remove_leftHandActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::add_rightHandActiveDidChange
// Il2CppName: add_rightHandActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*)>(&Normal::Realtime::RealtimeAvatarModel::add_rightHandActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "add_rightHandActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::remove_rightHandActiveDidChange
// Il2CppName: remove_rightHandActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeAvatarModel::PropertyChangedHandler_1<bool>*)>(&Normal::Realtime::RealtimeAvatarModel::remove_rightHandActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarModel/PropertyChangedHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "remove_rightHandActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::FireHeadActiveDidChange
// Il2CppName: FireHeadActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(bool)>(&Normal::Realtime::RealtimeAvatarModel::FireHeadActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "FireHeadActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::FireLeftHandActiveDidChange
// Il2CppName: FireLeftHandActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(bool)>(&Normal::Realtime::RealtimeAvatarModel::FireLeftHandActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "FireLeftHandActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::FireRightHandActiveDidChange
// Il2CppName: FireRightHandActiveDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(bool)>(&Normal::Realtime::RealtimeAvatarModel::FireRightHandActiveDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "FireRightHandActiveDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::UpdateBackingFields
// Il2CppName: UpdateBackingFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)()>(&Normal::Realtime::RealtimeAvatarModel::UpdateBackingFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "UpdateBackingFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::OnParentReplaced
// Il2CppName: OnParentReplaced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::RealtimeModel*, ::Normal::Realtime::RealtimeModel*)>(&Normal::Realtime::RealtimeAvatarModel::OnParentReplaced)> {
  static const MethodInfo* get() {
    static auto* previousParent = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    static auto* currentParent = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "OnParentReplaced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousParent, currentParent});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::WriteLength
// Il2CppName: WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::RealtimeAvatarModel::WriteLength)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::Serialization::WriteStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::RealtimeAvatarModel::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarModel::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarModel::*)(::Normal::Realtime::Serialization::ReadStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::RealtimeAvatarModel::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarModel*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
