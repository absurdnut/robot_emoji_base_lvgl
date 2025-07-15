#include "my_demo.h"

EmotionState state = emotion_default;

void lv_example_style_demo(void) {
  lv_obj_set_style_bg_color(lv_screen_active(), lv_color_hex(0x000000), 0);

  lv_obj_t* eye_1 = lv_obj_create(lv_screen_active());
  lv_obj_set_size(eye_1, 40, 60);
  lv_obj_set_style_radius(eye_1, 20, 0);
  lv_obj_set_pos(eye_1, 50, 60);

  lv_obj_t* eye_2 = lv_obj_create(lv_screen_active());
  lv_obj_set_size(eye_2, 40, 60);
  lv_obj_set_style_radius(eye_2, 20, 0);
  lv_obj_set_pos(eye_2, 150, 60);
}
