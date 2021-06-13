#include <iostream>
#include "SingleLinkedOrderedList.h"std::

int main()
{
	SingleLinkedList A;
	std::cout << "list A created " << std::endl;
	A.InsertItem(1);
	A.InsertItem(4);
	A.InsertItem(3);
	A.InsertItem(2);
	A.InsertItem(12);
	A.InsertItem(5);
	A.InsertItem(8);
	std::cout << "list A : ";
	A.ShowList();
	A.DeleteItem(2);
	A.ShowList();
	A.UpdateNode(1, 6);
	A.ShowList();

	SingleLinkedList B;
	std::cout << "list B created " << std::endl;
	B.InsertItem(3);
	B.InsertItem(12);
	B.InsertItem(2);
	B.InsertItem(11);
	B.InsertItem(5);
	B.InsertItem(16);
	B.InsertItem(14);
	B.InsertItem(22);
	B.InsertItem(9);
	B.InsertItem(13);
	std::cout << "list B : ";
	B.ShowList();
	std::cout << "=====================" << std::endl;
	std::cout << std::endl;

	SingleLinkedList C;
	std::cout << "list C created " << std::endl;
	std::cout << "Common items between A and B :" << std::endl;
	;
	C = CommonItems(&A, &B);
	C.ShowList();
	std::cout << std::endl;

	std::cout << "move item from A to B :" << std::endl;
	MoveItem(8, A, B);
	std::cout << std::endl;

	SingleLinkedList D;
	std::cout << "merged list" << std::endl;
	D = MergeLists(&A, &B);
	D.ShowList();
	std::cout << std::endl;

	std::cout << "delete commnon" << std::endl;
	DeleteCommon(A, B);
	B.ShowList();

	return 0;
}