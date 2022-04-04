// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: CompareFunc because it is already included!
  // Skipping declaration: <GetEnumerator>d__25 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FastList`1<T>
  template<typename T>
  class FastList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FastList_1, "", "FastList`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FastList`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  template<typename T>
  class FastList_1 : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::FastList_1::CompareFunc<T>
    class CompareFunc;
    // Nested type: ::GlobalNamespace::FastList_1::$GetEnumerator$d__25<T>
    class $GetEnumerator$d__25;
    // WARNING Size may be invalid!
    // Autogenerated type: FastList`1/CompareFunc
    // [TokenAttribute] Offset: FFFFFFFF
    class CompareFunc : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = FastList_1<T>*;
      static constexpr std::string_view NESTED_NAME = "CompareFunc";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FastList_1<T>::CompareFunc* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::CompareFunc::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FastList_1<T>::CompareFunc*, creationType>(object, method)));
      }
      // public System.Int32 Invoke(T left, T right)
      // Offset: 0xFFFFFFFFFFFFFFFF
      int Invoke(T left, T right) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::CompareFunc::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::CompareFunc*), -1));
        return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, left, right);
      }
      // public System.IAsyncResult BeginInvoke(T left, T right, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(T left, T right, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::CompareFunc::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::CompareFunc*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, left, right, callback, object);
      }
      // public System.Int32 EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFFFFFFFFFF
      int EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::CompareFunc::EndInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::CompareFunc*), -1));
        return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, result);
      }
    }; // FastList`1/CompareFunc
    // Could not write size check! Type: FastList`1/CompareFunc is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: FastList`1/<GetEnumerator>d__25
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumerator$d__25 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = FastList_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__25";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private T <>2__current
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T $$2__current;
      // public FastList`1<T> <>4__this
      // Size: 0x8
      // Offset: 0x0
      ::GlobalNamespace::FastList_1<T>* $$4__this;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::FastList_1<T>*) == 0x8);
      // private System.Int32 <i>5__2
      // Size: 0x4
      // Offset: 0x0
      int $i$5__2;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<T>
      operator ::System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      [[deprecated]] int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private T <>2__current
      [[deprecated]] T& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public FastList`1<T> <>4__this
      [[deprecated]] ::GlobalNamespace::FastList_1<T>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<::GlobalNamespace::FastList_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <i>5__2
      [[deprecated]] int& dyn_$i$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::dyn_$i$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<i>5__2"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private T System.Collections.Generic.IEnumerator<T>.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      T System_Collections_Generic_IEnumerator$T$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::System.Collections.Generic.IEnumerator<T>.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::$GetEnumerator$d__25*), -1));
        return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::$GetEnumerator$d__25*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FastList_1<T>::$GetEnumerator$d__25* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FastList_1<T>::$GetEnumerator$d__25*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::$GetEnumerator$d__25*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::MoveNext");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::$GetEnumerator$d__25*), -1));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFFFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::$GetEnumerator$d__25::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::GlobalNamespace::FastList_1<T>::$GetEnumerator$d__25*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
      }
    }; // FastList`1/<GetEnumerator>d__25
    // Could not write size check! Type: FastList`1/<GetEnumerator>d__25 is generic, or has no fields that are valid for size checks!
    public:
    // public T[] array
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> array;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: public T[] array
    [[deprecated]] ::ArrayW<T>& dyn_array() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::dyn_array");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "array"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 size
    [[deprecated]] int& dyn_size() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::dyn_size");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "size"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void set_Count(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Count(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::set_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public T get_Item(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, i);
    }
    // public System.Void set_Item(System.Int32 i, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int i, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(i), ::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, i, value);
    }
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastList_1<T>* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastList_1<T>*, creationType>(size)));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void AddUnique(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddUnique(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::AddUnique");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddUnique", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void AddRange(System.Collections.Generic.IEnumerable`1<T> items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddRange(::System::Collections::Generic::IEnumerable_1<T>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::AddRange");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddRange", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(items)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, items);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Insert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::RemoveAt");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Boolean RemoveFast(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool RemoveFast(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::RemoveFast");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveFast", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Void RemoveAtFast(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAtFast(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::RemoveAtFast");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveAtFast", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::IndexOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, item);
    }
    // public T Pop()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Pop() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Pop");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Pop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Void Sort(FastList`1/CompareFunc<T> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Sort(typename ::GlobalNamespace::FastList_1<T>::CompareFunc* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Sort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Sort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, comparer);
    }
    // public System.Void InsertionSort(FastList`1/CompareFunc<T> comparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InsertionSort(typename ::GlobalNamespace::FastList_1<T>::CompareFunc* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::InsertionSort");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InsertionSort", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(comparer)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, comparer);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // public T Find(System.Predicate`1<T> match)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Find(::System::Predicate_1<T>* match) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Find");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(match)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, match);
    }
    // private System.Void Allocate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Allocate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Allocate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Allocate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void Trim()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Trim() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Trim");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Trim", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Release()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastList_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FastList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastList_1<T>*, creationType>()));
    }
  }; // FastList`1
  // Could not write size check! Type: FastList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
