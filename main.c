/*
 * robotMotion.h
 *
 *  Created on: Dec 5, 2014
 *      Author: C16Gytenis.Borusas.l
 */

#include <msp430g2553.h>
#include "robotMotion.h"
#include "sensor.h"

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    enableADC10Subsystem();
    initTimerOutputSignals();
    configureA0andA1Timers();

    while(1)
    {
    	if(isLeftSensorTooFarFromWall())
    	{
    		turnSmallLeft();
    		moveSmallForward();
    	}
    	else if(isLeftSensorTooCloseToWall())
    	{
    		turnSmallRight();
    	}
    	else moveForward();
    }

}

