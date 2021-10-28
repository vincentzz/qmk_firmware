#include "zz64.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_GRV, KC_2, KC_4, KC_5, KC_7, KC_9, KC_0, KC_EQL, 
		KC_1, KC_3, KC_E, KC_6, KC_8, KC_I, KC_MINS, KC_BSPC, 
		KC_TAB, KC_W, KC_R, KC_T, KC_U, KC_O, KC_P, KC_RBRC, 
		KC_Q, KC_A, KC_D, KC_Y, KC_H, KC_K, KC_LBRC, KC_BSLS, 
		KC_CAPS, KC_S, KC_F, KC_G, KC_J, KC_L, KC_SCLN, KC_ENT, 
		KC_LSFT, KC_Z, KC_C, KC_B, KC_N, KC_COMM, KC_QUOT, KC_RSFT, 
		KC_LCTL, KC_X, KC_V, KC_SPC, KC_M, KC_DOT, KC_SLSH, KC_APP, 
		KC_LGUI, KC_LALT, KC_MS_BTN1, MO(1), KC_MS_BTN2, KC_RALT, KC_RGUI, KC_RCTL),

	KEYMAP(
		KC_ESC, KC_F2, KC_F4, KC_F5, KC_F7, KC_F9, KC_F10, KC_F12, 
		KC_F1, KC_F3, KC_UP, KC_F6, KC_F8, KC_HOME, KC_F11, KC_TRNS, 
		KC_TRNS, KC_WBAK, KC_WFWD, KC_TRNS, KC_INS, KC_PGUP, KC_PSCR, KC_PAUS, 
		KC_TRNS, KC_TRNS, KC_DOWN, KC_TRNS, KC_TRNS, KC_END, KC_SLCK, KC_TRNS, 
		KC_TRNS, KC_LEFT, KC_RGHT, KC_TRNS, KC_DEL, KC_PGDN, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_MPRV, KC_MNXT, KC_MUTE, KC_VOLU, BL_DEC, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_MPLY, KC_VOLD, KC_TRNS, KC_TRNS, BL_TOGG, BL_INC, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS) 
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	/*keyevent_t event = record->event;

	switch (id) {

	}*/
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRD |= (1 << 6); PORTD &= ~(1 << 6);
	} else {
		DDRD &= ~(1 << 6); PORTD &= ~(1 << 6);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}