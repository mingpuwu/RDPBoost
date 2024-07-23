/* This file was generated by upb_generator from the input file:
 *
 *     google/protobuf/field_mask.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */

#ifndef GOOGLE_PROTOBUF_FIELD_MASK_PROTO_UPB_H_
#define GOOGLE_PROTOBUF_FIELD_MASK_PROTO_UPB_H_

#include "upb/generated_code_support.h"

#include "google/protobuf/field_mask.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct google_protobuf_FieldMask { upb_Message UPB_PRIVATE(base); } google_protobuf_FieldMask;



/* google.protobuf.FieldMask */

UPB_INLINE google_protobuf_FieldMask* google_protobuf_FieldMask_new(upb_Arena* arena) {
  return (google_protobuf_FieldMask*)_upb_Message_New(&google__protobuf__FieldMask_msg_init, arena);
}
UPB_INLINE google_protobuf_FieldMask* google_protobuf_FieldMask_parse(const char* buf, size_t size, upb_Arena* arena) {
  google_protobuf_FieldMask* ret = google_protobuf_FieldMask_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &google__protobuf__FieldMask_msg_init, NULL, 0, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE google_protobuf_FieldMask* google_protobuf_FieldMask_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  google_protobuf_FieldMask* ret = google_protobuf_FieldMask_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, UPB_UPCAST(ret), &google__protobuf__FieldMask_msg_init, extreg, options,
                 arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* google_protobuf_FieldMask_serialize(const google_protobuf_FieldMask* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &google__protobuf__FieldMask_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* google_protobuf_FieldMask_serialize_ex(const google_protobuf_FieldMask* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(UPB_UPCAST(msg), &google__protobuf__FieldMask_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void google_protobuf_FieldMask_clear_paths(google_protobuf_FieldMask* msg) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Message_ClearBaseField(UPB_UPCAST(msg), &field);
}
UPB_INLINE upb_StringView const* google_protobuf_FieldMask_paths(const google_protobuf_FieldMask* msg, size_t* size) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(UPB_UPCAST(msg), &field);
  if (arr) {
    if (size) *size = arr->UPB_PRIVATE(size);
    return (upb_StringView const*)upb_Array_DataPtr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE const upb_Array* _google_protobuf_FieldMask_paths_upb_array(const google_protobuf_FieldMask* msg, size_t* size) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(UPB_UPCAST(msg), &field);
  if (size) {
    *size = arr ? arr->UPB_PRIVATE(size) : 0;
  }
  return arr;
}
UPB_INLINE upb_Array* _google_protobuf_FieldMask_paths_mutable_upb_array(google_protobuf_FieldMask* msg, size_t* size, upb_Arena* arena) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(UPB_UPCAST(msg),
                                                       &field, arena);
  if (size) {
    *size = arr ? arr->UPB_PRIVATE(size) : 0;
  }
  return arr;
}

UPB_INLINE upb_StringView* google_protobuf_FieldMask_mutable_paths(google_protobuf_FieldMask* msg, size_t* size) {
  upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(UPB_UPCAST(msg), &field);
  if (arr) {
    if (size) *size = arr->UPB_PRIVATE(size);
    return (upb_StringView*)upb_Array_MutableDataPtr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE upb_StringView* google_protobuf_FieldMask_resize_paths(google_protobuf_FieldMask* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (upb_StringView*)upb_Message_ResizeArrayUninitialized(UPB_UPCAST(msg),
                                                   &field, size, arena);
}
UPB_INLINE bool google_protobuf_FieldMask_add_paths(google_protobuf_FieldMask* msg, upb_StringView val, upb_Arena* arena) {
  upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(
      UPB_UPCAST(msg), &field, arena);
  if (!arr || !UPB_PRIVATE(_upb_Array_ResizeUninitialized)(
                  arr, arr->UPB_PRIVATE(size) + 1, arena)) {
    return false;
  }
  UPB_PRIVATE(_upb_Array_Set)
  (arr, arr->UPB_PRIVATE(size) - 1, &val, sizeof(val));
  return true;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* GOOGLE_PROTOBUF_FIELD_MASK_PROTO_UPB_H_ */
