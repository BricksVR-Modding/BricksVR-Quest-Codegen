// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.Serialization.IStreamWriter
#include "Normal/Realtime/Serialization/IStreamWriter.hpp"
// Including type: Normal.Realtime.Serialization.IStreamReader
#include "Normal/Realtime/Serialization/IStreamReader.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime::Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: IMetaModelExtension
  class IMetaModelExtension;
  // Skipping declaration: LifetimeFlags because it is already included!
  // Forward declaring type: StreamContext
  struct StreamContext;
  // Forward declaring type: WriteStream
  class WriteStream;
  // Forward declaring type: ReadStream
  class ReadStream;
}
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: ReliableProperty`1<T>
  template<typename T>
  class ReliableProperty_1;
}
// Completed forward declares
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Forward declaring type: MetaModel
  class MetaModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Serialization::MetaModel);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::MetaModel*, "Normal.Realtime.Serialization", "MetaModel");
// Type namespace: Normal.Realtime.Serialization
namespace Normal::Realtime::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Serialization.MetaModel
  // [TokenAttribute] Offset: FFFFFFFF
  class MetaModel : public ::Il2CppObject/*, public ::Normal::Realtime::Serialization::IStreamWriter, public ::Normal::Realtime::Serialization::IStreamReader*/ {
    public:
    // Nested type: ::Normal::Realtime::Serialization::MetaModel::OwnerID
    struct OwnerID;
    // Nested type: ::Normal::Realtime::Serialization::MetaModel::OwnerIDSerializer
    struct OwnerIDSerializer;
    // Nested type: ::Normal::Realtime::Serialization::MetaModel::LifetimeFlagsSerializer
    struct LifetimeFlagsSerializer;
    // Nested type: ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags
    struct LifetimeFlags;
    // Nested type: ::Normal::Realtime::Serialization::MetaModel::PropertyID
    struct PropertyID;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID
    // [TokenAttribute] Offset: FFFFFFFF
    struct OwnerID/*, public ::System::ValueType, public ::System::IEquatable_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>*/ {
      public:
      public:
      // public System.Int32 value
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: OwnerID
      constexpr OwnerID(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::IEquatable_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>
      operator ::System::IEquatable_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>() noexcept {
        return *reinterpret_cast<::System::IEquatable_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // Get instance field reference: public System.Int32 value
      int& dyn_value();
      // public System.Boolean Equals(Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID other)
      // Offset: 0xA6C2A8
      bool Equals(::Normal::Realtime::Serialization::MetaModel::OwnerID other);
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0xA6C2B8
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
      // public override System.Int32 GetHashCode()
      // Offset: 0xA6C340
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
      // public override System.String ToString()
      // Offset: 0xA6C360
      // Implemented from: System.ValueType
      // Base method: System.String ValueType::ToString()
      ::StringW ToString();
    }; // Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID
    #pragma pack(pop)
    static check_size<sizeof(MetaModel::OwnerID), 0 + sizeof(int)> __Normal_Realtime_Serialization_MetaModel_OwnerIDSizeCheck;
    static_assert(sizeof(MetaModel::OwnerID) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct LifetimeFlags/*, public ::System::Enum*/ {
      public:
      public:
      // public System.UInt32 value__
      // Size: 0x4
      // Offset: 0x0
      uint value;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: LifetimeFlags
      constexpr LifetimeFlags(uint value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator uint
      constexpr operator uint() const noexcept {
        return value;
      }
      // static field const value: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags Default
      static constexpr const uint Default = 0u;
      // Get static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags Default
      static ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags _get_Default();
      // Set static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags Default
      static void _set_Default(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags value);
      // static field const value: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenOwnerOrLastClientLeaves
      static constexpr const uint DestroyWhenOwnerOrLastClientLeaves = 1u;
      // Get static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenOwnerOrLastClientLeaves
      static ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags _get_DestroyWhenOwnerOrLastClientLeaves();
      // Set static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenOwnerOrLastClientLeaves
      static void _set_DestroyWhenOwnerOrLastClientLeaves(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags value);
      // static field const value: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags PreventOwnershipTakeover
      static constexpr const uint PreventOwnershipTakeover = 2u;
      // Get static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags PreventOwnershipTakeover
      static ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags _get_PreventOwnershipTakeover();
      // Set static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags PreventOwnershipTakeover
      static void _set_PreventOwnershipTakeover(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags value);
      // static field const value: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenLastClientLeaves
      static constexpr const uint DestroyWhenLastClientLeaves = 4u;
      // Get static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenLastClientLeaves
      static ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags _get_DestroyWhenLastClientLeaves();
      // Set static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenLastClientLeaves
      static void _set_DestroyWhenLastClientLeaves(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags value);
      // static field const value: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenOwnerLeaves
      static constexpr const uint DestroyWhenOwnerLeaves = 8u;
      // Get static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenOwnerLeaves
      static ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags _get_DestroyWhenOwnerLeaves();
      // Set static field: static public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags DestroyWhenOwnerLeaves
      static void _set_DestroyWhenOwnerLeaves(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags value);
      // Get instance field reference: public System.UInt32 value__
      uint& dyn_value__();
    }; // Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags
    #pragma pack(pop)
    static check_size<sizeof(MetaModel::LifetimeFlags), 0 + sizeof(uint)> __Normal_Realtime_Serialization_MetaModel_LifetimeFlagsSizeCheck;
    static_assert(sizeof(MetaModel::LifetimeFlags) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Normal.Realtime.ReliableProperty`1<Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID> _ownerIDProperty
    // Size: 0x8
    // Offset: 0x10
    ::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>* ownerIDProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>*) == 0x8);
    // private Normal.Realtime.ReliableProperty`1<Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags> _lifetimeFlagsProperty
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::LifetimeFlags>* lifetimeFlagsProperty;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::LifetimeFlags>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::Serialization::IStreamWriter
    operator ::Normal::Realtime::Serialization::IStreamWriter() noexcept {
      return *reinterpret_cast<::Normal::Realtime::Serialization::IStreamWriter*>(this);
    }
    // Creating interface conversion operator: operator ::Normal::Realtime::Serialization::IStreamReader
    operator ::Normal::Realtime::Serialization::IStreamReader() noexcept {
      return *reinterpret_cast<::Normal::Realtime::Serialization::IStreamReader*>(this);
    }
    // static field const value: static public System.UInt32 ReservedPropertyID
    static constexpr const uint ReservedPropertyID = 0u;
    // Get static field: static public System.UInt32 ReservedPropertyID
    static uint _get_ReservedPropertyID();
    // Set static field: static public System.UInt32 ReservedPropertyID
    static void _set_ReservedPropertyID(uint value);
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID> _ownerIDProperty
    ::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::OwnerID>*& dyn__ownerIDProperty();
    // Get instance field reference: private Normal.Realtime.ReliableProperty`1<Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags> _lifetimeFlagsProperty
    ::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::LifetimeFlags>*& dyn__lifetimeFlagsProperty();
    // public System.Int32 get_ownerID()
    // Offset: 0xA6B998
    int get_ownerID();
    // public System.Void set_ownerID(System.Int32 value)
    // Offset: 0xA6B9E8
    void set_ownerID(int value);
    // public Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags get_lifetimeFlags()
    // Offset: 0xA6BA58
    ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags get_lifetimeFlags();
    // public System.Void set_lifetimeFlags(Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags value)
    // Offset: 0xA6BAA8
    void set_lifetimeFlags(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags value);
    // protected System.UInt32 get_modelType()
    // Offset: 0xA6BB10
    uint get_modelType();
    // protected Normal.Realtime.Serialization.IMetaModelExtension get_modelExtension()
    // Offset: 0xA6BB18
    ::Normal::Realtime::Serialization::IMetaModelExtension* get_modelExtension();
    // static private System.Void .cctor()
    // Offset: 0xA6B920
    static void _cctor();
    // public System.Void .ctor(System.Int32 ownerID, Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.LifetimeFlags lifetimeFlags)
    // Offset: 0xA6210C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetaModel* New_ctor(int ownerID, ::Normal::Realtime::Serialization::MetaModel::LifetimeFlags lifetimeFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::MetaModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetaModel*, creationType>(ownerID, lifetimeFlags)));
    }
    // private System.Int32 Normal.Realtime.Serialization.IStreamWriter.WriteLength(Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xA6BB20
    int Normal_Realtime_Serialization_IStreamWriter_WriteLength(::Normal::Realtime::Serialization::StreamContext context);
    // private System.Void Normal.Realtime.Serialization.IStreamWriter.Write(Normal.Realtime.Serialization.WriteStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xA6BD10
    void Normal_Realtime_Serialization_IStreamWriter_Write(::Normal::Realtime::Serialization::WriteStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // private System.Void Normal.Realtime.Serialization.IStreamReader.Read(Normal.Realtime.Serialization.ReadStream stream, Normal.Realtime.Serialization.StreamContext context)
    // Offset: 0xA6BE80
    void Normal_Realtime_Serialization_IStreamReader_Read(::Normal::Realtime::Serialization::ReadStream* stream, ::Normal::Realtime::Serialization::StreamContext context);
    // public System.Void .ctor()
    // Offset: 0xA62064
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetaModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Serialization::MetaModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetaModel*, creationType>()));
    }
  }; // Normal.Realtime.Serialization.MetaModel
  #pragma pack(pop)
  static check_size<sizeof(MetaModel), 24 + sizeof(::Normal::Realtime::ReliableProperty_1<::Normal::Realtime::Serialization::MetaModel::LifetimeFlags>*)> __Normal_Realtime_Serialization_MetaModelSizeCheck;
  static_assert(sizeof(MetaModel) == 0x20);
  // static public System.Boolean op_Equality(Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID left, Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID right)
  // Offset: 0xA6C348
  bool operator ==(const ::Normal::Realtime::Serialization::MetaModel::OwnerID& left, const ::Normal::Realtime::Serialization::MetaModel::OwnerID& right);
  // static public System.Boolean op_Inequality(Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID left, Normal.Realtime.Serialization.MetaModel/Normal.Realtime.Serialization.OwnerID right)
  // Offset: 0xA6C354
  bool operator !=(const ::Normal::Realtime::Serialization::MetaModel::OwnerID& left, const ::Normal::Realtime::Serialization::MetaModel::OwnerID& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags, "Normal.Realtime.Serialization", "MetaModel/LifetimeFlags");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Serialization::MetaModel::OwnerID, "Normal.Realtime.Serialization", "MetaModel/OwnerID");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::get_ownerID
