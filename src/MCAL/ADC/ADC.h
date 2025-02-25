#ifndef ADC_H_
#define ADC_H_

#include "LIB/STD_types.h"
#include "LIB/BitMath.h"

/* ADMUX */
#define ADMUX				*((volatile u8*)0x27)		//ADC multiplexer selection register

#define ADMUX_REFS1         7							//Reference selection bit1
#define ADMUX_REFS0         6							//Reference selection bit0
#define ADMUX_ADLAR         5							//ADC left adjust result

#define ADMUX_MUX0          0
#define ADMUX_MUX1          1
#define ADMUX_MUX2          2
#define ADMUX_MUX3          3
#define ADMUX_MUX4          4
#define ADC_ADMUX_MUX_MASK 0b11100000

/* ADSRA */
#define ADCSRA				*((volatile u8*)0x26)		//ADC control and status register A

#define ADCSRA_ADEN			7							//ADC enable
#define ADCSRA_ADSC			6                           //Start conversion
#define ADCSRA_ADATE	    5                           //Auto trigger enable
#define ADCSRA_ADIF			4                           //Interrupt flag
#define ADCSRA_ADIE			3                           //Interrupt enable
#define ADCSRA_ADPS2	    2							//Prescaler bit2
#define ADCSRA_ADPS1	    1							//Prescaler bit1
#define ADCSRA_ADPS0	    0							//Prescaler bit0


/* Data Reg  */
#define ADCH			    *((volatile u8*)0x25)		//ADC high register
#define ADCL				*((volatile u8*)0x24)		//ADC Low register


/* SFIOR   */
#define SFIOR  *((volatile u8 *)0x50)

#define SFIOR_ADTS2			7                          //Trigger Source bit2
#define SFIOR_ADTS1	     	6                          //Trigger Source bit1
#define SFIOR_ADTS0		    5                          //Trigger Source bit0


#define ADC_CHANNEL_0                  0
#define ADC_CHANNEL_1                  1
#define ADC_CHANNEL_2                  2
#define ADC_CHANNEL_3                  3
#define ADC_CHANNEL_4                  4
#define ADC_CHANNEL_5                  5
#define ADC_CHANNEL_6                  6
#define ADC_CHANNEL_7                  7

/* Reference voltage options*/
#define ADC_REFS_AREF 0
#define ADC_REFS_AVCC 1
#define ADC_REFS_Internal_2_56 3
#define ADC_REFS_MASK 0b0011111


#define ADC_REF ADC_REFS_AREF

#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   5


/* Pre-scaler options*/
#define ADC_PRESCALER_2 0
#define ADC_PRESCALER_4 2
#define ADC_PRESCALER_8 3
#define ADC_PRESCALER_16 4
#define ADC_PRESCALER_32 5
#define ADC_PRESCALER_64 6
#define ADC_PRESCALER_128 7
#define ADC_PRESCALER_MASK 0b11111000

/* Differential mode*/ 
#define ADC1_ADC0_10x 9
#define ADC1_ADC0_200x 11


void ADC_vInit(u8 u8Prescaler);
u16 ADC_u16ReadChannel(u8 u8Channel);
void ADC_vDisable(void);
void ADC_vEnable(void);

#endif
