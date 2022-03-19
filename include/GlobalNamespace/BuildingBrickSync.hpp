// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.RealtimeComponent`1
#include "Normal/Realtime/RealtimeComponent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BuildingBrickModel
  class BuildingBrickModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BuildingBrickSync
  class BuildingBrickSync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BuildingBrickSync);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuildingBrickSync*, "", "BuildingBrickSync");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BuildingBrickSync
  // [TokenAttribute] Offset: FFFFFFFF
  class BuildingBrickSync : public ::Normal::Realtime::RealtimeComponent_1<::GlobalNamespace::BuildingBrickModel*> {
    public:
    // private System.Void BrickAttachedSet()
    // Offset: 0x109D3CC
    void BrickAttachedSet();
    // private System.Void MatIdSet()
    // Offset: 0x109D44C
    void MatIdSet();
    // private System.Void ColorSet()
    // Offset: 0x109D4EC
    void ColorSet();
    // private System.Void UuidSet()
    // Offset: 0x109D5E0
    void UuidSet();
    // protected System.Void OnRealtimeModelReplaced(BuildingBrickModel previousModel, BuildingBrickModel currentModel)
    // Offset: 0x109D754
    void OnRealtimeModelReplaced(::GlobalNamespace::BuildingBrickModel* previousModel, ::GlobalNamespace::BuildingBrickModel* currentModel);
    // private System.Void AttachedDidChange(BuildingBrickModel model, System.Boolean value)
    // Offset: 0x109D9F0
    void AttachedDidChange(::GlobalNamespace::BuildingBrickModel* model, bool value);
    // private System.Void MatIdDidChange(BuildingBrickModel model, System.Int32 matId)
    // Offset: 0x109D9F4
    void MatIdDidChange(::GlobalNamespace::BuildingBrickModel* model, int matId);
    // private System.Void ColorDidChange(BuildingBrickModel model, System.Int32 color)
    // Offset: 0x109D9F8
    void ColorDidChange(::GlobalNamespace::BuildingBrickModel* model, int color);
    // private System.Void UuidDidChange(BuildingBrickModel model, System.String uuid)
    // Offset: 0x109D9FC
    void UuidDidChange(::GlobalNamespace::BuildingBrickModel* model, ::StringW uuid);
    // public System.Void SetAttached(System.Boolean attached)
    // Offset: 0x109DA00
    void SetAttached(bool attached);
    // public System.Void EnableNewColors()
    // Offset: 0x109DA98
    void EnableNewColors();
    // public System.Void SetColor(System.Int32 color)
    // Offset: 0x109DB20
    void SetColor(int color);
    // public System.Void SetUuid(System.String uuid)
    // Offset: 0x109DBB8
    void SetUuid(::StringW uuid);
    // public System.Void .ctor()
    // Offset: 0x109DC14
    // Implemented from: Normal.Realtime.RealtimeComponent`1
    // Base method: System.Void RealtimeComponent_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildingBrickSync* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuildingBrickSync::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildingBrickSync*, creationType>()));
    }
  }; // BuildingBrickSync
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::BrickAttachedSet
// Il2CppName: BrickAttachedSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)()>(&GlobalNamespace::BuildingBrickSync::BrickAttachedSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "BrickAttachedSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::MatIdSet
// Il2CppName: MatIdSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)()>(&GlobalNamespace::BuildingBrickSync::MatIdSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "MatIdSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::ColorSet
// Il2CppName: ColorSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)()>(&GlobalNamespace::BuildingBrickSync::ColorSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "ColorSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::UuidSet
// Il2CppName: UuidSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)()>(&GlobalNamespace::BuildingBrickSync::UuidSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "UuidSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::OnRealtimeModelReplaced
// Il2CppName: OnRealtimeModelReplaced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(::GlobalNamespace::BuildingBrickModel*, ::GlobalNamespace::BuildingBrickModel*)>(&GlobalNamespace::BuildingBrickSync::OnRealtimeModelReplaced)> {
  static const MethodInfo* get() {
    static auto* previousModel = &::il2cpp_utils::GetClassFromName("", "BuildingBrickModel")->byval_arg;
    static auto* currentModel = &::il2cpp_utils::GetClassFromName("", "BuildingBrickModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "OnRealtimeModelReplaced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousModel, currentModel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::AttachedDidChange
// Il2CppName: AttachedDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(::GlobalNamespace::BuildingBrickModel*, bool)>(&GlobalNamespace::BuildingBrickSync::AttachedDidChange)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("", "BuildingBrickModel")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "AttachedDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::MatIdDidChange
// Il2CppName: MatIdDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(::GlobalNamespace::BuildingBrickModel*, int)>(&GlobalNamespace::BuildingBrickSync::MatIdDidChange)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("", "BuildingBrickModel")->byval_arg;
    static auto* matId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "MatIdDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, matId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::ColorDidChange
// Il2CppName: ColorDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(::GlobalNamespace::BuildingBrickModel*, int)>(&GlobalNamespace::BuildingBrickSync::ColorDidChange)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("", "BuildingBrickModel")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "ColorDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::UuidDidChange
// Il2CppName: UuidDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(::GlobalNamespace::BuildingBrickModel*, ::StringW)>(&GlobalNamespace::BuildingBrickSync::UuidDidChange)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("", "BuildingBrickModel")->byval_arg;
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "UuidDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, uuid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::SetAttached
// Il2CppName: SetAttached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(bool)>(&GlobalNamespace::BuildingBrickSync::SetAttached)> {
  static const MethodInfo* get() {
    static auto* attached = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "SetAttached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attached});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::EnableNewColors
// Il2CppName: EnableNewColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)()>(&GlobalNamespace::BuildingBrickSync::EnableNewColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "EnableNewColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(int)>(&GlobalNamespace::BuildingBrickSync::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::SetUuid
// Il2CppName: SetUuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuildingBrickSync::*)(::StringW)>(&GlobalNamespace::BuildingBrickSync::SetUuid)> {
  static const MethodInfo* get() {
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuildingBrickSync*), "SetUuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuildingBrickSync::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
