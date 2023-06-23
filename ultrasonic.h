/******************************************************************************
 *
 * Module: ULTRASONIC
 *
 * File Name: ultrasonic.h
 *
 * Description: Header file for the AVR ULTRASONIC driver
 *
 * Author: Abdelmonem Magdi
 *
 *******************************************************************************/

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"

/* Static Config. */
#define TRIGGER_PORT PORTB_ID
#define TRRIGER_PIN  PIN5_ID

#define ECHO_PORT    PORTD_ID
#define ECHO_PIN     PIN6_ID

/* Functions Prototype*/
void Ultrasonic_init(void);
uint16 Ultrasonic_readDistance(void);
void Ultrasonic_edgeProcessing(void);

#endif /* ULTRASONIC_H_ */
