#pragma once
#include <iostream>

/*
���� Queue
���� ���� ���� �������� ��ġ��
���� ���߿� ���� �������� ��ġ
2���� ��ġ�� ���� �� ����.

�����͸� ���� ��
rear�� �ű�� �̵���Ų ��ġ�� �����͸� �ִ´�.

�����͸� �� ��
front�� �̵���Ű��, �̵���Ų ��ġ�� �����͸� ����.

rear >> ���� �ֱ��� �����Ͱ� ���� ��ġ
front >> ���� ���� ���� �������� �� ��ġ.

Queue�� ����ִ� ��� >> front�� rear�� ����.
Queue�� ���ִ� ��� >> rear + 1�� front�� ����.

���� ť�� �� ĭ�� �ݵ�� ����.
*/

#define MAX_QUEUE_SIZE 10

class MyQueue
{
	int arr[MAX_QUEUE_SIZE]; // �������� ���� ����

	int front = 0; // �������� ��� ����
	int rear = 0; // �������� �Է� ����
	// �����Ͱ� �ϳ��� ���� ��
	// >> ó�� ������ ��
	// >> �����͸� ��� pop ���� ��
	// �ΰ��� ���
	// �� ���� ���� ������
	// �� ���� �ʱⰪ�� ���� ���� �ֱ⸸ �ϸ� �ȴ�.

public :
	void Push();
	void Pop();
	bool IsEmpty();
	bool IsFull();

	void Print();

};
