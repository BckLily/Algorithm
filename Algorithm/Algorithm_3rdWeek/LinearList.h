#pragma once


class LinearList
{
public: // 선형 List

	// Fail false, Success true
	bool Push(int value);
	// -1 is Empty , other is value
	int Front(); // Queue처럼 앞에서 데이터를 꺼내는 함수
	// -1 is Empty , other is value
	int Back(); // Stack처럼 뒤에서 데이터를 꺼내는 함수
	// Fail false, Success true
	bool Insert(int idx, int value); // 원하는 위치에 데이터를 삽입하는 함수
	// Fail false, Success true
	bool Remove(int idx); // 원하는 위치의 데이터를 삭제하는 함수
	// -1 Fail other value
	int Select(int idx);

	void Print(); // 전체를 출력하는 함수
private:
	const static int listMaxValue = 10;
	int arr[listMaxValue];
	int top = -1;

};

