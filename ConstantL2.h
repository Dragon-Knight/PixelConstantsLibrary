#pragma once

#include <inttypes.h>

namespace Consts
{
	// Тип платы, 5 бит (0x00 .. 0x1F)
	enum board_type_t : uint8_t
	{
		BOARD_TYPE_GENERIC = 0x00,
		BOARD_TYPE_BMS1 = 0x01,
		BOARD_TYPE_MOTORS1 = 0x04,
		BOARD_TYPE_BUTTONS1 = 0x07,
		BOARD_TYPE_BACKLIGHT = 0x0A,
		BOARD_TYPE_FRONTLIGHT = 0x0B,
		BOARD_TYPE_MAIN = 0x1F
	};
}
