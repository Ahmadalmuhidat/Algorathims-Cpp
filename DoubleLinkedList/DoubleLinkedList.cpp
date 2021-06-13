#include "DoubleLinkedList.h"
// DoubleLinkedList.cpp - Double linked list of integers - implementation of class methods
//
#include <iostream>

// "default" constructor - creating an empty list - see class description
// DoubleLinkedList :: DoubleLinkedList (): count_ (0), head_ (nullptr), tail_ (nullptr) {}

// Constructor "copy" - create a copy of the existing list
DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& src) :
	head_(nullptr),
	tail_(nullptr),
	count_(0)
{
	Node* currentNode = src.head_;
	while (currentNode != nullptr)
	{
		this->insertTail(currentNode->item_);
		currentNode = currentNode->next_;
	}
}

// Insert the generated node into the tail of the list
void DoubleLinkedList::insertTail(Node* x)
{
	x->prev_ = tail_;
	if (head_ != nullptr) {
		tail_->next_ = x;
	}
	else
	{
		head_ = x;
	}
	tail_ = x;
	count_++;
}

// Insert the generated node at the beginning of the list
void DoubleLinkedList::insertHead(Node* x)
{   // x->prev_ == nullptr,  x->next_ == nullptr  
	x->next_ = head_;
	if (head_ != nullptr) {
		// the list was NOT empty - the new item will be both the first and the last
		head_->prev_ = x;
	}
	else {
		// the list was empty - the new item will be both the first and the last
		tail_ = x;
	}
	head_ = x;
	count_++;  // the number of list items has increased
}

// Delete the given node
void DoubleLinkedList::deleteNode(Node* x)
{
	if (x == nullptr) {
		throw ("DoubleLinkedList::deleteNode  - the address of the deleted node is set incorrectly");
	}
	if (x->prev_ != nullptr)
	{
		// NOT the head of the list is removed
		(x->prev_)->next_ = x->next_;
	}
	else
	{
		// the head of the list is removed, the second item becomes the first
		head_ = x->next_;
	}
	if (x->next_ != nullptr) {
		// NOT the tail is removed
		(x->next_)->prev_ = x->prev_;
	}
	else {
		// remove the tail
		tail_ = x->prev_;
	}
	delete x;      // 
	count_--;     // the number of list items has decreased
}

// Search for a node (address) with a given value 
DoubleLinkedList::Node* DoubleLinkedList::searchNode(int item)
{
	Node* x = head_;
	while (x != nullptr && x->item_ != item) {
		x = x->next_;
	}
	return x;
}

// Replace node information with a new one 
DoubleLinkedList::Node* DoubleLinkedList::replaceNode(DoubleLinkedList::Node* x, int item)
{
	x->item_ = item;
	return x;
}

// number of list items
int DoubleLinkedList::count()const { return count_; }

// Access information of the head node of the list
int DoubleLinkedList::headItem() const
{
	if (head_ != nullptr) {
		return head_->item_;
	}
	throw ("headItem - the list is empty!");
}

int& DoubleLinkedList::headItem()
{
	if (head_ != nullptr) {
		return head_->item_;
	}
	throw ("headItem - the list is empty!");
}

// Access information of the tail node of the list
int DoubleLinkedList::tailItem() const
{
	if (tail_ != nullptr) {
		return tail_->item_;
	}
	throw ("tailItem - the list is empty!");
}
int& DoubleLinkedList::tailItem()
{
	if (tail_ != nullptr) {
		return tail_->item_;
	}
	throw ("tailItem - the list is empty!");
}

// Insert an item into the head of the list
void DoubleLinkedList::insertHead(int item)
{   // create a new list item and add to the head
	insertHead(new Node(item));
}


// Insert an item into the tail of the list
void DoubleLinkedList::insertTail(int item)
{   // create a new list item and add to the tail 
	insertTail(new Node(item));
}

// Remove an item from the head of the list
bool DoubleLinkedList::deleteHead()
{
	if (head_ == nullptr) {
		return 0;  // list is empty, no deletions
	}
	deleteNode(head_);
	return 1;     // the list was NOT empty, removing the head
}

