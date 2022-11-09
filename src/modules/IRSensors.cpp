#include "IRSensors.h"

IRSensors::IRSensors(byte leftIRPin, byte middlePin, byte rightIRPin)
{
    this->leftIRPin = leftIRPin;
    this->middlePin = middlePin;
    this->rightIRPin = rightIRPin;
    pinMode(this->leftIRPin, INPUT);
    pinMode(this->middlePin, INPUT);
    pinMode(this->rightIRPin, INPUT);
}
//
bool IRSensors::isLeftOnBlack()
{
    return (digitalRead(this->leftIRPin));
}
bool IRSensors::isMiddleOnBlack()
{
    return (digitalRead(this->middlePin));
}
bool IRSensors::isRightOnBlack()
{
    return (digitalRead(this->rightIRPin));
}
