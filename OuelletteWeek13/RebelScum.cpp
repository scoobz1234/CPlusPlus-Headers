#include "RebelScum.h"

void RebelIntelReport(HANDLE handle)
{
	SetConsoleTextAttribute(handle, BG_GREEN + FG_BLACK);
	cout << "\n\n\t ::: REBEL SCUM REPORT :::\n\n";
	TypeTextToConsole("It has come to our attention that the Rebels\n", 50); 
	TypeTextToConsole("will attack Eclipse at 0700 hours\n", 50);
	TypeTextToConsole("the attack will be directed towards a whomprat size air duct...\n", 50);
	TypeTextToConsole("are you guys getting this?...\n", 50);
	TypeTextToConsole("Who keeps building these things?\n", 50);
	TypeTextToConsole("...\n", 100);
	TypeTextToConsole("Ahem, that is all.\n", 50);
	cout << "\n\n\t ::: END OF REPORT :::\n\n";

}