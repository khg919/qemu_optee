/* Generated by ./src/xlat/gen.sh from ./src/xlat/inet6_if_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IF_RS_SENT) || (defined(HAVE_DECL_IF_RS_SENT) && HAVE_DECL_IF_RS_SENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IF_RS_SENT) == (0x10), "IF_RS_SENT != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IF_RS_SENT 0x10
#endif
#if defined(IF_RA_RCVD) || (defined(HAVE_DECL_IF_RA_RCVD) && HAVE_DECL_IF_RA_RCVD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IF_RA_RCVD) == (0x20), "IF_RA_RCVD != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IF_RA_RCVD 0x20
#endif
#if defined(IF_RA_MANAGED) || (defined(HAVE_DECL_IF_RA_MANAGED) && HAVE_DECL_IF_RA_MANAGED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IF_RA_MANAGED) == (0x40), "IF_RA_MANAGED != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IF_RA_MANAGED 0x40
#endif
#if defined(IF_RA_OTHERCONF) || (defined(HAVE_DECL_IF_RA_OTHERCONF) && HAVE_DECL_IF_RA_OTHERCONF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IF_RA_OTHERCONF) == (0x80), "IF_RA_OTHERCONF != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IF_RA_OTHERCONF 0x80
#endif
#if defined(IF_READY) || (defined(HAVE_DECL_IF_READY) && HAVE_DECL_IF_READY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IF_READY) == (0x80000000), "IF_READY != 0x80000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IF_READY 0x80000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat inet6_if_flags in mpers mode

# else

static const struct xlat_data inet6_if_flags_xdata[] = {
 XLAT(IF_RS_SENT),
 #define XLAT_VAL_0 ((unsigned) (IF_RS_SENT))
 #define XLAT_STR_0 STRINGIFY(IF_RS_SENT)
 XLAT(IF_RA_RCVD),
 #define XLAT_VAL_1 ((unsigned) (IF_RA_RCVD))
 #define XLAT_STR_1 STRINGIFY(IF_RA_RCVD)
 XLAT(IF_RA_MANAGED),
 #define XLAT_VAL_2 ((unsigned) (IF_RA_MANAGED))
 #define XLAT_STR_2 STRINGIFY(IF_RA_MANAGED)
 XLAT(IF_RA_OTHERCONF),
 #define XLAT_VAL_3 ((unsigned) (IF_RA_OTHERCONF))
 #define XLAT_STR_3 STRINGIFY(IF_RA_OTHERCONF)
 XLAT(IF_READY),
 #define XLAT_VAL_4 ((unsigned) (IF_READY))
 #define XLAT_STR_4 STRINGIFY(IF_READY)
};
static
const struct xlat inet6_if_flags[1] = { {
 .data = inet6_if_flags_xdata,
 .size = ARRAY_SIZE(inet6_if_flags_xdata),
 .type = XT_SORTED,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */