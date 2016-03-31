// Copyright 2015 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include "Common/CommonTypes.h"

enum KeyMasks
{
	KEYMASK_HOME = (1 << 0),
	KEYMASK_END = (1 << 1),
	KEYMASK_PGUP = (1 << 2),
	KEYMASK_PGDN = (1 << 3),
	KEYMASK_SCROLLLOCK = (1 << 4),
	KEYMASK_A = (1 << 5),
	KEYMASK_B = (1 << 6),
	KEYMASK_C = (1 << 7),
	KEYMASK_D = (1 << 8),
	KEYMASK_E = (1 << 9),
	KEYMASK_F = (1 << 10),
	KEYMASK_G = (1 << 11),
	KEYMASK_H = (1 << 12),
	KEYMASK_I = (1 << 13),
	KEYMASK_J = (1 << 14),
	KEYMASK_K = (1 << 15),
	KEYMASK_L = (1 << 0),
	KEYMASK_M = (1 << 1),
	KEYMASK_N = (1 << 2),
	KEYMASK_O = (1 << 3),
	KEYMASK_P = (1 << 4),
	KEYMASK_Q = (1 << 5),
	KEYMASK_R = (1 << 6),
	KEYMASK_S = (1 << 7),
	KEYMASK_T = (1 << 8),
	KEYMASK_U = (1 << 9),
	KEYMASK_V = (1 << 10),
	KEYMASK_W = (1 << 11),
	KEYMASK_X = (1 << 12),
	KEYMASK_Y = (1 << 13),
	KEYMASK_Z = (1 << 14),
	KEYMASK_1 = (1 << 15),
	KEYMASK_2 = (1 << 0),
	KEYMASK_3 = (1 << 1),
	KEYMASK_4 = (1 << 2),
	KEYMASK_5 = (1 << 3),
	KEYMASK_6 = (1 << 4),
	KEYMASK_7 = (1 << 5),
	KEYMASK_8 = (1 << 6),
	KEYMASK_9 = (1 << 7),
	KEYMASK_0 = (1 << 8),
	KEYMASK_MINUS = (1 << 9),
	KEYMASK_PLUS = (1 << 10),
	KEYMASK_PRINTSCR = (1 << 11),
	KEYMASK_BRACE_OPEN = (1 << 12),
	KEYMASK_BRACE_CLOSE = (1 << 13),
	KEYMASK_COLON = (1 << 14),
	KEYMASK_QUOTE = (1 << 15),
	KEYMASK_HASH = (1 << 0),
	KEYMASK_COMMA = (1 << 1),
	KEYMASK_PERIOD = (1 << 2),
	KEYMASK_QUESTIONMARK = (1 << 3),
	KEYMASK_INTERNATIONAL1 = (1 << 4),
	KEYMASK_F1 = (1 << 5),
	KEYMASK_F2 = (1 << 6),
	KEYMASK_F3 = (1 << 7),
	KEYMASK_F4 = (1 << 8),
	KEYMASK_F5 = (1 << 9),
	KEYMASK_F6 = (1 << 10),
	KEYMASK_F7 = (1 << 11),
	KEYMASK_F8 = (1 << 12),
	KEYMASK_F9 = (1 << 13),
	KEYMASK_F10 = (1 << 14),
	KEYMASK_F11 = (1 << 15),
	KEYMASK_F12 = (1 << 0),
	KEYMASK_ESC = (1 << 1),
	KEYMASK_INSERT = (1 << 2),
	KEYMASK_DELETE = (1 << 3),
	KEYMASK_TILDE = (1 << 4),
	KEYMASK_BACKSPACE = (1 << 5),
	KEYMASK_TAB = (1 << 6),
	KEYMASK_CAPSLOCK = (1 << 7),
	KEYMASK_LEFTSHIFT = (1 << 8),
	KEYMASK_RIGHTSHIFT = (1 << 9),
	KEYMASK_LEFTCONTROL = (1 << 10),
	KEYMASK_RIGHTALT = (1 << 11),
	KEYMASK_LEFTWINDOWS = (1 << 12),
	KEYMASK_SPACE = (1 << 13),
	KEYMASK_RIGHTWINDOWS = (1 << 14),
	KEYMASK_MENU = (1 << 15),
	KEYMASK_LEFTARROW = (1 << 0),
	KEYMASK_DOWNARROW = (1 << 1),
	KEYMASK_UPARROW = (1 << 2),
	KEYMASK_RIGHTARROW = (1 << 3),
	KEYMASK_ENTER = (1 << 4),
};

enum KeyScanCode
{
	KEY_HOME = 0x06,
	KEY_END = 0x07,
	KEY_PGUP = 0x08,
	KEY_PGDN = 0x09,
	KEY_SCROLLLOCK = 0x0A,
	KEY_A = 0x10,
	KEY_B = 0x11,
	KEY_C = 0x12,
	KEY_D = 0x13,
	KEY_E = 0x14,
	KEY_F = 0x15,
	KEY_G = 0x16,
	KEY_H = 0x17,
	KEY_I = 0x18,
	KEY_J = 0x19,
	KEY_K = 0x1A,
	KEY_L = 0x1B,
	KEY_M = 0x1C,
	KEY_N = 0x1D,
	KEY_O = 0x1E,
	KEY_P = 0x1F,
	KEY_Q = 0x20,
	KEY_R = 0x21,
	KEY_S = 0x22,
	KEY_T = 0x23,
	KEY_U = 0x24,
	KEY_V = 0x25,
	KEY_W = 0x26,
	KEY_X = 0x27,
	KEY_Y = 0x28,
	KEY_Z = 0x29,
	KEY_1 = 0x2A,
	KEY_2 = 0x2B,
	KEY_3 = 0x2C,
	KEY_4 = 0x2D,
	KEY_5 = 0x2E,
	KEY_6 = 0x2F,
	KEY_7 = 0x30,
	KEY_8 = 0x31,
	KEY_9 = 0x32,
	KEY_0 = 0x33,
	KEY_MINUS = 0x34,
	KEY_PLUS = 0x35,
	KEY_PRINTSCR = 0x36,
	KEY_BRACE_OPEN = 0x37,
	KEY_BRACE_CLOSE = 0x38,
	KEY_COLON = 0x39,
	KEY_QUOTE = 0x3A,
	KEY_HASH = 0x3B,
	KEY_COMMA = 0x3C,
	KEY_PERIOD = 0x3D,
	KEY_QUESTIONMARK = 0x3E,
	KEY_INTERNATIONAL1 = 0x3F,
	KEY_F1 = 0x40,
	KEY_F2 = 0x41,
	KEY_F3 = 0x42,
	KEY_F4 = 0x43,
	KEY_F5 = 0x44,
	KEY_F6 = 0x45,
	KEY_F7 = 0x46,
	KEY_F8 = 0x47,
	KEY_F9 = 0x48,
	KEY_F10 = 0x49,
	KEY_F11 = 0x4A,
	KEY_F12 = 0x4B,
	KEY_ESC = 0x4C,
	KEY_INSERT = 0x4D,
	KEY_DELETE = 0x4E,
	KEY_TILDE = 0x4F,
	KEY_BACKSPACE = 0x50,
	KEY_TAB = 0x51,
	KEY_CAPSLOCK = 0x53,
	KEY_LEFTSHIFT = 0x54,
	KEY_RIGHTSHIFT = 0x55,
	KEY_LEFTCONTROL = 0x56,
	KEY_RIGHTALT = 0x57,
	KEY_LEFTWINDOWS = 0x58,
	KEY_SPACE = 0x59,
	KEY_RIGHTWINDOWS = 0x5A,
	KEY_MENU = 0x5B,
	KEY_LEFTARROW = 0x5C,
	KEY_DOWNARROW = 0x5D,
	KEY_UPARROW = 0x5E,
	KEY_RIGHTARROW = 0x5F,
	KEY_ENTER = 0x61

};

struct KeyboardStatus
{
	u16 key0x;
	u16 key1x;
	u16 key2x;
	u16 key3x;
	u16 key4x;
	u16 key5x;
	u16 key6x;
	s8  err;
};
