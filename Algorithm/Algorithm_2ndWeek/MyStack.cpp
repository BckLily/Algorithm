#include "MyStack.h"

void MyStack::Push()
{
	if (top >= 9) {
		std::cout << "stack memory is full" << std::endl;
		return;
	}

	top++;
	// top의 초기값이 -1이기 때문에 데이터를 넣기 위해서는 유효한 범위로 넣어야하고
	// 데이터를 넣기 전에 top을 이동시킨다.
	int i;
	std::cin >> i;
	arr[top] = i;
	// top위치에 입력된 값을 저장.

}

void MyStack::Pop()
{
	if (top <= -1) {
		std::cout << "stack memory is empty" << std::endl;;
		return;
	}
	top--;
	// 가장 최근 데이터의 위치를 나타내는 변수 top을 아래로 한 칸 내린다.

	std::cout << "data: " << arr[top] << std::endl;
}

void MyStack::Print()
{
	if (top <= -1) {
		std::cout << "stack memory is empty" << std::endl;
	}
	for (int i = 0; i <= top; i++) {
		std::cout << "data: " << arr[i] << std::endl;
	}

}
