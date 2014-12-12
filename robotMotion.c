/*
 * robotMotion.h
 *
 *  Created on: Dec 9, 2014
 *      Author: C16Gytenis.Borusas.l
 */

#include <msp430g2553.h>
#include "robotMotion.h"

void initTimerOutputSignals()
{
	P1DIR|=BIT1; //TA0.0
	P1DIR|=BIT2; //TA0.1
	P2DIR|=BIT0; //TA1.0
	P2DIR|=BIT1; //TA1.1

	P1SEL|=BIT1; //configures pins as pull-up/ pull-down networks
	P1SEL|=BIT2;
	P2SEL|=BIT0;
	P2SEL|=BIT1;
}

void configureA0andA1Timers()
{
	TA0CTL &= ~MC1|MC0;     // stop timer A0

	TA0CTL |= TACLR;        // clear timer A0

	TA0CTL |= TASSEL1;      // configure for SMCLK

	TA1CTL &= ~MC1|MC0;     // stop timer A0

	TA1CTL |= TACLR;        // clear timer A0

	TA1CTL |= TASSEL1;      // configure for SMCLK

	TA0CCR0 = 100;          // set signal period to 100 clock cycles (~100 microseconds)
	TA0CCR1 = 50;           // set duty cycle to 50/100 (50%)

	TA0CCTL0 |= OUTMOD_5;        // set TACCTL0 to Reset mode
	TA0CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode

	TA1CCR0 = 100;          // set signal period to 100 clock cycles (~100 microseconds)
	TA1CCR1 = 50;           // set duty cycle to 50/100 (50%)

	TA1CCTL0 |= OUTMOD_5;        // set TACCTL0 to Reset mode
	TA1CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode

	TA0CTL |= MC0;          // count up

	TA1CTL |= MC0;		    //count up
}

void clearModes()
{
	TA0CCTL1 &= ~OUTMOD_7;  // clear mode
	TA0CCTL0 &= ~OUTMOD_7;	// clear mode
	TA1CCTL1 &= ~OUTMOD_7;  //clear mode
	TA1CCTL0 &= ~OUTMOD_7;  //clear mode
}

void turnSmallRight()
{
	clearModes();				 //modes are cleared before and after to prevent one mode from interfering with another
	TA0CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode
	TA0CCTL0 |= OUTMOD_7;		 // set TACCTL0 to Reset/Set
	TA1CCTL1 |= OUTMOD_7;        //reset/set
	__delay_cycles(1000);
	clearModes();
}

void turnBigRight()
{
	clearModes();
	TA0CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode
	TA0CCTL0 |= OUTMOD_7;		 // set TACCTL0 to Reset/Set
	TA1CCTL1 |= OUTMOD_7;        //reset/set
	__delay_cycles(280000);
	clearModes();
}

void turnSmallLeft()
{
	clearModes();
	TA1CCTL1 |= OUTMOD_5;    	// set TACCTL1 to Reset / Set mode
	TA1CCTL0 |= OUTMOD_7;		// set TACCTL0 to Reset
	TA0CCTL1 |= OUTMOD_7;
	__delay_cycles(1000);
	clearModes();
}

void turnBigLeft()
{
	clearModes();
	TA1CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset / Set mode
	TA1CCTL0 |= OUTMOD_7;		 // set TACCTL0 to Reset
	TA0CCTL1 |= OUTMOD_7;
	__delay_cycles(280000);
	clearModes();
}

void moveForward()
{
	clearModes();
	TA1CCTL1 |= OUTMOD_7;       //reset/set
	TA0CCTL1 |= OUTMOD_7;       //reset/set
	__delay_cycles(7000);
	clearModes();
}

void moveSmallForward()
{
	clearModes();
	TA1CCTL1 |= OUTMOD_7; 		//reset/set
	TA0CCTL1 |= OUTMOD_7; 		//reset/set
	__delay_cycles(1000);
	clearModes();
}
void moveBackward()
{
	clearModes();
	TA1CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode
	TA1CCTL0 |= OUTMOD_7;		 // set TACCTL0 to Reset/Set
	TA0CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode
	TA0CCTL0 |= OUTMOD_7;		 // set TACCTL0 to Reset/Set
	__delay_cycles(500000);
	clearModes();
}

