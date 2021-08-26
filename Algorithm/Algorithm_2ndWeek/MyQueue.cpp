#include "MyQueue.h"

bool MyQueue::IsEmpty()
{
	return front == rear;
}

bool MyQueue::IsFull()
{
	return front == ((rear + 1) % (MAX_QUEUE_SIZE));
}

void MyQueue::Push()
{
	if (IsFull()) {
		std::cout << "Queue memory is Full" << std::endl;
		std::cout << "front: " << front << " rear: " << rear << std::endl;
		return;
	}

	int i;
	std::cin >> i;
	/*rear = (rear + 1) % MAX_QUEUE_SIZE;
	arr[rear] = i;*/
	arr[rear = (rear + 1) % MAX_QUEUE_SIZE] = i;
}

void MyQueue::Pop()
{
	if (IsEmpty()) {
		std::cout << "Queue memory is Empty" << std::endl;
		return;
	}

	//front = (front + 1) % MAX_QUEUE_SIZE;
	//std::cout << "data: " << arr[front] << std::endl;
	std::cout << "data: " << arr[front = (front + 1) % MAX_QUEUE_SIZE] << std::endl;
}

void MyQueue::Print()
{
	if (IsEmpty()) {
		std::cout << "Queue memory is Empty" << std::endl;
		return;
	}

	for (int i = 1; i <= (((rear - front) > 0) ? (rear - front) : ((rear - front) + MAX_QUEUE_SIZE)); i++) {
		std::cout << "data[" << i << "]: " << arr[(front + i) % MAX_QUEUE_SIZE] << std::endl;
	}
}
