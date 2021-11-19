/* Generated by ./src/xlat/gen.sh from ./src/xlat/ax25_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(AX25_P_ROSE) || (defined(HAVE_DECL_AX25_P_ROSE) && HAVE_DECL_AX25_P_ROSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_ROSE) == (0x01), "AX25_P_ROSE != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_ROSE 0x01
#endif
#if defined(AX25_P_VJCOMP) || (defined(HAVE_DECL_AX25_P_VJCOMP) && HAVE_DECL_AX25_P_VJCOMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_VJCOMP) == (0x06), "AX25_P_VJCOMP != 0x06");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_VJCOMP 0x06
#endif
#if defined(AX25_P_VJUNCOMP) || (defined(HAVE_DECL_AX25_P_VJUNCOMP) && HAVE_DECL_AX25_P_VJUNCOMP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_VJUNCOMP) == (0x07), "AX25_P_VJUNCOMP != 0x07");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_VJUNCOMP 0x07
#endif
#if defined(AX25_P_SEGMENT) || (defined(HAVE_DECL_AX25_P_SEGMENT) && HAVE_DECL_AX25_P_SEGMENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_SEGMENT) == (0x08), "AX25_P_SEGMENT != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_SEGMENT 0x08
#endif
#if defined(AX25_P_TEXNET) || (defined(HAVE_DECL_AX25_P_TEXNET) && HAVE_DECL_AX25_P_TEXNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_TEXNET) == (0xc3), "AX25_P_TEXNET != 0xc3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_TEXNET 0xc3
#endif
#if defined(AX25_P_LQ) || (defined(HAVE_DECL_AX25_P_LQ) && HAVE_DECL_AX25_P_LQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_LQ) == (0xc4), "AX25_P_LQ != 0xc4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_LQ 0xc4
#endif
#if defined(AX25_P_ATALK) || (defined(HAVE_DECL_AX25_P_ATALK) && HAVE_DECL_AX25_P_ATALK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_ATALK) == (0xca), "AX25_P_ATALK != 0xca");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_ATALK 0xca
#endif
#if defined(AX25_P_ATALK_ARP) || (defined(HAVE_DECL_AX25_P_ATALK_ARP) && HAVE_DECL_AX25_P_ATALK_ARP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_ATALK_ARP) == (0xcb), "AX25_P_ATALK_ARP != 0xcb");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_ATALK_ARP 0xcb
#endif
#if defined(AX25_P_IP) || (defined(HAVE_DECL_AX25_P_IP) && HAVE_DECL_AX25_P_IP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_IP) == (0xcc), "AX25_P_IP != 0xcc");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_IP 0xcc
#endif
#if defined(AX25_P_ARP) || (defined(HAVE_DECL_AX25_P_ARP) && HAVE_DECL_AX25_P_ARP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_ARP) == (0xcd), "AX25_P_ARP != 0xcd");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_ARP 0xcd
#endif
#if defined(AX25_P_FLEXNET) || (defined(HAVE_DECL_AX25_P_FLEXNET) && HAVE_DECL_AX25_P_FLEXNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_FLEXNET) == (0xce), "AX25_P_FLEXNET != 0xce");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_FLEXNET 0xce
#endif
#if defined(AX25_P_NETROM) || (defined(HAVE_DECL_AX25_P_NETROM) && HAVE_DECL_AX25_P_NETROM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_NETROM) == (0xcf), "AX25_P_NETROM != 0xcf");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_NETROM 0xcf
#endif
#if defined(AX25_P_TEXT) || (defined(HAVE_DECL_AX25_P_TEXT) && HAVE_DECL_AX25_P_TEXT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((AX25_P_TEXT) == (0xf0), "AX25_P_TEXT != 0xf0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define AX25_P_TEXT 0xf0
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ax25_protocols in mpers mode

# else

static const struct xlat_data ax25_protocols_xdata[] = {

 XLAT(AX25_P_ROSE),
 #define XLAT_VAL_0 ((unsigned) (AX25_P_ROSE))
 #define XLAT_STR_0 STRINGIFY(AX25_P_ROSE)
 XLAT(AX25_P_VJCOMP),
 #define XLAT_VAL_1 ((unsigned) (AX25_P_VJCOMP))
 #define XLAT_STR_1 STRINGIFY(AX25_P_VJCOMP)

 XLAT(AX25_P_VJUNCOMP),
 #define XLAT_VAL_2 ((unsigned) (AX25_P_VJUNCOMP))
 #define XLAT_STR_2 STRINGIFY(AX25_P_VJUNCOMP)

 XLAT(AX25_P_SEGMENT),
 #define XLAT_VAL_3 ((unsigned) (AX25_P_SEGMENT))
 #define XLAT_STR_3 STRINGIFY(AX25_P_SEGMENT)
 XLAT(AX25_P_TEXNET),
 #define XLAT_VAL_4 ((unsigned) (AX25_P_TEXNET))
 #define XLAT_STR_4 STRINGIFY(AX25_P_TEXNET)
 XLAT(AX25_P_LQ),
 #define XLAT_VAL_5 ((unsigned) (AX25_P_LQ))
 #define XLAT_STR_5 STRINGIFY(AX25_P_LQ)
 XLAT(AX25_P_ATALK),
 #define XLAT_VAL_6 ((unsigned) (AX25_P_ATALK))
 #define XLAT_STR_6 STRINGIFY(AX25_P_ATALK)
 XLAT(AX25_P_ATALK_ARP),
 #define XLAT_VAL_7 ((unsigned) (AX25_P_ATALK_ARP))
 #define XLAT_STR_7 STRINGIFY(AX25_P_ATALK_ARP)
 XLAT(AX25_P_IP),
 #define XLAT_VAL_8 ((unsigned) (AX25_P_IP))
 #define XLAT_STR_8 STRINGIFY(AX25_P_IP)
 XLAT(AX25_P_ARP),
 #define XLAT_VAL_9 ((unsigned) (AX25_P_ARP))
 #define XLAT_STR_9 STRINGIFY(AX25_P_ARP)
 XLAT(AX25_P_FLEXNET),
 #define XLAT_VAL_10 ((unsigned) (AX25_P_FLEXNET))
 #define XLAT_STR_10 STRINGIFY(AX25_P_FLEXNET)
 XLAT(AX25_P_NETROM),
 #define XLAT_VAL_11 ((unsigned) (AX25_P_NETROM))
 #define XLAT_STR_11 STRINGIFY(AX25_P_NETROM)
 XLAT(AX25_P_TEXT),
 #define XLAT_VAL_12 ((unsigned) (AX25_P_TEXT))
 #define XLAT_STR_12 STRINGIFY(AX25_P_TEXT)
};
static
const struct xlat ax25_protocols[1] = { {
 .data = ax25_protocols_xdata,
 .size = ARRAY_SIZE(ax25_protocols_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */