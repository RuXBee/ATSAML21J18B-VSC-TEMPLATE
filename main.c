#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	gpio_set_pin_direction(PIN_PB10, GPIO_DIRECTION_OUT);
	
	/* Replace with your application code */
	while (1) {
		delay_ms(1000);
		gpio_toggle_pin_level(PIN_PB10);
	}
}
