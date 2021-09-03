#pragma once

#define _ARRAY_MAX_SIZE_ 20

class MySort
{
private:


public:
	void BubbleSort(); // 버블 정렬
	void SelectSort(); // 선택 정렬
	void InsertionSort(); // 삽입 정렬
	void QuickSort(int* arr, int start, int end); // 퀵 정렬
	//void MyQuickSort(int* arr, int start, int end);
	void StartQuickSort();
	//void StartMyQuickSort();

	void OriginPrint();
	void SortPrint();


	void InputData();

	int arr[_ARRAY_MAX_SIZE_] = { 10,1,35,23,45,11,20,26,90,9,100,101,512,653,484,152,645,879,51,157 };
	int sortArray[_ARRAY_MAX_SIZE_];

	int size = sizeof(arr) / sizeof(int);

};

