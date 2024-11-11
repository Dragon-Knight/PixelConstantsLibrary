#pragma once
#include <inttypes.h>
#include "PixelConsts_Boards.h"

namespace ConstsBoardMotor
{
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Errors = {0x014, ConstsBoards::TYPE_BITMASK16, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_RPM = {0x015, ConstsBoards::TYPE_UINT16, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Speed = {0x016, ConstsBoards::TYPE_UINT16, 10, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Voltage = {0x017, ConstsBoards::TYPE_UINT16, 10, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Current = {0x018, ConstsBoards::TYPE_INT16, 10, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Power = {0x019, ConstsBoards::TYPE_INT16, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_GearRoll = {0x01A, ConstsBoards::TYPE_BITMASK8, 1, 4};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_TempMotor = {0x01B, ConstsBoards::TYPE_INT16, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_TempCtrl = {0x01C, ConstsBoards::TYPE_INT16, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Odometr = {0x01D, ConstsBoards::TYPE_UINT32, 10, 1};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Throttle = {0x01E, ConstsBoards::TYPE_UINT16, 1, 3};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_Transmission = {0x01F, ConstsBoards::TYPE_BITMASK8, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_BrakeRecuperation = {0x020, ConstsBoards::TYPE_BITMASK8, 1, 2};
	static constexpr ConstsBoards::dev_t FrontLeftRigth_IgnitionLock = {0x021, ConstsBoards::TYPE_BITMASK8, 1, 2};
	
	static constexpr ConstsBoards::dev_t RearLeftRigth_Errors = {0x034, ConstsBoards::TYPE_BITMASK16, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_RPM = {0x035, ConstsBoards::TYPE_UINT16, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Speed = {0x036, ConstsBoards::TYPE_UINT16, 10, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Voltage = {0x037, ConstsBoards::TYPE_UINT16, 10, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Current = {0x038, ConstsBoards::TYPE_INT16, 10, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Power = {0x039, ConstsBoards::TYPE_INT16, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_GearRoll = {0x03A, ConstsBoards::TYPE_BITMASK8, 1, 4};
	static constexpr ConstsBoards::dev_t RearLeftRigth_TempMotor = {0x03B, ConstsBoards::TYPE_INT16, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_TempCtrl = {0x03C, ConstsBoards::TYPE_INT16, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Odometr = {0x03D, ConstsBoards::TYPE_UINT32, 10, 1};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Throttle = {0x03E, ConstsBoards::TYPE_UINT16, 1, 3};
	static constexpr ConstsBoards::dev_t RearLeftRigth_Transmission = {0x03F, ConstsBoards::TYPE_BITMASK8, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_BrakeRecuperation = {0x040, ConstsBoards::TYPE_BITMASK8, 1, 2};
	static constexpr ConstsBoards::dev_t RearLeftRigth_IgnitionLock = {0x041, ConstsBoards::TYPE_BITMASK8, 1, 2};

};
