#pragma once
#include <arduino.h>

class IRSensors
{
protected:
  byte leftIRPin, middlePin, rightIRPin;

public:
  IRSensors();
  IRSensors(byte leftIRPin, byte middlePin, byte rightIRPin);
  bool isLeftOnBlack();
  bool isMiddleOnBlack();
  bool isRightOnBlack();
};
