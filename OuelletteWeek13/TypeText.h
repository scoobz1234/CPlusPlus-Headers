#pragma once

// ::: PRE-PROCESSOR DIRECTIVES ::: //

#include <string>
#include <iostream>
#include <windows.h>

// ::: FUNCTION DEFINITION ::: //

static void TypeTextToConsole(const std::string &text, int speed) 
{
	//standard loop that utilizes a size_t i
	// checks the string size, and increments till it reaches
	//the end of the string...
	for (size_t i = 0; i < text.size(); ++i)
	{
		//standard cout message, but uses the flush method,
		//flush clears the output stream so we dont have
		//unneccesary pausing in case the output stream
		//gets "clogged" so to say...
		std::cout << text[i] << std::flush;
		Sleep(speed);
	}
}