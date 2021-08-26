#pragma once


template <typename T>
struct Node {
public:
	T data; // Node가 가지고 있는 Data
	Node* pNext; // Node가 가리키는 다음 Node
};





class myLinkedList
{
	
public :
	template <typename T>
	void Push(T);
	//template <typename T>
	//T Front();
	//template <typename T>
	//T Back();
	//template <typename T>
	//bool Insert(int ,T);
	//template <typename T>
	//bool Remove(int idx);

	//template <typename T>
	//void Print();
	//template <typename T>
	//int Select(int idx);

	template <typename T>
	bool AddFirst(T);
	template <typename T>
	bool AddLast(T);
	template <typename T>
	bool Add(int, T);
	template <typename T>
	bool Add(T);

	template <typename T>
	T Front();
	template <typename T>
	T Back();

	template <typename T>
	bool Insert(int, T);
	template <typename T>
	bool Remove(int idx);
	
	template <typename T>
	void Print();
	template <typename T>
	int Select(int idx);

	void Clear();
	int Size();

	template <typename T>
	myLinkedList();

private:
	int size = 0;

};
