#include "LinearList.h"

#include <iostream>


bool LinearList::Push(int value)
{
	if ((top + 1) >= listMaxValue) {
		return false;
	}

	arr[++top] = value;
	return true;
}

int LinearList::Front()
{
	if (top < 0) {
		return -1;
	}
	int result = arr[0];

	for (int i = 0; i < top; i++) {
		arr[i] = arr[i + 1];
	}
	top--;

	return result;
}

int LinearList::Back()
{
	if (top < 0) {
		return -1;
	}

	return arr[top--];
}

bool LinearList::Insert(int idx, int value)
{
	// 넣을 공간 없을 때 취소
	if ((top + 1) >= listMaxValue) {
		// return fail
		return false;
	}
	else if (idx > top || idx < 0) {
		return false;
	}

	// 넣을 위치 idx ~ top 까지의 값을 뒤로 한 칸 미룬다.
	for (int i = top++; i >= idx; i--) {
		arr[i + 1] = arr[i];
	}
	// 넣을 위치에 값 넣는다.
	arr[idx] = value;
	// return success
	return true;
}

bool LinearList::Remove(int idx)
{
	// 비어있을 때 fail
	if (top < 0) {
		return false;
	}
	else if (idx > top || idx < 0) {
		return false;
	}

	// idx+1 ~ top 까지의 값을 한 칸 앞으로 당긴다.
	for (int i = idx; i < top; i++) {
		std::cout << "Start Testing..." << std::endl;
		std::cout << "arr[idx]: " << arr[i] << std::endl;
		std::cout << "arridx+1]: " << arr[i + 1] << std::endl;
		arr[i] = arr[i + 1];
		std::cout << "arr[idx]: " << arr[i] << std::endl;
		std::cout << "arridx+1]: " << arr[i + 1] << std::endl;
		std::cout << "End Testing..." << std::endl;
	}
	top--;

	return true;
}

int LinearList::Select(int idx)
{
	if (idx > top || idx < 0) {
		return -1;
	}


	return arr[idx];
}

void LinearList::Print()
{
	std::cout << std::endl << std::endl;
	for (int i = 0; i <= top; i++) {
		std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
	}
}
