/* Generated by ./src/xlat/gen.sh from ./src/xlat/nf_ulog_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_ulog_msg_types in mpers mode

# else

static const struct xlat_data nf_ulog_msg_types_xdata[] = {
 [NFULNL_MSG_PACKET] = XLAT(NFULNL_MSG_PACKET),
 #define XLAT_VAL_0 ((unsigned) (NFULNL_MSG_PACKET))
 #define XLAT_STR_0 STRINGIFY(NFULNL_MSG_PACKET)
 [NFULNL_MSG_CONFIG] = XLAT(NFULNL_MSG_CONFIG),
 #define XLAT_VAL_1 ((unsigned) (NFULNL_MSG_CONFIG))
 #define XLAT_STR_1 STRINGIFY(NFULNL_MSG_CONFIG)
};
static
const struct xlat nf_ulog_msg_types[1] = { {
 .data = nf_ulog_msg_types_xdata,
 .size = ARRAY_SIZE(nf_ulog_msg_types_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */