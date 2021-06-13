#ifndef __Queue
#define __Queue

class Queue
{

public:
	int front; // front item
	int tail;	 // last item
	int arr[5];

	// "default" constructor - create an empty list
	Queue();

	// Insert new item
	void Enqueue(int val);

	// Remove last item
	int Dequeue();

	// Check if the list is full or not
	bool isFull();

	// Check if the list is empty or not
	bool isEmpty();

	// Sort list in order
	void Sorting();

	// How many item we have
	int Count();

	// Dislay all the items
	void Display();
};

// Compare two lists
bool CompareTwoLists(Queue F, Queue S);

#endif