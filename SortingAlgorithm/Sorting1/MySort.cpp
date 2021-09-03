#include "MySort.h"

#include <iostream>
#include <Windows.h>

void MySort::BubbleSort()
{
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		sortArray[i] = arr[i];
	}

	int sortCount = 0;

	for (int j = 0; j < (sizeof(sortArray) / sizeof(int)); j++) {
		for (int i = 0; i < ((sizeof(sortArray) / sizeof(int)) - j) - 1; i++) {
			//std::cout << "Count: " << ++sortCount << std::endl;

			//SortPrint();

			if (sortArray[i] > sortArray[i + 1]) {
				int temp = sortArray[i];
				sortArray[i] = sortArray[i + 1];
				sortArray[i + 1] = temp;
			}

		}
	}

}

void MySort::SelectSort()
{
	for (int i = 0; i < size; i++) {
		sortArray[i] = arr[i];
	}

	int sortCount = 0;

	for (int i = 0; i < size - 1; i++) {
		int minIdx = i;
		for (int j = i + 1; j < size; j++) {
			//std::cout << "Count: " << ++sortCount << std::endl;

			//SortPrint();

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

void MySort::InsertionSort()
{
	for (int i = 0; i < size; i++) {
		sortArray[i] = arr[i];
	}

	int sortCount = 0;

	for (int i = 1; i < size; i++) {
		for (int j = i; j > 0; j--) {

			//std::cout << "Count: " << ++sortCount << std::endl;

			//SortPrint();

			if (sortArray[j] < sortArray[j - 1]) {
				int temp = sortArray[j];
				sortArray[j] = sortArray[j - 1];
				sortArray[j - 1] = temp;
			}
			else { break; }
		}
	}

}

void MySort::QuickSort(int* _arr, int _start, int _end)
{
	int pivot = _start;

	int left = pivot + 1; // pivot보다 큰 값의 위치
	int right = _end; // pivot보다 작은 값의 위치

	//std::cout << "Start" << std::endl;
	//std::cout << "Pivot: " << pivot << std::endl;
	//std::cout << "Start: " << _start << " End: " << _end << std::endl;
	//std::cout << "Left: " << left << " Right: " << right << std::endl;

	// 정렬할 데이터가 1개밖에 없는 경우
	// 정렬할 숫자가 없는 경우
	if (_start >= _end) {
		return;
	}

	for (; left <= right;) {
		for (; (*(_arr + pivot) >= *(_arr + left)) && left <= _end; left++);
		for (; (*(_arr + pivot) <= *(_arr + right)) && right > _start; right--);

		/*if (!(*(_arr + left) > *(_arr + pivot))) {
			left++;
		}
		if (!(*(_arr + pivot) > *(_arr + right))) {
			right--;
		}*/

		//while ((*(_arr + pivot) >= *(_arr + left)) && left <= _end) {
		//	left++;
		//}
		//while((*(_arr + pivot) <= *(_arr + right)) && right > _start) {
		//	right--;
		//}

		// 원하는 데이터를 찾지 못한 경우
		if (left > right) {
			//SortPrint();
			int temp = *(_arr + pivot);
			*(_arr + pivot) = *(_arr + right);
			*(_arr + right) = temp;
			pivot = right;
			break;
		}
		// 원하는 데이터를 찾은 경우
		else if (left < right) {
			//SortPrint();
			int temp = *(_arr + left);
			*(_arr + left) = *(_arr + right);
			*(_arr + right) = temp;
		}
		//SortPrint();
	}


	// 바깥의 큰 while문의 조건이
	// big과(left) small(right)이 교차하지 않았을 때의 경우이기 때문에
	// while문 바깥은 big과 small이 교차한 경우를 말한다.
	// 즉, big과 small이 원하는 데이터를 찾지 못한 경우(교차한 경우)
	/*
	int temp = ary[pivot];
	ary[pivot] = ary[small];
	ary[small] = temp;
	*/

	//std::cout << std::endl;
	//std::cout << "End" << std::endl;
	//std::cout << "Pivot: " << pivot << std::endl;
	//std::cout << "Start: " << _start << " End: " << _end << std::endl;
	//std::cout << "Left: " << left << " Right: " << right << std::endl;

	//SortPrint();

	//system("pause");



	//std::cout << std::endl << "......Left......" << std::endl;
	QuickSort(_arr, _start, pivot - 1);

	//std::cout << std::endl << "......Right......" << std::endl;
	QuickSort(_arr, pivot + 1, _end);



}


//
//void MySort::MyQuickSort(int* _arr, int start, int end)
//{
//	// 피벗이 중앙에 있는 경우
//	// 피벗 선택
//	// 왼쪽 / 오른쪽 구분
//	// 왼쪽에서 피벗보다 큰 값 찾고
//	// 오른쪽에서 피벗보다 작은 값 찾고 교환
//	// 왼쪽과 오른쪽이 피벗에 올때까지 진행.
//	// 둘 중 한 쪽이 없는데, 다른 한 쪽에 교환해야 하는 값이 있을 경우
//	// 피벗과 교환
//	// 그 피벗을 기준으로 좌 우 구분,
//	// 영역 구분해서 다시 좌우에 피벗 설정하고 진행
//
//	if (start >= end) {
//		return;
//	}
//
//	int left = start;
//	int right = end;
//
//	int pivot = (right + left) / 2;
//	std::cout << "Pivot: " << pivot << std::endl;
//	std::cout << "Pivot Value: " << *(_arr + pivot) << std::endl << std::endl;
//
//	SortPrint();
//
//	for (;;) {
//		// left < pivot
//		for (; left < pivot; left++) {
//			//std::cout << "left value : " << *(_arr + left) << " pivot value: " << *(_arr + pivot) << std::endl;
//			//std::cout << "left: " << left << " pivot: " << pivot << std::endl;
//			if (*(_arr + left) > *(_arr + pivot)) {
//				break;
//			}
//		}
//
//		// pivot < right
//		for (; pivot < right; right--) {
//			//std::cout << "right value : " << *(_arr + right) << " pivot value: " << *(_arr + pivot) << std::endl;
//			//std::cout << "right: " << right << " pivot: " << pivot << std::endl;
//			if (*(_arr + pivot) > *(_arr + right)) {
//				break;
//			}
//		}
//
//		if (left < right) {
//			if (left == pivot) {
//				int temp = *(_arr + pivot);
//				*(_arr + pivot) = *(_arr + right);
//				*(_arr + right) = temp;
//				pivot = left;
//				break;
//			}
//			else if (right == pivot) {
//				int temp = *(_arr + pivot);
//				*(_arr + pivot) = *(_arr + left);
//				*(_arr + left) = temp;
//				pivot = right;
//				break;
//			}
//			else {
//				int temp = *(_arr + left);
//				*(_arr + left) = *(_arr + right);
//				*(_arr + right) = temp;
//			}
//		}
//		else {
//			break;
//		}
//	}
//	SortPrint();
//
//	std::cout << std::endl;
//	if (pivot - start >= 1) {
//		std::cout << "left: " << left << " pivot: " << pivot << "   ......" << std::endl;
//		QuickSort((_arr + left), start, pivot - 1);
//	}
//	if (end - pivot >= 1) {
//		std::cout << "right: " << right << " pivot: " << pivot << "   ......" << std::endl;
//		QuickSort((_arr + pivot), pivot + 1, end);
//	}
//
//
//}

void MySort::StartQuickSort()
{
	for (int i = 0; i < size; i++) {
		sortArray[i] = arr[i];
	}

	QuickSort(sortArray, 0, size - 1);

}

//void MySort::StartMyQuickSort()
//{
//	for (int i = 0; i < size; i++) {
//		sortArray[i] = arr[i];
//	}
//
//	MyQuickSort(sortArray, 0, size);
//
//}

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
	//std::cout << "Index\t";
	//for (int i = 0; i < size; i++) {
	//	std::cout << i << "  ";
	//}
	//std::cout << std::endl;
	std::cout << "Sort:\t";
	for (int i = 0; i < (sizeof(sortArray) / sizeof(int)); i++) {
		std::cout << sortArray[i] << " ";
	}
	//Sleep(25);
	std::cout << std::endl;
}

void MySort::InputData()
{
	for (int i = 0; i < size; i++) {
		int num = rand() % 500;
		arr[i] = num;
	}

	/*std::cout << "Input data..." << std::endl;
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}*/
}
