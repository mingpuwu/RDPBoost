// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_legacy_features.proto
// Protobuf C++ Version: 5.29.0-dev

#include "google/protobuf/unittest_legacy_features.pb.h"

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
namespace legacy_features_unittest {

inline constexpr TestEditionsMessage::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        delimited_field_{nullptr},
        required_field_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TestEditionsMessage::TestEditionsMessage(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct TestEditionsMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestEditionsMessageDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestEditionsMessageDefaultTypeInternal() {}
  union {
    TestEditionsMessage _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestEditionsMessageDefaultTypeInternal _TestEditionsMessage_default_instance_;
}  // namespace legacy_features_unittest
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::legacy_features_unittest::TestEditionsMessage, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::legacy_features_unittest::TestEditionsMessage, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::legacy_features_unittest::TestEditionsMessage, _impl_.required_field_),
        PROTOBUF_FIELD_OFFSET(::legacy_features_unittest::TestEditionsMessage, _impl_.delimited_field_),
        1,
        0,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::legacy_features_unittest::TestEditionsMessage)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::legacy_features_unittest::_TestEditionsMessage_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n.google/protobuf/unittest_legacy_featur"
    "es.proto\022\030legacy_features_unittest\"\203\001\n\023T"
    "estEditionsMessage\022\035\n\016required_field\030\001 \001"
    "(\005B\005\252\001\002\010\003\022M\n\017delimited_field\030\002 \001(\0132-.leg"
    "acy_features_unittest.TestEditionsMessag"
    "eB\005\252\001\002(\002b\010editionsp\350\007"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto = {
    false,
    false,
    221,
    descriptor_table_protodef_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto,
    "google/protobuf/unittest_legacy_features.proto",
    &descriptor_table_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto,
};
namespace legacy_features_unittest {
// ===================================================================

class TestEditionsMessage::_Internal {
 public:
  using HasBits =
      decltype(std::declval<TestEditionsMessage>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_._has_bits_);
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000002) ^ 0x00000002) != 0;
  }
};

TestEditionsMessage::TestEditionsMessage(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:legacy_features_unittest.TestEditionsMessage)
}
inline PROTOBUF_NDEBUG_INLINE TestEditionsMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::legacy_features_unittest::TestEditionsMessage& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

