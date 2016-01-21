/*
 * shiftRgister.h
 *
 *  Created on: 19 Dec 2015
 *      Author: Beni
 */

#ifndef SHIFTRGISTER_H_
#define SHIFTRGISTER_H_

class ShiftRegister
{
public:


	/**
	 *
	 * @param dsPin
	 * @param shcpPin
	 * @param stcpPin
	 * @param digit1Pin
	 * @param digit2Pin
	 * @param digit3Pin
	 * @param digit4Pin
	 */
	ShiftRegister(char dsPin, char shcpPin, char stcpPin, char digit1Pin, char digit2Pin, char digit3Pin, char digit4Pin);
//	ShiftRegister(char dsPim, char shcpPin, char stcpPin, char digitPin);
	void setBrightness(char level);
	void setDigit(char value, char digit, boolean dp);
	void setDigit(char value, boolean dp);

private:
	char dsPin;
	char shcpPin;
	char stcpPin;
	char digit1Pin;
	char digit2Pin;
	char digit3Pin;
	char digit4Pin;

	char brightness;
};




#endif /* SHIFTRGISTER_H_ */
