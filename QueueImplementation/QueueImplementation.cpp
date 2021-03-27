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
	T Dequeue();
	bool Is_Empty();
	T Size();
	T Get_Front();
	void PrintQueue();
};

int main()
{
	//Test(); 
	return 0;
}




/*



void Queue::Enqueue(int data)
{
	QueueContainer.PushForward(data); 
}

int Queue::Dequeue()
{

	return QueueContainer.RemoveFromEnd();
}

bool Queue::Is_Empty()
{
	if (!QueueContainer.head)
		return true;

	else
		return false; 
}

int Queue::Size()
{

	return QueueContainer.Size();
}

int Queue::Get_Front()
{
	return QueueContainer.PeekFromEnd(); 
}

void Queue::PrintQueue()
{
	QueueContainer.Print(QueueContainer.head); 
}

void Test()
{
	Queue thisIsAQueue;


	try
	{
		std::cout << thisIsAQueue.Get_Front();
	}
	catch (int x) { std::cout << "Null head! Nothing in queue Error #" << x << std::endl; }
		
	try
	{
		thisIsAQueue.Dequeue();
	}
	catch (int x) { std::cout << "Null head! Error #" << x << std::endl; }


	if (thisIsAQueue.Is_Empty())
	{
		std::cout << "This queue is empty"; 
	}

	
}*/



//make it work for ints and then use template values. 