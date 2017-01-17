#include "B4RDefines.h"
namespace B4R {
	Byte B4RServo::Attach(Int Pin) {
		return servo.attach(Pin);
	}
	Byte B4RServo::Attach2(Int Pin, Int MinValue, Int MaxValue) {
		return servo.attach(Pin, MinValue, MaxValue);
	}

	void B4RServo::Detach(){
		servo.detach();
	}
	void B4RServo::Write(Int Value){
		servo.write(Value);
	}
	void B4RServo::WriteMicroseconds(Int Value){
		servo.writeMicroseconds(Value);
	}
	Int B4RServo::Read(){
		return servo.read();
	}
	Int B4RServo::ReadMicroseconds() {
		return servo.readMicroseconds();
	}
	bool B4RServo::getAttached() {
		return servo.attached();
	}
}