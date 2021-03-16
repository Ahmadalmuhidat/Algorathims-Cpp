//#include <iostream>
//#include "Stack.h"
//using namespace std;
//
//Stack::Stack()
//	{
//		top = -1;
//		for (int i = 0; i < 5; i++)
//		{
//			arr[i] = 0;
//		}
//	}
//
//int Stack::isEmpty()
//	{
//		if (top == -1)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//bool Stack::isFull()
//	{
//		if (top == 4)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//void Stack::Push(int val)
//	{
//		if (isFull())
//		{
//			cout << "The stack is already full" << endl;
//		}
//		else
//		{
//			top++;
//			arr[top] = val;
//		}
//	}
//
//int Stack::Pop()
//	{
//		if (isEmpty())
//		{
//			cout << "Stack underflow" << endl;
//			return 0;
//		}
//		else
//		{
//			int PopVal = arr[top];
//			arr[top] = 0;
//			top--;
//			return PopVal;
//		}
//	}
//
//int Stack::Count()
//	{
//		return top + 1;
//	}
//
//int Stack::Peek(int pos)
//	{
//		if (isEmpty())
//		{
//			cout << "Stack underflow" << endl;
//			return 0;
//		}
//		else
//		{
//			return arr[pos];
//		}
//	}
//
//void Stack::Change(int pos, int val)
//	{
//		if (isEmpty())
//		{
//			cout << "Stack underflow" << endl;
//		}
//		else
//		{
//			arr[pos] = val;
//			cout << val << " changed to location " << pos << endl;
//		}
//	}
//
//void Stack::Display()
//	{
//		cout << "All values in the stack are: ";
//		for (int i = 0; i < 5; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
