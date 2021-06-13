#include "DoubleLinkedList.h"
#include <iostream>
#include <vector>

DoubleLinkedList makeList(int item);

int main() {
	setlocale(LC_ALL, "rus");

	DoubleLinkedList list;   // Create an empty list
	list.insertHead(2); 
	list.insertHead(5); 
	list.insertHead(3); 
	list.insertHead(10); 
	list.insertHead(23); // Add items
	list.insertHead(14);
	list.insertTail(3); 
	list.insertTail(1);
	list.insertTail(6);
	list.deleteHead(); 
	list.deleteTail(); 
	list.replaceItem(14, 24); 
	list.searchItem(24);

	list.outAll();

	
	std::cout << "Calling the copy constructor\n";
	DoubleLinkedList list2(list);


	list2.tailItem();
	DoubleLinkedList move = makeList(5); // Test the move constructor

	list2.outAll();
	list.outAll(); // Print items

	std::cout << ((list.searchItem(1)) ? "1 found" : "1 not found") << std::endl;
	std::cout << ((list.searchItem(8)) ? "8 found" : "8 not found") << std::endl;

	DoubleLinkedList  list1; // (list);  // Copy the list
	list1.insertHead(4);         // Add items
	list1.insertHead(5);         // Add items
	list1.deleteHead();          // Remove head
	list1.outAll();              // Print the result
	list1.insertHead(6);
	list1.deleteHead();
	list1.outAll();        // Print the result
	list1 = list2;
	std::cout << (list1 == list2) << std::endl;
	list1.outAll();
	list1.replaceItem(100, 555);
	std::cout << "Test for inference and comparison operator\n";
	std::cout << (list1 == list2) << std::endl; // test for the inference and comparison operator

	DoubleLinkedList addtest, addtest2;
	addtest.insertHead(1);
	addtest2.insertTail(2);
	addtest2.insertTail(3);
	addtest2.insertTail(4);
	addtest2.insertTail(5);
	addtest2.insertTail(6);
	std::cout << "Calling addlist\n";
	addtest.addList(addtest2); // Test for addlist
	std::cout << "AddList result\n";
	addtest.outAll();
	std::cout << addtest.count();
	return 0;
}

DoubleLinkedList makeList(int item) {
	DoubleLinkedList test;
	test.insertHead(item);
	return test;
}