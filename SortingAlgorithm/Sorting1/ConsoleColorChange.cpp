#include "ConsoleColorChange.h"



// Console Font Change
void FontColorChange(unsigned short textColor, unsigned short backColor) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor | (backColor << 4));
}

//"mode con cols=30 lines=30 | title 제목명"
void ConsoleWindowSize(unsigned short cols, unsigned short lines)
{
	// string variable ... std::to_string() 
	std::string s_format = "mode con cols=" + std::to_string(cols) + "lines=" + std::to_string(lines);
	// string을 char*로 변경.
	system(s_format.c_str());

}
