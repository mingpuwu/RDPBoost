// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_arena.proto
// Protobuf C++ Version: 5.29.0-dev

#include "google/protobuf/unittest_arena.pb.h"

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
namespace proto2_arena_unittest {

inline constexpr NestedMessage::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        d_{0} {}

template <typename>
PROTOBUF_CONSTEXPR NestedMessage::NestedMessage(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct NestedMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NestedMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~NestedMessageDefaultTypeInternal() {}
  union {
    NestedMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NestedMessageDefaultTypeInternal _NestedMessage_default_instance_;

inline constexpr ArenaMessage::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : repeated_nested_message_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ArenaMessage::ArenaMessage(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct ArenaMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ArenaMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ArenaMessageDefaultTypeInternal() {}
  union {
    ArenaMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ArenaMessageDefaultTypeInternal _ArenaMessage_default_instance_;
}  // namespace proto2_arena_unittest
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5farena_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2funittest_5farena_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2funittest_5farena_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::NestedMessage, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::NestedMessage, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::NestedMessage, _impl_.d_),
        0,
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ArenaMessage, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::proto2_arena_unittest::ArenaMessage, _impl_.repeated_nested_message_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 9, -1, sizeof(::proto2_arena_unittest::NestedMessage)},
        {10, -1, -1, sizeof(::proto2_arena_unittest::ArenaMessage)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::proto2_arena_unittest::_NestedMessage_default_instance_._instance,
    &::proto2_arena_unittest::_ArenaMessage_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2funittest_5farena_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n$google/protobuf/unittest_arena.proto\022\025"
    "proto2_arena_unittest\"\032\n\rNestedMessage\022\t"
    "\n\001d\030\001 \001(\005\"U\n\014ArenaMessage\022E\n\027repeated_ne"
    "sted_message\030\001 \003(\0132$.proto2_arena_unitte"
    "st.NestedMessageB\010\370\001\001\222\003\002\030\002b\010editionsp\350\007"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto = {
    false,
    false,
    199,
    descriptor_table_protodef_google_2fprotobuf_2funittest_5farena_2eproto,
    "google/protobuf/unittest_arena.proto",
    &descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2funittest_5farena_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5farena_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2funittest_5farena_2eproto,
};
namespace proto2_arena_unittest {
// ===================================================================

class NestedMessage::_Internal {
 public:
  using HasBits =
      decltype(std::declval<NestedMessage>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(NestedMessage, _impl_._has_bits_);
};

NestedMessage::NestedMessage(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_arena_unittest.NestedMessage)
}
NestedMessage::NestedMessage(
    ::google::protobuf::Arena* arena, const NestedMessage& from)
    : NestedMessage(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE NestedMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void NestedMessage::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.d_ = {};
}
NestedMessage::~NestedMessage() {
  // @@protoc_insertion_point(destructor:proto2_arena_unittest.NestedMessage)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void NestedMessage::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    NestedMessage::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_NestedMessage_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &NestedMessage::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<NestedMessage>(),
            ::google::protobuf::Message::GetNewImpl<NestedMessage>(),
            ::google::protobuf::Message::GetClearImpl<NestedMessage>(), &NestedMessage::ByteSizeLong,
                &NestedMessage::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(NestedMessage, _impl_._cached_size_),
            false,
        },
        &NestedMessage::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* NestedMessage::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> NestedMessage::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(NestedMessage, _impl_._has_bits_),
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::proto2_arena_unittest::NestedMessage>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // int32 d = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(NestedMessage, _impl_.d_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(NestedMessage, _impl_.d_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 d = 1;
    {PROTOBUF_FIELD_OFFSET(NestedMessage, _impl_.d_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void NestedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_arena_unittest.NestedMessage)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.d_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* NestedMessage::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const NestedMessage& this_ = static_cast<const NestedMessage&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* NestedMessage::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const NestedMessage& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:proto2_arena_unittest.NestedMessage)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // int32 d = 1;
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::
                WriteInt32ToArrayWithField<1>(
                    stream, this_._internal_d(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:proto2_arena_unittest.NestedMessage)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t NestedMessage::ByteSizeLong(const MessageLite& base) {
          const NestedMessage& this_ = static_cast<const NestedMessage&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t NestedMessage::ByteSizeLong() const {
          const NestedMessage& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:proto2_arena_unittest.NestedMessage)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // int32 d = 1;
            cached_has_bits =
                this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
                  this_._internal_d());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void NestedMessage::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<NestedMessage*>(&to_msg);
  auto& from = static_cast<const NestedMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:proto2_arena_unittest.NestedMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _this->_impl_.d_ = from._impl_.d_;
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void NestedMessage::CopyFrom(const NestedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_arena_unittest.NestedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void NestedMessage::InternalSwap(NestedMessage* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
        swap(_impl_.d_, other->_impl_.d_);
}

::google::protobuf::Metadata NestedMessage::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class ArenaMessage::_Internal {
 public:
};

ArenaMessage::ArenaMessage(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_arena_unittest.ArenaMessage)
}
inline PROTOBUF_NDEBUG_INLINE ArenaMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::proto2_arena_unittest::ArenaMessage& from_msg)
      : repeated_nested_message_{visibility, arena, from.repeated_nested_message_},
        _cached_size_{0} {}

ArenaMessage::ArenaMessage(
    ::google::protobuf::Arena* arena,
    const ArenaMessage& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  ArenaMessage* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:proto2_arena_unittest.ArenaMessage)
}
inline PROTOBUF_NDEBUG_INLINE ArenaMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : repeated_nested_message_{visibility, arena},
        _cached_size_{0} {}

inline void ArenaMessage::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
ArenaMessage::~ArenaMessage() {
  // @@protoc_insertion_point(destructor:proto2_arena_unittest.ArenaMessage)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ArenaMessage::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    ArenaMessage::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_ArenaMessage_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &ArenaMessage::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<ArenaMessage>(),
            ::google::protobuf::Message::GetNewImpl<ArenaMessage>(),
            ::google::protobuf::Message::GetClearImpl<ArenaMessage>(), &ArenaMessage::ByteSizeLong,
                &ArenaMessage::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(ArenaMessage, _impl_._cached_size_),
            false,
        },
        &ArenaMessage::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* ArenaMessage::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> ArenaMessage::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::proto2_arena_unittest::ArenaMessage>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(ArenaMessage, _impl_.repeated_nested_message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
    {PROTOBUF_FIELD_OFFSET(ArenaMessage, _impl_.repeated_nested_message_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::proto2_arena_unittest::NestedMessage>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void ArenaMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_arena_unittest.ArenaMessage)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.repeated_nested_message_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* ArenaMessage::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const ArenaMessage& this_ = static_cast<const ArenaMessage&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* ArenaMessage::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const ArenaMessage& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:proto2_arena_unittest.ArenaMessage)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
          for (unsigned i = 0, n = static_cast<unsigned>(
                                   this_._internal_repeated_nested_message_size());
               i < n; i++) {
            const auto& repfield = this_._internal_repeated_nested_message().Get(i);
            target =
                ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                    1, repfield, repfield.GetCachedSize(),
                    target, stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:proto2_arena_unittest.ArenaMessage)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t ArenaMessage::ByteSizeLong(const MessageLite& base) {
          const ArenaMessage& this_ = static_cast<const ArenaMessage&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t ArenaMessage::ByteSizeLong() const {
          const ArenaMessage& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:proto2_arena_unittest.ArenaMessage)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated .proto2_arena_unittest.NestedMessage repeated_nested_message = 1;
             {
              total_size += 1UL * this_._internal_repeated_nested_message_size();
              for (const auto& msg : this_._internal_repeated_nested_message()) {
                total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
              }
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void ArenaMessage::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<ArenaMessage*>(&to_msg);
  auto& from = static_cast<const ArenaMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:proto2_arena_unittest.ArenaMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_repeated_nested_message()->MergeFrom(
      from._internal_repeated_nested_message());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ArenaMessage::CopyFrom(const ArenaMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_arena_unittest.ArenaMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void ArenaMessage::InternalSwap(ArenaMessage* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.repeated_nested_message_.InternalSwap(&other->_impl_.repeated_nested_message_);
}

::google::protobuf::Metadata ArenaMessage::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto2_arena_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5farena_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
