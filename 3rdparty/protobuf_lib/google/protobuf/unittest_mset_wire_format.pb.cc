// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_mset_wire_format.proto
// Protobuf C++ Version: 5.29.0-dev

#include "google/protobuf/unittest_mset_wire_format.pb.h"

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
namespace proto2_wireformat_unittest {

inline constexpr TestMessageSet::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TestMessageSet::TestMessageSet(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct TestMessageSetDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestMessageSetDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestMessageSetDefaultTypeInternal() {}
  union {
    TestMessageSet _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestMessageSetDefaultTypeInternal _TestMessageSet_default_instance_;

inline constexpr TestMessageSetWireFormatContainer::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        message_set_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct TestMessageSetWireFormatContainerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestMessageSetWireFormatContainerDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestMessageSetWireFormatContainerDefaultTypeInternal() {}
  union {
    TestMessageSetWireFormatContainer _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestMessageSetWireFormatContainerDefaultTypeInternal _TestMessageSetWireFormatContainer_default_instance_;
}  // namespace proto2_wireformat_unittest
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSet, _internal_metadata_),
        PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSet, _impl_._extensions_),
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer, _impl_.message_set_),
        0,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::proto2_wireformat_unittest::TestMessageSet)},
        {8, 17, -1, sizeof(::proto2_wireformat_unittest::TestMessageSetWireFormatContainer)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::proto2_wireformat_unittest::_TestMessageSet_default_instance_._instance,
    &::proto2_wireformat_unittest::_TestMessageSetWireFormatContainer_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n/google/protobuf/unittest_mset_wire_for"
    "mat.proto\022\032proto2_wireformat_unittest\",\n"
    "\016TestMessageSet*\010\010\004\020\200\321\334\374\001*\014\010\200\321\334\374\001\020\377\377\377\377\007:"
    "\002\010\001\"d\n!TestMessageSetWireFormatContainer"
    "\022\?\n\013message_set\030\001 \001(\0132*.proto2_wireforma"
    "t_unittest.TestMessageSetB)H\001\370\001\001\252\002!Googl"
    "e.ProtocolBuffers.TestProtos"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto = {
    false,
    false,
    268,
    descriptor_table_protodef_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto,
    "google/protobuf/unittest_mset_wire_format.proto",
    &descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto,
};
namespace proto2_wireformat_unittest {
// ===================================================================

class TestMessageSet::_Internal {
 public:
};

TestMessageSet::TestMessageSet(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_wireformat_unittest.TestMessageSet)
}
inline PROTOBUF_NDEBUG_INLINE TestMessageSet::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::proto2_wireformat_unittest::TestMessageSet& from_msg)
      : _extensions_{visibility, arena},
        _cached_size_{0} {}

TestMessageSet::TestMessageSet(
    ::google::protobuf::Arena* arena,
    const TestMessageSet& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  TestMessageSet* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_._extensions_.MergeFrom(this, from._impl_._extensions_);

  // @@protoc_insertion_point(copy_constructor:proto2_wireformat_unittest.TestMessageSet)
}
inline PROTOBUF_NDEBUG_INLINE TestMessageSet::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _extensions_{visibility, arena},
        _cached_size_{0} {}

