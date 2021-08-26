#include "Stack.h"


void Stack::Push()
{
	
	if (dataCount < STACK_MAX_DATA_COUNT - 1) {
		int value;
		
		std::cout << "���� ���� �Է����ּ���" << std::endl;
		std::cin >> value;

		myData[++dataCount] = value;

		std::cout << dataCount << "�� " << value << "�� �����߽��ϴ�." << std::endl;
	}
	else {
		std::cout << "������ á���ϴ�." << std::endl;
	}

}

int Stack::Pop()
{
	
	if (dataCount >= 0) {

		std::cout << Count() << "�� �ִ� ������ ";

		int value = myData[dataCount--];

		std::cout << value << std::endl;
		return value;
	}
	else {
		std::cout << "����� ���� �����ϴ�." << std::endl;
		return false;
	}

}

int Stack::Count()
{
	
	int value = dataCount;

	return value;
}

void Stack::PrintStackData()
{
	if (dataCount >= 0) {
		//std::cout << "������ ��ü ������" << std::endl;
		for (int i = 0; i <= dataCount; i++) {
			std::cout << "myData[" << i << "]: " << myData[i] << std::endl;
		}

	}
	else {
		std::cout << "����� ���� �����ϴ�." << std::endl;
	}

}
