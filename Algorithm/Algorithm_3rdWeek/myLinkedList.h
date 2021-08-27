#pragma once


//template <typename T>
struct Node_ {
public:
	//T data; // Node가 가지고 있는 Data
	//Node<T>* pNext; // Node가 가리키는 다음 Node
	int data; // Node가 가지고 있는 Data
	Node_* pNext; // Node가 가리키는 다음 Node
};


//template <typename T>
class myLinkedList
{
	
public :
	//void Push(T);
	//T Front();
	//T Back();
	//bool Insert(int ,T);
	//bool Remove(int idx);

	void Push(int);
	int Front();
	int Back();
	bool Insert(int ,int);
	bool Remove(int idx);

	void Print();
	int Select(int idx);

	//template <typename T>
	//bool AddFirst(T);
	//template <typename T>
	//bool AddLast(T);
	//template <typename T>
	//bool Add(int, T);
	//template <typename T>
	//bool Add(T);

	//template <typename T>
	//T Front();
	//template <typename T>
	//T Back();

	//template <typename T>
	//bool Insert(int, T);
	//template <typename T>
	//bool Remove(int idx);

	//template <typename T>
	//void Print();
	//template <typename T>
	//int Select(int idx);

	void Clear();
	int Size();

	myLinkedList();

private:
	int size = 0;

	//Node<T>* head = nullptr;
	Node_* head = nullptr;
};
