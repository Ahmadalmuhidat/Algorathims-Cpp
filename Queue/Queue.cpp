//#include <iostream>
//#include "Queue.h"
//using namespace std;
//
//Queue::Queue()
//	{
//		front = -1;
//		rear = -1;
//		for (int i = 0; i < 5; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//
//void Queue::Enqueue(int val)
//	{
//		if (isFull())
//		{
//			std::cout << "is full" << std::endl;
//		}
//		else if (isEmpty())
//		{
//			rear = 0;
//			front = 0;
//			arr[rear] = val;
//		}
//		else
//		{
//			rear++;
//			arr[rear] = val;
//		}
//	}
//
//int Queue::Dequeue()
//	{
//		int x;
//		if (isEmpty())
//		{
//			return 0;
//		}
//		else if (front == rear)
//		{
//			x = arr[rear];
//			arr[front] = 0;
//			rear = -1;
//			front = -1;
//			return x;
//		}
//		else
//		{
//			x = arr[rear];
//			arr[front] = 0;
//			front++;
//			return x;
//		}
//		return x;
//	}
//
//bool Queue::isFull()
//	{
//		if (rear == 4)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//bool Queue::isEmpty()
//	{
//		if (front == -1 && rear == -1)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//int Queue::cout()
//	{
//		return (rear - front + 1);
//	}
//
//void Queue::Display()
//	{
//		for (auto num : arr)
//		{
//			std::cout << num << " ";
//		}
//		std::cout << std::endl;
//	}
//
//
