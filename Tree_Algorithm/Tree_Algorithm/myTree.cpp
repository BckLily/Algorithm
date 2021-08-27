#include "myTree.h"
#include <iostream>


void myTree::Push(int value)
{
	// 새로운 노드 생성 
	// 새로운 노드 넣을 위치 탐색
	// 노드를 넣을 위치는 노드가 저장하고 있는
	// 데이터 값을 기준으로 설정된다.
	// 작으면 왼쪽 크면 오른쪽
	// 노드가 있으면 재탐색
	// 데이터가 같은 값이면 사용자가 어떻게 할지 만들기 나름이다.
	// 같을때 왼쪽에 넣을 수도 있고 같을 때 오른쪽에 넣을 수도 있고 같을 때 안넣을 수도 있다.

	// 새로운 노드 생성
	Node* newNode = new Node();

	newNode->_data = value;
	newNode->pLeft = nullptr;
	newNode->pRight = nullptr;

	Node* pTmp = pRoot;


	if (pTmp == nullptr) {
		pRoot = newNode;
		size++;
		return;
	}

	Node* nextNode = pRoot;
	int vector;

	for (;;) {
		if (pTmp->_data > value) {
			// 삽입 데이터가 기존 데이터보다 작으면 왼쪽에 저장
			nextNode = pTmp->pLeft;
			vector = 0;
		}
		else if (pTmp->_data < value) {
			// 삽입 데이터가 기존 데이터보다 크면 오른쪽에 저장
			nextNode = pTmp->pRight;
			vector = 1;
		}
		else if (pTmp->_data == value) {
			// 중복 데이터는 삽입하지 않는다.
			return;
		}

		if (nextNode == nullptr) {
			break;
		}
		pTmp = nextNode;
	}
	// 왼쪽
	if (vector == 0) {
		pTmp->pLeft = newNode;
	}
	else {
		pTmp->pRight = newNode;
	}
	size++;

	/*
	while(true){
		if(pNode->_data < pTmp->_data){
			if(pTmp->pLeft==nullptr)P
				pTmp->pLeft = pNode;
				break;
			}
			else{
				pTmp = pTmp->pLeft;
			}
		}
	}
	else if(pNode->_data > pTmp->_data){
		if(pTmp->pRight == nullptr){
			pTmp->pRight=pNode;
			break;
		}
		else{
			pTmp = pTmp->pRight;
			}
		}
		else if(pNode->_data == pTmp->_data){
			break; // 데이터 삽입 안함.
		}
	}
	*/
}

void myTree::Print()
{
	PrintNode(pRoot);
}



void myTree::PrintNode(Node* pNode)
{
	// 내용이 없으면 함수 종료
	if (pNode == nullptr) {
		return;
	}

	//std::cout << node->_data << std::endl; // 전위 출력

	if (pNode->pLeft != nullptr) { PrintNode(pNode->pLeft); } // 왼쪽 노드 출력

	std::cout << pNode->_data << " "; // 중위 출력
	//std::cout << pNode->_data << std::endl; // 중위 출력

	if (pNode->pRight != nullptr) { PrintNode(pNode->pRight); } // 오른쪽 노드 출력

	//std::cout << node->_data << std::endl; // 후위 출력

}

bool myTree::Search(int value)
{
	// 임시 노드에 루트를 넣는다.
	Node* node = pRoot;
	// 노드가 null이 아닐 때까지 반복
	for (; node != nullptr;) {
		// 찾는 value가 node의 data보다 작을 때
		if (value < node->_data) {
			// node를 왼쪽 node로 변경
			node = node->pLeft;
		}
		// 찾는 value가 node의 data보다 클 때
		else if (value > node->_data) {
			// node의 오른쪽 node로 변경
			node = node->pRight;
		}
		// 찾는 value가 node의 data와 동일할 때
		else if (value == node->_data) {
			// 찾았다고 true 반환
			return true;
		}
	}
	// 못찾았으니 false 반환
	return false;
}

void myTree::Sort()
{

}

int myTree::Size()
{
	return size;
}

int myTree::Root()
{
	return pRoot->_data;
}
