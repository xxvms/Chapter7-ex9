// Chapter7-ex9.cpp : Defines the entry point for the console application.
//
#include <iostream>

class Queue
{
private:
	static const int MAX = 10; // non-standard syntax
	int number[MAX]{ 0 }; // queue array of integers
	int front;
	int back;
public:
	Queue() //constructor
	{
		front = 9;
		back = 0;
	}
	void put(Queue& queue1_) // put member on array
	{
		std::cout << "Number: ";
		back = (back % MAX) + 1;
		std::cin >> number[back];
	}
	void get(Queue& queue_) // take number off array
	{
		std::cout << "Number: ";
		std::cin >> number[front];
		front++;
	}
	bool fullQueue(Queue queue1_) // check if the queue is full
	{
		if (front == (back % MAX) +1) 
		{
			std::cout << "Full queue!!" << std::endl;
			return 1;
		}
		else return 0;
	}
	void showQueue()
	{
		for (int i = 0; i < MAX; i++)
		{
			std::cout << number[i] << std::endl;
		}
	}
};


int main()
{
	Queue queue1;

	
	/*char answer = 'a';
	std::cout << "Do you want to add data? (Y/N)";
	std::cin >> answer;*/

	//(answer == 'y' || answer == 'Y') &&

	while (!(queue1.fullQueue(queue1)))
	{
		std::cout << "Do you want to Add or Remove data? (A)dd (R)remove: ";
		char addRem = 'o';
		std::cin >> addRem;
		if (addRem == 'a' || addRem == 'A')
		{
			queue1.put(queue1);
			queue1.showQueue();
			
		}
		else
		{
			queue1.get(queue1);
			queue1.showQueue();
		}
	}

	system("pause");
	return 0;
}

