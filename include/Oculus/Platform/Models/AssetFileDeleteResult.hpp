// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDeleteResult
  class AssetFileDeleteResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDeleteResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDeleteResult*, "Oculus.Platform.Models", "AssetFileDeleteResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetFileDeleteResult
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetFileDeleteResult : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 AssetFileId
    // Size: 0x8
    // Offset: 0x10
    uint64_t AssetFileId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 AssetId
    // Size: 0x8
    // Offset: 0x18
    uint64_t AssetId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String Filepath
    // Size: 0x8
    // Offset: 0x20
    ::StringW Filepath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Boolean Success
    // Size: 0x1
    // Offset: 0x28
    bool Success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.UInt64 AssetFileId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetFileId();
    // Get instance field reference: public readonly System.UInt64 AssetId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetId();
    // Get instance field reference: public readonly System.String Filepath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Filepath();
    // Get instance field reference: public readonly System.Boolean Success
    [[deprecated("Use field access instead!")]] bool& dyn_Success();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x8375A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileDeleteResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AssetFileDeleteResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileDeleteResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetFileDeleteResult
  #pragma pack(pop)
  static check_size<sizeof(AssetFileDeleteResult), 40 + sizeof(bool)> __Oculus_Platform_Models_AssetFileDeleteResultSizeCheck;
  static_assert(sizeof(AssetFileDeleteResult) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AssetFileDeleteResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
