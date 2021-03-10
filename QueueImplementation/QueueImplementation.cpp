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
	//if (!QueueContainer.head)
		//return true;

	//else
		return false; 
}

int Queue::Size()
{
	return 0;
}

int Queue::Get_Front()
{
	return 0; 
}

void Queue::PrintQueue()
{
	QueueContainer.Print(QueueContainer.head); 
}

void Test()
{
	Queue thisIsAQueue;
	thisIsAQueue.Enqueue(15); 
	thisIsAQueue.Enqueue(16); 
	thisIsAQueue.PrintQueue(); 
	thisIsAQueue.Dequeue();
}
int main()
{
	Test(); 
	return 0; 
}


//make a queue with a linked list using the previous implementation of linked list as the header file
//make it work for ints and then use template values. 