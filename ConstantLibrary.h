#pragma once

#include <inttypes.h>
#include <ConstantCore.h>
#include <ConstantL2.h>
#include <ConstantL3.h>

namespace Consts
{
	static constexpr char version[] = "25.08.2023";



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

	// Описание структуры пакета ошибки
	struct error_t
	{
		board_type_t board;			// Тип платы
		uint8_t error;				// Код ошибки
		uint8_t data[5];			// Данные для уточнения ошиюки
	};
	
	// 
	enum error_motor_t : uint8_t
	{
		ERROR_MOTOR_NONE = 0x00,	// Нет ошибок
		ERROR_MOTOR_LOST = 0x01,	// Потеря связи с двигателем
	};








}

