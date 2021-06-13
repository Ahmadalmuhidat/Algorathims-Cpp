#ifndef Single_Linked_List
#define Single_Linked_List

//  SingleLinkedList.h - Single Linked List of integers
//

class SingleLinkedList
{
public:
	struct Node
	{
		int data;
		Node *next; // Next node in the list

		// Constructor for creating a new list item.
		Node(int d = 0, Node *next = nullptr)
		{
			this->data = d;		 // value of the list item
			this->next = next; // pointer to the next item in the list
		}
	};

	Node *head; // first element of the list

	// "default" constructor - create an empty list
	SingleLinkedList(Node *n = nullptr);

	// Find item in the list
	Node *FindeItem(int d);

	// Sort list in order
	void sortList();

	// Add item to the list
	void InsertItem(int n);

	// Delete item from the list
	void DeleteItem(int n);

	// Update item in the list
	void UpdateNode(int k, int d);

	// Display all items in the list
	void ShowList();

	// List destructor
	~SingleLinkedList();
};

// Move item from list to list
void MoveItem(int n, SingleLinkedList from, SingleLinkedList to);

// Delete common items in the list
void DeleteCommon(SingleLinkedList &first, SingleLinkedList &second);

// Display the common items in two lists
SingleLinkedList CommonItems(SingleLinkedList *first, SingleLinkedList *second);

// Merge two lists
SingleLinkedList MergeLists(SingleLinkedList *first, SingleLinkedList *second);

#endif