#pragma once
#include <string>
using namespace std;

// bit-encoded color codes
/*
 * bit 0 = black
 * bit 1 = blue
 * bit 2 = green
 * bit 3 = light blue 
 * bit 4 = red
 * bit 5 = magenta
 * bit 6 = yellow
 * bit 7 = white
 * bit 8 = grey
 */

enum BGColor
{
	BG_BLACK = 0x00, 
	BG_BLUE = 0x10, 
	BG_GREEN = 0x20, 
	BG_LIGHT_BLUE = 0x30, 
	BG_RED = 0x40,
	BG_MAGENTA = 0x50, 
	BG_YELLOW = 0x60, 
	BG_WHITE = 0x70, 
	BG_GREY = 0x80
};

enum FGColor
{
	FG_BLACK = 0x00,
	FG_BLUE = 0x01,
	FG_GREEN = 0x02,
	FG_LIGHT_BLUE = 0x03,
	FG_RED = 0x04,
	FG_MAGENTA = 0x05,
	FG_YELLOW = 0x06,
	FG_WHITE = 0x07,
	FG_GREY = 0x08
};

