#pragma once

#include <inttypes.h>

namespace Consts
{
	// Описание структуры пакета ошибки
	struct error_t
	{
		board_type_t board;			// Тип платы
		uint8_t error;				// Код ошибки
		uint8_t data[5];			// Данные для уточнения ошиюки
	};
	
	// 
	enum error_bms_t : uint8_t
	{
		ERROR_BMS_NONE = 0x00,		// Нет ошибок
		ERROR_BMS_LOST = 0x01,		// Потеря связи с BMS
		ERROR_BMS_FRAME = 0x02,		// Данные не распознаны
		
		ERROR_BMS_RX = 0x10,		// Получена ошибка с BMS, в data[0] её код
	};
	
	// 
	enum error_motor_t : uint8_t
	{
		ERROR_MOTOR_NONE = 0x00,	// Нет ошибок
		ERROR_MOTOR_LOST = 0x01,	// Потеря связи с двигателем
		ERROR_MOTOR_FRAME = 0x02,	// Данные не распознаны

		ERROR_MOTOR_RX = 0x10,		// Получена ошибка с двигателя, в data[0] её код
	};
}
