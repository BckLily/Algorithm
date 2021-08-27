#include "myLinkedList.h"
#include <iostream>

// 새로운 Node를 생성해서 Linked List에 추가하는 함수
void myLinkedList::Push(int value) {
	// 새로운 노드를 생성한다.
	Node_* newNode = new Node_();

	// Linked List의 크기를 1증가시킨다.
	size++;

	// 새로운 Node에 입력한 value를 대입
	newNode->data = value;
	// Linked List의 제일 뒤에 새로운 노드를 연결하는 것이므로
	// 다음 노드는 null이 된다.
	newNode->pNext = nullptr;

	// head가 null인 경우(연결된 node가 없는 경우)
	if (head == nullptr) {
		// 새로운 node를 head로 만든다.
		head = newNode;
	}
	// 연결된 node가 있는 경우
	else {
		// 현재 마지막 Node를 찾을 임시 Node를 생성한다.
		Node_* node = head;
		// node의 다음이 null일때까지 (마지막 Node까지)
		for (; node->pNext != nullptr;) {
			// node를 Next node로 설정한다.
			node = node->pNext;
		}
		// 현재 제일 마지막 노드의 다음 노드를 새로 생성한 노드로 한다.
		node->pNext = newNode;
	}
}
//template <typename T>
//void myLinkedList<T>::Push(T value) {
//	// 새로운 노드를 생성한다.
//	Node<T>* newNode = new Node<>();
//
//	// Linked List의 크기를 1증가시킨다.
//	size++;
//
//	// 새로운 Node에 입력한 value를 대입
//	newNode->data = value;
//	// Linked List의 제일 뒤에 새로운 노드를 연결하는 것이므로
//	// 다음 노드는 null이 된다.
//	newNode->pNext = nullptr;
//
//	// head가 null인 경우(연결된 node가 없는 경우)
//	if (head == nullptr) {
//		// 새로운 node를 head로 만든다.
//		head = newNode;
//	}
//	// 연결된 node가 있는 경우
//	else {
//		// 현재 마지막 Node를 찾을 임시 Node를 생성한다.
//		Node<T>* node = head;
//		// node의 다음이 null일때까지 (마지막 Node까지)
//		for (; node->pNext != nullptr;) {
//			// node를 Next node로 설정한다.
//			node = node->pNext;
//		}
//		// 현재 제일 마지막 노드의 다음 노드를 새로 생성한 노드로 한다.
//		node->pNext = newNode;
//	}
//}


// Linked List의 제일 앞(첫 번째) 노드를 반환하는 함수
int myLinkedList::Front()
{
	// head가 null인 경우(Linked List에 값이 없는 경우)
	if (head == nullptr) {
		// -1을 반환한다.
		return -1;
	}

	// 임시 노드를 생성해서 현재 제일 앞 Node(head)를 저장한다.
	Node_* node = head;
	// 제일 앞 노드(node)의 값을 미리 저장해놓는다.
	int result = node->data;
	// head를 node의 다음 node로 설정한다.
	head = node->pNext;
	// 임시 노드에 저장된 값을 제거한다.
	delete node;
	// 노드가 하나 줄었으므로 크기를 1감소시킨다.
	size--;

	return result;
}
//template<typename T>
//T myLinkedList<T>::Front()
//{
//	// head가 null인 경우(Linked List에 값이 없는 경우)
//	if (head == nullptr) {
//		// -1을 반환한다.
//		return -1;
//	}
//
//	// 임시 노드를 생성해서 현재 제일 앞 Node(head)를 저장한다.
//	Node<T>* node = head;
//	// 제일 앞 노드(node)의 값을 미리 저장해놓는다.
//	T result = node->data;
//	// head를 node의 다음 node로 설정한다.
//	head = node->pNext;
//	// 임시 노드에 저장된 값을 제거한다.
//	delete node;
//	// 노드가 하나 줄었으므로 크기를 1감소시킨다.
//	size--;
//
//	return result;
//}

