// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Normal.Utility
namespace Normal::Utility {
  // Forward declaring type: RingBuffer`1<T>
  template<typename T>
  class RingBuffer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Normal::Utility::RingBuffer_1, "Normal.Utility", "RingBuffer`1");
// Type namespace: Normal.Utility
namespace Normal::Utility {
  // WARNING Size may be invalid!
  // Autogenerated type: Normal.Utility.RingBuffer`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  template<typename T>
  class RingBuffer_1 : public ::Il2CppObject {
    public:
    public:
    // private readonly T[] _buffer
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 _front
    // Size: 0x4
    // Offset: 0x0
    int front;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly T[] _buffer
    [[deprecated]] ::ArrayW<T>& dyn__buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::dyn__buffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_buffer"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _front
    [[deprecated]] int& dyn__front() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::dyn__front");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_front"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _count
    [[deprecated]] int& dyn__count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::dyn__count");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_capacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_capacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_capacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean get_isEmpty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isEmpty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_isEmpty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isEmpty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Boolean get_isFull()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isFull() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_isFull");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_isFull", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public T get_front()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_front() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_front");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_front", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T get_back()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_back() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_back");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_back", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public T get_next()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_next() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::get_next");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_next", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RingBuffer_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RingBuffer_1<T>*, creationType>(capacity)));
    }
    // private System.Int32 InternalIndex(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int InternalIndex(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::InternalIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InternalIndex", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, index);
    }
    // private T GetElement(System.Int32 index, System.Boolean safe)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T GetElement(int index, bool safe) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::GetElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetElement", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(safe)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index, safe);
    }
    // private System.Void SetElement(System.Int32 index, T value, System.Boolean safe)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetElement(int index, T value, bool safe) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::SetElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetElement", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(safe)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value, safe);
    }
    // private System.Void ThrowIfEmpty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ThrowIfEmpty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::ThrowIfEmpty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ThrowIfEmpty", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void ThrowIfOutOfRange(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ThrowIfOutOfRange(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::ThrowIfOutOfRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ThrowIfOutOfRange", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Void Enqueue(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Enqueue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::Enqueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public T Dequeue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::Dequeue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T DequeueFront()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T DequeueFront() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::DequeueFront");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DequeueFront", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::RingBuffer_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Normal.Utility.RingBuffer`1
  // Could not write size check! Type: Normal.Utility.RingBuffer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
