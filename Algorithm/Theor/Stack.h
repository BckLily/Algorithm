#pragma once

#include <iostream>

#define STACK_MAX_DATA_COUNT	10


class Stack
{
public:

	int myData[STACK_MAX_DATA_COUNT] = { 0 }; // �����͸� ������ �迭

	void Push();
	int Pop();
	int Count();

	void PrintStackData();

private:
	int dataCount = -1;
};

