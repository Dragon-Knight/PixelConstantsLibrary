#pragma once

#include <inttypes.h>

namespace Consts
{
	// Описание структуры особенностей платы BMS
	struct features_bms_t
	{
		uint8_t cells;		// Кол-во ячеек
	};
	
	// Описание структуры особенностей платы двигателей
	struct features_motor_t
	{
		uint8_t motors;		// Битовая маска опрашиваемых двигателей
	};
	
	// Описание структуры особенностей платы заднего света
	struct features_backlight_t
	{

	};
	
	// Описание структуры особенностей платы переднего света
	struct features_frontlight_t
	{

	};
}
