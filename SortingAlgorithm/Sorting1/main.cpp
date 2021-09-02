#include <iostream>

#include "MySort.h"

int main(void) {
	MySort mySort;
	time_t start;
	time_t end;
	while (true) {
		std::cout << "1. Bullet Sort      2. Select Sort      " << std::endl;
		std::cout << "5. Array Data Input    " << std::endl;
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

			start = clock();
			for (int i = 0; i < 50000; i++) {
				for (int j = 0; j < 50000; j++) {

				}
			}
			end = clock();

			break;
		case 4:

			break;
		case 5:
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