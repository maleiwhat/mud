//  Copyright (c) 2018 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#include <obj/Util/Timer.h>
#include <ui/Generated/Forward.h>
#include <ui/Sheet.h>

namespace mud
{
namespace ui
{
	struct CursorStyles
	{
		CursorStyles();
		Style cursor; Style resize_x; Style resize_y; Style move; Style resize_diag_left; Style resize_diag_right; Style caret;
	};

	MUD_UI_EXPORT CursorStyles& cursor_styles();

	MUD_UI_EXPORT _func_ Widget* tooltip(Widget& parent, const vec2& position);
	MUD_UI_EXPORT _func_ Widget* tooltip(Widget& parent, const vec2& position, cstring content);
	MUD_UI_EXPORT _func_ Widget* tooltip(Widget& parent, const vec2& position, array<cstring> elements);

	MUD_UI_EXPORT Widget* tooltip(Widget& parent, const Frame& parent_frame);
	MUD_UI_EXPORT Widget* tooltip(Widget& parent, const Frame& parent_frame, cstring elements);
	MUD_UI_EXPORT Widget* tooltip(Widget& parent, const Frame& parent_frame, array<cstring> elements);

	MUD_UI_EXPORT Widget& cursor(Widget& parent, const vec2& position, Style& style, bool locked = false);
	MUD_UI_EXPORT _func_ Widget& cursor(Widget& parent, const vec2& position, Widget& hovered, bool locked = false);

	MUD_UI_EXPORT _func_ Widget& rectangle(Widget& parent, const vec4& rect);
}
}