// Remove item from the tail of the list
bool DoubleLinkedList::deleteTail()
{
	if (tail_ == nullptr) {
		return false;
	}
	deleteNode(tail_);
	return 1;
}

// Deleting a node with a given value 
bool DoubleLinkedList::deleteItem(const int item)
{
	bool flag = 0;
	Node* temp = head_;
	while (temp != nullptr)
	{
		if (temp->item_ == item)
		{
			temp = temp->next_;
			deleteNode(temp->prev_);
			flag = 1;
		}
		else
		{
			temp = temp->next_;
		}
	}
	return flag;
}

// Search for a record with a given value 
bool DoubleLinkedList::searchItem(int item)
{   // return TRUE if the node is found
	return (searchNode(item) != nullptr);
}


// Replace node information with a new one
bool DoubleLinkedList::replaceItem(int itemOld, int itemNew)
{
	bool isReplace = 0;
	Node* x = head_;
	while (x != nullptr) {
		if (x->item_ == itemOld)
		{
			x->item_ = itemNew;
			isReplace = true;
		}
		x = x->next_;
	}
	return isReplace;
}

// Output the list items as text to standard output
void DoubleLinkedList::outAll()
{
	Node* current = head_;       // Pointer to element
	while (current != nullptr) {
		std::cout << current->item_ << ' ';
		current = current->next_;  // Move to next item
	}
	std::cout << std::endl;
}

// List destructor	
DoubleLinkedList::~DoubleLinkedList()
{
	Node* current = nullptr;   // pointer to the element to be removed
	Node* next = head_;        // pointer to next element
	while (next != nullptr) {  // while there are more items in the list
		current = next;
		next = next->next_;    // go to the next item
		delete current;        // free memory
	}
}

// copy assignment operator
DoubleLinkedList& DoubleLinkedList::operator=(const DoubleLinkedList& src) {
	if (this != &src)
		DoubleLinkedList(src).swap(*this);
	return *this;
}
//swap
void DoubleLinkedList::swap(DoubleLinkedList& src)noexcept {
	Node* temp = nullptr;
	temp = head_;
	head_ = src.head_;
	src.head_ = temp;

	temp = tail_;
	tail_ = src.tail_;
	src.tail_ = temp;
	temp = nullptr;

	std::swap(count_, src.count_);
}

// move constructor
DoubleLinkedList::DoubleLinkedList(DoubleLinkedList&& src)noexcept {
	head_ = src.head_;
	tail_ = src.tail_;
	count_ = src.count_;
	src.head_ = nullptr;
	src.tail_ = nullptr;
	src.count_ = 0;
}

// operator of assignment movement

DoubleLinkedList& DoubleLinkedList::operator=(DoubleLinkedList&& x)noexcept
{

	if (&x == this)
		return *this;
	while (head_ != nullptr)
	{
		deleteHead();
	}

	head_ = x.head_;
	tail_ = x.tail_;
	count_ = x.count_;

	x.head_ = nullptr;
	x.tail_ = nullptr;
	x.count_ = 0;

	return *this;
}

std::ostream& operator<< (std::ostream& out, DoubleLinkedList& src) {
	src.outAll();
	return out;
}

bool DoubleLinkedList::operator==(const DoubleLinkedList& src) {
	if (count_ != src.count_)
		return false;
	Node* left = head_;
	Node* right = src.head_;
	while (left != nullptr && right != nullptr) {
		if (left->item_ == right->item_) {
			left = left->next_;
			right = right->next_;
		}
		else
			return false;
	}
	if (left == nullptr && right == nullptr)
		return true;
	else
		return false;
}
void DoubleLinkedList::addList(DoubleLinkedList& src) {
	Node* x = src.head_;
	if (src.head_ != nullptr)
		while (x != nullptr) {
			this->insertTail(x);
			x = x->next_;
		}

	src.head_ = nullptr;
	src.tail_ = nullptr;
	src.count_ = 0;

}
