/************************************************************************************/
/************************* Author : Seham      **************************************/
/************************* Layer  : MCAL       **************************************/
/************************* SWC    : DIO        **************************************/
/************************* Version: 1.0        **************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "STD_TYPES.h"

/************ PORTx *****************/
enum PORT
{
	DIO_PORTA = 0 ,
	DIO_PORTB = 1 ,
	DIO_PORTC = 2 ,
	DIO_PORTD = 3
};

/************ DIRECTION *************/
enum DIRECTION
{
	DIO_INPUT = 0 ,
	DIO_OUTPUT = 1
};

/************ PINx ******************/
enum PIN
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7	
};

/************ VALUE *****************/
enum VALUE
{
	DIO_HIGH = 1,
	DIO_LOW = 0
};


void DIO_SetPinDirection(u8 Port , u8 Pin , u8 Direction);
void DIO_SetPinValue    (u8 Port , u8 Pin , u8 Value    );
u8   DIO_GetPinValue    (u8 Port , u8 Pin );

void DIO_SetPortDirection(u8 Port, u8 Direction);
void DIO_SetPortValue    (u8 Port, u8 Value);

#endif
