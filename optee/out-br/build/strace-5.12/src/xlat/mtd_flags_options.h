/* Generated by ./src/xlat/gen.sh from ./src/xlat/mtd_flags_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat mtd_flags_options[];

# else

static const struct xlat_data mtd_flags_options_xdata[] = {
 XLAT(MTD_WRITEABLE),
 #define XLAT_VAL_0 ((unsigned) (MTD_WRITEABLE))
 #define XLAT_STR_0 STRINGIFY(MTD_WRITEABLE)
 XLAT(MTD_BIT_WRITEABLE),
 #define XLAT_VAL_1 ((unsigned) (MTD_BIT_WRITEABLE))
 #define XLAT_STR_1 STRINGIFY(MTD_BIT_WRITEABLE)
 XLAT(MTD_NO_ERASE),
 #define XLAT_VAL_2 ((unsigned) (MTD_NO_ERASE))
 #define XLAT_STR_2 STRINGIFY(MTD_NO_ERASE)
 XLAT(MTD_POWERUP_LOCK),
 #define XLAT_VAL_3 ((unsigned) (MTD_POWERUP_LOCK))
 #define XLAT_STR_3 STRINGIFY(MTD_POWERUP_LOCK)
 XLAT(MTD_SLC_ON_MLC_EMULATION),
 #define XLAT_VAL_4 ((unsigned) (MTD_SLC_ON_MLC_EMULATION))
 #define XLAT_STR_4 STRINGIFY(MTD_SLC_ON_MLC_EMULATION)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat mtd_flags_options[1] = { {
 .data = mtd_flags_options_xdata,
 .size = ARRAY_SIZE(mtd_flags_options_xdata),
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