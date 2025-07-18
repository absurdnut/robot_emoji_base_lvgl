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

void convert_transparent_container(lv_obj_t* cont) {  // 转换透明容器
  lv_obj_set_style_bg_opa(cont, LV_OPA_TRANSP, 0);
  lv_obj_set_style_border_opa(cont, LV_OPA_COVER, 0);
  lv_obj_set_style_pad_all(cont, 0, 0);
  lv_obj_clear_flag(cont, LV_OBJ_FLAG_CLICKABLE);  // 消除点击
}

void robot_emoji_init(robot_emoji_t* emoji, lv_obj_t* parent) {  //
  int32_t border_width = lv_obj_get_width(parent);
  int32_t border_height = lv_obj_get_height(parent);

  emoji->face = lv_obj_create(parent);
  lv_obj_set_size(emoji->face, border_width, border_height);
  convert_transparent_container(emoji->face);
  //

  emoji->eye_L.eyesocket =
      lv_obj_create(emoji->face);  // set the place of eye_L
  lv_obj_set_size(emoji->eye_L.eyesocket, lv_obj_get_width(emoji->face) / 2,
                  lv_obj_get_height(emoji->face) / 2);
  lv_obj_align(emoji->eye_L.eyesocket, LV_ALIGN_TOP_LEFT, 0, 0);
  convert_transparent_container(emoji->eye_L.eyesocket);

  emoji->eye_L.eyeball = lv_obj_create(emoji->eye_L.eyesocket);
  lv_obj_set_size(emoji->eye_L.eyeball, 40, 60);
  lv_obj_set_style_radius(emoji->eye_L.eyeball, 20, 0);
  lv_obj_align(emoji->eye_L.eyeball, LV_ALIGN_CENTER, 0, 0);
  // emoji->eye_L.eyebrow = lv_obj_create(emoji->eye_L.eyesocket);
  //

  // emoji->eye_R.eyesocket =
  //     lv_obj_create(emoji->face);  // set the place of eye_R
  // convert_transparent_container(emoji->eye_R.eyesocket);
  // lv_obj_set_size(emoji->eye_R.eyesocket, border_width / 2, border_height /
  // 2); lv_obj_align(emoji->eye_R.eyesocket, LV_ALIGN_TOP_RIGHT, 0, 0);
  // convert_transparent_container(emoji->eye_R.eyesocket);

  // emoji->eye_R.eyeball = lv_obj_create(emoji->eye_R.eyesocket);
  // emoji->eye_R->eyebrow = lv_obj_create(emoji->eye_L->eyesocket);

  // emoji->mouth_.mouthsocket =
  //     lv_obj_create(emoji->face);  // set the place of mouth
  // convert_transparent_container(emoji->mouth_.mouthsocket);
  // emoji->mouth_.mouth = lv_obj_create(emoji->mouth_.mouthsocket);

  // lv_obj_set_size(emoji->eye_L.eyeball, 40, 60);
  // lv_obj_set_style_radius(emoji->eye_L.eyeball, 20, 0);
  // lv_obj_set_pos(emoji->eye_L.eyeball, 50, 60);

  // lv_obj_set_size(emoji->eye_R.eyeball, 40, 60);
  // lv_obj_set_style_radius(emoji->eye_R.eyeball, 20, 0);
  // lv_obj_set_pos(emoji->eye_R.eyeball, 150, 60);
}
