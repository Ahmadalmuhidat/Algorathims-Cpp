#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue q1;
	q1.Enqueue(3);
	q1.Enqueue(1);
	q1.Enqueue(13);
	q1.Enqueue(56);
	q1.Enqueue(20);
	cout << (q1.isFull() ? "Queue Overflow" : "Queue Underflow") << endl;
	cout << q1.Count() << " elements in the queue" << endl;
	cout << "q1: ";
	q1.Display();
	q1.Dequeue();
	cout << "q1: ";
	q1.Display();
	cout << q1.Count() << " elements in the queue" << endl;

	cout << "----------------------" << endl;

	Queue q2;
	q2.Enqueue(20);
	q2.Enqueue(56);
	q2.Enqueue(1);
	q2.Enqueue(13);
	q2.Enqueue(3);
	cout << "q2: ";
	q2.Display();

	Queue q3;
	q3.Enqueue(9);
	q3.Enqueue(4);
	q3.Enqueue(15);
	q3.Enqueue(28);
	q3.Enqueue(7);
	cout << "q3: ";
	q3.Display();
	cout << (CompareTwoLists(q2, q3) ? "q2 & q3 same" : "q2 & q3 not same") << endl;

	Queue q4;
	q4.Enqueue(9);
	q4.Enqueue(4);
	q4.Enqueue(15);
	q4.Enqueue(28);
	q4.Enqueue(7);
	cout << (CompareTwoLists(q4, q3) ? "q4 & q3 same" : "q4 & q3 not same") << endl;

	cout << "\nsorting: \n";
	q4.Sorting();
	q4.Display();

	return 0;
}
