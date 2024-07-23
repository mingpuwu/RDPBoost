// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/unittest_string_view.proto
// Protobuf C++ Version: 5.29.0-dev

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fstring_5fview_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fstring_5fview_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029000
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/cpp_features.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fstring_5fview_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fstring_5fview_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fprotobuf_2funittest_5fstring_5fview_2eproto;
namespace protobuf_unittest {
class TestStringView;
struct TestStringViewDefaultTypeInternal;
extern TestStringViewDefaultTypeInternal _TestStringView_default_instance_;
}  // namespace protobuf_unittest
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace protobuf_unittest {

// ===================================================================


// -------------------------------------------------------------------

class TestStringView final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:protobuf_unittest.TestStringView) */ {
 public:
  inline TestStringView() : TestStringView(nullptr) {}
  ~TestStringView() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR TestStringView(
      ::google::protobuf::internal::ConstantInitialized);

  inline TestStringView(const TestStringView& from) : TestStringView(nullptr, from) {}
  inline TestStringView(TestStringView&& from) noexcept
      : TestStringView(nullptr, std::move(from)) {}
  inline TestStringView& operator=(const TestStringView& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestStringView& operator=(TestStringView&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TestStringView& default_instance() {
    return *internal_default_instance();
  }
  static inline const TestStringView* internal_default_instance() {
    return reinterpret_cast<const TestStringView*>(
        &_TestStringView_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(TestStringView& a, TestStringView& b) { a.Swap(&b); }
  inline void Swap(TestStringView* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestStringView* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TestStringView* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<TestStringView>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const TestStringView& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const TestStringView& from) { TestStringView::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(TestStringView* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "protobuf_unittest.TestStringView"; }

 protected:
  explicit TestStringView(::google::protobuf::Arena* arena);
  TestStringView(::google::protobuf::Arena* arena, const TestStringView& from);
  TestStringView(::google::protobuf::Arena* arena, TestStringView&& from) noexcept
      : TestStringView(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kRepeatedStringFieldNumber = 3,
    kRepeatedBytesFieldNumber = 4,
    kSingularStringFieldNumber = 1,
    kSingularBytesFieldNumber = 2,
  };
  // repeated string repeated_string = 3;
  int repeated_string_size() const;
  private:
  int _internal_repeated_string_size() const;

  public:
  void clear_repeated_string() ;
  absl::string_view repeated_string(int index) const;
  void set_repeated_string(int index, const std::string& value);
  void set_repeated_string(int index, std::string&& value);
  void set_repeated_string(int index, const char* value);
  void set_repeated_string(int index, absl::string_view value);
  void add_repeated_string(const std::string& value);
  void add_repeated_string(std::string&& value);
  void add_repeated_string(const char* value);
  void add_repeated_string(absl::string_view value);
  const ::google::protobuf::RepeatedPtrField<std::string>& repeated_string() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_repeated_string();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_repeated_string() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_repeated_string();

  public:
  // repeated bytes repeated_bytes = 4;
  int repeated_bytes_size() const;
  private:
  int _internal_repeated_bytes_size() const;

  public:
  void clear_repeated_bytes() ;
  absl::string_view repeated_bytes(int index) const;
  void set_repeated_bytes(int index, const std::string& value);
  void set_repeated_bytes(int index, std::string&& value);
  void set_repeated_bytes(int index, const char* value);
  void set_repeated_bytes(int index, absl::string_view value);
  void add_repeated_bytes(const std::string& value);
  void add_repeated_bytes(std::string&& value);
  void add_repeated_bytes(const char* value);
  void add_repeated_bytes(absl::string_view value);
  const ::google::protobuf::RepeatedPtrField<std::string>& repeated_bytes() const;
  ::google::protobuf::RepeatedPtrField<std::string>* mutable_repeated_bytes();

  private:
  const ::google::protobuf::RepeatedPtrField<std::string>& _internal_repeated_bytes() const;
  ::google::protobuf::RepeatedPtrField<std::string>* _internal_mutable_repeated_bytes();

  public:
  // string singular_string = 1;
  bool has_singular_string() const;
  void clear_singular_string() ;
  absl::string_view singular_string() const;
  template <typename Arg_ = std::string&&>
  void set_singular_string(Arg_&& arg);

  private:
  const std::string& _internal_singular_string() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_singular_string(
      absl::string_view value);

  public:
  // bytes singular_bytes = 2;
  bool has_singular_bytes() const;
  void clear_singular_bytes() ;
  absl::string_view singular_bytes() const;
  template <typename Arg_ = std::string&&>
  void set_singular_bytes(Arg_&& arg);

  private:
  const std::string& _internal_singular_bytes() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_singular_bytes(
      absl::string_view value);

  public:
  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestStringView)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      71, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_TestStringView_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const TestStringView& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::RepeatedPtrField<std::string> repeated_string_;
    ::google::protobuf::RepeatedPtrField<std::string> repeated_bytes_;
    ::google::protobuf::internal::ArenaStringPtr singular_string_;
    ::google::protobuf::internal::ArenaStringPtr singular_bytes_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fstring_5fview_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// TestStringView

// string singular_string = 1;
inline bool TestStringView::has_singular_string() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void TestStringView::clear_singular_string() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.singular_string_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline absl::string_view TestStringView::singular_string() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestStringView.singular_string)
  return _internal_singular_string();
}
template <typename Arg_>
inline PROTOBUF_ALWAYS_INLINE void TestStringView::set_singular_string(Arg_&& arg) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.singular_string_.Set(static_cast<Arg_&&>(arg), GetArena());
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestStringView.singular_string)
}
inline const std::string& TestStringView::_internal_singular_string() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.singular_string_.Get();
}
inline void TestStringView::_internal_set_singular_string(absl::string_view value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.singular_string_.Set(value, GetArena());
}

