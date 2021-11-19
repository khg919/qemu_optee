/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_tca_stats_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_tca_stats_attrs in mpers mode

# else

static const struct xlat_data rtnl_tca_stats_attrs_xdata[] = {
 [TCA_STATS_UNSPEC] = XLAT(TCA_STATS_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (TCA_STATS_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(TCA_STATS_UNSPEC)
 [TCA_STATS_BASIC] = XLAT(TCA_STATS_BASIC),
 #define XLAT_VAL_1 ((unsigned) (TCA_STATS_BASIC))
 #define XLAT_STR_1 STRINGIFY(TCA_STATS_BASIC)
 [TCA_STATS_RATE_EST] = XLAT(TCA_STATS_RATE_EST),
 #define XLAT_VAL_2 ((unsigned) (TCA_STATS_RATE_EST))
 #define XLAT_STR_2 STRINGIFY(TCA_STATS_RATE_EST)
 [TCA_STATS_QUEUE] = XLAT(TCA_STATS_QUEUE),
 #define XLAT_VAL_3 ((unsigned) (TCA_STATS_QUEUE))
 #define XLAT_STR_3 STRINGIFY(TCA_STATS_QUEUE)
 [TCA_STATS_APP] = XLAT(TCA_STATS_APP),
 #define XLAT_VAL_4 ((unsigned) (TCA_STATS_APP))
 #define XLAT_STR_4 STRINGIFY(TCA_STATS_APP)
 [TCA_STATS_RATE_EST64] = XLAT(TCA_STATS_RATE_EST64),
 #define XLAT_VAL_5 ((unsigned) (TCA_STATS_RATE_EST64))
 #define XLAT_STR_5 STRINGIFY(TCA_STATS_RATE_EST64)
 [TCA_STATS_PAD] = XLAT(TCA_STATS_PAD),
 #define XLAT_VAL_6 ((unsigned) (TCA_STATS_PAD))
 #define XLAT_STR_6 STRINGIFY(TCA_STATS_PAD)
 [TCA_STATS_BASIC_HW] = XLAT(TCA_STATS_BASIC_HW),
 #define XLAT_VAL_7 ((unsigned) (TCA_STATS_BASIC_HW))
 #define XLAT_STR_7 STRINGIFY(TCA_STATS_BASIC_HW)
 [TCA_STATS_PKT64] = XLAT(TCA_STATS_PKT64),
 #define XLAT_VAL_8 ((unsigned) (TCA_STATS_PKT64))
 #define XLAT_STR_8 STRINGIFY(TCA_STATS_PKT64)
};
static
const struct xlat rtnl_tca_stats_attrs[1] = { {
 .data = rtnl_tca_stats_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_tca_stats_attrs_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */