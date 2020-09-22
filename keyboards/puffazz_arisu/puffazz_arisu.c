/* Copyright 2020 Greg Zhou
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "puffazz_arisu.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

	//setPinOutput(B2); /* Num Lock */
	//setPinOutput(B1); /* Caps Lock */
	//setPinOutput(B0); /* Scroll Lock */

	matrix_init_user();
}

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t* record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware

	return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
	bool res = led_update_user(led_state);
	if (res) {
		// writePin sets the pin high for 1 and low for 0.
		// In this example the pins are inverted, setting
		// it low/0 turns it on, and high/1 turns the LED off.
		// This behavior depends on whether the LED is between the pin
		// and VCC or the pin and GND.

		// LED Indicators are connected as follows: Pin -> LED/Resistor -> GND
		// Set LED to high/1 to turn on and low/0 to turn off.
		//writePin(B2, led_state.num_lock);
		//writePin(B1, led_state.caps_lock);
		//writePin(B0, led_state.scroll_lock);
		//writePin(B3, !led_state.compose);
		//writePin(B4, !led_state.kana);
	}
	return res;
}
