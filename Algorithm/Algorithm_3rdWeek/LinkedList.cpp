#include "LinkedList.h"
#include <iostream>


LinkedList::LinkedList()
{

}

LinkedList::~LinkedList()
{
	Clear();
}

void LinkedList::Push(int data)
{
	// 새로운 노드 만들기
	// 새로운 데이터를 넣을 위치를 찾기
	// 헤드 / 기존 데이터 중 마지막 위치
	// 기존 데이터가 존재한다면 가장 마지막 데이터를 찾아야한다.
	// 찾은 마지막 데이터의 다음 데이터(nNext)에 새로 만든 데이터를 대입한다.

	// 새로운 노드를 만든다.
	// 동적 할당(new)을 하면 함수가 종료되어도 데이터가 사라지지 않는다.
	Node* pNode = new Node();
	// Linked List의 크기를 증가시킨다.
	size++;

	pNode->_data = data;
	// 새로 만든 데이터가 가장 마지막 데이터이기 때문에
	// 다음 데이터는 null이 되어야 한다.
	pNode->pNext = nullptr;

	// head에 연결된 Node가 없는 경우
	if (head == nullptr) {
		pNode->pFront = nullptr;
		// head와 tail에 pNode(새로운 노드)를 추가한다.
		head = pNode;
		tail = pNode;
		// 다른 노드가 없기 때문에 앞의 노드는 nullptr.
		//pNode->pFront = nullptr;
	}
	// head에 연결된 Node가 있는 경우
	else {
		// 새로운 노드에 head를 두고
		Node* node = head;
		// 다음 노드가 없을 때까지 진행
		for (; node->pNext != nullptr;)
		{
			node = node->pNext;
		}
		// 마지막 노드의 다음 노드에 pNode 저장
		pNode->pFront = node;
		node->pNext = pNode;
	}
}

// 예외 처리할 때 가장 많이 신경쓰는 부분은 head
int LinkedList::Front()
{
	// 값이 없으면
	if (head == nullptr) {
		return -1;
	}

	size--;
	// 첫 번째 위치가 가리키는 Node도 저장해놓고
	Node* temp = head;
	// 첫 번째 위치에 있는 값을 미리 저장해놓고
	int result = temp->_data;
	// head를 다음 위치로 조정
	head = temp->pNext;

	// head의 front는 null이어야 한다.
	if (head != nullptr) {
		head->pFront = nullptr;
	}
	// 기존의 head 값은 제거
	delete temp;

	// 저장해놓은 값을 반환
	return result;
}

int LinkedList::Back()
{
	// 값이 없으면
	if (head == nullptr) {
		return -1;
	}

	size--;

	// head에서 시작해서
	Node* node = head;
	// 다음 값이 없을 때까지 (마지막까지)
	for (; node->pNext != nullptr;) {
		node = node->pNext;
	}
	int result = node->_data;

	// tail의 next는 null이어야한다.
	if (node->pFront != nullptr) {
		tail = node->pFront;
		tail->pNext = nullptr;
	}
	else {
		head = nullptr;
		tail = nullptr;
	}

	// 기존 마지막 Node를 제거
	delete node;

	return result;
}

bool LinkedList::Insert(int idx, int value)
{
	if (idx > size) {
		return false;
	}

	Node* node = new Node();
	Node* next = head;

	size++;

	// 원하는 위치를 찾아감.
	for (int i = 0; i < idx; i++) {
		next = next->pNext;
	}

	// node의 이전 값.
	Node* front = next->pFront;

	// 새로운 Node의 값 설정.
	node->_data = value;
	node->pNext = next;
	node->pFront = front;

	// 다음 노드의 이전 값을 새로운 노드로 설정
	next->pFront = node;

	if (front != nullptr) {
		// 이전 노드의 다음 값을 새로운 노드로 설정
		front->pNext = node;
	}
	else {
		head = node;
	}

	return true;
}


bool LinkedList::Remove(int idx)
{
	if (idx > size) {
		return false;
	}

	Node* temp = head;

	if (size == 1) {
		head = nullptr;
	}
	else {
		for (int i = 0; i < idx; i++) {
			temp = temp->pNext;
		}

		Node* front = temp->pFront;
		Node* next = temp->pNext;

		if (front != nullptr && next != nullptr) {
			front->pNext = next;
			next->pFront = front;
		}
		// front가 없을 때 즉, idx가 0일 때
		else if (front == nullptr) {
			next->pFront = nullptr;
			head = next;
		}
		else if (next == nullptr) {
			front->pNext = nullptr;
		}
	}

	size--;
	delete temp;

	return true;
}

void LinkedList::Print()
{
	Node* temp = head;
	for (int i = 0; temp != nullptr; i++) {
		std::cout << "List[" << i << "]: " << temp->_data << std::endl;
		temp = temp->pNext;
	}
}

int LinkedList::Select(int idx)
{
	return 0;
}

void LinkedList::Clear()
{
	for (; head != nullptr;) {

		Node* node = head->pNext;

		delete head;
		head = node;
		size--;
	}
}

int LinkedList::Size()
{
	return size;
}


