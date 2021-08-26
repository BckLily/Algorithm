#include "MyQueueLine.h"

void MyQueueLine::Push()
{
	if (top >= 9) {
		std::cout << "queue memory is full" << std::endl;
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

void MyQueueLine::Pop()
{
	if (top <= -1) {
		std::cout << "queue memory is empty" << std::endl;
		return;
	}

	std::cout << "data[" << "0" << "]: " << arr[0] << std::endl;
	
	for (int i = 0; i < top; i++) {
		arr[i] = arr[i + 1];
	}
	top--;

}

void MyQueueLine::Print()
{
	if (top <= -1) {
		std::cout << "queue memory is empty" << std::endl;
		return;
	}
	for (int i = 0; i <= top; i++) {
		std::cout << "data[" << i << "]: " << arr[i] << std::endl;
	}


}
