#include <iostream>
#include "myTree.h"


int main(void) {
	myTree lList;

	int* npr = nullptr;

	while (true) {
		int menu;
		int value;
		int index;

		std::cout << "1. Push List    2. Pop Front List    3. Pop Back List    4. Insert List    5. Remove List" << std::endl;
		std::cout << "6. Print List Data    7. Select List    8. List Size    10. Find Root" << std::endl;
		std::cout << "11. Search Value    " << std::endl;
		std::cout << "0. Quit Program" << std::endl;
		std::cout << "Select menu index: ";
		std::cin >> menu;
		std::cout << std::endl;
		switch (menu)
		{
		case 1:
			std::cout << "Push Value: ";
			std::cin >> value;
			lList.Push(value);

			break;

			//case 2:
			//	value = lList.Front();
			//	if (value == -1) {
			//		std::cout << "List is Empty" << std::endl;
			//		break;
			//	}
			//	else {
			//		std::cout << value << std::endl;
			//		break;
			//	}

			//case 3:
			//	value = lList.Back();
			//	if (value == -1) {
			//		std::cout << "List is Empty" << std::endl;
			//		break;
			//	}
			//	else {
			//		std::cout << value << std::endl;
			//		break;
			//	}

			//case 4:
			//	std::cout << "Insert index: ";
			//	std::cin >> index;
			//	std::cout << "value: ";
			//	std::cin >> value;
			//	if (!lList.Insert(index, value)) {
			//		std::cout << "Fail Insert" << std::endl;
			//	}

			//	break;

			//case 5:
			//	std::cout << "Remove index: ";
			//	std::cin >> index;

			//	if (!lList.Remove(index)) {
			//		std::cout << "Fail Remove" << std::endl;
			//	}
			//	break;

		case 6:
			lList.Print();
			break;

			//case 7:
			//	std::cout << "Index: ";
			//	std::cin >> index;
			//	value = lList.Select(index);
			//	if (value == -1) {
			//		std::cout << "Index is Empty Index" << std::endl;
			//	}
			//	else {
			//		std::cout << value << std::endl;
			//	}
			//	break;

		case 8:
			std::cout << "Tree Size: " << lList.Size() << std::endl;
			break;

			//case 9:
			//	lList.Clear();
			//	break;

		case 10:
			std::cout << "Root is: " << lList.Root() << std::endl;
			break;

		case 11:
			std::cout << "Find Value Input: ";
			std::cin >> value;
			std::cout << "Search Value Result: " << (lList.Search(value) ? "Find" : "Miss") << std::endl;
			break;

		case 0:
			//lList.DeleteAll();
			exit(0);
			break;


		default:
			std::cout << "Select Wrong Menu Index" << std::endl;
			break;
		}

		std::cout << std::endl << std::endl;

	}


	return 0;
}