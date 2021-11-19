/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_tuner_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_tuner_types[];

# else

static const struct xlat_data v4l2_tuner_types_xdata[] = {
 [V4L2_TUNER_RADIO] = XLAT(V4L2_TUNER_RADIO),
 #define XLAT_VAL_0 ((unsigned) (V4L2_TUNER_RADIO))
 #define XLAT_STR_0 STRINGIFY(V4L2_TUNER_RADIO)
 [V4L2_TUNER_ANALOG_TV] = XLAT(V4L2_TUNER_ANALOG_TV),
 #define XLAT_VAL_1 ((unsigned) (V4L2_TUNER_ANALOG_TV))
 #define XLAT_STR_1 STRINGIFY(V4L2_TUNER_ANALOG_TV)
 [V4L2_TUNER_DIGITAL_TV] = XLAT(V4L2_TUNER_DIGITAL_TV),
 #define XLAT_VAL_2 ((unsigned) (V4L2_TUNER_DIGITAL_TV))
 #define XLAT_STR_2 STRINGIFY(V4L2_TUNER_DIGITAL_TV)
 [V4L2_TUNER_SDR] = XLAT(V4L2_TUNER_SDR),
 #define XLAT_VAL_3 ((unsigned) (V4L2_TUNER_SDR))
 #define XLAT_STR_3 STRINGIFY(V4L2_TUNER_SDR)
 [V4L2_TUNER_RF] = XLAT(V4L2_TUNER_RF),
 #define XLAT_VAL_4 ((unsigned) (V4L2_TUNER_RF))
 #define XLAT_STR_4 STRINGIFY(V4L2_TUNER_RF)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_tuner_types[1] = { {
 .data = v4l2_tuner_types_xdata,
 .size = ARRAY_SIZE(v4l2_tuner_types_xdata),
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