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

bool myLinkedList::Insert(int idx, int value)
{
	// 데이터를 삽입하려고 하는 곳이 size보다 크거나 0보다 작을 경우
	if (idx > size || idx < 0) {
		// 삽입에 실패했다는 것을 반환해준다.
		return false;
	}

	Node_* newNode = new Node_();
	Node_* preNode = nullptr;

	newNode->data = value;

	int i = 0;
	bool isFirst = true;

	while (i++ < idx) {
		if (isFirst) {
			isFirst = !isFirst;
			preNode = head;
			continue;
		}
		preNode = preNode->pNext;
	}

	// 제일 처음에 넣으려고 할 때
	if (preNode == nullptr) {
		Node_* node = head;
		newNode->pNext = node;
		head = newNode;
	}
	else {
		Node_* node = preNode->pNext;
		newNode->pNext = node;
		preNode->pNext = newNode;
	}


	//// 새로운 노드를 생성해준다.
	//Node_* newNode = new Node_();
	//// idx의 위치에 있는 Node
	//Node_* node = nullptr;
	//// idx의 위치에서 한 칸 앞에 있는 Node
	//Node_* preNode = nullptr;

	//// Node의 위치를 확인하는 변수
	//int i = 0;
	//// 첫 시행인지 확인하는 변수
	//bool isFirst = true;

	//// idx의 위치까지 반복
	//do {
	//	//i++; // 위치 값 증가
	//	// 첫 시행일 경우
	//	if (isFirst) {
	//		// 시행했으므로 첫 시행이 아니라고 알려줌
	//		isFirst = !isFirst;
	//		// 첫 시행에는 node에 head를 넣고 끝
	//		node = head;
	//		// 조건 확인으로 이동
	//		continue;
	//	}
	//	// 이전 노드에 최신 노드를 넣고
	//	preNode = node;
	//	// 최신 노드는 이전 노드의 다음 노드로 설정한다.
	//	node = preNode->pNext;

	//} while (++i <= idx); // 위치 값 증가

	//// 새로 생성한 노드에 입력한 값을 넣는다.
	//newNode->data = value;

	//// idx가 0인 경우(제일 앞에 넣으려고 하는 경우
	//if (preNode == nullptr) {
	//	// 새로운 노드의 다음 노드에 node를 넣는다.
	//	newNode->pNext = node;
	//	// 새로운 노드가 제일 앞 노드가 되었으므로 head에 새로운 노드를 넣는다.
	//	head = newNode;
	//}
	//// idx가 size와 같은 경우(제일 뒤에 넣으려고 하는 경우)
	//else if (node == nullptr) {
	//	// 앞의 노드의 다음 노드는 새로 생성한 노드이다.
	//	preNode->pNext = newNode;
	//	// 새로 생성한 노드의 다음 노드는 null이다.
	//	newNode->pNext = nullptr;
	//}
	//// 새로 생성할 위치의 앞, 뒤에 모두 데이터가 있을 경우
	//else {
	//	// 이전 노드의 다음 노드는 새로 생성한 노드이다.
	//	preNode->pNext = newNode;
	//	// 새로 생성한 노드의 다음 노드는 node이다
	//	newNode->pNext = node;
	//}

	// 노드가 증가했으므로 size 증가
	size++;

	return true;
}


bool myLinkedList::Remove(int idx)
{
	// 입력한 idx가 크기보다 클 경우(연결된 Node의 개수보다 큰 경우)
	// 데이터가 없을 경우 / idx가 0보다 작은 경우
	if (idx >= size || head == nullptr || idx < 0) {
		// false을 반환한다.
		return false;
	}

	Node_* preNode = nullptr;

	int i = 0;
	bool isFirst = true;

	while (i++ < idx) {
		if (isFirst) {
			isFirst = !isFirst;
			preNode = head;
			continue;
		}
		preNode = preNode->pNext;
	}

	Node_* node = nullptr;
	Node_* nextNode = nullptr;

	if (preNode == nullptr) {
		node = head;
		nextNode = node->pNext;
		head = nextNode;
	}
	else {
		node = preNode->pNext;
		nextNode = node->pNext;
		preNode->pNext = nextNode;
	}

	delete node;

	//// 제거할 위치의 노드
	//Node_* node = nullptr;
	//// 제거할 위치의 노드의 앞 노드
	//Node_* preNode = nullptr;
	//// 제거할 위치의 노드의 다음 노드
	//Node_* nextNode = nullptr;

	//int i = 0; // 반복 횟수
	//bool isFirst = true; // 첫 시행 확인

	//do {
	//	// 첫 시행일 경우
	//	if (isFirst) {
	//		// 첫 시행을 했으므로 isFirst는 false로
	//		isFirst = !isFirst;
	//		// node에 head를 
	//		node = head;
	//		// 조건 확인으로 이동
	//		continue;
	//	}
	//	// preNode에 node
	//	preNode = node;
	//	// node에 preNode의 nextNode
	//	node = preNode->pNext;

	//} while (++i < idx);
	//// nextNode에 node의 nextNode
	//nextNode = node->pNext;

	//// node를 제거
	//delete node;

	//// 제일 앞의 노드를 없애는 경우
	//if (preNode == nullptr) {
	//	// head를 nextNode로 변경
	//	// nextNode가 있는 경우 그쪽으로 연결, 없는 경우 null
	//	head = nextNode;
	//}
	//// 그 외의 경우 (제거하는 노드의 앞의 노드가 있는 경우)
	//else {
	//	// preNode의 next를 nextNode로 변경
	//	// 값이 있을 경우 연결, 없을 경우 null
	//	preNode->pNext = nextNode;
	//}

	// 하나를 제거했으므로 size 감소
	size--;

	return true;
}


void myLinkedList::Print()
{
	Node_* temp = head;
	for (int i = 0; temp != nullptr; i++) {
		std::cout << "List[" << i << "]: " << temp->data << std::endl;
		temp = temp->pNext;
	}
}


int myLinkedList::Select(int idx)
{
	// 입력 값이 0보다 작거나, 크기보다 크거나 같은 경우, 데이터가 없을 경우
	if (idx < 0 || idx >= size || size == 0) {
		// -1을 반환한다.
		return -1;
	}

	// 목표로 하는 노드.
	Node_* node = head;

	int i = 0;

	while (i++ < idx) {
		// node를 node의 next로 변경
		node = node->pNext;
	}
	// 목표 node의 data 반환
	return node->data;
}


void myLinkedList::Clear()
{
	for (; head != nullptr;) {
		Node_* node = head;
		head = node->pNext;
		delete node;
		size--;
	}

}


int myLinkedList::Size()
{
	// 현재 size 반환
	return size;
}


myLinkedList::myLinkedList()
{


}

myLinkedList::~myLinkedList()
{
	Clear();
}


