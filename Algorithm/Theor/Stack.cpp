#include "Stack.h"


void Stack::Push()
{
	
	if (dataCount < STACK_MAX_DATA_COUNT - 1) {
		int value;
		
		std::cout << "넣을 값을 입력해주세요" << std::endl;
		std::cin >> value;

		myData[++dataCount] = value;

		std::cout << dataCount << "에 " << value << "를 저장했습니다." << std::endl;
	}
	else {
		std::cout << "공간이 찼습니다." << std::endl;
	}

}

int Stack::Pop()
{
	
	if (dataCount >= 0) {

		std::cout << Count() << "에 있는 데이터 ";

		int value = myData[dataCount--];

		std::cout << value << std::endl;
		return value;
	}
	else {
		std::cout << "저장된 값이 없습니다." << std::endl;
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
		//std::cout << "스택의 전체 데이터" << std::endl;
		for (int i = 0; i <= dataCount; i++) {
			std::cout << "myData[" << i << "]: " << myData[i] << std::endl;
		}

	}
	else {
		std::cout << "저장된 값이 없습니다." << std::endl;
	}

}
