/* Generated by ./src/xlat/gen.sh from ./src/xlat/evdev_prop.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_prop in mpers mode

# else

static const struct xlat_data evdev_prop_xdata[] = {
 [INPUT_PROP_POINTER] = XLAT(INPUT_PROP_POINTER),
 #define XLAT_VAL_0 ((unsigned) (INPUT_PROP_POINTER))
 #define XLAT_STR_0 STRINGIFY(INPUT_PROP_POINTER)
 [INPUT_PROP_DIRECT] = XLAT(INPUT_PROP_DIRECT),
 #define XLAT_VAL_1 ((unsigned) (INPUT_PROP_DIRECT))
 #define XLAT_STR_1 STRINGIFY(INPUT_PROP_DIRECT)
 [INPUT_PROP_BUTTONPAD] = XLAT(INPUT_PROP_BUTTONPAD),
 #define XLAT_VAL_2 ((unsigned) (INPUT_PROP_BUTTONPAD))
 #define XLAT_STR_2 STRINGIFY(INPUT_PROP_BUTTONPAD)
 [INPUT_PROP_SEMI_MT] = XLAT(INPUT_PROP_SEMI_MT),
 #define XLAT_VAL_3 ((unsigned) (INPUT_PROP_SEMI_MT))
 #define XLAT_STR_3 STRINGIFY(INPUT_PROP_SEMI_MT)
 [INPUT_PROP_TOPBUTTONPAD] = XLAT(INPUT_PROP_TOPBUTTONPAD),
 #define XLAT_VAL_4 ((unsigned) (INPUT_PROP_TOPBUTTONPAD))
 #define XLAT_STR_4 STRINGIFY(INPUT_PROP_TOPBUTTONPAD)
 [INPUT_PROP_POINTING_STICK] = XLAT(INPUT_PROP_POINTING_STICK),
 #define XLAT_VAL_5 ((unsigned) (INPUT_PROP_POINTING_STICK))
 #define XLAT_STR_5 STRINGIFY(INPUT_PROP_POINTING_STICK)
 [INPUT_PROP_ACCELEROMETER] = XLAT(INPUT_PROP_ACCELEROMETER),
 #define XLAT_VAL_6 ((unsigned) (INPUT_PROP_ACCELEROMETER))
 #define XLAT_STR_6 STRINGIFY(INPUT_PROP_ACCELEROMETER)
};
static
const struct xlat evdev_prop[1] = { {
 .data = evdev_prop_xdata,
 .size = ARRAY_SIZE(evdev_prop_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */