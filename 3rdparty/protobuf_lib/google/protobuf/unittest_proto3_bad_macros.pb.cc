// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_proto3_bad_macros.proto
// Protobuf C++ Version: 5.29.0-dev

#include "google/protobuf/unittest_proto3_bad_macros.pb.h"

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
}  // namespace protobuf_unittest
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto[3];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto = nullptr;
const ::uint32_t TableStruct_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;
const char descriptor_table_protodef_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n0google/protobuf/unittest_proto3_bad_ma"
    "cros.proto\022\021protobuf_unittest*\025\n\003GID\022\016\n\n"
    "GID_UNUSED\020\000*\025\n\003UID\022\016\n\nUID_UNUSED\020\000*\350\003\n\010"
    "BadNames\022\013\n\007PACKAGE\020\000\022\n\n\006PACKED\020\001\022\t\n\005lin"
    "ux\020\002\022\n\n\006DOMAIN\020\003\022\010\n\004TRUE\020\004\022\t\n\005FALSE\020\005\022\016\n"
    "\nCREATE_NEW\020\006\022\n\n\006DELETE\020\007\022\020\n\014DOUBLE_CLIC"
    "K\020\010\022\t\n\005ERROR\020\t\022\016\n\nERROR_BUSY\020\n\022\030\n\024ERROR_"
    "INSTALL_FAILED\020\013\022\023\n\017ERROR_NOT_FOUND\020\014\022\020\n"
    "\014GetClassName\020\r\022\022\n\016GetCurrentTime\020\016\022\016\n\nG"
    "etMessage\020\017\022\r\n\tGetObject\020\020\022\n\n\006IGNORE\020\021\022\006"
    "\n\002IN\020\022\022\022\n\016INPUT_KEYBOARD\020\023\022\014\n\010NO_ERROR\020\024"
    "\022\007\n\003OUT\020\025\022\014\n\010OPTIONAL\020\026\022\010\n\004NEAR\020\027\022\013\n\007NO_"
    "DATA\020\030\022\022\n\016REASON_UNKNOWN\020\031\022\024\n\020SERVICE_DI"
    "SABLED\020\032\022\022\n\016SEVERITY_ERROR\020\033\022\022\n\016STATUS_P"
    "ENDING\020\034\022\n\n\006STRICT\020\035\022\r\n\tTYPE_BOOL\020\036\022\t\n\005D"
    "EBUG\020\037B8\n!com.google.protobuf.testing.pr"
    "otoP\001\252\002\020ProtobufUnittestb\006proto3"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto = {
    false,
    false,
    672,
    descriptor_table_protodef_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto,
    "google/protobuf/unittest_proto3_bad_macros.proto",
    &descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto_once,
    nullptr,
    0,
    0,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto,
};
namespace protobuf_unittest {
const ::google::protobuf::EnumDescriptor* GID_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t GID_internal_data_[] = {
    65536u, 0u, };
bool GID_IsValid(int value) {
  return 0 <= value && value <= 0;
}
const ::google::protobuf::EnumDescriptor* UID_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto[1];
}
PROTOBUF_CONSTINIT const uint32_t UID_internal_data_[] = {
    65536u, 0u, };
bool UID_IsValid(int value) {
  return 0 <= value && value <= 0;
}
const ::google::protobuf::EnumDescriptor* BadNames_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto[2];
}
PROTOBUF_CONSTINIT const uint32_t BadNames_internal_data_[] = {
    2097152u, 0u, };
bool BadNames_IsValid(int value) {
  return 0 <= value && value <= 31;
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fproto3_5fbad_5fmacros_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"