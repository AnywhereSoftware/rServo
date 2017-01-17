#pragma once
#include "B4RDefines.h"
//~dependson: <Servo.h>
namespace B4R {
	//~Version: 0.90
	//~shortname: Servo
	class B4RServo {
		private:
			Servo servo;
		public:
			/**
			*Attaches the servo to the specified pin.
			*Returns 0 if there was a failure.
			*Note that on most boards, adding a servo the PWM feature of pins 9 and 10.
			*/
			Byte Attach(Int Pin);
			/**
			*Attaches the servo to the specified pin.
			*Returns 0 if there was a failure.
			*MinValue and MaxValue set the minimum and maximum pulse width that will be sent to the servo.
			*/
			Byte Attach2(Int Pin, Int MinValue, Int MaxValue);
			//Detaches the pin.
			void Detach();
			/**
			*If the value is smaller than 200 then it is treated as an angle. 
			*Otherwise it is treated as pulse width in microseconds.
			*/
			void Write(Int Value);
			//Writes pulse width in microseconds.
			void WriteMicroseconds(Int Value);
			//Returns current pulse width as an angle between 0 to 180 degrees.
			Int Read();
			//Returns current pulse width in microseconds.
			Int ReadMicroseconds();
			//Returns true if the servo is attached.
			bool getAttached();
			
	};
	
}