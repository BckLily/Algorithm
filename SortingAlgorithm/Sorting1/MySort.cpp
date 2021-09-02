#include "MySort.h"

#include <iostream>

void MySort::BubbleSort()
{
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		sortArray[i] = arr[i];
	}

	//int k = 0;


	for (int j = 0; j < (sizeof(sortArray) / sizeof(int)); j++) {
		for (int i = 0; i < ((sizeof(sortArray) / sizeof(int)) - j) - 1; i++) {
			if (sortArray[i] > sortArray[i + 1]) {
				int temp = sortArray[i];
				sortArray[i] = sortArray[i + 1];
				sortArray[i + 1] = temp;
			}
			//k++;
			//std::cout << "Loop Count: " << k << std::endl;
		}
	}

}

void MySort::SelectSort()
{
	int size = (sizeof(arr) / sizeof(int));
	for (int i = 0; i < size; i++) {
		sortArray[i] = arr[i];
	}

	for (int i = 0; i < size - 1; i++) {
		int minIdx = i;
		for (int j = i + 1; j < size; j++) {
			if (sortArray[minIdx] > sortArray[j]) {
				minIdx = j;
			}
		}
		if (minIdx != i) {
			int temp = sortArray[i];
			sortArray[i] = sortArray[minIdx];
			sortArray[minIdx] = temp;
		}
	}
}

void MySort::OriginPrint()
{
	std::cout << "Origin:\t";
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void MySort::SortPrint()
{
	std::cout << "Sort:\t";
	for (int i = 0; i < (sizeof(sortArray) / sizeof(int)); i++) {
		std::cout << sortArray[i] << " ";
	}
	std::cout << std::endl;
}

void MySort::InputData()
{
	std::cout << "Input data..." << std::endl;
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		std::cin >> arr[i];
	}
}
