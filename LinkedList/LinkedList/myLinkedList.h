#pragma once



struct Node_ {
public:
	int data; // Node가 가지고 있는 Data
	Node_* pNext; // Node가 가리키는 다음 Node
};


class myLinkedList
{
public :
	void Push(int); // 제일 뒤에 삽입
	int Front(); // 제일 앞 반환
	int Back(); // 제일 뒤 반환
	bool Insert(int idx,int value); // 원하는 위치 삽입
	bool Remove(int idx); // 원하는 위치 제거

	void Print(); // 모두 출력
	int Select(int idx); // 특정 위치 출력

	void Clear(); // 모두 제거
	int Size(); // 크기 반환

	myLinkedList(); // 생성자
	~myLinkedList(); // 소멸자
private:
	int size = 0; // Linked List 크기

	Node_* head = nullptr; // Linked List의 Head
};
