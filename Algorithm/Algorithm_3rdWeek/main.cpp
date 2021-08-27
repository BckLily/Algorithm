#include <iostream>
#include "LinearList.h"
#include "LinkedList.h"
#include "myLinkedList.h"

#pragma region  Linear List

/*
int main(void) {

	LinearList lList;

	while (true) {
		int menu;
		int value;
		int index;

		std::cout << "1. Push List    2. Pop Front List    3. Pop Back List    4. Insert List    5. Remove List" << std::endl;
		std::cout << "6. Print List Data    7. Select List" << std::endl;
		std::cout << "0. Quit Program" << std::endl;
		std::cout << "Select menu index: ";
		std::cin >> menu;
		std::cout << std::endl;
		switch (menu)
		{
		case 1:
			std::cout << "Push Value: ";
			std::cin >> value;
			if (!lList.Push(value)) {
				std::cout << "List is Full" << std::endl;
			}
			break;

		case 2:
			value = lList.Front();
			if (value == -1) {
				std::cout << "List is Empty" << std::endl;
				break;
			}
			else {
				std::cout << value << std::endl;
				break;
			}

		case 3:
			value = lList.Back();
			if (value == -1) {
				std::cout << "List is Empty" << std::endl;
				break;
			}
			else {
				std::cout << value << std::endl;
				break;
			}

		case 4:
			std::cout << "Insert index: ";
			std::cin >> index;
			std::cout << "value: ";
			std::cin >> value;
			if (!lList.Insert(index, value)) {
				std::cout << "Fail Insert" << std::endl;
			}
			break;

		case 5:
			std::cout << "Remove index: ";
			std::cin >> index;

			if (!lList.Remove(index)) {
				std::cout << "Fail Remove" << std::endl;
			}
			break;

		case 6:
			lList.Print();
			break;

		case 7:
			std::cout << "Index: ";
			std::cin >> index;
			value = lList.Select(index);
			if (value == -1) {
				std::cout << "Index is Empty Index" << std::endl;
			}
			else {
				std::cout << value << std::endl;
			}
			break;

		case 0:
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


*/

#pragma endregion


#pragma region LinkedList
//
//int main(void) {
//	LinkedList lList;
//
//	int* npr = nullptr;
//
//	while (true) {
//		int menu;
//		int value;
//		int index;
//
//		std::cout << "1. Push List    2. Pop Front List    3. Pop Back List    4. Insert List    5. Remove List" << std::endl;
//		std::cout << "6. Print List Data    7. Select List    8. List Size" << std::endl;
//		std::cout << "0. Quit Program" << std::endl;
//		std::cout << "Select menu index: ";
//		std::cin >> menu;
//		std::cout << std::endl;
//		switch (menu)
//		{
//		case 1:
//			std::cout << "Push Value: ";
//			std::cin >> value;
//			lList.Push(value);
//
//			break;
//
//		case 2:
//			value = lList.Front();
//			if (value == -1) {
//				std::cout << "List is Empty" << std::endl;
//				break;
//			}
//			else {
//				std::cout << value << std::endl;
//				break;
//			}
//
//		case 3:
//			value = lList.Back();
//			if (value == -1) {
//				std::cout << "List is Empty" << std::endl;
//				break;
//			}
//			else {
//				std::cout << value << std::endl;
//				break;
//			}
//
//		case 4:
//			std::cout << "Insert index: ";
//			std::cin >> index;
//			std::cout << "value: ";
//			std::cin >> value;
//			if (!lList.Insert(index, value)) {
//				std::cout << "Fail Insert" << std::endl;
//			}
//
//			break;
//
//		case 5:
//			std::cout << "Remove index: ";
//			std::cin >> index;
//
//			if (!lList.Remove(index)) {
//				std::cout << "Fail Remove" << std::endl;
//			}
//			break;
//
//		case 6:
//			lList.Print();
//			break;
//
//		case 7:
//			std::cout << "Index: ";
//			std::cin >> index;
//			value = lList.Select(index);
//			if (value == -1) {
//				std::cout << "Index is Empty Index" << std::endl;
//			}
//			else {
//				std::cout << value << std::endl;
//			}
//			break;
//
//		case 8:
//			std::cout << "Linked List Size: " << lList.Size() << std::endl;
//			break;
//
//		case 9:
//			lList.Clear();
//			break;
//
//		case 0:
//			//lList.DeleteAll();
//			exit(0);
//			break;
//			
//
//		default:
//			std::cout << "Select Wrong Menu Index" << std::endl;
//			break;
//		}
//
//		std::cout << std::endl << std::endl;
//
//	}
//
//
//	return 0;
//}

#pragma endregion


#pragma region myLinkedList


int main(void) {
	myLinkedList lList;

	int* npr = nullptr;

	while (true) {
		int menu;
		int value;
		int index;

		std::cout << "1. Push List    2. Pop Front List    3. Pop Back List    4. Insert List    5. Remove List" << std::endl;
		std::cout << "6. Print List Data    7. Select List    8. List Size" << std::endl;
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

		case 2:
			value = lList.Front();
			if (value == -1) {
				std::cout << "List is Empty" << std::endl;
				break;
			}
			else {
				std::cout << value << std::endl;
				break;
			}

		case 3:
			value = lList.Back();
			if (value == -1) {
				std::cout << "List is Empty" << std::endl;
				break;
			}
			else {
				std::cout << value << std::endl;
				break;
			}

		case 4:
			std::cout << "Insert index: ";
			std::cin >> index;
			std::cout << "value: ";
			std::cin >> value;
			if (!lList.Insert(index, value)) {
				std::cout << "Fail Insert" << std::endl;
			}

			break;

		case 5:
			std::cout << "Remove index: ";
			std::cin >> index;

			if (!lList.Remove(index)) {
				std::cout << "Fail Remove" << std::endl;
			}
			break;

		case 6:
			lList.Print();
			break;

		case 7:
			std::cout << "Index: ";
			std::cin >> index;
			value = lList.Select(index);
			if (value == -1) {
				std::cout << "Index is Empty Index" << std::endl;
			}
			else {
				std::cout << value << std::endl;
			}
			break;

		case 8:
			std::cout << "Linked List Size: " << lList.Size() << std::endl;
			break;

		case 9:
			lList.Clear();
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

#pragma endregion

