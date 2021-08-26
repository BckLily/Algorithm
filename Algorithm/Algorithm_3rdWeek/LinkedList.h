#pragma once


//template <typename T>
struct Node {
public:
	//T value;
	int _data; // 가지고 있는 데이터
	Node* pFront; // 앞의 Node
	Node* pNext; // 뒤의 Node

};

//template <typename T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();


	void Push(int data); // 맨 뒤에 데이터 삽입
	int Front(); // 맨 앞의 데이터 제거(꺼내기)
	int Back(); // 맨 뒤의 데이터 제거(꺼내기)
	bool Insert(int idx, int value); // 중간에 데이터 넣기
	bool Remove(int idx); // 중간에 데이터 제거

	void Print();
	int Select(int idx);

	void Clear();
	int Size();

private:
	Node* head = nullptr; // 링크드 리스트의 첫 번째 노드의 주소(값)
	Node* tail = nullptr; // Linked List의 마지막 노드
	int size = 0; // Linked List의 크기
	//Node<T>* head = nullptr; // 링크드 리스트의 첫 번째 노드의 주소(값)


};

