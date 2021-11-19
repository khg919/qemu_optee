/* Generated by ./src/xlat/gen.sh from ./src/xlat/ptrace_peeksiginfo_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PTRACE_PEEKSIGINFO_SHARED) || (defined(HAVE_DECL_PTRACE_PEEKSIGINFO_SHARED) && HAVE_DECL_PTRACE_PEEKSIGINFO_SHARED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PTRACE_PEEKSIGINFO_SHARED) == (1), "PTRACE_PEEKSIGINFO_SHARED != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PTRACE_PEEKSIGINFO_SHARED 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ptrace_peeksiginfo_flags in mpers mode

# else

static const struct xlat_data ptrace_peeksiginfo_flags_xdata[] = {
 XLAT(PTRACE_PEEKSIGINFO_SHARED),
 #define XLAT_VAL_0 ((unsigned) (PTRACE_PEEKSIGINFO_SHARED))
 #define XLAT_STR_0 STRINGIFY(PTRACE_PEEKSIGINFO_SHARED)
};
static
const struct xlat ptrace_peeksiginfo_flags[1] = { {
 .data = ptrace_peeksiginfo_flags_xdata,
 .size = ARRAY_SIZE(ptrace_peeksiginfo_flags_xdata),
 .type = XT_NORMAL,
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