/* Generated by ./src/xlat/gen.sh from ./src/xlat/nf_nft_compat_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_nft_compat_msg_types in mpers mode

# else

static const struct xlat_data nf_nft_compat_msg_types_xdata[] = {
 [NFNL_MSG_COMPAT_GET] = XLAT(NFNL_MSG_COMPAT_GET),
 #define XLAT_VAL_0 ((unsigned) (NFNL_MSG_COMPAT_GET))
 #define XLAT_STR_0 STRINGIFY(NFNL_MSG_COMPAT_GET)
};
static
const struct xlat nf_nft_compat_msg_types[1] = { {
 .data = nf_nft_compat_msg_types_xdata,
 .size = ARRAY_SIZE(nf_nft_compat_msg_types_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */