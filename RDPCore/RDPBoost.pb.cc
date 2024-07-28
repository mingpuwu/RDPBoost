// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RDPBoost.proto

#include "RDPBoost.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_RDPBoost_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MouseMessage_RDPBoost_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_RDPBoost_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VideoMessage_RDPBoost_2eproto;
class VideoMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VideoMessage> _instance;
} _VideoMessage_default_instance_;
class MouseMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MouseMessage> _instance;
} _MouseMessage_default_instance_;
class ProtoMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProtoMessage> _instance;
  const ::VideoMessage* videmessagei_;
  const ::MouseMessage* mousemessagei_;
} _ProtoMessage_default_instance_;
static void InitDefaultsscc_info_MouseMessage_RDPBoost_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_MouseMessage_default_instance_;
    new (ptr) ::MouseMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::MouseMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MouseMessage_RDPBoost_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MouseMessage_RDPBoost_2eproto}, {}};

static void InitDefaultsscc_info_ProtoMessage_RDPBoost_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ProtoMessage_default_instance_;
    new (ptr) ::ProtoMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ProtoMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ProtoMessage_RDPBoost_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ProtoMessage_RDPBoost_2eproto}, {
      &scc_info_VideoMessage_RDPBoost_2eproto.base,
      &scc_info_MouseMessage_RDPBoost_2eproto.base,}};

static void InitDefaultsscc_info_VideoMessage_RDPBoost_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_VideoMessage_default_instance_;
    new (ptr) ::VideoMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::VideoMessage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VideoMessage_RDPBoost_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VideoMessage_RDPBoost_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_RDPBoost_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_RDPBoost_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_RDPBoost_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_RDPBoost_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::VideoMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::VideoMessage, width_),
  PROTOBUF_FIELD_OFFSET(::VideoMessage, height_),
  PROTOBUF_FIELD_OFFSET(::VideoMessage, frame_rate_),
  PROTOBUF_FIELD_OFFSET(::VideoMessage, bit_rate_),
  PROTOBUF_FIELD_OFFSET(::VideoMessage, data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MouseMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::MouseMessage, x_),
  PROTOBUF_FIELD_OFFSET(::MouseMessage, y_),
  PROTOBUF_FIELD_OFFSET(::MouseMessage, button_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ProtoMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::ProtoMessage, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ProtoMessage, type_),
  offsetof(::ProtoMessageDefaultTypeInternal, videmessagei_),
  offsetof(::ProtoMessageDefaultTypeInternal, mousemessagei_),
  PROTOBUF_FIELD_OFFSET(::ProtoMessage, data_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::VideoMessage)},
  { 10, -1, sizeof(::MouseMessage)},
  { 18, -1, sizeof(::ProtoMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_VideoMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_MouseMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ProtoMessage_default_instance_),
};

const char descriptor_table_protodef_RDPBoost_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016RDPBoost.proto\"a\n\014VideoMessage\022\r\n\005widt"
  "h\030\001 \001(\r\022\016\n\006height\030\002 \001(\r\022\022\n\nframe_rate\030\003 "
  "\001(\r\022\020\n\010bit_rate\030\004 \001(\r\022\014\n\004data\030\005 \001(\014\"4\n\014M"
  "ouseMessage\022\t\n\001x\030\001 \001(\r\022\t\n\001y\030\002 \001(\r\022\016\n\006but"
  "ton\030\003 \001(\r\"\275\001\n\014ProtoMessage\022$\n\004type\030\001 \001(\016"
  "2\026.ProtoMessage.DataType\022%\n\014VideMessageI"
  "\030\002 \001(\0132\r.VideoMessageH\000\022&\n\rMouseMessageI"
  "\030\003 \001(\0132\r.MouseMessageH\000\"0\n\010DataType\022\021\n\rV"
  "IDEO_MESSAGE\020\000\022\021\n\rMOUSE_MESSAGE\020\001B\006\n\004dat"
  "ab\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_RDPBoost_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_RDPBoost_2eproto_sccs[3] = {
  &scc_info_MouseMessage_RDPBoost_2eproto.base,
  &scc_info_ProtoMessage_RDPBoost_2eproto.base,
  &scc_info_VideoMessage_RDPBoost_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_RDPBoost_2eproto_once;
static bool descriptor_table_RDPBoost_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RDPBoost_2eproto = {
  &descriptor_table_RDPBoost_2eproto_initialized, descriptor_table_protodef_RDPBoost_2eproto, "RDPBoost.proto", 369,
  &descriptor_table_RDPBoost_2eproto_once, descriptor_table_RDPBoost_2eproto_sccs, descriptor_table_RDPBoost_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_RDPBoost_2eproto::offsets,
  file_level_metadata_RDPBoost_2eproto, 3, file_level_enum_descriptors_RDPBoost_2eproto, file_level_service_descriptors_RDPBoost_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_RDPBoost_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_RDPBoost_2eproto), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ProtoMessage_DataType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_RDPBoost_2eproto);
  return file_level_enum_descriptors_RDPBoost_2eproto[0];
}
bool ProtoMessage_DataType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr ProtoMessage_DataType ProtoMessage::VIDEO_MESSAGE;
constexpr ProtoMessage_DataType ProtoMessage::MOUSE_MESSAGE;
constexpr ProtoMessage_DataType ProtoMessage::DataType_MIN;
constexpr ProtoMessage_DataType ProtoMessage::DataType_MAX;
constexpr int ProtoMessage::DataType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void VideoMessage::InitAsDefaultInstance() {
}
class VideoMessage::_Internal {
 public:
};

VideoMessage::VideoMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:VideoMessage)
}
VideoMessage::VideoMessage(const VideoMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&bit_rate_) -
    reinterpret_cast<char*>(&width_)) + sizeof(bit_rate_));
  // @@protoc_insertion_point(copy_constructor:VideoMessage)
}

void VideoMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VideoMessage_RDPBoost_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&bit_rate_) -
      reinterpret_cast<char*>(&width_)) + sizeof(bit_rate_));
}

VideoMessage::~VideoMessage() {
  // @@protoc_insertion_point(destructor:VideoMessage)
  SharedDtor();
}

void VideoMessage::SharedDtor() {
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void VideoMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VideoMessage& VideoMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VideoMessage_RDPBoost_2eproto.base);
  return *internal_default_instance();
}


void VideoMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:VideoMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&width_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&bit_rate_) -
      reinterpret_cast<char*>(&width_)) + sizeof(bit_rate_));
  _internal_metadata_.Clear();
}

const char* VideoMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 width = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 height = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 frame_rate = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          frame_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 bit_rate = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          bit_rate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* VideoMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:VideoMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 width = 1;
  if (this->width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_width(), target);
  }

  // uint32 height = 2;
  if (this->height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_height(), target);
  }

  // uint32 frame_rate = 3;
  if (this->frame_rate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_frame_rate(), target);
  }

  // uint32 bit_rate = 4;
  if (this->bit_rate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_bit_rate(), target);
  }

  // bytes data = 5;
  if (this->data().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:VideoMessage)
  return target;
}

size_t VideoMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:VideoMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 5;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // uint32 width = 1;
  if (this->width() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_width());
  }

  // uint32 height = 2;
  if (this->height() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_height());
  }

  // uint32 frame_rate = 3;
  if (this->frame_rate() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_frame_rate());
  }

  // uint32 bit_rate = 4;
  if (this->bit_rate() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_bit_rate());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VideoMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VideoMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const VideoMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VideoMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VideoMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VideoMessage)
    MergeFrom(*source);
  }
}

void VideoMessage::MergeFrom(const VideoMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VideoMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.width() != 0) {
    _internal_set_width(from._internal_width());
  }
  if (from.height() != 0) {
    _internal_set_height(from._internal_height());
  }
  if (from.frame_rate() != 0) {
    _internal_set_frame_rate(from._internal_frame_rate());
  }
  if (from.bit_rate() != 0) {
    _internal_set_bit_rate(from._internal_bit_rate());
  }
}

void VideoMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VideoMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoMessage::CopyFrom(const VideoMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VideoMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoMessage::IsInitialized() const {
  return true;
}

void VideoMessage::InternalSwap(VideoMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(width_, other->width_);
  swap(height_, other->height_);
  swap(frame_rate_, other->frame_rate_);
  swap(bit_rate_, other->bit_rate_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VideoMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void MouseMessage::InitAsDefaultInstance() {
}
class MouseMessage::_Internal {
 public:
};

MouseMessage::MouseMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MouseMessage)
}
MouseMessage::MouseMessage(const MouseMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&button_) -
    reinterpret_cast<char*>(&x_)) + sizeof(button_));
  // @@protoc_insertion_point(copy_constructor:MouseMessage)
}

void MouseMessage::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&button_) -
      reinterpret_cast<char*>(&x_)) + sizeof(button_));
}

MouseMessage::~MouseMessage() {
  // @@protoc_insertion_point(destructor:MouseMessage)
  SharedDtor();
}

void MouseMessage::SharedDtor() {
}

void MouseMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MouseMessage& MouseMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MouseMessage_RDPBoost_2eproto.base);
  return *internal_default_instance();
}


void MouseMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:MouseMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&button_) -
      reinterpret_cast<char*>(&x_)) + sizeof(button_));
  _internal_metadata_.Clear();
}

const char* MouseMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 button = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          button_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MouseMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MouseMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 x = 1;
  if (this->x() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_x(), target);
  }

  // uint32 y = 2;
  if (this->y() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_y(), target);
  }

  // uint32 button = 3;
  if (this->button() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_button(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MouseMessage)
  return target;
}

size_t MouseMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MouseMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 x = 1;
  if (this->x() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_x());
  }

  // uint32 y = 2;
  if (this->y() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_y());
  }

  // uint32 button = 3;
  if (this->button() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_button());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MouseMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MouseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const MouseMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MouseMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MouseMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MouseMessage)
    MergeFrom(*source);
  }
}

void MouseMessage::MergeFrom(const MouseMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MouseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    _internal_set_x(from._internal_x());
  }
  if (from.y() != 0) {
    _internal_set_y(from._internal_y());
  }
  if (from.button() != 0) {
    _internal_set_button(from._internal_button());
  }
}

void MouseMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MouseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MouseMessage::CopyFrom(const MouseMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MouseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MouseMessage::IsInitialized() const {
  return true;
}

void MouseMessage::InternalSwap(MouseMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(button_, other->button_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MouseMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ProtoMessage::InitAsDefaultInstance() {
  ::_ProtoMessage_default_instance_.videmessagei_ = const_cast< ::VideoMessage*>(
      ::VideoMessage::internal_default_instance());
  ::_ProtoMessage_default_instance_.mousemessagei_ = const_cast< ::MouseMessage*>(
      ::MouseMessage::internal_default_instance());
}
class ProtoMessage::_Internal {
 public:
  static const ::VideoMessage& videmessagei(const ProtoMessage* msg);
  static const ::MouseMessage& mousemessagei(const ProtoMessage* msg);
};

const ::VideoMessage&
ProtoMessage::_Internal::videmessagei(const ProtoMessage* msg) {
  return *msg->data_.videmessagei_;
}
const ::MouseMessage&
ProtoMessage::_Internal::mousemessagei(const ProtoMessage* msg) {
  return *msg->data_.mousemessagei_;
}
void ProtoMessage::set_allocated_videmessagei(::VideoMessage* videmessagei) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_data();
  if (videmessagei) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      videmessagei = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, videmessagei, submessage_arena);
    }
    set_has_videmessagei();
    data_.videmessagei_ = videmessagei;
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoMessage.VideMessageI)
}
void ProtoMessage::set_allocated_mousemessagei(::MouseMessage* mousemessagei) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  clear_data();
  if (mousemessagei) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      mousemessagei = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, mousemessagei, submessage_arena);
    }
    set_has_mousemessagei();
    data_.mousemessagei_ = mousemessagei;
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoMessage.MouseMessageI)
}
ProtoMessage::ProtoMessage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoMessage)
}
ProtoMessage::ProtoMessage(const ProtoMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_ = from.type_;
  clear_has_data();
  switch (from.data_case()) {
    case kVideMessageI: {
      _internal_mutable_videmessagei()->::VideoMessage::MergeFrom(from._internal_videmessagei());
      break;
    }
    case kMouseMessageI: {
      _internal_mutable_mousemessagei()->::MouseMessage::MergeFrom(from._internal_mousemessagei());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:ProtoMessage)
}

void ProtoMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProtoMessage_RDPBoost_2eproto.base);
  type_ = 0;
  clear_has_data();
}

ProtoMessage::~ProtoMessage() {
  // @@protoc_insertion_point(destructor:ProtoMessage)
  SharedDtor();
}

void ProtoMessage::SharedDtor() {
  if (has_data()) {
    clear_data();
  }
}

void ProtoMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProtoMessage& ProtoMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProtoMessage_RDPBoost_2eproto.base);
  return *internal_default_instance();
}


void ProtoMessage::clear_data() {
// @@protoc_insertion_point(one_of_clear_start:ProtoMessage)
  switch (data_case()) {
    case kVideMessageI: {
      delete data_.videmessagei_;
      break;
    }
    case kMouseMessageI: {
      delete data_.mousemessagei_;
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = DATA_NOT_SET;
}


void ProtoMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_ = 0;
  clear_data();
  _internal_metadata_.Clear();
}

const char* ProtoMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .ProtoMessage.DataType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::ProtoMessage_DataType>(val));
        } else goto handle_unusual;
        continue;
      // .VideoMessage VideMessageI = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_videmessagei(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .MouseMessage MouseMessageI = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_mousemessagei(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProtoMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProtoMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .ProtoMessage.DataType type = 1;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // .VideoMessage VideMessageI = 2;
  if (_internal_has_videmessagei()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::videmessagei(this), target, stream);
  }

  // .MouseMessage MouseMessageI = 3;
  if (_internal_has_mousemessagei()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::mousemessagei(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoMessage)
  return target;
}

size_t ProtoMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .ProtoMessage.DataType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  switch (data_case()) {
    // .VideoMessage VideMessageI = 2;
    case kVideMessageI: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *data_.videmessagei_);
      break;
    }
    // .MouseMessage MouseMessageI = 3;
    case kMouseMessageI: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *data_.mousemessagei_);
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProtoMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoMessage)
    MergeFrom(*source);
  }
}

void ProtoMessage::MergeFrom(const ProtoMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
  switch (from.data_case()) {
    case kVideMessageI: {
      _internal_mutable_videmessagei()->::VideoMessage::MergeFrom(from._internal_videmessagei());
      break;
    }
    case kMouseMessageI: {
      _internal_mutable_mousemessagei()->::MouseMessage::MergeFrom(from._internal_mousemessagei());
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
}

void ProtoMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoMessage::CopyFrom(const ProtoMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoMessage::IsInitialized() const {
  return true;
}

void ProtoMessage::InternalSwap(ProtoMessage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(type_, other->type_);
  swap(data_, other->data_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProtoMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::VideoMessage* Arena::CreateMaybeMessage< ::VideoMessage >(Arena* arena) {
  return Arena::CreateInternal< ::VideoMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::MouseMessage* Arena::CreateMaybeMessage< ::MouseMessage >(Arena* arena) {
  return Arena::CreateInternal< ::MouseMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::ProtoMessage* Arena::CreateMaybeMessage< ::ProtoMessage >(Arena* arena) {
  return Arena::CreateInternal< ::ProtoMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>