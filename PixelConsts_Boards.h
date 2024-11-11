#pragma once
#include <inttypes.h>

namespace ConstsBoards
{
	enum type_t : uint8_t
	{
		TYPE_UINT8 = 0x01,
		TYPE_UINT16 = 0x02,
		TYPE_UINT32 = 0x04,
		
		TYPE_INT8 = 0x11,
		TYPE_INT16 = 0x12,
		TYPE_INT32 = 0x14,
		
		TYPE_FLOAT = 0x21,
		
		TYPE_BITMASK8 = 0x31,
		TYPE_BITMASK16 = 0x32,
		TYPE_BITMASK32 = 0x34,
	};
	
	struct dev_t
	{
		uint16_t id;		// ID датчика, параметра или устройства
		type_t type;		// Тип данных параметра (uint8_t - 1, int8_t - 2, uint16_t - 3, int16_t - 4, uint32_t - 5, int32_t - 6, float - 10, bitmask - 20)
		uint8_t factor;		// Множитель передаваемого значения
		uint8_t count;		// Кол-во параметров
	};
};
