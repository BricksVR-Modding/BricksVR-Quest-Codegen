// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: CallbackType
  struct CallbackType;
}
// Completed forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: MusicPlayerWantsLooped_t
  struct MusicPlayerWantsLooped_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::MusicPlayerWantsLooped_t, "Steamworks.Data", "MusicPlayerWantsLooped_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x1
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.MusicPlayerWantsLooped_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct MusicPlayerWantsLooped_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.Boolean Looped
    // Size: 0x1
    // Offset: 0x0
    bool Looped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: MusicPlayerWantsLooped_t
    constexpr MusicPlayerWantsLooped_t(bool Looped_ = {}) noexcept : Looped{Looped_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Looped;
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.Boolean Looped
    [[deprecated("Use field access instead!")]] bool& dyn_Looped();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x463820
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x463780
    static void _cctor();
  }; // Steamworks.Data.MusicPlayerWantsLooped_t
  #pragma pack(pop)
  static check_size<sizeof(MusicPlayerWantsLooped_t), 0 + sizeof(bool)> __Steamworks_Data_MusicPlayerWantsLooped_tSizeCheck;
  static_assert(sizeof(MusicPlayerWantsLooped_t) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::MusicPlayerWantsLooped_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::MusicPlayerWantsLooped_t::*)()>(&Steamworks::Data::MusicPlayerWantsLooped_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::MusicPlayerWantsLooped_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::MusicPlayerWantsLooped_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::MusicPlayerWantsLooped_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::MusicPlayerWantsLooped_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
