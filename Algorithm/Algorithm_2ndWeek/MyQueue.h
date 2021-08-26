#pragma once
#include <iostream>

/*
원형 Queue
가장 먼저 들어온 데이터의 위치와
가장 나중에 들어온 데이터의 위치
2개의 위치를 저장 및 관리.

데이터를 넣을 때
rear를 옮기고 이동시킨 위치에 데이터를 넣는다.

데이터를 뺄 때
front를 이동시키고, 이동시킨 위치의 데이터를 뺀다.

rear >> 가장 최근의 데이터가 들어온 위치
front >> 가장 먼저 들어온 데이터의 앞 위치.

Queue가 비어있는 경우 >> front랑 rear가 같다.
Queue가 차있는 경우 >> rear + 1이 front와 같다.

원형 큐는 한 칸을 반드시 비운다.
*/

#define MAX_QUEUE_SIZE 10

class MyQueue
{
	int arr[MAX_QUEUE_SIZE]; // 데이터의 저장 공간

	int front = 0; // 데이터의 출력 지점
	int rear = 0; // 데이터의 입력 지점
	// 데이터가 하나도 없을 때
	// >> 처음 시작할 때
	// >> 데이터를 모두 pop 했을 때
	// 두가지 경우
	// 두 값이 같기 때문에
	// 두 값의 초기값은 같은 값을 주기만 하면 된다.

public :
	void Push();
	void Pop();
	bool IsEmpty();
	bool IsFull();

	void Print();

};

