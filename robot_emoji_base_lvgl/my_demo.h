#ifndef MY_DEMO_H
#define MY_DEMO_H

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "lvgl/demos/lv_demos.h"
#include "lvgl/lvgl.h"
#include "src/lib/driver_backends.h"
#include "src/lib/simulator_settings.h"
#include "src/lib/simulator_util.h"

#endif /* MY_DEMO_H */

typedef struct {
  lv_obj_t* eye_L;
  lv_obj_t* eye_R;
  lv_obj_t* mouth;
} robot_emoji_t;

typedef enum {
  emotion_default,
  emotion_happy,
  emotion_sad,
  emotion_angry,
} EmotionState;
