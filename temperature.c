#include <stdint.h>
#include "HD44780.h"
#include "ds18b20.h"
#include <OneWire.h>

int main(void)
{
        //Setup
        LCD_Setup();

	OneWire oneWire(ONE_WIRE_BUS);
	ds18b20 = temp
        uint8_t line;
                LCD_display(0, line);
                while (1)
                {
                                        LCD_PrintInteger(“Menu: Press Second Button”);                                
                                        LCD_PrintString(“F”);
                                        LCD_PrintInteger(LED_GetY());
                                        LCD_PrintString(“C”);
                        
                }

        while (1);

        return 0;
}


void my_delay_ms(unsigned int delay)
{
        unsigned int i;

        for (i=0; i<(delay/10); i++)
        {
                _delay_ms(10);
        }
        if (delay % 10) {
                _delay_ms(delay % 10);
        }
}