// Il2CppName: get_ownerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::MetaModel::*)()>(&Normal::Realtime::Serialization::MetaModel::get_ownerID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "get_ownerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::set_ownerID
// Il2CppName: set_ownerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::MetaModel::*)(int)>(&Normal::Realtime::Serialization::MetaModel::set_ownerID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "set_ownerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::get_lifetimeFlags
// Il2CppName: get_lifetimeFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::MetaModel::LifetimeFlags (Normal::Realtime::Serialization::MetaModel::*)()>(&Normal::Realtime::Serialization::MetaModel::get_lifetimeFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "get_lifetimeFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::set_lifetimeFlags
// Il2CppName: set_lifetimeFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::MetaModel::*)(::Normal::Realtime::Serialization::MetaModel::LifetimeFlags)>(&Normal::Realtime::Serialization::MetaModel::set_lifetimeFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "MetaModel/LifetimeFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "set_lifetimeFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::get_modelType
// Il2CppName: get_modelType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Normal::Realtime::Serialization::MetaModel::*)()>(&Normal::Realtime::Serialization::MetaModel::get_modelType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "get_modelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::get_modelExtension
// Il2CppName: get_modelExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Serialization::IMetaModelExtension* (Normal::Realtime::Serialization::MetaModel::*)()>(&Normal::Realtime::Serialization::MetaModel::get_modelExtension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "get_modelExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Normal::Realtime::Serialization::MetaModel::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::Normal_Realtime_Serialization_IStreamWriter_WriteLength
// Il2CppName: Normal.Realtime.Serialization.IStreamWriter.WriteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::Serialization::MetaModel::*)(::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::Serialization::MetaModel::Normal_Realtime_Serialization_IStreamWriter_WriteLength)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "Normal.Realtime.Serialization.IStreamWriter.WriteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::Normal_Realtime_Serialization_IStreamWriter_Write
// Il2CppName: Normal.Realtime.Serialization.IStreamWriter.Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::MetaModel::*)(::Normal::Realtime::Serialization::WriteStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::Serialization::MetaModel::Normal_Realtime_Serialization_IStreamWriter_Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "WriteStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "Normal.Realtime.Serialization.IStreamWriter.Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::Normal_Realtime_Serialization_IStreamReader_Read
// Il2CppName: Normal.Realtime.Serialization.IStreamReader.Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::Serialization::MetaModel::*)(::Normal::Realtime::Serialization::ReadStream*, ::Normal::Realtime::Serialization::StreamContext)>(&Normal::Realtime::Serialization::MetaModel::Normal_Realtime_Serialization_IStreamReader_Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "ReadStream")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Normal.Realtime.Serialization", "StreamContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Serialization::MetaModel*), "Normal.Realtime.Serialization.IStreamReader.Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, context});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Serialization::MetaModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
