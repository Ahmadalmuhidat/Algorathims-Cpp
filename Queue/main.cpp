#include <iostream>
using namespace std;

class Queue
{
private:
	int front;
	int rear;
	int arr[5];

public:

	Queue(int f = -1, int r = -1)
	{
		front = f;
		rear = r;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
	}

	void Enqueue(int val)
	{
		if (isFull())
		{
			std::cout << "is full" << std::endl;
		}
		else if (isEmpty())
		{
			rear = 0;
			front = 0;
			arr[rear] = val;
		}
		else
		{
			rear++;
			arr[rear] = val;
		}
	}

	int Dequeue()
	{
		int x;
		if (isEmpty())
		{
			return 0;
		}
		else if (front == rear)
		{
			x = arr[rear];
			arr[front] = 0;
			rear = -1;
			front = -1;
			return x;
		}
		else
		{
			x = arr[rear];
			arr[front] = 0;
			front++;
			return x;
		}
		return x;
	}

	bool isFull()
	{
		if (rear == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isEmpty()
	{
		if (front == -1 && rear == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int cout()
	{
		return (rear - front + 1);
	}

	void Display()
	{
		for (auto num : arr)
		{
			std::cout << num << " ";
		}
		std::cout << std::endl;
	}

};
int main()
{
	Queue q1;
	q1.Enqueue(3);
	q1.Enqueue(1);
	q1.Enqueue(13);
	q1.Enqueue(56);
	q1.Enqueue(20);
	std::cout << (q1.isFull() ? "yes" : "no");
	std::cout << q1.cout() << std::endl;
	q1.Display();
	q1.Dequeue();
	q1.Display();
	std::cout << q1.cout() << std::endl;

	return 0;
}