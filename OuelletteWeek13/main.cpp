#include "ImperialNavy.h"
#include "RebelScum.h"

int main (int argc, char** argv)
{

	//Create an object to store the console handle. this is for
	//outputting information to the console, and formatting that data
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//Set Console Text Color, takes in an output handle ^
	//use BG + FG for colors, colors are bit-encoded. 
	SetConsoleTextAttribute(hConsole, BG_BLACK+FG_WHITE);
	cout << "\n\t Star Wars \n\n";


	NavyReport(hConsole);
	RebelIntelReport(hConsole);
	system ("pause");

	return 0;
}