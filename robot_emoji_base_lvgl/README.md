lvgl_face_lib/
├── include/
│   ├── face_core.h           // 对外统一API入口（创建、销毁、切换表情等）
│   ├── face_style.h          // 配色 / 风格定义
│   ├── face_state.h          // 表情状态机定义（表情、动画状态）
│   ├── face_anim.h           // 动画接口（提供动画方法封装）
│   ├── face_types.h          // 所有通用数据结构声明（位置、颜色、尺寸等共性结构体）
│   └── face_parts/
│       ├── face_eye.h        // 眼睛部分接口（内部使用）
│       └── face_mouth.h      // 嘴巴部分接口（内部使用）
├── src/
│   ├── core/
│   │   ├── face_core.c       // 总控逻辑（状态、渲染、API实现）
│   │   ├── face_state.c      // 状态管理表
│   │   ├── face_style.c      // 风格管理表
│   │   └── face_anim.c       // 动画封装
│   ├── parts/
│   │   ├── face_eye.c        // 眼睛绘制与动画
│   │   └── face_mouth.c      // 嘴巴绘制与动画
│   ├── utils/
│   │   ├── face_draw_helper.c// LVGL 基础绘图封装（圆、弧、坐标等工具）
│   │   └── face_math.c       // 坐标、角度等数学计算
└── demo/
    ├── main.c                // Demo 示例
