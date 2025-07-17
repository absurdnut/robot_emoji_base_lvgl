#include "my_demo.h"

EmotionState state = emotion_default;

lv_obj_t* create_transparent_container(lv_obj_t* parent, lv_coord_t w,
                                       lv_coord_t h) {
  lv_obj_t* cont = lv_obj_create(parent);
  lv_obj_remove_style_all(cont);
  lv_obj_set_size(cont, w, h);
  lv_obj_clear_flag(cont, LV_OBJ_FLAG_CLICKABLE);
  return cont;
}

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

void robot_emoji_init(robot_emoji_t* emoji, lv_obj_t* parent) {
  emoji->face = lv_obj_create(parent);

  emoji->eye_L.eyesocket =
      lv_obj_create(emoji->face);  // set the place of eye_L
  // emoji->eye_L.eyeball = lv_obj_create(emoji->eye_L.eyesocket);
  // emoji->eye_L->eyebrow = lv_obj_create(emoji->eye_L->eyesocket);

  emoji->eye_R.eyesocket =
      lv_obj_create(emoji->face);  // set the place of eye_R
  // emoji->eye_R.eyeball = lv_obj_create(emoji->eye_R.eyesocket);
  // emoji->eye_R->eyebrow = lv_obj_create(emoji->eye_L->eyesocket);

  emoji->mouth_.mouthsocket =
      lv_obj_create(emoji->face);  // set the place of mouth
  // emoji->mouth_.mouth = lv_obj_create(emoji->mouth_.mouthsocket);

  // lv_obj_set_size(emoji->eye_L.eyeball, 40, 60);
  // lv_obj_set_style_radius(emoji->eye_L.eyeball, 20, 0);
  // lv_obj_set_pos(emoji->eye_L.eyeball, 50, 60);

  // lv_obj_set_size(emoji->eye_R.eyeball, 40, 60);
  // lv_obj_set_style_radius(emoji->eye_R.eyeball, 20, 0);
  // lv_obj_set_pos(emoji->eye_R.eyeball, 150, 60);
}