// Linked List의 제일 뒤의 값을 반환하는 함수
int myLinkedList::Back()
{
	// head가 null인 경우(Linked List에 값이 없는 경우)
	if (head == nullptr) {
		// -1을 반환한다.
		return -1;
	}

	// 첫 시행인지 확인하는 값.
	bool isFirst = true;
	// 가장 마지막 노드
	Node_* node = nullptr;
	// 가장 마지막 노드의 앞 노드
	Node_* preNode = nullptr;

	// 마지막 노드를 찾을 때까지 진행한다.
	do {
		// 첫 시행에는 node에 head를 넣어준다.
		if (isFirst) {
			node = head;
			// 첫 시행이 끝났으므로 false로 만들어준다.
			isFirst = !isFirst;
			// 조건을 확인하러 간다.
			continue;
		}
		// 마지막 앞의 노드를 node로 한다.
		preNode = node;
		// 마지막 노드를 preNode의 next로 한다.
		node = preNode->pNext;

	} while (node->pNext != nullptr);

	// 반환 값은 마지막 노드의 데이터로 한다.
	int result = node->data;
	// 마지막 노드를 없앤다
	delete node;

	if (preNode == nullptr) {
		head = nullptr;
	}
	else {
		// 마지막 노드가 된 노드의 Next Node는 null로 한다.
		preNode->pNext = nullptr;
	}

	// 노드가 하나 줄었으므로 크기를 1줄인다.
	size--;


	return result;
}
//template<typename T>
//T myLinkedList<T>::Back()
//{
//	// head가 null인 경우(Linked List에 값이 없는 경우)
//	if (head == nullptr) {
//		// -1을 반환한다.
//		return -1;
//	}
//
//	// 첫 시행인지 확인하는 값.
//	bool isFirst = true;
//	// 가장 마지막 노드
//	Node<T>* node = nullptr;
//	// 가장 마지막 노드의 앞 노드
//	Node<T>* preNode = nullptr;
//
//	// 마지막 노드를 찾을 때까지 진행한다.
//	do {
//		// 첫 시행에는 node에 head를 넣어준다.
//		if (isFirst) {
//			node = head;
//			// 첫 시행이 끝났으므로 false로 만들어준다.
//			isFirst = !isFirst;
//			// 조건을 확인하러 간다.
//			continue;
//		}
//		// 마지막 앞의 노드를 node로 한다.
//		preNode = node;
//		// 마지막 노드를 preNode의 next로 한다.
//		node = preNode->pNext;
//
//	} while (node->pNext != nullptr);
//
//	// 반환 값은 마지막 노드의 데이터로 한다.
//	T result = node->data;
//	// 마지막 노드를 없앤다
//	delete node;
//	// 마지막 노드가 된 노드의 Next Node는 null로 한다.
//	preNode->pNext = nullptr;
//
//	// 노드가 하나 줄었으므로 크기를 1줄인다.
//	size--;
//
//
//	return T();
//}

bool myLinkedList::Insert(int, int)
{


	return false;
}
//template<typename T>
//bool myLinkedList<T>::Insert(int, T)
//{
//
//
//	return false;
//}

bool myLinkedList::Remove(int idx)
{
	return false;
}
//template<typename T>
//bool myLinkedList<T>::Remove(int idx)
//{
//	return false;
//}

void myLinkedList::Print()
{
	Node_* temp = head;
	for (int i = 0; temp != nullptr; i++) {
		std::cout << "List[" << i << "]: " << temp->data << std::endl;
		temp = temp->pNext;
	}
	
}
//template<typename T>
//void myLinkedList<T>::Print()
//{
//}

int myLinkedList::Select(int idx)
{
	return 0;
}
//template<typename T>
//int myLinkedList<T>::Select(int idx)
//{
//	return 0;
//}

//template<typename T>
//bool myLinkedList::AddFirst(T)
//{
//	return false;
//}
//
//template<typename T>
//bool myLinkedList::AddLast(T)
//{
//	return false;
//}
//
//template<typename T>
//bool myLinkedList::Add(int, T)
//{
//	return false;
//}
//
//template<typename T>
//bool myLinkedList::Add(T)
//{
//	return false;
//}



void myLinkedList::Clear()
{

}
//template <typename T>
//void myLinkedList<T>::Clear()
//{
//
//}

int myLinkedList::Size()
{
	return size;
}
//template <typename T>
//int myLinkedList<T>::Size()
//{
//	return size;
//}


myLinkedList::myLinkedList()
{
}
//template <typename T>
//myLinkedList<T>::myLinkedList()
//{
//}
