#pragma once
#include <iostream>

class MyStack
{
	int arr[10]; // 데이터의 저장 공간
	int top = -1; // 가장 최근 데이터(가장 위)가 저장된 위치

public:

	void Push(); // 데이터를 넣는 함수
	void Pop(); // 데이터를 빼는(삭제) 함수

	void Print(); // 저장된 데이터를 화면에 출력하는 함수
};



