#include <iostream>
using namespace std;


class Stack
{
private:
	int top;
	int arr[5];
public:
	
	Stack()
	{
		top = -1;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
	}

	int isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if (top == 4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(int val)
	{
		if (isFull())
		{
			cout << "The stack is already full" << endl;
		}
		else
		{
			top++;
			arr[top] = val;
		}
	}

	int Pop()
	{
		if (isEmpty())
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else
		{
			int PopVal = arr[top];
			arr[top] = 0;
			top--;
			return PopVal;
		}
	}

	int Count()
	{
		return top + 1;
	}

	int Peek(int pos)
	{
		if (isEmpty())
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else
		{
			return arr[pos];
		}
	}

	void Change(int pos, int val)
	{
		if (isEmpty())
		{
			cout << "Stack underflow" << endl;
		}
		else
		{
			arr[pos] = val;
			cout << val << " changed to location " << pos << endl;
		}
	}

	void Display()
	{
		cout << "All values in the stack are: ";
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Stack s; // create the stack

	if (s.isEmpty())
	{
		cout << "The stack s is empty" << endl;
	}
	
	s.Push(7); // add new element
	s.Push(3);
	s.Push(5);
	s.Push(1);
	s.Push(1);
	s.Push(12);

	if (s.isFull())
	{
		cout << "The stack is full" << endl;
	}

	s.Display(); // display all elemnts in the stack 

	s.Pop(); // remove the last element 
	s.Display();

	cout << s.Count() << " values in the stack" << endl;

	s.Peek(5); // return the position of the element

	s.Change(2, 3); // chnage the position of the element in the stack
	s.Display();

 
	return 0;
}