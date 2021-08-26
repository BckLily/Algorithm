#include <iostream>
#include "MyStack.h"
#include "MyQueueLine.h"
#include "MyQueue.h"

int main(void) {

	int i;
	MyStack stack;
	MyQueueLine qLine;
	MyQueue q;

	while (true) {
		std::cout << "1) push  2) pop  3) print  4) exit" << std::endl;
		std::cin >> i;

		switch (i) {
		case 1:
			//stack.Push();
			//qLine.Push();
			q.Push();
			break;
		case 2:
			//stack.Pop();
			//qLine.Pop();
			q.Pop();
			break;
		case 3:
			//stack.Print();
			//qLine.Print();
			q.Print();
			break;
		case 4:
			exit(0);
			break;
		default:
			std::cout << "woring select number" << std::endl;
			break;
		}
	}


	return 0;
}
