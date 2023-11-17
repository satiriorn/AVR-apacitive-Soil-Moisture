#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "STDIO_UART.h"
#include "capacitive_soil_moisture.h"

int main(void)
{
    uart_init();
    capacitive_soil_moisture_init();
    while (1) 
    {
        printf("%i\n", get_value_from_sensor());
        printf("%i percentage of humidity\n", transform_to_percent());
        _delay_ms(1000);
	}
}