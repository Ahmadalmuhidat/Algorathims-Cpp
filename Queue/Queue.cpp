#include <iostream>
#include <algorithm>
#include "Queue.h"

using namespace std;

Queue::Queue()
{
	front = -1;
	tail = -1;
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 0;
	}
}

void Queue::Enqueue(int val)
{
	if (isFull())
	{
		std::cout << "is full" << std::endl;
	}
	else if (isEmpty())
	{
		tail = 0;
		front = 0;
		arr[tail] = val;
	}
	else
	{
		tail++;
		arr[tail] = val;
	}
}

int Queue::Dequeue()
{
	int x;
	if (isEmpty())
	{
		return 0;
	}
	else if (front == tail)
	{
		x = arr[tail];
		arr[front] = 0;
		tail = -1;
		front = -1;
		return x;
	}
	else
	{
		x = arr[tail];
		arr[front] = 0;
		front++;
		return x;
	}
	return x;
}

bool Queue::isFull()
{
	if (tail == 4)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Queue::isEmpty()
{
	if (front == -1 && tail == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Queue::Sorting()
{
	if (isEmpty())
	{
		return;
	}
	else
	{
		sort(begin(arr), end(arr));
	}
}

int Queue::Count()
{
	return (tail - front + 1);
}

void Queue::Display()
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

bool CompareTwoLists(Queue F, Queue S)
{
	if (F.Count() == S.Count())
	{
		int points = 0;
		for (int i = 0; i < F.Count(); i++)
		{
			for (int num : S.arr)
			{
				if (F.arr[i] == num)
				{
					points += 1;
				}
				else
				{
					continue;
				}
			}
		}
		if (points == F.Count())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}