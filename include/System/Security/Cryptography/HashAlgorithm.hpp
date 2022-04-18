// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithm*, "System.Security.Cryptography", "HashAlgorithm");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HashAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class HashAlgorithm : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected System.Int32 HashSizeValue
    // Size: 0x4
    // Offset: 0x10
    int HashSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: HashSizeValue and: HashValue
    char __padding0[0x4] = {};
    // protected internal System.Byte[] HashValue
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> HashValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Int32 State
    // Size: 0x4
    // Offset: 0x20
    int State;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_bDisposed
    // Size: 0x1
    // Offset: 0x24
    bool m_bDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: protected System.Int32 HashSizeValue
    [[deprecated("Use field access instead!")]] int& dyn_HashSizeValue();
    // Get instance field reference: protected internal System.Byte[] HashValue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_HashValue();
    // Get instance field reference: protected System.Int32 State
    [[deprecated("Use field access instead!")]] int& dyn_State();
    // Get instance field reference: private System.Boolean m_bDisposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_bDisposed();
    // public System.Byte[] ComputeHash(System.Byte[] buffer)
    // Offset: 0x521C00
    ::ArrayW<uint8_t> ComputeHash(::ArrayW<uint8_t> buffer);
    // public System.Void Dispose()
    // Offset: 0x521DA0
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x521D50
    void Dispose(bool disposing);
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Initialize();
    // protected System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HashCore(::ArrayW<uint8_t> array, int ibStart, int cbSize);
    // protected System.Byte[] HashFinal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> HashFinal();
    // protected System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HashAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::HashAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HashAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.HashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(HashAlgorithm), 36 + sizeof(bool)> __System_Security_Cryptography_HashAlgorithmSizeCheck;
  static_assert(sizeof(HashAlgorithm) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ComputeHash
// Il2CppName: ComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(bool)>(&System::Security::Cryptography::HashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::HashAlgorithm::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
