#include<iostream>
#include "LinkedList.h"


LinkedList<int> QueueContainer;

template<typename T>
class Queue
{
public:
	void Enqueue(T data)
	{
		QueueContainer.PushForward(data);
	}
	T Dequeue()
	{
		return QueueContainer.RemoveFromEnd();
	}
	bool Is_Empty()
	{
		if (!QueueContainer.head)
			return true;

		else
			return false;
	}
	int Size()
	{
		return QueueContainer.Size();
	}
	T Get_Front()
	{
		return QueueContainer.PeekFromEnd();
	}
	void PrintQueue()
	{
		QueueContainer.Print(QueueContainer.head);
	}
};

int main()
{
	Queue<int> thisIsAQueue; 
	thisIsAQueue.Enqueue(10);
	thisIsAQueue.Enqueue(11); 
	thisIsAQueue.Dequeue(); 
	thisIsAQueue.Enqueue(100);
	thisIsAQueue.Dequeue();
	thisIsAQueue.PrintQueue(); 
	std::cout << "Size is: " << thisIsAQueue.Size() << std::endl; 
	std::cout << "Front of queue is: " << thisIsAQueue.Get_Front() << std::endl;
	thisIsAQueue.Is_Empty(); 
	





	return 0;
}