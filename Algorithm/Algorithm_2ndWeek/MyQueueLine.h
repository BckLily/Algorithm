#pragma once
#include <iostream>

/*
Queue
Stack과 다르게 데이터를 넣는 위치와
꺼내는 위치가 별도로 존재
먼저 들어간 데이터가 먼저 나가고
나중에 들어온 데이터는 나중에 나가는 구조
First In First Out
FIFO
데이터의 삽입은 뒤에서 삽입되고
데이터의 삭제는 앞에서 꺼내게 된다.

배열 구조를 통해서 Queue를 만들 때는 데이터를 꺼냈을 때, 나머지 데이터가 아래쪽의 빈 공간을 매꿔야 하기 때문에
나머지 데이터가 모두 아래로 한 칸씩 내려와 이동해야 한다.
일자형 구조를 가지는 큐를 선형 큐라고 한다.
*/


class MyQueueLine
{
	int arr[10];
	int top = -1;

public:
	void Push();
	void Pop();
	void Print();
};

