/*
 * shiftRgister.cpp
 *
 *  Created on: 19 Dec 2015
 *      Author: Beni
 */

#include "Arduino.h"
#include "shiftRgister.h"

const char DEFAULT_BRIGHTNESS = 127;

ShiftRegister::ShiftRegister(char dsPin, char shcpPin, char stcpPin, char digit1Pin, char digit2Pin = 0, char digit3Pin = 0, char digit4Pin = 0)
	:dsPin(dsPin),
	 shcpPin(shcpPin),
	 stcpPin(stcpPin),
	 digit1Pin(digit1Pin),
	 digit2Pin(digit2Pin),
	 digit3Pin(digit3Pin),
	 digit4Pin(digit4Pin),
	 brightness(DEFAULT_BRIGHTNESS)
{
}

void ShiftRegister::setBrightness(char level)
{
	brightness = map(level, 1, 15, 250, 0);
}

void ShiftRegister::setDigit(char value, char digit, boolean dp)
{

}

void ShiftRegister::setDigit(char value, boolean dp)
{
	setDigit(value, 1, dp);
}



