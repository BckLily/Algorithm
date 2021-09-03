#include <iostream>

#include "MySort.h"
#include "ConsoleColorChange.h"

int main(void) {
	ConsoleWindowSize(180, 40);

	srand(time(nullptr));

	MySort mySort;
	time_t start;
	time_t end;
	while (true) {
		std::cout << "1. Bullet Sort      2. Select Sort    3. Insertion Sort    4. Quick Sort" << std::endl;
		std::cout << "5. Sorting Time    " << std::endl;
		std::cout << "9. Array Data Input    " << std::endl;
		std::cout << "0. Exit" << std::endl << std::endl;

		int menu;

		std::cin >> menu;

		switch (menu)
		{
		case 1:
			mySort.OriginPrint();
			mySort.BubbleSort();
			mySort.SortPrint();

			break;
		case 2:
			mySort.OriginPrint();
			mySort.SelectSort();
			mySort.SortPrint();

			break;
		case 3:
			mySort.OriginPrint();
			mySort.InsertionSort();
			mySort.SortPrint();

			break;
		case 4:
			mySort.OriginPrint();
			mySort.StartQuickSort();
			std::cout << std::endl;
			//mySort.OriginPrint();
			mySort.SortPrint();

			break;
		case 5:
			start = clock();
			mySort.BubbleSort();
			end = clock();
			std::cout << "Bubble: " << ((__int64)(end - start)) << std::endl;

			start = clock();
			mySort.SelectSort();
			end = clock();
			std::cout << "Select: " << ((__int64)(end - start))<< std::endl;

			start = clock();
			mySort.InsertionSort();
			end = clock();
			std::cout << "Insert: " << ((__int64)(end - start))<< std::endl;

			start = clock();
			mySort.StartQuickSort();
			end = clock();
			std::cout << "Quick: " << ((__int64)(end - start))<< std::endl;


			break;
		case 6:
			//mySort.OriginPrint();
			//mySort.StartMyQuickSort();
			//mySort.SortPrint();

			break;
		case 9:
			mySort.InputData();

			break;
		case 0:
			exit(0);

			break;
		default:
			std::cout << "Wrong input index..." << std::endl;
			break;
		}
		std::cout << std::endl << std::endl;
	}



	return 0;
}