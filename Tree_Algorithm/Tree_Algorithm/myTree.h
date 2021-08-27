#pragma once

struct Node {
	int _data;
	Node* pLeft;
	Node* pRight;

};

class myTree
{
public:
	void Push(int value); // 데이터 저장
	void Print(); // 데이터 출력
	void PrintNode(Node* node); // 노드 데이터 출력
	bool Search(int value); // 데이터 검색
	void Sort(); // 정렬
	int Size();

	int Root();


	Node* pRoot = nullptr;

private :
	// Linked List의 pHead와 동일한 역할
	// Tree의 첫 번째 데이터를 저장하는 변수

	int size = 0;

};

