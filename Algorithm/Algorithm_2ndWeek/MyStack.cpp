#include "MyStack.h"

void MyStack::Push()
{
	if (top >= 9) {
		std::cout << "stack memory is full" << std::endl;
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

void MyStack::Pop()
{
	if (top <= -1) {
		std::cout << "stack memory is empty" << std::endl;;
		return;
	}
	top--;
	// ���� �ֱ� �������� ��ġ�� ��Ÿ���� ���� top�� �Ʒ��� �� ĭ ������.

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
