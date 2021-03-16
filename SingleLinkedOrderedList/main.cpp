//#include <iostream>
//#include "SingleLinkedOrderedList.h"
//using namespace std;
//
//int main()
//{
//	SingleLinkedList A;
//	cout << "list A created " << endl;
//	A.InsertItem(1);
//	A.InsertItem(4);
//	A.InsertItem(3);
//	A.InsertItem(2);
//	A.InsertItem(12);
//	A.InsertItem(5);
//	A.InsertItem(8);
//	cout << "list A : ";
//	A.ShowList();
//	A.DeleteItem(2);
//	A.ShowList();
//	A.UpdateNode(1, 6);
//	A.ShowList();
//
//	SingleLinkedList B;
//	cout << "list B created " << endl;
//	B.InsertItem(3);
//	B.InsertItem(12);
//	B.InsertItem(2);
//	B.InsertItem(11);
//	B.InsertItem(5);
//	B.InsertItem(16);
//	B.InsertItem(14);
//	B.InsertItem(22);
//	B.InsertItem(9);
//	B.InsertItem(13);
//	cout << "list B : ";
//	B.ShowList();
//	cout << "=====================" << endl;
//	cout << endl;
//	
//	SingleLinkedList C;
//	cout << "list C created " << endl;
//	cout << "Common items between A and B :" << endl;;
//	C = CommonItems(&A, &B);
//	C.ShowList();
//	cout << endl;
//	
//	cout << "move item from A to B :" << endl;
//	MoveItem(8, A, B);
//	cout << endl;
//	
//	SingleLinkedList D;
//	cout << "merged list" << endl;
//	D = MergeLists(&A, &B);
//	D.ShowList();
//	cout << endl;
//
//	cout << "delete commnon" << endl;
//	DeleteCommon(A, B);
//	B.ShowList();
//
//	return 0;
//}