#include "MyQueueLine.h"

void MyQueueLine::Push()
{
	if (top >= 9) {
		std::cout << "queue memory is full" << std::endl;
		return;
	}

	top++;
	// top�� �ʱⰪ�� -1�̱� ������ �����͸� �ֱ� ���ؼ��� ��ȿ�� ������ �־���ϰ�
	// �����͸� �ֱ� ���� top�� �̵���Ų��.
	int i;
	std::cin >> i;
	arr[top] = i;
	// top��ġ�� �Էµ� ���� ����.
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
