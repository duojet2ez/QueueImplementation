#pragma once
#include<iostream>

template<typename T>
struct node
{
	T value;
	node* next;
};

template<typename T>
class LinkedList
{
public:

	LinkedList() { head = nullptr; }
	~LinkedList()
	{
		//free memory 
		if (!head)
			return;
		node<T>* temp = head;
		while (temp->next != NULL)
		{
			node<T>* temp2 = temp;
			temp = temp->next;
			delete temp2;
		}
		delete temp;
		head = NULL;
	}
	bool Find(T value)
	{
		if (!head)
		{
			std::cout << "Nothing in this list" << std::endl;
			return false;
		}
		node* temp = head;
		while (temp->next != NULL)
		{
			if (temp->value == value)
				return true;
			temp = temp->next;
		}
		if (temp->value == value)
			return true;
		else
			return false;
	}
	void PushBack(T value)
	{
		node* insertedNode = new node();
		insertedNode->value = value;
		insertedNode->next = NULL;
		node* temp;

		if (!head)
		{
			head = insertedNode;
			temp = head;
		}
		else
		{
			temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = insertedNode;
		}
	}
	void PushForward(T value)
	{
		node<T>* insertedNode = new node();
		insertedNode->value = value;

		if (head == NULL)
		{
			head = insertedNode;
			insertedNode->next = NULL;
		}
		else
		{
			node<T>* temp = head;
			head = insertedNode;
			head->next = temp;
		}
	}
	void Print(node<T>* head)
	{
		if (!head)
		{
			std::cout << "Nothing to print" << std::endl;
			return;
		}


		if (head->next == NULL)
		{
			std::cout << head->value << std::endl;
			return;
		}
		else
		{
			std::cout << head->value << std::endl;
			Print(head->next);
		}
	}
	void Remove(T value)
	{
		if (!head)
			std::cout << "Linked list empty nothing to remove" << std::endl;           //if list is empty 
		node* temp = head;
		if (temp->next == NULL)            //if list has only 1 element
		{
			if (temp->value == value)
			{
				delete temp;
				return;
			}
			else
				std::cout << "Value not found!" << std::endl;
		}

		if (temp->value == value)
		{
			//deleting the head node from the list 
			node* temp2 = temp->next;
			head = temp2;
			delete temp;
			return;
		}
		//deleting the middle node 
		//deleting the end node
		node* temp3 = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			if (temp->value == value)
			{
				node* temp4 = temp;
				temp = temp->next;
				delete temp4;
				temp3->next = temp;
				return;
			}
			temp3 = temp;
		}
		std::cout << "Value not found to remove" << std::endl;
	}
	T RemoveFromEnd()
	{
		if (!head)
		{
			throw 1;
		}

		else
		{
			node* temp = head;
			node* tempTrailing = head;
			T data;
			int counter = 0;
			if (!temp->next)
			{
				data = temp->value;
				delete temp;
				head = nullptr;
				return data;
			}
			while (temp->next)
			{
				temp = temp->next;
				if (counter > 0)
					tempTrailing = tempTrailing->next;
				counter++;
			}
			data = temp->value;
			delete temp;
			tempTrailing->next = nullptr;
			return data;
		}
		return 0;
	}
	T PeekFromEnd()
	{
		if (!head)
		{
			throw 2;
		}
		node* temp = head;
		while (temp->next)
		{
			temp = temp->next;
		}

		return temp->value;
	}
	void Clear(node<T>* head)
	{
		if (!head)
		{
			std::cout << "Nothing to clear" << std::endl;
		}
		if (head->next == NULL)
		{

			delete head;
			this->head = NULL;
			return;
		}
		node* temp = head;
		head = head->next;
		delete temp;
		Clear(head);
	}
	int Size()
	{
		if (!head)
			return 0;

		node* temp = head;
		int counter = 0;
		while (temp)
		{
			counter++;
			temp = temp->next;
		}
		return counter;
	}
	node<T>* head;
};