inline void TestMessageSet::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TestMessageSet::~TestMessageSet() {
  // @@protoc_insertion_point(destructor:proto2_wireformat_unittest.TestMessageSet)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TestMessageSet::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    TestMessageSet::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_TestMessageSet_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            TestMessageSet::IsInitializedImpl,
            &TestMessageSet::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<TestMessageSet>(),
            ::google::protobuf::Message::GetNewImpl<TestMessageSet>(),
            ::google::protobuf::Message::GetClearImpl<TestMessageSet>(), &TestMessageSet::ByteSizeLong,
                &TestMessageSet::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(TestMessageSet, _impl_._cached_size_),
            false,
        },
        &TestMessageSet::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* TestMessageSet::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 0, 1, 0, 2> TestMessageSet::_table_ = {
  {
    0,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(TestMessageSet, _impl_._extensions_),
    0, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967295,  // skipmap
    offsetof(decltype(_table_), field_names),  // no field_entries
    0,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::proto2_wireformat_unittest::TestMessageSet>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MessageSetWireFormatParseLoop, {0, 0}},
  }}, {{
    65535, 65535
  }}, {{
  }}, {{
    {},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void TestMessageSet::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_wireformat_unittest.TestMessageSet)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_._extensions_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
      ::uint8_t* TestMessageSet::_InternalSerialize(
          const MessageLite& base, ::uint8_t* target,
          ::google::protobuf::io::EpsCopyOutputStream* stream) {
        const TestMessageSet& this_ = static_cast<const TestMessageSet&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
      ::uint8_t* TestMessageSet::_InternalSerialize(
          ::uint8_t* target,
          ::google::protobuf::io::EpsCopyOutputStream* stream) const {
        const TestMessageSet& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
         target =
            this_._impl_._extensions_
                .InternalSerializeMessageSetWithCachedSizesToArray(
                    internal_default_instance(), target, stream);
        target = ::_pbi::InternalSerializeUnknownMessageSetItemsToArray(
            this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
        return target;
      }

#if defined(PROTOBUF_CUSTOM_VTABLE)
          ::size_t TestMessageSet::ByteSizeLong(const MessageLite& base) {
            const TestMessageSet& this_ = static_cast<const TestMessageSet&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
          ::size_t TestMessageSet::ByteSizeLong() const {
            const TestMessageSet& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
            // @@protoc_insertion_point(message_set_byte_size_start:proto2_wireformat_unittest.TestMessageSet)
            ::size_t total_size = this_._impl_._extensions_.MessageSetByteSize();
            if (this_._internal_metadata_.have_unknown_fields()) {
              total_size += ::_pbi::ComputeUnknownMessageSetItemsSize(
                  this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance));
            }
            this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
            return total_size;
          }

void TestMessageSet::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<TestMessageSet*>(&to_msg);
  auto& from = static_cast<const TestMessageSet&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:proto2_wireformat_unittest.TestMessageSet)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_._extensions_.MergeFrom(internal_default_instance(), from._impl_._extensions_);
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TestMessageSet::CopyFrom(const TestMessageSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TestMessageSet::IsInitializedImpl(
    const MessageLite& msg) {
  auto& this_ = static_cast<const TestMessageSet&>(msg);
  if (!this_._impl_._extensions_.IsInitialized(
          internal_default_instance())) {
    return false;
  }
  return true;
}

void TestMessageSet::InternalSwap(TestMessageSet* PROTOBUF_RESTRICT other) {
  using std::swap;
  _impl_._extensions_.InternalSwap(&other->_impl_._extensions_);
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TestMessageSet::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class TestMessageSetWireFormatContainer::_Internal {
 public:
  using HasBits =
      decltype(std::declval<TestMessageSetWireFormatContainer>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(TestMessageSetWireFormatContainer, _impl_._has_bits_);
};

TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}
inline PROTOBUF_NDEBUG_INLINE TestMessageSetWireFormatContainer::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::proto2_wireformat_unittest::TestMessageSetWireFormatContainer& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(
    ::google::protobuf::Arena* arena,
    const TestMessageSetWireFormatContainer& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  TestMessageSetWireFormatContainer* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.message_set_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::proto2_wireformat_unittest::TestMessageSet>(
                              arena, *from._impl_.message_set_)
                        : nullptr;

  // @@protoc_insertion_point(copy_constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}
inline PROTOBUF_NDEBUG_INLINE TestMessageSetWireFormatContainer::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void TestMessageSetWireFormatContainer::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.message_set_ = {};
}
TestMessageSetWireFormatContainer::~TestMessageSetWireFormatContainer() {
  // @@protoc_insertion_point(destructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TestMessageSetWireFormatContainer::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.message_set_;
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    TestMessageSetWireFormatContainer::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_TestMessageSetWireFormatContainer_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            TestMessageSetWireFormatContainer::IsInitializedImpl,
            &TestMessageSetWireFormatContainer::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<TestMessageSetWireFormatContainer>(),
            ::google::protobuf::Message::GetNewImpl<TestMessageSetWireFormatContainer>(),
            ::google::protobuf::Message::GetClearImpl<TestMessageSetWireFormatContainer>(), &TestMessageSetWireFormatContainer::ByteSizeLong,
                &TestMessageSetWireFormatContainer::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(TestMessageSetWireFormatContainer, _impl_._cached_size_),
            false,
        },
        &TestMessageSetWireFormatContainer::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* TestMessageSetWireFormatContainer::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 1, 0, 2> TestMessageSetWireFormatContainer::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(TestMessageSetWireFormatContainer, _impl_._has_bits_),
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
    ::_pbi::TcParser::GetTable<::proto2_wireformat_unittest::TestMessageSetWireFormatContainer>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(TestMessageSetWireFormatContainer, _impl_.message_set_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
    {PROTOBUF_FIELD_OFFSET(TestMessageSetWireFormatContainer, _impl_.message_set_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::proto2_wireformat_unittest::TestMessageSet>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void TestMessageSetWireFormatContainer::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.message_set_ != nullptr);
    _impl_.message_set_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* TestMessageSetWireFormatContainer::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const TestMessageSetWireFormatContainer& this_ = static_cast<const TestMessageSetWireFormatContainer&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* TestMessageSetWireFormatContainer::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const TestMessageSetWireFormatContainer& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
                1, *this_._impl_.message_set_, this_._impl_.message_set_->GetCachedSize(), target,
                stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t TestMessageSetWireFormatContainer::ByteSizeLong(const MessageLite& base) {
          const TestMessageSetWireFormatContainer& this_ = static_cast<const TestMessageSetWireFormatContainer&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t TestMessageSetWireFormatContainer::ByteSizeLong() const {
          const TestMessageSetWireFormatContainer& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
            cached_has_bits =
                this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += 1 +
                            ::google::protobuf::internal::WireFormatLite::MessageSize(*this_._impl_.message_set_);
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void TestMessageSetWireFormatContainer::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<TestMessageSetWireFormatContainer*>(&to_msg);
  auto& from = static_cast<const TestMessageSetWireFormatContainer&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.message_set_ != nullptr);
    if (_this->_impl_.message_set_ == nullptr) {
      _this->_impl_.message_set_ =
          ::google::protobuf::Message::CopyConstruct<::proto2_wireformat_unittest::TestMessageSet>(arena, *from._impl_.message_set_);
    } else {
      _this->_impl_.message_set_->MergeFrom(*from._impl_.message_set_);
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TestMessageSetWireFormatContainer::CopyFrom(const TestMessageSetWireFormatContainer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TestMessageSetWireFormatContainer::IsInitializedImpl(
    const MessageLite& msg) {
  auto& this_ = static_cast<const TestMessageSetWireFormatContainer&>(msg);
  if ((this_._impl_._has_bits_[0] & 0x00000001u) != 0) {
    if (!this_._impl_.message_set_->IsInitialized()) return false;
  }
  return true;
}

void TestMessageSetWireFormatContainer::InternalSwap(TestMessageSetWireFormatContainer* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.message_set_, other->_impl_.message_set_);
}

::google::protobuf::Metadata TestMessageSetWireFormatContainer::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto2_wireformat_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
