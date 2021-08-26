#pragma once

#include <iostream>

#define STACK_MAX_DATA_COUNT	10


class Stack
{
public:

	int myData[STACK_MAX_DATA_COUNT] = { 0 }; // 데이터를 저장할 배열

	void Push();
	int Pop();
	int Count();

	void PrintStackData();

private:
	int dataCount = -1;
};

