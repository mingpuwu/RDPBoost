// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_proto3_extensions.proto
// Protobuf C++ Version: 5.29.0-dev

#include "google/protobuf/unittest_proto3_extensions.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace protobuf_unittest {
              template <typename>
PROTOBUF_CONSTEXPR Proto3FileExtensions::Proto3FileExtensions(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::internal::ZeroFieldsBase(_class_data_.base()){}
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::internal::ZeroFieldsBase() {
}
#endif  // PROTOBUF_CUSTOM_VTABLE
struct Proto3FileExtensionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Proto3FileExtensionsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~Proto3FileExtensionsDefaultTypeInternal() {}
  union {
    Proto3FileExtensions _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Proto3FileExtensionsDefaultTypeInternal _Proto3FileExtensions_default_instance_;
}  // namespace protobuf_unittest
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::protobuf_unittest::Proto3FileExtensions, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::protobuf_unittest::Proto3FileExtensions)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::protobuf_unittest::_Proto3FileExtensions_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n0google/protobuf/unittest_proto3_extens"
    "ions.proto\022\021protobuf_unittest\032 google/pr"
    "otobuf/descriptor.proto\"\200\001\n\024Proto3FileEx"
    "tensions23\n\014singular_int\022\034.google.protob"
    "uf.FileOptions\030\351\007 \001(\00523\n\014repeated_int\022\034."
    "google.protobuf.FileOptions\030\352\007 \003(\005B\032B\030Un"
    "ittestProto3Extensionsb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto = {
    false,
    false,
    270,
    descriptor_table_protodef_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto,
    "google/protobuf/unittest_proto3_extensions.proto",
    &descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto_once,
    descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto,
};
namespace protobuf_unittest {
// ===================================================================

class Proto3FileExtensions::_Internal {
 public:
};

Proto3FileExtensions::Proto3FileExtensions(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::internal::ZeroFieldsBase(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.Proto3FileExtensions)
}
Proto3FileExtensions::Proto3FileExtensions(
    ::google::protobuf::Arena* arena,
    const Proto3FileExtensions& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::internal::ZeroFieldsBase(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::internal::ZeroFieldsBase(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  Proto3FileExtensions* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);

  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.Proto3FileExtensions)
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    Proto3FileExtensions::_class_data_ = {
        ::google::protobuf::internal::ZeroFieldsBase::ClassData{
            &_Proto3FileExtensions_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &Proto3FileExtensions::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::internal::ZeroFieldsBase::GetDeleteImpl<Proto3FileExtensions>(),
            ::google::protobuf::internal::ZeroFieldsBase::GetNewImpl<Proto3FileExtensions>(),
            ::google::protobuf::internal::ZeroFieldsBase::GetClearImpl<Proto3FileExtensions>(), &Proto3FileExtensions::ByteSizeLong,
                &Proto3FileExtensions::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(Proto3FileExtensions, _impl_._cached_size_),
            false,
        },
        &Proto3FileExtensions::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* Proto3FileExtensions::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 0, 0, 0, 2> Proto3FileExtensions::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    0, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967295,  // skipmap
    offsetof(decltype(_table_), field_names),  // no field_entries
    0,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::protobuf_unittest::Proto3FileExtensions>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }},
  // no field_entries, or aux_entries
  {{
  }},
};








::google::protobuf::Metadata Proto3FileExtensions::GetMetadata() const {
  return ::google::protobuf::internal::ZeroFieldsBase::GetMetadataImpl(GetClassData()->full());
}
#if !defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912)
               const int Proto3FileExtensions::kSingularIntFieldNumber;
#endif
PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::_pbi::
        ExtensionIdentifier<::google::protobuf::FileOptions, ::_pbi::PrimitiveTypeTraits< ::int32_t >,
                            5, false>
            Proto3FileExtensions::singular_int(kSingularIntFieldNumber, 0);
#if !defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912)
               const int Proto3FileExtensions::kRepeatedIntFieldNumber;
#endif
PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::_pbi::
        ExtensionIdentifier<::google::protobuf::FileOptions, ::_pbi::RepeatedPrimitiveTypeTraits< ::int32_t >,
                            5, true>
            Proto3FileExtensions::repeated_int(kRepeatedIntFieldNumber, 0);
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fextensions_2eproto),
        ::_pbi::ExtensionSet::RegisterExtension(
            &::google::protobuf::FileOptions::default_instance(), 1001, 5,
            false, false),
        ::_pbi::ExtensionSet::RegisterExtension(
            &::google::protobuf::FileOptions::default_instance(), 1002, 5,
            true, true),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