// bytes singular_bytes = 2;
inline bool TestStringView::has_singular_bytes() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void TestStringView::clear_singular_bytes() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.singular_bytes_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline absl::string_view TestStringView::singular_bytes() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestStringView.singular_bytes)
  return _internal_singular_bytes();
}
template <typename Arg_>
inline PROTOBUF_ALWAYS_INLINE void TestStringView::set_singular_bytes(Arg_&& arg) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.singular_bytes_.SetBytes(static_cast<Arg_&&>(arg), GetArena());
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestStringView.singular_bytes)
}
inline const std::string& TestStringView::_internal_singular_bytes() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.singular_bytes_.Get();
}
inline void TestStringView::_internal_set_singular_bytes(absl::string_view value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.singular_bytes_.Set(value, GetArena());
}

// repeated string repeated_string = 3;
inline int TestStringView::_internal_repeated_string_size() const {
  return _internal_repeated_string().size();
}
inline int TestStringView::repeated_string_size() const {
  return _internal_repeated_string_size();
}
inline void TestStringView::clear_repeated_string() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.repeated_string_.Clear();
}
inline absl::string_view TestStringView::repeated_string(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestStringView.repeated_string)
  return _internal_repeated_string().Get(index);
}
inline void TestStringView::set_repeated_string(int index, const std::string& value) {
  _internal_mutable_repeated_string()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::set_repeated_string(int index, std::string&& value) {
  _internal_mutable_repeated_string()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::set_repeated_string(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_repeated_string()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::set_repeated_string(int index, absl::string_view value) {
  _internal_mutable_repeated_string()->Mutable(index)->assign(
      value.data(), value.size());
  // @@protoc_insertion_point(field_set_string_piece:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::add_repeated_string(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_string()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::add_repeated_string(std::string&& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_string()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::add_repeated_string(const char* value) {
  ABSL_DCHECK(value != nullptr);
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_string()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protobuf_unittest.TestStringView.repeated_string)
}
inline void TestStringView::add_repeated_string(absl::string_view value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_string()->Add()->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_add_string_piece:protobuf_unittest.TestStringView.repeated_string)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
TestStringView::repeated_string() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:protobuf_unittest.TestStringView.repeated_string)
  return _internal_repeated_string();
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
TestStringView::mutable_repeated_string() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.TestStringView.repeated_string)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_repeated_string();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
TestStringView::_internal_repeated_string() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.repeated_string_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
TestStringView::_internal_mutable_repeated_string() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.repeated_string_;
}

// repeated bytes repeated_bytes = 4;
inline int TestStringView::_internal_repeated_bytes_size() const {
  return _internal_repeated_bytes().size();
}
inline int TestStringView::repeated_bytes_size() const {
  return _internal_repeated_bytes_size();
}
inline void TestStringView::clear_repeated_bytes() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.repeated_bytes_.Clear();
}
inline absl::string_view TestStringView::repeated_bytes(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestStringView.repeated_bytes)
  return _internal_repeated_bytes().Get(index);
}
inline void TestStringView::set_repeated_bytes(int index, const std::string& value) {
  _internal_mutable_repeated_bytes()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::set_repeated_bytes(int index, std::string&& value) {
  _internal_mutable_repeated_bytes()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::set_repeated_bytes(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_repeated_bytes()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::set_repeated_bytes(int index, absl::string_view value) {
  _internal_mutable_repeated_bytes()->Mutable(index)->assign(
      value.data(), value.size());
  // @@protoc_insertion_point(field_set_string_piece:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::add_repeated_bytes(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_bytes()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::add_repeated_bytes(std::string&& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_bytes()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::add_repeated_bytes(const char* value) {
  ABSL_DCHECK(value != nullptr);
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_bytes()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protobuf_unittest.TestStringView.repeated_bytes)
}
inline void TestStringView::add_repeated_bytes(absl::string_view value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _internal_mutable_repeated_bytes()->Add()->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_add_string_piece:protobuf_unittest.TestStringView.repeated_bytes)
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
TestStringView::repeated_bytes() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:protobuf_unittest.TestStringView.repeated_bytes)
  return _internal_repeated_bytes();
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
TestStringView::mutable_repeated_bytes() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.TestStringView.repeated_bytes)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_repeated_bytes();
}
inline const ::google::protobuf::RepeatedPtrField<std::string>&
TestStringView::_internal_repeated_bytes() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.repeated_bytes_;
}
inline ::google::protobuf::RepeatedPtrField<std::string>*
TestStringView::_internal_mutable_repeated_bytes() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.repeated_bytes_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fstring_5fview_2eproto_2epb_2eh
