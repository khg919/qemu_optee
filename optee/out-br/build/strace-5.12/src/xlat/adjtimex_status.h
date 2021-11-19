/* Generated by ./src/xlat/gen.sh from ./src/xlat/adjtimex_status.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(STA_PLL) || (defined(HAVE_DECL_STA_PLL) && HAVE_DECL_STA_PLL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PLL) == (0x0001), "STA_PLL != 0x0001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PLL 0x0001
#endif
#if defined(STA_PPSFREQ) || (defined(HAVE_DECL_STA_PPSFREQ) && HAVE_DECL_STA_PPSFREQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PPSFREQ) == (0x0002), "STA_PPSFREQ != 0x0002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PPSFREQ 0x0002
#endif
#if defined(STA_PPSTIME) || (defined(HAVE_DECL_STA_PPSTIME) && HAVE_DECL_STA_PPSTIME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PPSTIME) == (0x0004), "STA_PPSTIME != 0x0004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PPSTIME 0x0004
#endif
#if defined(STA_FLL) || (defined(HAVE_DECL_STA_FLL) && HAVE_DECL_STA_FLL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_FLL) == (0x0008), "STA_FLL != 0x0008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_FLL 0x0008
#endif
#if defined(STA_INS) || (defined(HAVE_DECL_STA_INS) && HAVE_DECL_STA_INS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_INS) == (0x0010), "STA_INS != 0x0010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_INS 0x0010
#endif
#if defined(STA_DEL) || (defined(HAVE_DECL_STA_DEL) && HAVE_DECL_STA_DEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_DEL) == (0x0020), "STA_DEL != 0x0020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_DEL 0x0020
#endif
#if defined(STA_UNSYNC) || (defined(HAVE_DECL_STA_UNSYNC) && HAVE_DECL_STA_UNSYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_UNSYNC) == (0x0040), "STA_UNSYNC != 0x0040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_UNSYNC 0x0040
#endif
#if defined(STA_FREQHOLD) || (defined(HAVE_DECL_STA_FREQHOLD) && HAVE_DECL_STA_FREQHOLD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_FREQHOLD) == (0x0080), "STA_FREQHOLD != 0x0080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_FREQHOLD 0x0080
#endif
#if defined(STA_PPSSIGNAL) || (defined(HAVE_DECL_STA_PPSSIGNAL) && HAVE_DECL_STA_PPSSIGNAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PPSSIGNAL) == (0x0100), "STA_PPSSIGNAL != 0x0100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PPSSIGNAL 0x0100
#endif
#if defined(STA_PPSJITTER) || (defined(HAVE_DECL_STA_PPSJITTER) && HAVE_DECL_STA_PPSJITTER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PPSJITTER) == (0x0200), "STA_PPSJITTER != 0x0200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PPSJITTER 0x0200
#endif
#if defined(STA_PPSWANDER) || (defined(HAVE_DECL_STA_PPSWANDER) && HAVE_DECL_STA_PPSWANDER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PPSWANDER) == (0x0400), "STA_PPSWANDER != 0x0400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PPSWANDER 0x0400
#endif
#if defined(STA_PPSERROR) || (defined(HAVE_DECL_STA_PPSERROR) && HAVE_DECL_STA_PPSERROR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_PPSERROR) == (0x0800), "STA_PPSERROR != 0x0800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_PPSERROR 0x0800
#endif
#if defined(STA_CLOCKERR) || (defined(HAVE_DECL_STA_CLOCKERR) && HAVE_DECL_STA_CLOCKERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_CLOCKERR) == (0x1000), "STA_CLOCKERR != 0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_CLOCKERR 0x1000
#endif
#if defined(STA_NANO) || (defined(HAVE_DECL_STA_NANO) && HAVE_DECL_STA_NANO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_NANO) == (0x2000), "STA_NANO != 0x2000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_NANO 0x2000
#endif
#if defined(STA_MODE) || (defined(HAVE_DECL_STA_MODE) && HAVE_DECL_STA_MODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_MODE) == (0x4000), "STA_MODE != 0x4000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_MODE 0x4000
#endif
#if defined(STA_CLK) || (defined(HAVE_DECL_STA_CLK) && HAVE_DECL_STA_CLK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((STA_CLK) == (0x8000), "STA_CLK != 0x8000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define STA_CLK 0x8000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat adjtimex_status in mpers mode

# else

static const struct xlat_data adjtimex_status_xdata[] = {
 XLAT(STA_PLL),
 #define XLAT_VAL_0 ((unsigned) (STA_PLL))
 #define XLAT_STR_0 STRINGIFY(STA_PLL)
 XLAT(STA_PPSFREQ),
 #define XLAT_VAL_1 ((unsigned) (STA_PPSFREQ))
 #define XLAT_STR_1 STRINGIFY(STA_PPSFREQ)
 XLAT(STA_PPSTIME),
 #define XLAT_VAL_2 ((unsigned) (STA_PPSTIME))
 #define XLAT_STR_2 STRINGIFY(STA_PPSTIME)
 XLAT(STA_FLL),
 #define XLAT_VAL_3 ((unsigned) (STA_FLL))
 #define XLAT_STR_3 STRINGIFY(STA_FLL)
 XLAT(STA_INS),
 #define XLAT_VAL_4 ((unsigned) (STA_INS))
 #define XLAT_STR_4 STRINGIFY(STA_INS)
 XLAT(STA_DEL),
 #define XLAT_VAL_5 ((unsigned) (STA_DEL))
 #define XLAT_STR_5 STRINGIFY(STA_DEL)
 XLAT(STA_UNSYNC),
 #define XLAT_VAL_6 ((unsigned) (STA_UNSYNC))
 #define XLAT_STR_6 STRINGIFY(STA_UNSYNC)
 XLAT(STA_FREQHOLD),
 #define XLAT_VAL_7 ((unsigned) (STA_FREQHOLD))
 #define XLAT_STR_7 STRINGIFY(STA_FREQHOLD)
 XLAT(STA_PPSSIGNAL),
 #define XLAT_VAL_8 ((unsigned) (STA_PPSSIGNAL))
 #define XLAT_STR_8 STRINGIFY(STA_PPSSIGNAL)
 XLAT(STA_PPSJITTER),
 #define XLAT_VAL_9 ((unsigned) (STA_PPSJITTER))
 #define XLAT_STR_9 STRINGIFY(STA_PPSJITTER)
 XLAT(STA_PPSWANDER),
 #define XLAT_VAL_10 ((unsigned) (STA_PPSWANDER))
 #define XLAT_STR_10 STRINGIFY(STA_PPSWANDER)
 XLAT(STA_PPSERROR),
 #define XLAT_VAL_11 ((unsigned) (STA_PPSERROR))
 #define XLAT_STR_11 STRINGIFY(STA_PPSERROR)
 XLAT(STA_CLOCKERR),
 #define XLAT_VAL_12 ((unsigned) (STA_CLOCKERR))
 #define XLAT_STR_12 STRINGIFY(STA_CLOCKERR)
 XLAT(STA_NANO),
 #define XLAT_VAL_13 ((unsigned) (STA_NANO))
 #define XLAT_STR_13 STRINGIFY(STA_NANO)
 XLAT(STA_MODE),
 #define XLAT_VAL_14 ((unsigned) (STA_MODE))
 #define XLAT_STR_14 STRINGIFY(STA_MODE)
 XLAT(STA_CLK),
 #define XLAT_VAL_15 ((unsigned) (STA_CLK))
 #define XLAT_STR_15 STRINGIFY(STA_CLK)
};
static
const struct xlat adjtimex_status[1] = { {
 .data = adjtimex_status_xdata,
 .size = ARRAY_SIZE(adjtimex_status_xdata),
 .type = XT_NORMAL,
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
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
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
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
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
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */