#pragma once
#include <iostream>

class MyStack
{
	int arr[10]; // �������� ���� ����
	int top = -1; // ���� �ֱ� ������(���� ��)�� ����� ��ġ

public:

	void Push(); // �����͸� �ִ� �Լ�
	void Pop(); // �����͸� ����(����) �Լ�

	void Print(); // ����� �����͸� ȭ�鿡 ����ϴ� �Լ�
};



