/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_spec_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PR_SPEC_STORE_BYPASS) || (defined(HAVE_DECL_PR_SPEC_STORE_BYPASS) && HAVE_DECL_PR_SPEC_STORE_BYPASS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SPEC_STORE_BYPASS) == (0), "PR_SPEC_STORE_BYPASS != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SPEC_STORE_BYPASS 0
#endif
#if defined(PR_SPEC_INDIRECT_BRANCH) || (defined(HAVE_DECL_PR_SPEC_INDIRECT_BRANCH) && HAVE_DECL_PR_SPEC_INDIRECT_BRANCH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_SPEC_INDIRECT_BRANCH) == (1), "PR_SPEC_INDIRECT_BRANCH != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_SPEC_INDIRECT_BRANCH 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_spec_cmds in mpers mode

# else

static const struct xlat_data pr_spec_cmds_xdata[] = {
 [PR_SPEC_STORE_BYPASS] = XLAT(PR_SPEC_STORE_BYPASS),
 #define XLAT_VAL_0 ((unsigned) (PR_SPEC_STORE_BYPASS))
 #define XLAT_STR_0 STRINGIFY(PR_SPEC_STORE_BYPASS)
 [PR_SPEC_INDIRECT_BRANCH] = XLAT(PR_SPEC_INDIRECT_BRANCH),
 #define XLAT_VAL_1 ((unsigned) (PR_SPEC_INDIRECT_BRANCH))
 #define XLAT_STR_1 STRINGIFY(PR_SPEC_INDIRECT_BRANCH)
};
static
const struct xlat pr_spec_cmds[1] = { {
 .data = pr_spec_cmds_xdata,
 .size = ARRAY_SIZE(pr_spec_cmds_xdata),
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