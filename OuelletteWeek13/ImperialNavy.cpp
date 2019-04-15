#include "ImperialNavy.h"

void NavyReport(HANDLE handle)
{
	//let the user know that this is the imperial navy report
	SetConsoleTextAttribute(handle, BG_BLUE + FG_WHITE);
	cout << "\n\n :::::: Imperial Navy Report ::::::\n\n";
	//set console text bg and fg colors
	SetConsoleTextAttribute(handle, BG_RED + FG_BLACK);
	TypeTextToConsole("\n For Vader's Eyes Only! \n", 100);

	SetConsoleTextAttribute(handle, BG_BLUE + FG_WHITE);
	TypeTextToConsole("\n The Death Star III code named Eclipse has completed its construction on time.\n", 50);

	cout << "\n\n :::::: End of Report ::::::\n\n";
}
