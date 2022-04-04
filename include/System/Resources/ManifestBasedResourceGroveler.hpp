// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
  // Skipping declaration: UltimateResourceFallbackLocation because it is already included!
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: ManifestBasedResourceGroveler
  class ManifestBasedResourceGroveler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::ManifestBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ManifestBasedResourceGroveler
  // [TokenAttribute] Offset: FFFFFFFF
  class ManifestBasedResourceGroveler : public ::Il2CppObject/*, public ::System::Resources::IResourceGroveler*/ {
    public:
    public:
    // private System.Resources.ResourceManager/System.Resources.ResourceManagerMediator _mediator
    // Size: 0x8
    // Offset: 0x10
    ::System::Resources::ResourceManager::ResourceManagerMediator* mediator;
    // Field size check
    static_assert(sizeof(::System::Resources::ResourceManager::ResourceManagerMediator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Resources::IResourceGroveler
    operator ::System::Resources::IResourceGroveler() noexcept {
      return *reinterpret_cast<::System::Resources::IResourceGroveler*>(this);
    }
    // Creating conversion operator: operator ::System::Resources::ResourceManager::ResourceManagerMediator*
    constexpr operator ::System::Resources::ResourceManager::ResourceManagerMediator*() const noexcept {
      return mediator;
    }
    // Get instance field reference: private System.Resources.ResourceManager/System.Resources.ResourceManagerMediator _mediator
    [[deprecated]] ::System::Resources::ResourceManager::ResourceManagerMediator*& dyn__mediator();
    // public System.Void .ctor(System.Resources.ResourceManager/System.Resources.ResourceManagerMediator mediator)
    // Offset: 0x2CC970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBasedResourceGroveler* New_ctor(::System::Resources::ResourceManager::ResourceManagerMediator* mediator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::ManifestBasedResourceGroveler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBasedResourceGroveler*, creationType>(mediator)));
    }
    // public System.Resources.ResourceSet GrovelForResourceSet(System.Globalization.CultureInfo culture, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.Boolean tryParents, System.Boolean createIfNotExists, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x4A1A20
    ::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents, bool createIfNotExists, ByRef<::System::Threading::StackCrawlMark> stackMark);
    // private System.Globalization.CultureInfo UltimateFallbackFixup(System.Globalization.CultureInfo lookForCulture)
    // Offset: 0x4A2520
    ::System::Globalization::CultureInfo* UltimateFallbackFixup(::System::Globalization::CultureInfo* lookForCulture);
    // static System.Globalization.CultureInfo GetNeutralResourcesLanguage(System.Reflection.Assembly a, ref System.Resources.UltimateResourceFallbackLocation fallbackLocation)
    // Offset: 0x4A1520
    static ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ByRef<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation);
    // System.Resources.ResourceSet CreateResourceSet(System.IO.Stream store, System.Reflection.Assembly assembly)
    // Offset: 0x4A08E0
    ::System::Resources::ResourceSet* CreateResourceSet(::System::IO::Stream* store, ::System::Reflection::Assembly* assembly);
    // private System.IO.Stream GetManifestResourceStream(System.Reflection.RuntimeAssembly satellite, System.String fileName, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x4A13A0
    ::System::IO::Stream* GetManifestResourceStream(::System::Reflection::RuntimeAssembly* satellite, ::StringW fileName, ByRef<::System::Threading::StackCrawlMark> stackMark);
    // private System.IO.Stream CaseInsensitiveManifestResourceStreamLookup(System.Reflection.RuntimeAssembly satellite, System.String name)
    // Offset: 0x4A0520
    ::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* satellite, ::StringW name);
    // private System.Reflection.RuntimeAssembly GetSatelliteAssembly(System.Globalization.CultureInfo lookForCulture, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x4A1840
    ::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(::System::Globalization::CultureInfo* lookForCulture, ByRef<::System::Threading::StackCrawlMark> stackMark);
    // private System.Boolean CanUseDefaultResourceClasses(System.String readerTypeName, System.String resSetTypeName)
    // Offset: 0x4A0390
    bool CanUseDefaultResourceClasses(::StringW readerTypeName, ::StringW resSetTypeName);
    // private System.String GetSatelliteAssemblyName()
    // Offset: 0x4A17E0
    ::StringW GetSatelliteAssemblyName();
    // private System.Void HandleSatelliteMissing()
    // Offset: 0x4A21A0
    void HandleSatelliteMissing();
    // private System.Void HandleResourceStreamMissing(System.String fileName)
    // Offset: 0x4A1E80
    void HandleResourceStreamMissing(::StringW fileName);
    // static private System.Boolean GetNeutralResourcesLanguageAttribute(System.Reflection.Assembly assembly, ref System.String cultureName, ref System.Int16 fallbackLocation)
    // Offset: 0x4A1490
    static bool GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ByRef<::StringW> cultureName, ByRef<int16_t> fallbackLocation);
  }; // System.Resources.ManifestBasedResourceGroveler
  #pragma pack(pop)
  static check_size<sizeof(ManifestBasedResourceGroveler), 16 + sizeof(::System::Resources::ResourceManager::ResourceManagerMediator*)> __System_Resources_ManifestBasedResourceGrovelerSizeCheck;
  static_assert(sizeof(ManifestBasedResourceGroveler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet
// Il2CppName: GrovelForResourceSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool, bool, ByRef<::System::Threading::StackCrawlMark>)>(&System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet)> {
  static const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* localResourceSets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System.Resources", "ResourceSet")})->byval_arg;
    static auto* tryParents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* createIfNotExists = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GrovelForResourceSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture, localResourceSets, tryParents, createIfNotExists, stackMark});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup
// Il2CppName: UltimateFallbackFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*)>(&System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup)> {
  static const MethodInfo* get() {
    static auto* lookForCulture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "UltimateFallbackFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookForCulture});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage
// Il2CppName: GetNeutralResourcesLanguage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(::System::Reflection::Assembly*, ByRef<::System::Resources::UltimateResourceFallbackLocation>)>(&System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* fallbackLocation = &::il2cpp_utils::GetClassFromName("System.Resources", "UltimateResourceFallbackLocation")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetNeutralResourcesLanguage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, fallbackLocation});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::CreateResourceSet
// Il2CppName: CreateResourceSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (System::Resources::ManifestBasedResourceGroveler::*)(::System::IO::Stream*, ::System::Reflection::Assembly*)>(&System::Resources::ManifestBasedResourceGroveler::CreateResourceSet)> {
  static const MethodInfo* get() {
    static auto* store = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "CreateResourceSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{store, assembly});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream
// Il2CppName: GetManifestResourceStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Resources::ManifestBasedResourceGroveler::*)(::System::Reflection::RuntimeAssembly*, ::StringW, ByRef<::System::Threading::StackCrawlMark>)>(&System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream)> {
  static const MethodInfo* get() {
    static auto* satellite = &::il2cpp_utils::GetClassFromName("System.Reflection", "RuntimeAssembly")->byval_arg;
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetManifestResourceStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{satellite, fileName, stackMark});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup
// Il2CppName: CaseInsensitiveManifestResourceStreamLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Resources::ManifestBasedResourceGroveler::*)(::System::Reflection::RuntimeAssembly*, ::StringW)>(&System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup)> {
  static const MethodInfo* get() {
    static auto* satellite = &::il2cpp_utils::GetClassFromName("System.Reflection", "RuntimeAssembly")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "CaseInsensitiveManifestResourceStreamLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{satellite, name});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly
// Il2CppName: GetSatelliteAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeAssembly* (System::Resources::ManifestBasedResourceGroveler::*)(::System::Globalization::CultureInfo*, ByRef<::System::Threading::StackCrawlMark>)>(&System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly)> {
  static const MethodInfo* get() {
    static auto* lookForCulture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* stackMark = &::il2cpp_utils::GetClassFromName("System.Threading", "StackCrawlMark")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetSatelliteAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lookForCulture, stackMark});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses
// Il2CppName: CanUseDefaultResourceClasses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::ManifestBasedResourceGroveler::*)(::StringW, ::StringW)>(&System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses)> {
  static const MethodInfo* get() {
    static auto* readerTypeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* resSetTypeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "CanUseDefaultResourceClasses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{readerTypeName, resSetTypeName});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName
// Il2CppName: GetSatelliteAssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::ManifestBasedResourceGroveler::*)()>(&System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetSatelliteAssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing
// Il2CppName: HandleSatelliteMissing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ManifestBasedResourceGroveler::*)()>(&System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "HandleSatelliteMissing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing
// Il2CppName: HandleResourceStreamMissing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ManifestBasedResourceGroveler::*)(::StringW)>(&System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "HandleResourceStreamMissing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName});
  }
};
// Writing MetadataGetter for method: System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute
// Il2CppName: GetNeutralResourcesLanguageAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*, ByRef<::StringW>, ByRef<int16_t>)>(&System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* cultureName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* fallbackLocation = &::il2cpp_utils::GetClassFromName("System", "Int16")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ManifestBasedResourceGroveler*), "GetNeutralResourcesLanguageAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, cultureName, fallbackLocation});
  }
};
