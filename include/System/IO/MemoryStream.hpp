// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::MemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MemoryStream*, "System.IO", "MemoryStream");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.MemoryStream
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class MemoryStream : public ::System::IO::Stream {
    public:
    public:
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _origin
    // Size: 0x4
    // Offset: 0x30
    int origin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _position
    // Size: 0x4
    // Offset: 0x34
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x38
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x3C
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _expandable
    // Size: 0x1
    // Offset: 0x40
    bool expandable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _writable
    // Size: 0x1
    // Offset: 0x41
    bool writable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _exposable
    // Size: 0x1
    // Offset: 0x42
    bool exposable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x43
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOpen and: lastReadTask
    char __padding8[0x4] = {};
    // private System.Threading.Tasks.Task`1<System.Int32> _lastReadTask
    // Size: 0x8
    // Offset: 0x48
    ::System::Threading::Tasks::Task_1<int>* lastReadTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<int>*) == 0x8);
    public:
    // Get instance field reference: private System.Byte[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Int32 _origin
    [[deprecated("Use field access instead!")]] int& dyn__origin();
    // Get instance field reference: private System.Int32 _position
    [[deprecated("Use field access instead!")]] int& dyn__position();
    // Get instance field reference: private System.Int32 _length
    [[deprecated("Use field access instead!")]] int& dyn__length();
    // Get instance field reference: private System.Int32 _capacity
    [[deprecated("Use field access instead!")]] int& dyn__capacity();
    // Get instance field reference: private System.Boolean _expandable
    [[deprecated("Use field access instead!")]] bool& dyn__expandable();
    // Get instance field reference: private System.Boolean _writable
    [[deprecated("Use field access instead!")]] bool& dyn__writable();
    // Get instance field reference: private System.Boolean _exposable
    [[deprecated("Use field access instead!")]] bool& dyn__exposable();
    // Get instance field reference: private System.Boolean _isOpen
    [[deprecated("Use field access instead!")]] bool& dyn__isOpen();
    // Get instance field reference: private System.Threading.Tasks.Task`1<System.Int32> _lastReadTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task_1<int>*& dyn__lastReadTask();
    // public System.Int32 get_Capacity()
    // Offset: 0x3EFE60
    int get_Capacity();
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x3EFEF0
    void set_Capacity(int value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x3EFCF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Byte[] buffer)
    // Offset: 0x3EFC10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer)));
    }
    // public System.Void .ctor(System.Byte[] buffer, System.Boolean writable)
    // Offset: 0x3EFB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor(::ArrayW<uint8_t> buffer, bool writable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>(buffer, writable)));
    }
    // private System.Void EnsureWriteable()
    // Offset: 0x3EEA90
    void EnsureWriteable();
    // private System.Boolean EnsureCapacity(System.Int32 value)
    // Offset: 0x3EE9C0
    bool EnsureCapacity(int value);
    // public System.Byte[] GetBuffer()
    // Offset: 0x3EEAC0
    ::ArrayW<uint8_t> GetBuffer();
    // System.Byte[] InternalGetBuffer()
    // Offset: 0x1E1930
    ::ArrayW<uint8_t> InternalGetBuffer();
    // System.Int32 InternalGetPosition()
    // Offset: 0x3EEB90
    int InternalGetPosition();
    // System.Int32 InternalReadInt32()
    // Offset: 0x3EEBC0
    int InternalReadInt32();
    // System.Int32 InternalEmulateRead(System.Int32 count)
    // Offset: 0x3EEB40
    int InternalEmulateRead(int count);
    // public System.Byte[] ToArray()
    // Offset: 0x3EF420
    ::ArrayW<uint8_t> ToArray();
    // public override System.Boolean get_CanRead()
    // Offset: 0x3EFE50
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x3EFE50
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x318E50
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x3EFE90
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x3EFEC0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x3F0020
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public System.Void .ctor()
    // Offset: 0x3EFDD0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::MemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryStream*, creationType>()));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x3EE920
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x1DDF00
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x3EEFC0
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(ByRef<::ArrayW<uint8_t>> buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x3EECA0
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Int32 ReadByte()
    // Offset: 0x3EEF60
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    // Offset: 0x3EF210
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin loc);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x3EF840
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x3EF4D0
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t> buffer, int offset, int count, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x3EF760
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // System.IO.MemoryStream
  #pragma pack(pop)
  static check_size<sizeof(MemoryStream), 72 + sizeof(::System::Threading::Tasks::Task_1<int>*)> __System_IO_MemoryStreamSizeCheck;
  static_assert(sizeof(MemoryStream) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::MemoryStream::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::set_Capacity
// Il2CppName: set_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)(int)>(&System::IO::MemoryStream::set_Capacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "set_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::MemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::MemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::MemoryStream::EnsureWriteable
// Il2CppName: EnsureWriteable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::EnsureWriteable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "EnsureWriteable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::EnsureCapacity
// Il2CppName: EnsureCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::MemoryStream::*)(int)>(&System::IO::MemoryStream::EnsureCapacity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "EnsureCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::GetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::InternalGetBuffer
// Il2CppName: InternalGetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::InternalGetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "InternalGetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::InternalGetPosition
// Il2CppName: InternalGetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::InternalGetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "InternalGetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::InternalReadInt32
// Il2CppName: InternalReadInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::InternalReadInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "InternalReadInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::InternalEmulateRead
// Il2CppName: InternalEmulateRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::MemoryStream::*)(int)>(&System::IO::MemoryStream::InternalEmulateRead)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "InternalEmulateRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)(int64_t)>(&System::IO::MemoryStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::MemoryStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)(bool)>(&System::IO::MemoryStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::MemoryStream::*)(ByRef<::ArrayW<uint8_t>>, int, int)>(&System::IO::MemoryStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::IO::MemoryStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::MemoryStream::*)()>(&System::IO::MemoryStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::MemoryStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::IO::MemoryStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* loc = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, loc});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::MemoryStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::IO::MemoryStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::MemoryStream::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::MemoryStream::*)(uint8_t)>(&System::IO::MemoryStream::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::MemoryStream*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
