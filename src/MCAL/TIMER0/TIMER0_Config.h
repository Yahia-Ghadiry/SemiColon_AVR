#ifndef TIMER0_CONFIG_H_
#define TIMER0_CONFIG_H_

#include "TIMER0_Private.h"

// choose from:
/*   
 *   TIMER0_PRESCALER_DISCONNECT
 *   TIMER0_PRESCALER_1
 *   TIMER0_PRESCALER_8
 *   TIMER0_PRESCALER_64
 *   TIMER0_PRESCALER_256
 *   TIMER0_PRESCALER_1024
 *   TIMER0_PRESCALER_EXTCLK_FALLEDGE
 *   TIMER0_PRESCALER_EXTCLK_RAISEDGE
 */
#define TIMER0_PRESCALER     TIMER0_PRESCALER_64



//choose from :
/*  
 *   TIMER0_NORMAL_MODE
 *   TIMER0_CTC_MODE
 *   TIMER0_PHASECORRECT_MODE
 *   TIMER0_FASTPWM_MODE
 *
 */
#define TIMER0_MODE  TIMER0_NORMAL_MODE



//choose from :
/*  
 *   TIMER0_OC0_DISCONNECTED
 *   TIMER0_OC0_TOG
 *   TIMER0_OC0_CLEAR
 *   TIMER0_OC0_SET
 *   TIMER_OC0_PWM_NON_INVERTING
 *   TIMER_OC0_PWM_INVERTING
 */
#define TIMER0_OC0_MODE  TIMER_OC0_PWM_NON_INVERTING



// select F_OSC
#define F_OSC	8


#endif
