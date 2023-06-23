/******************************************************************************
 *
 * Layer: Apllication
 *
 * File Name: App.c
 *
 * Description: Source file for the Application Layer
 *
 * Author: Abdelmonem Magdi
 *
 *******************************************************************************/
#include "ultrasonic.h"
#include "lcd.h"
#include "avr/interrupt.h"

int main(void)
{
	SREG |= (1<<7); /* Enable Global Interrupt I-Bit */

	uint16 measuredDistance = 0 ;

	LCD_init(); /* Initialize LCD */
	Ultrasonic_init(); /* Initialize ULTRASONIC Sensor */

	LCD_displayString("Distance =    cm");

	while(1)
	{
		measuredDistance = Ultrasonic_readDistance(); /* Read Distance */

		LCD_moveCursor(0, 11);

		/* Display The Distance on LCD */
		if(measuredDistance >= 100)
		{
			LCD_intgerToString(measuredDistance);
		}
		else if((measuredDistance < 100) && (measuredDistance>=10))
		{
			LCD_intgerToString(measuredDistance);
			LCD_displayCharacter(' ');
		}
		else
		{
			LCD_intgerToString(measuredDistance);
			LCD_displayCharacter(' ');
		}
	}
}
