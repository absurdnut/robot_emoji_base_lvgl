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
  lv_obj_t* eyesocket;
  lv_obj_t* eyebrow;  // 眉毛
  lv_obj_t* eyeball;  // 眼珠
} eye_t;

typedef struct {
  lv_obj_t* mouthsocket;
  lv_obj_t* mouth;

} mouth_t;

typedef struct {
  lv_obj_t* face;
  eye_t eye_L;
  eye_t eye_R;
  mouth_t mouth_;
} robot_emoji_t;

typedef enum {  // 表情状态的枚举变量
  emotion_default,
  emotion_happy,
  emotion_sad,
  emotion_angry,
} EmotionState;

robot_emoji_t* robot_emoji_init(robot_emoji_t*, lv_obj_t*);
