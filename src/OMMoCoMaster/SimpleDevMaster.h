/*
 * SimpleDevMaster.h
 *
 *  Created on: 25.04.2012
 *      Author: perepelitsa
 */

#ifndef SIMPLEDEVMASTER_H_
#define SIMPLEDEVMASTER_H_

#include <inttypes.h>
#include "OMMoCoMaster.h"
#include "ByteBuffer.h"


class SimpleDevMaster : public OMMoCoMaster {
	//HardwareSerial serObj;
	uint8_t slave_addr;
	uint8_t sendBufStore[10];
	ByteBuffer sendBuf;
public:
	SimpleDevMaster(HardwareSerial& c_serObj, uint8_t c_dePin);
	virtual ~SimpleDevMaster();

	//virtual overrides (for future)
	char Init(uint8_t ucBusAddress, uint32_t portBaud);
	//virtual char Close(void);
	//virtual char Enable(void);
	//virtual char Disable(void);
	//virtual char Poll(void);

public:
	//supported commands
	bool cdInterval(uint16_t interval);
	bool cdExposure(uint32_t exposure);
	bool cdFocus(uint16_t focus);
	bool cdMaxShots(uint16_t count);
	bool cdExposureDelay(uint16_t delay);
	bool cdFocusWShutter(bool isOn);
	bool cdRepeatCycles(uint8_t count);
	bool mdStepsEachInterval(uint16_t steps);
	bool mdNOOP(void);
	bool mdDirection(bool dir);
	bool mdMaximumTravelSteps(uint32_t steps);
	bool mdMotorEnable(void);
	bool mdMotorDisable(void);
	bool mdSetHomePositionHere(void);
	bool mdBackslashAmount(uint8_t steps);
	bool mdEasingMode(uint8_t mode);
	bool mdContinuousMode(bool isOn);

	//
	bool nop();
	bool start();
	bool pause();
	bool cameraEnable();
	bool cameraDisable();
	bool moveMotorSimple(bool dir, uint16_t steps);
	bool sendMotorHome();
	bool exposeNow(uint32_t exposure);
	bool motorSleep(bool isSleep);
	bool motorMaxStepRate(uint16_t stepsPerSecond);
	bool motorMaxStepSpeed(uint16_t stepsPerSecond);
	bool nop1();
	bool nop2();
	bool nop3();
	bool debugLed(bool isOn);
	bool stopMotorNow();
	bool microStepLevel(uint8_t level);
	bool timingMaster(bool isMaster);
	bool moveMotorComplex(bool dir, uint32_t steps,
			              uint32_t totalTravelTime, uint32_t accelTime,
			              uint32_t decelTime);
	bool planInterleavedTravel(bool dir, uint32_t steps,
			                   uint32_t totalTravelIntervals, uint32_t accelIntervals,
			                   uint32_t decelIntervals);
	bool cleanPlannedTravel();
	bool statusRequest(uint8_t statusType, unsigned char* blob);



};

#endif /* SIMPLEDEVMASTER_H_ */