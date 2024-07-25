/* This file was generated by upb_generator from the input file:
 *
 *     google/protobuf/api.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "google/protobuf/api.upb_minitable.h"
#include "google/protobuf/source_context.upb_minitable.h"
#include "google/protobuf/type.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

extern const struct upb_MiniTable UPB_PRIVATE(_kUpb_MiniTable_StaticallyTreeShaken);
static const upb_MiniTableSubInternal google_protobuf_Api_submsgs[4] = {
  {.UPB_PRIVATE(submsg) = &google__protobuf__Method_msg_init_ptr},
  {.UPB_PRIVATE(submsg) = &google__protobuf__Option_msg_init_ptr},
  {.UPB_PRIVATE(submsg) = &google__protobuf__SourceContext_msg_init_ptr},
  {.UPB_PRIVATE(submsg) = &google__protobuf__Mixin_msg_init_ptr},
};

static const upb_MiniTableField google_protobuf_Api__fields[7] = {
  {1, UPB_SIZE(32, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 32), 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 40), 0, 1, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(40, 48), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 64), 64, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(24, 72), 0, 3, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(28, 12), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__Api_msg_init = {
  &google_protobuf_Api_submsgs[0],
  &google_protobuf_Api__fields[0],
  UPB_SIZE(48, 80), 7, kUpb_ExtMode_NonExtendable, 7, UPB_FASTTABLE_MASK(56), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.Api",
#endif
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000003f00000a, &upb_pss_1bt},
    {0x002000003f000012, &upb_prm_1bt_max128b},
    {0x002800003f01001a, &upb_prm_1bt_maxmaxb},
    {0x003000003f000022, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x004800003f030032, &upb_prm_1bt_max64b},
    {0x000c00003f000038, &upb_psv4_1bt},
  })
};

const upb_MiniTable* google__protobuf__Api_msg_init_ptr = &google__protobuf__Api_msg_init;
static const upb_MiniTableSubInternal google_protobuf_Method_submsgs[1] = {
  {.UPB_PRIVATE(submsg) = &google__protobuf__Option_msg_init_ptr},
};

static const upb_MiniTableField google_protobuf_Method__fields[7] = {
  {1, UPB_SIZE(20, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(28, 32), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, 8, 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(36, 48), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, 9, 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(12, 64), 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(16, 12), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__Method_msg_init = {
  &google_protobuf_Method_submsgs[0],
  &google_protobuf_Method__fields[0],
  UPB_SIZE(48, 72), 7, kUpb_ExtMode_NonExtendable, 7, UPB_FASTTABLE_MASK(56), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.Method",
#endif
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000003f00000a, &upb_pss_1bt},
    {0x002000003f000012, &upb_pss_1bt},
    {0x000800003f000018, &upb_psb1_1bt},
    {0x003000003f000022, &upb_pss_1bt},
    {0x000900003f000028, &upb_psb1_1bt},
    {0x004000003f000032, &upb_prm_1bt_maxmaxb},
    {0x000c00003f000038, &upb_psv4_1bt},
  })
};

const upb_MiniTable* google__protobuf__Method_msg_init_ptr = &google__protobuf__Method_msg_init;
static const upb_MiniTableField google_protobuf_Mixin__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__Mixin_msg_init = {
  NULL,
  &google_protobuf_Mixin__fields[0],
  UPB_SIZE(24, 40), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.Mixin",
#endif
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x001800003f000012, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

const upb_MiniTable* google__protobuf__Mixin_msg_init_ptr = &google__protobuf__Mixin_msg_init;
static const upb_MiniTable *messages_layout[3] = {
  &google__protobuf__Api_msg_init,
  &google__protobuf__Method_msg_init,
  &google__protobuf__Mixin_msg_init,
};

const upb_MiniTableFile google_protobuf_api_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  3,
  0,
  0,
};

#include "upb/port/undef.inc"
