// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorPicker
  class ColorPicker;
  // Forward declaring type: ColorPreset
  class ColorPreset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: ColorSwatch
  class ColorSwatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AdvancedColorPicker::ColorSwatch);
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorSwatch*, "AdvancedColorPicker", "ColorSwatch");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorSwatch
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSwatch : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent
    class PresetChangedEvent;
    // Nested type: ::AdvancedColorPicker::ColorSwatch::$$c__DisplayClass37_0
    class $$c__DisplayClass37_0;
    // Nested type: ::AdvancedColorPicker::ColorSwatch::$$c
    class $$c;
    public:
    // private AdvancedColorPicker.ColorPicker _picker
    // Size: 0x8
    // Offset: 0x18
    ::AdvancedColorPicker::ColorPicker* picker;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorPicker*) == 0x8);
    // private AdvancedColorPicker.ColorPreset _presetPrefab
    // Size: 0x8
    // Offset: 0x20
    ::AdvancedColorPicker::ColorPreset* presetPrefab;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorPreset*) == 0x8);
    // private UnityEngine.RectTransform _viewport
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* viewport;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE8040
    // private System.String _swatchName
    // Size: 0x8
    // Offset: 0x30
    ::StringW swatchName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _autoSave
    // Size: 0x1
    // Offset: 0x38
    bool autoSave;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoSave and: presetAdded
    char __padding4[0x7] = {};
    // private AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent _presetAdded
    // Size: 0x8
    // Offset: 0x40
    ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* presetAdded;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*) == 0x8);
    // private AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent _presetRemoved
    // Size: 0x8
    // Offset: 0x48
    ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* presetRemoved;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*) == 0x8);
    // private AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent _presetEdited
    // Size: 0x8
    // Offset: 0x50
    ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* presetEdited;
    // Field size check
    static_assert(sizeof(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*) == 0x8);
    // private System.Collections.Generic.List`1<AdvancedColorPicker.ColorPreset> _colorSwatches
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::AdvancedColorPicker::ColorPreset*>* colorSwatches;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::AdvancedColorPicker::ColorPreset*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AdvancedColorPicker.ColorPicker _picker
    [[deprecated]] ::AdvancedColorPicker::ColorPicker*& dyn__picker();
    // Get instance field reference: private AdvancedColorPicker.ColorPreset _presetPrefab
    [[deprecated]] ::AdvancedColorPicker::ColorPreset*& dyn__presetPrefab();
    // Get instance field reference: private UnityEngine.RectTransform _viewport
    [[deprecated]] ::UnityEngine::RectTransform*& dyn__viewport();
    // Get instance field reference: private System.String _swatchName
    [[deprecated]] ::StringW& dyn__swatchName();
    // Get instance field reference: private System.Boolean _autoSave
    [[deprecated]] bool& dyn__autoSave();
    // Get instance field reference: private AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent _presetAdded
    [[deprecated]] ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*& dyn__presetAdded();
    // Get instance field reference: private AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent _presetRemoved
    [[deprecated]] ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*& dyn__presetRemoved();
    // Get instance field reference: private AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent _presetEdited
    [[deprecated]] ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*& dyn__presetEdited();
    // Get instance field reference: private System.Collections.Generic.List`1<AdvancedColorPicker.ColorPreset> _colorSwatches
    [[deprecated]] ::System::Collections::Generic::List_1<::AdvancedColorPicker::ColorPreset*>*& dyn__colorSwatches();
    // public System.Int32 get_Count()
    // Offset: 0x5AE600
    int get_Count();
    // public AdvancedColorPicker.ColorPicker get_Picker()
    // Offset: 0x1E1520
    ::AdvancedColorPicker::ColorPicker* get_Picker();
    // public System.Void set_Picker(AdvancedColorPicker.ColorPicker value)
    // Offset: 0x1E4910
    void set_Picker(::AdvancedColorPicker::ColorPicker* value);
    // public AdvancedColorPicker.ColorPreset get_PresetPrefab()
    // Offset: 0x1E1950
    ::AdvancedColorPicker::ColorPreset* get_PresetPrefab();
    // public System.Void set_PresetPrefab(AdvancedColorPicker.ColorPreset value)
    // Offset: 0x1E49F0
    void set_PresetPrefab(::AdvancedColorPicker::ColorPreset* value);
    // public UnityEngine.RectTransform get_Viewport()
    // Offset: 0x1E1930
    ::UnityEngine::RectTransform* get_Viewport();
    // public System.Void set_Viewport(UnityEngine.RectTransform value)
    // Offset: 0x217290
    void set_Viewport(::UnityEngine::RectTransform* value);
    // public System.Boolean get_AutoSave()
    // Offset: 0x251310
    bool get_AutoSave();
    // public System.Void set_AutoSave(System.Boolean value)
    // Offset: 0x294EC0
    void set_AutoSave(bool value);
    // public AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent get_PresetAdded()
    // Offset: 0x1E0CA0
    ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* get_PresetAdded();
    // public System.Void set_PresetAdded(AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent value)
    // Offset: 0x1E0D20
    void set_PresetAdded(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* value);
    // public AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent get_PresetRemoved()
    // Offset: 0x232190
    ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* get_PresetRemoved();
    // public System.Void set_PresetRemoved(AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent value)
    // Offset: 0x2322A0
    void set_PresetRemoved(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* value);
    // public AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent get_PresetEdited()
    // Offset: 0x2321C0
    ::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* get_PresetEdited();
    // public System.Void set_PresetEdited(AdvancedColorPicker.ColorSwatch/AdvancedColorPicker.PresetChangedEvent value)
    // Offset: 0x2322C0
    void set_PresetEdited(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* value);
    // public System.String get_SwatchName()
    // Offset: 0x1E0EB0
    ::StringW get_SwatchName();
    // private System.Void Start()
    // Offset: 0x5AE3D0
    void Start();
    // public System.Void ClearSwatch()
    // Offset: 0x5AD740
    void ClearSwatch();
    // public System.Boolean Contains(UnityEngine.Color32 color)
    // Offset: 0x5AD930
    bool Contains(::UnityEngine::Color32 color);
    // public System.Void LoadSwatch(System.Boolean append)
    // Offset: 0x5ADC50
    void LoadSwatch(bool append);
    // public System.Void LoadSwatch(System.String name, System.Boolean append, System.Boolean setName)
    // Offset: 0x5AD9E0
    void LoadSwatch(::StringW name, bool append, bool setName);
    // public System.Void LoadSwatch(System.Boolean append, params UnityEngine.Color32[] colors)
    // Offset: 0x5ADB50
    void LoadSwatch(bool append, ::ArrayW<::UnityEngine::Color32> colors);
    // public System.Void SaveSwatch()
    // Offset: 0x5AE130
    void SaveSwatch();
    // public System.Void SaveSwatch(System.String name, System.Boolean setName)
    // Offset: 0x5AE140
    void SaveSwatch(::StringW name, bool setName);
    // private System.Void AddInternal(UnityEngine.Color32 color)
    // Offset: 0x5AD4E0
    void AddInternal(::UnityEngine::Color32 color);
    // public System.Void Add()
    // Offset: 0x5AD640
    void Add();
    // public System.Void Add(UnityEngine.Color32 color)
    // Offset: 0x5AD600
    void Add(::UnityEngine::Color32 color);
    // public System.Void Add(AdvancedColorPicker.ColorPicker picker)
    // Offset: 0x5AD6C0
    void Add(::AdvancedColorPicker::ColorPicker* picker);
    // public System.Void AddIfNew(UnityEngine.Color32 color)
    // Offset: 0x5AD3F0
    void AddIfNew(::UnityEngine::Color32 color);
    // public System.Void AddIfNew(AdvancedColorPicker.ColorPicker picker)
    // Offset: 0x5AD2C0
    void AddIfNew(::AdvancedColorPicker::ColorPicker* picker);
    // private System.Void ReplaceInternal(System.Int32 index, UnityEngine.Color32 color)
    // Offset: 0x5ADF70
    void ReplaceInternal(int index, ::UnityEngine::Color32 color);
    // public System.Void Replace(System.Int32 index, UnityEngine.Color32 color)
    // Offset: 0x5AE060
    void Replace(int index, ::UnityEngine::Color32 color);
    // public System.Void Replace(System.Int32 index, AdvancedColorPicker.ColorPicker picker)
    // Offset: 0x5AE0A0
    void Replace(int index, ::AdvancedColorPicker::ColorPicker* picker);
    // private System.Void RemoveAtInternal(System.Int32 index)
    // Offset: 0x5ADDA0
    void RemoveAtInternal(int index);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x5ADEB0
    void RemoveAt(int index);
    // public System.Void Remove(AdvancedColorPicker.ColorPreset preset)
    // Offset: 0x5ADEF0
    void Remove(::AdvancedColorPicker::ColorPreset* preset);
    // public System.Void .ctor()
    // Offset: 0x5AE4A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSwatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AdvancedColorPicker::ColorSwatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSwatch*, creationType>()));
    }
  }; // AdvancedColorPicker.ColorSwatch
  #pragma pack(pop)
  static check_size<sizeof(ColorSwatch), 88 + sizeof(::System::Collections::Generic::List_1<::AdvancedColorPicker::ColorPreset*>*)> __AdvancedColorPicker_ColorSwatchSizeCheck;
  static_assert(sizeof(ColorSwatch) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_Picker
// Il2CppName: get_Picker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorPicker* (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_Picker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_Picker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_Picker
// Il2CppName: set_Picker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorPicker*)>(&AdvancedColorPicker::ColorSwatch::set_Picker)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPicker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_Picker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_PresetPrefab
// Il2CppName: get_PresetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorPreset* (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_PresetPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_PresetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_PresetPrefab
// Il2CppName: set_PresetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorPreset*)>(&AdvancedColorPicker::ColorSwatch::set_PresetPrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPreset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_PresetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_Viewport
// Il2CppName: get_Viewport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_Viewport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_Viewport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_Viewport
// Il2CppName: set_Viewport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::UnityEngine::RectTransform*)>(&AdvancedColorPicker::ColorSwatch::set_Viewport)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_Viewport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_AutoSave
// Il2CppName: get_AutoSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_AutoSave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_AutoSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_AutoSave
// Il2CppName: set_AutoSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(bool)>(&AdvancedColorPicker::ColorSwatch::set_AutoSave)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_AutoSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_PresetAdded
// Il2CppName: get_PresetAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_PresetAdded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_PresetAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_PresetAdded
// Il2CppName: set_PresetAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*)>(&AdvancedColorPicker::ColorSwatch::set_PresetAdded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorSwatch/PresetChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_PresetAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_PresetRemoved
// Il2CppName: get_PresetRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_PresetRemoved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_PresetRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_PresetRemoved
// Il2CppName: set_PresetRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*)>(&AdvancedColorPicker::ColorSwatch::set_PresetRemoved)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorSwatch/PresetChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_PresetRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_PresetEdited
// Il2CppName: get_PresetEdited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AdvancedColorPicker::ColorSwatch::PresetChangedEvent* (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_PresetEdited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_PresetEdited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::set_PresetEdited
// Il2CppName: set_PresetEdited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorSwatch::PresetChangedEvent*)>(&AdvancedColorPicker::ColorSwatch::set_PresetEdited)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorSwatch/PresetChangedEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "set_PresetEdited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::get_SwatchName
// Il2CppName: get_SwatchName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::get_SwatchName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "get_SwatchName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::ClearSwatch
// Il2CppName: ClearSwatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::ClearSwatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "ClearSwatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (AdvancedColorPicker::ColorSwatch::*)(::UnityEngine::Color32)>(&AdvancedColorPicker::ColorSwatch::Contains)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::LoadSwatch
// Il2CppName: LoadSwatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(bool)>(&AdvancedColorPicker::ColorSwatch::LoadSwatch)> {
  static const MethodInfo* get() {
    static auto* append = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "LoadSwatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{append});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::LoadSwatch
// Il2CppName: LoadSwatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::StringW, bool, bool)>(&AdvancedColorPicker::ColorSwatch::LoadSwatch)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* append = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* setName = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "LoadSwatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, append, setName});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::LoadSwatch
// Il2CppName: LoadSwatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(bool, ::ArrayW<::UnityEngine::Color32>)>(&AdvancedColorPicker::ColorSwatch::LoadSwatch)> {
  static const MethodInfo* get() {
    static auto* append = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "LoadSwatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{append, colors});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::SaveSwatch
// Il2CppName: SaveSwatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::SaveSwatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "SaveSwatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::SaveSwatch
// Il2CppName: SaveSwatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::StringW, bool)>(&AdvancedColorPicker::ColorSwatch::SaveSwatch)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* setName = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "SaveSwatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, setName});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::AddInternal
// Il2CppName: AddInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::UnityEngine::Color32)>(&AdvancedColorPicker::ColorSwatch::AddInternal)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "AddInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)()>(&AdvancedColorPicker::ColorSwatch::Add)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::UnityEngine::Color32)>(&AdvancedColorPicker::ColorSwatch::Add)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorPicker*)>(&AdvancedColorPicker::ColorSwatch::Add)> {
  static const MethodInfo* get() {
    static auto* picker = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPicker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{picker});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::AddIfNew
// Il2CppName: AddIfNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::UnityEngine::Color32)>(&AdvancedColorPicker::ColorSwatch::AddIfNew)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "AddIfNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::AddIfNew
// Il2CppName: AddIfNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorPicker*)>(&AdvancedColorPicker::ColorSwatch::AddIfNew)> {
  static const MethodInfo* get() {
    static auto* picker = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPicker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "AddIfNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{picker});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::ReplaceInternal
// Il2CppName: ReplaceInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(int, ::UnityEngine::Color32)>(&AdvancedColorPicker::ColorSwatch::ReplaceInternal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "ReplaceInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, color});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(int, ::UnityEngine::Color32)>(&AdvancedColorPicker::ColorSwatch::Replace)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, color});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Replace
// Il2CppName: Replace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(int, ::AdvancedColorPicker::ColorPicker*)>(&AdvancedColorPicker::ColorSwatch::Replace)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* picker = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPicker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Replace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, picker});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::RemoveAtInternal
// Il2CppName: RemoveAtInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(int)>(&AdvancedColorPicker::ColorSwatch::RemoveAtInternal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "RemoveAtInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(int)>(&AdvancedColorPicker::ColorSwatch::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AdvancedColorPicker::ColorSwatch::*)(::AdvancedColorPicker::ColorPreset*)>(&AdvancedColorPicker::ColorSwatch::Remove)> {
  static const MethodInfo* get() {
    static auto* preset = &::il2cpp_utils::GetClassFromName("AdvancedColorPicker", "ColorPreset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AdvancedColorPicker::ColorSwatch*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preset});
  }
};
// Writing MetadataGetter for method: AdvancedColorPicker::ColorSwatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
