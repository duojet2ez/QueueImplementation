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
	thisIsAQueue.PrintQueue(); 
	std::cout << "Size is: " << thisIsAQueue.Size() << std::endl; 
	std::cout << "Front of queue is: " << thisIsAQueue.Get_Front() << std::endl;
	thisIsAQueue.Is_Empty(); 
	





	return 0;
}




/*












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