#pragma once

#include <iostream>
#include <Windows.h>
#include <WinCon.h>
#include <string>
#include <format>
#include <string_view>

#define BLACK	0
#define BLUE	1
#define GREEN	2
#define AQUA	3
#define RED		4
#define PRUPLE	5
#define YELLOW	6
#define WHITE	7



// Console창에 표시되는 글자 색 변경 함수.
// 앞 부분은 text의 색이고, 뒷부분은 글자 색이다.
// 뒷부분은 기본을 0, 즉 검은색으로 초기화해두었다.
void FontColorChange(unsigned short textColor=WHITE, unsigned short backColor=BLACK);

// Console창의 크기를 변경하는 함수
void ConsoleWindowSize(unsigned short cols = 140, unsigned short lines = 40);