TestEditionsMessage::TestEditionsMessage(
    ::google::protobuf::Arena* arena,
    const TestEditionsMessage& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  TestEditionsMessage* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.delimited_field_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::legacy_features_unittest::TestEditionsMessage>(
                              arena, *from._impl_.delimited_field_)
                        : nullptr;
  _impl_.required_field_ = from._impl_.required_field_;

  // @@protoc_insertion_point(copy_constructor:legacy_features_unittest.TestEditionsMessage)
}
inline PROTOBUF_NDEBUG_INLINE TestEditionsMessage::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void TestEditionsMessage::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, delimited_field_),
           0,
           offsetof(Impl_, required_field_) -
               offsetof(Impl_, delimited_field_) +
               sizeof(Impl_::required_field_));
}
TestEditionsMessage::~TestEditionsMessage() {
  // @@protoc_insertion_point(destructor:legacy_features_unittest.TestEditionsMessage)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TestEditionsMessage::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.delimited_field_;
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    TestEditionsMessage::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_TestEditionsMessage_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            TestEditionsMessage::IsInitializedImpl,
            &TestEditionsMessage::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<TestEditionsMessage>(),
            ::google::protobuf::Message::GetNewImpl<TestEditionsMessage>(),
            ::google::protobuf::Message::GetClearImpl<TestEditionsMessage>(), &TestEditionsMessage::ByteSizeLong,
                &TestEditionsMessage::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_._cached_size_),
            false,
        },
        &TestEditionsMessage::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* TestEditionsMessage::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> TestEditionsMessage::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::legacy_features_unittest::TestEditionsMessage>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // .legacy_features_unittest.TestEditionsMessage delimited_field = 2 [features = {
    {::_pbi::TcParser::FastGtS1,
     {19, 0, 0, PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_.delimited_field_)}},
    // int32 required_field = 1 [features = {
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(TestEditionsMessage, _impl_.required_field_), 1>(),
     {8, 1, 0, PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_.required_field_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 required_field = 1 [features = {
    {PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_.required_field_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // .legacy_features_unittest.TestEditionsMessage delimited_field = 2 [features = {
    {PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_.delimited_field_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kRepGroup | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::legacy_features_unittest::TestEditionsMessage>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void TestEditionsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:legacy_features_unittest.TestEditionsMessage)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.delimited_field_ != nullptr);
    _impl_.delimited_field_->Clear();
  }
  _impl_.required_field_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* TestEditionsMessage::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const TestEditionsMessage& this_ = static_cast<const TestEditionsMessage&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* TestEditionsMessage::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const TestEditionsMessage& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:legacy_features_unittest.TestEditionsMessage)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // int32 required_field = 1 [features = {
          if (cached_has_bits & 0x00000002u) {
            target = ::google::protobuf::internal::WireFormatLite::
                WriteInt32ToArrayWithField<1>(
                    stream, this_._internal_required_field(), target);
          }

          // .legacy_features_unittest.TestEditionsMessage delimited_field = 2 [features = {
          if (cached_has_bits & 0x00000001u) {
            target = stream->EnsureSpace(target);
            target = ::google::protobuf::internal::WireFormatLite::InternalWriteGroup(
                2, *this_._impl_.delimited_field_, target, stream);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:legacy_features_unittest.TestEditionsMessage)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t TestEditionsMessage::ByteSizeLong(const MessageLite& base) {
          const TestEditionsMessage& this_ = static_cast<const TestEditionsMessage&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t TestEditionsMessage::ByteSizeLong() const {
          const TestEditionsMessage& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:legacy_features_unittest.TestEditionsMessage)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // .legacy_features_unittest.TestEditionsMessage delimited_field = 2 [features = {
            cached_has_bits =
                this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += 2 +
                            ::google::protobuf::internal::WireFormatLite::GroupSize(*this_._impl_.delimited_field_);
            }
          }
           {
            // int32 required_field = 1 [features = {
            if (cached_has_bits & 0x00000002u) {
              total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
                  this_._internal_required_field());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void TestEditionsMessage::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<TestEditionsMessage*>(&to_msg);
  auto& from = static_cast<const TestEditionsMessage&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:legacy_features_unittest.TestEditionsMessage)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      ABSL_DCHECK(from._impl_.delimited_field_ != nullptr);
      if (_this->_impl_.delimited_field_ == nullptr) {
        _this->_impl_.delimited_field_ =
            ::google::protobuf::Message::CopyConstruct<::legacy_features_unittest::TestEditionsMessage>(arena, *from._impl_.delimited_field_);
      } else {
        _this->_impl_.delimited_field_->MergeFrom(*from._impl_.delimited_field_);
      }
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.required_field_ = from._impl_.required_field_;
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TestEditionsMessage::CopyFrom(const TestEditionsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:legacy_features_unittest.TestEditionsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TestEditionsMessage::IsInitializedImpl(
    const MessageLite& msg) {
  auto& this_ = static_cast<const TestEditionsMessage&>(msg);
  if (_Internal::MissingRequiredFields(this_._impl_._has_bits_)) {
    return false;
  }
  if ((this_._impl_._has_bits_[0] & 0x00000001u) != 0) {
    if (!this_._impl_.delimited_field_->IsInitialized()) return false;
  }
  return true;
}

void TestEditionsMessage::InternalSwap(TestEditionsMessage* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_.required_field_)
      + sizeof(TestEditionsMessage::_impl_.required_field_)
      - PROTOBUF_FIELD_OFFSET(TestEditionsMessage, _impl_.delimited_field_)>(
          reinterpret_cast<char*>(&_impl_.delimited_field_),
          reinterpret_cast<char*>(&other->_impl_.delimited_field_));
}

::google::protobuf::Metadata TestEditionsMessage::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace legacy_features_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2funittest_5flegacy_5ffeatures_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
