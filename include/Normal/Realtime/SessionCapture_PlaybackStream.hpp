// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.SessionCapture
#include "Normal/Realtime/SessionCapture.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: SessionCaptureFileStream
  class SessionCaptureFileStream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::SessionCapture::PlaybackStream);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::SessionCapture::PlaybackStream*, "Normal.Realtime", "SessionCapture/PlaybackStream");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.SessionCapture/Normal.Realtime.PlaybackStream
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionCapture::PlaybackStream : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private Normal.Realtime.SessionCaptureFileStream _fileStream
    // Size: 0x8
    // Offset: 0x10
    ::Normal::Realtime::SessionCaptureFileStream* fileStream;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::SessionCaptureFileStream*) == 0x8);
    // private System.Double _sendTimestampOffset
    // Size: 0x8
    // Offset: 0x18
    double sendTimestampOffset;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private Normal.Realtime.SessionCaptureFileStream _fileStream
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::SessionCaptureFileStream*& dyn__fileStream();
    // Get instance field reference: private System.Double _sendTimestampOffset
    [[deprecated("Use field access instead!")]] double& dyn__sendTimestampOffset();
    // public System.Boolean get_reading()
    // Offset: 0x88E2F0
    bool get_reading();
    // public System.Double get_startTimestamp()
    // Offset: 0x88E320
    double get_startTimestamp();
    // public System.Int32 get_clientID()
    // Offset: 0x88E2D0
    int get_clientID();
    // public System.Double get_sendTimestampOffset()
    // Offset: 0x88E310
    double get_sendTimestampOffset();
    // public System.Void set_sendTimestampOffset(System.Double value)
    // Offset: 0x88E340
    void set_sendTimestampOffset(double value);
    // public System.Void .ctor(System.String filePath)
    // Offset: 0x88E240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionCapture::PlaybackStream* New_ctor(::StringW filePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::SessionCapture::PlaybackStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionCapture::PlaybackStream*, creationType>(filePath)));
    }
    // public System.Void Dispose()
    // Offset: 0x88E060
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x88E0E0
    void Dispose(bool disposing);
    // public System.Byte[] ReadHeader()
    // Offset: 0x88E200
    ::ArrayW<uint8_t> ReadHeader();
    // public System.Boolean ReadDeltaUpdate(System.Double playbackTime, Normal.Realtime.SessionCapture/Normal.Realtime.DeltaUpdate deltaUpdate)
    // Offset: 0x88E1A0
    bool ReadDeltaUpdate(double playbackTime, ::Normal::Realtime::SessionCapture::DeltaUpdate* deltaUpdate);
    // public System.Void SkipToTime(System.Double playbackTime)
    // Offset: 0x88E220
    void SkipToTime(double playbackTime);
    // protected override System.Void Finalize()
    // Offset: 0x88E120
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Normal.Realtime.SessionCapture/Normal.Realtime.PlaybackStream
  #pragma pack(pop)
  static check_size<sizeof(SessionCapture::PlaybackStream), 24 + sizeof(double)> __Normal_Realtime_SessionCapture_PlaybackStreamSizeCheck;
  static_assert(sizeof(SessionCapture::PlaybackStream) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::get_reading
// Il2CppName: get_reading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::get_reading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "get_reading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::get_startTimestamp
// Il2CppName: get_startTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::get_startTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "get_startTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::get_clientID
// Il2CppName: get_clientID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::get_clientID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "get_clientID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::get_sendTimestampOffset
// Il2CppName: get_sendTimestampOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::get_sendTimestampOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "get_sendTimestampOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::set_sendTimestampOffset
// Il2CppName: set_sendTimestampOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::SessionCapture::PlaybackStream::*)(double)>(&Normal::Realtime::SessionCapture::PlaybackStream::set_sendTimestampOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "set_sendTimestampOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::SessionCapture::PlaybackStream::*)(bool)>(&Normal::Realtime::SessionCapture::PlaybackStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::ReadHeader
// Il2CppName: ReadHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::ReadHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "ReadHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::ReadDeltaUpdate
// Il2CppName: ReadDeltaUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::SessionCapture::PlaybackStream::*)(double, ::Normal::Realtime::SessionCapture::DeltaUpdate*)>(&Normal::Realtime::SessionCapture::PlaybackStream::ReadDeltaUpdate)> {
  static const MethodInfo* get() {
    static auto* playbackTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* deltaUpdate = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "SessionCapture/DeltaUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "ReadDeltaUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playbackTime, deltaUpdate});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::SkipToTime
// Il2CppName: SkipToTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::SessionCapture::PlaybackStream::*)(double)>(&Normal::Realtime::SessionCapture::PlaybackStream::SkipToTime)> {
  static const MethodInfo* get() {
    static auto* playbackTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "SkipToTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playbackTime});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::SessionCapture::PlaybackStream::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::SessionCapture::PlaybackStream::*)()>(&Normal::Realtime::SessionCapture::PlaybackStream::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::SessionCapture::PlaybackStream*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
