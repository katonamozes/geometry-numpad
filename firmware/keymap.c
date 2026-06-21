#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_horizontal(
		QK_MOUSE_BUTTON_1 , KC_KP_1 , KC_KP_8 , KC_KP_6 ,
        KC_KP_2 , KC_KP_4 , QK_MOUSE_BUTTON_2 , KC_KP_9 ,
        KC_KP_5 , KC_KP_7 , KC_KP_3 , QK_MOUSE_BUTTON_1
    )
}
#endif