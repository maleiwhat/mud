//  Copyright (c) 2016 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#include <obj/Generated/Forward.h>

namespace mud
{
	class MUD_OBJ_EXPORT NonCopy
	{
	public:
		NonCopy() {}
		NonCopy(const NonCopy&) = delete;
		NonCopy& operator=(const NonCopy&) = delete;
	};

	class MUD_OBJ_EXPORT Movabl
	{
	public:
		Movabl() {}
		Movabl(const Movabl&) = delete;
		Movabl& operator=(const NonCopy&) = delete;
		Movabl(Movabl&& other) = default;
		Movabl& operator=(Movabl&& other) = default;
	};
}