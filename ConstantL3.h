#pragma once

#include <inttypes.h>

namespace Consts
{
	// ID функций протокола L3
	enum l3_funcid_t
	{
		L3FUNC_NONE = 0x00,
		L3FUNC_PING,
		L3FUNC_AUTH_INIT_REQ,
		L3FUNC_AUTH_INIT_RESP,
		L3FUNC_AUTH_REQ,
		L3FUNC_AUTH_RESP,
	};
}
