#include<iostream>
#include "LinkedList.h"

LinkedList QueueContainer; 


class Queue
{
public:
	void Enqueue(int data);  
	int Dequeue();    
	bool Is_Empty();  
	int Size();       
	int Get_Front();   
	void PrintQueue();    
};

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

	
}
int main()
{
	Test(); 
	return 0;
}



//make it work for ints and then use template values. 