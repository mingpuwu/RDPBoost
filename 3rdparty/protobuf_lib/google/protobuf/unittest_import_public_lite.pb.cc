// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_import_public_lite.proto
// Protobuf C++ Version: 5.29.0-dev

#include "google/protobuf/unittest_import_public_lite.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace protobuf_unittest_import {

inline constexpr PublicImportMessageLite::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        e_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PublicImportMessageLite::PublicImportMessageLite(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct PublicImportMessageLiteDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PublicImportMessageLiteDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PublicImportMessageLiteDefaultTypeInternal() {}
  union {
    PublicImportMessageLite _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PublicImportMessageLiteDefaultTypeInternal _PublicImportMessageLite_default_instance_;
}  // namespace protobuf_unittest_import
namespace protobuf_unittest_import {
// ===================================================================

class PublicImportMessageLite::_Internal {
 public:
  using HasBits =
      decltype(std::declval<PublicImportMessageLite>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(PublicImportMessageLite, _impl_._has_bits_);
};

PublicImportMessageLite::PublicImportMessageLite(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::MessageLite(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::MessageLite(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest_import.PublicImportMessageLite)
}
PublicImportMessageLite::PublicImportMessageLite(
    ::google::protobuf::Arena* arena, const PublicImportMessageLite& from)
    : PublicImportMessageLite(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE PublicImportMessageLite::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void PublicImportMessageLite::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.e_ = {};
}
PublicImportMessageLite::~PublicImportMessageLite() {
  // @@protoc_insertion_point(destructor:protobuf_unittest_import.PublicImportMessageLite)
  _internal_metadata_.Delete<std::string>();
  SharedDtor();
}
inline void PublicImportMessageLite::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataLite<49>
    PublicImportMessageLite::_class_data_ = {
        {
            &_PublicImportMessageLite_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &PublicImportMessageLite::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::MessageLite::GetDeleteImpl<PublicImportMessageLite>(),
            ::google::protobuf::MessageLite::GetNewImpl<PublicImportMessageLite>(),
            ::google::protobuf::MessageLite::GetClearImpl<PublicImportMessageLite>(), &PublicImportMessageLite::ByteSizeLong,
                &PublicImportMessageLite::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(PublicImportMessageLite, _impl_._cached_size_),
            true,
        },
        "protobuf_unittest_import.PublicImportMessageLite",
};
const ::google::protobuf::MessageLite::ClassData* PublicImportMessageLite::GetClassData() const {
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> PublicImportMessageLite::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(PublicImportMessageLite, _impl_._has_bits_),
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
    ::_pbi::TcParser::GenericFallbackLite,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::protobuf_unittest_import::PublicImportMessageLite>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // int32 e = 1;
    {::_pbi::TcParser::FastV32S1,
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(PublicImportMessageLite, _impl_.e_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 e = 1;
    {PROTOBUF_FIELD_OFFSET(PublicImportMessageLite, _impl_.e_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void PublicImportMessageLite::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest_import.PublicImportMessageLite)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.e_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* PublicImportMessageLite::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const PublicImportMessageLite& this_ = static_cast<const PublicImportMessageLite&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* PublicImportMessageLite::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const PublicImportMessageLite& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest_import.PublicImportMessageLite)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // int32 e = 1;
          if (cached_has_bits & 0x00000001u) {
            target = ::google::protobuf::internal::WireFormatLite::
                WriteInt32ToArrayWithField<1>(
                    stream, this_._internal_e(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target = stream->WriteRaw(
                this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).data(),
                static_cast<int>(this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size()), target);
          }
          // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest_import.PublicImportMessageLite)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t PublicImportMessageLite::ByteSizeLong(const MessageLite& base) {
          const PublicImportMessageLite& this_ = static_cast<const PublicImportMessageLite&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t PublicImportMessageLite::ByteSizeLong() const {
          const PublicImportMessageLite& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:protobuf_unittest_import.PublicImportMessageLite)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // int32 e = 1;
            cached_has_bits =
                this_._impl_._has_bits_[0];
            if (cached_has_bits & 0x00000001u) {
              total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
                  this_._internal_e());
            }
          }
          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            total_size += this_._internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString).size();
          }
          this_._impl_._cached_size_.Set(::_pbi::ToCachedSize(total_size));
          return total_size;
        }

void PublicImportMessageLite::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<PublicImportMessageLite*>(&to_msg);
  auto& from = static_cast<const PublicImportMessageLite&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest_import.PublicImportMessageLite)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _this->_impl_.e_ = from._impl_.e_;
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void PublicImportMessageLite::CopyFrom(const PublicImportMessageLite& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest_import.PublicImportMessageLite)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void PublicImportMessageLite::InternalSwap(PublicImportMessageLite* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
        swap(_impl_.e_, other->_impl_.e_);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest_import
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"