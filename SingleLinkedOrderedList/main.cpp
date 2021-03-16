//#include <iostream>
//// #include "SingleLinkedList.h"
//using namespace std;
//using std::cout;
//
//class Node
//{
//public:
//	int data;
//	Node* next;
//
//	Node(int d = 0, Node* next = nullptr) {
//		data = d ;
//		next = next;
//	}
//};
//
//class SingleLinkedList {
//public:
//	Node* head;
//
//	SingleLinkedList(Node* n = nullptr)
//	{
//		head = n;
//	};
//
//	Node* FindeItem(int d)
//	{
//		Node* temp = NULL;
//		Node* ptr = head;
//		while (ptr != NULL)
//		{
//			if (ptr->data == d)
//			{
//				temp = ptr;
//			}
//			ptr = ptr->next;
//		}
//		return temp;
//	};
//
//	void sortList() 
//	{ 
//	    Node* current = head, * index = NULL;
//		int temp;
//
//		if (head == NULL) {
//			return;
//		}
//		else {
//			while (current != NULL) {
//				//Node index will point to node next to current  
//				index = current->next;
//
//				while (index != NULL) {
//					//If current node's data is greater than index's node data, swap the data between them  
//					if (current->data > index->data) {
//						temp = current->data;
//						current->data = index->data;
//						index->data = temp;
//					}
//					index = index->next;
//				}
//				current = current->next;
//			}
//		}
//	}
//
//	void InsertItem(int n)
//	{
//		if (FindeItem(n) != NULL)
//		{
//			cout << "Item already exists with the key value " << n << endl;
//		}
//		else
//		{
//			Node* new_node = new Node(n);
//
//			if (head == NULL)
//			{
//				head = new_node;
//			}
//			else
//			{
//				Node* ptr = head;
//				while (ptr->next != NULL)
//				{
//					ptr = ptr->next;
//				}
//				ptr->next = new_node;
//			}
//			sortList();
//		}
//	};
//
//	void DeleteItem(int n)
//	{
//		if (head == NULL)
//		{
//			cout << "The list is already empty. cant delete !" << endl;
//		}
//		else if (head != NULL)
//		{
//			if (head->data == n)
//			{
//				head = head->next;
//			}
//			else
//			{
//				Node* temp = NULL;
//				Node* CurrentNode = head->next;
//				Node* PrevNode = head;
//				while (CurrentNode != NULL)
//				{
//					if (CurrentNode->data == n)
//					{
//						temp = CurrentNode;
//						CurrentNode = NULL;
//					}
//					else
//					{
//						PrevNode = PrevNode->next;
//						CurrentNode = CurrentNode->next;
//					}
//				}
//				if (temp != NULL)
//				{
//					PrevNode->next = temp->next;
//				}
//				else
//				{
//					cout << "Node doesnt exist with key value " << n << endl;
//				}
//			}
//		}
//	}
//
//	void UpdateNode(int k, int d)
//	{
//		Node* ptr = FindeItem(k);
//		if (ptr != NULL)
//		{
//			int before = ptr->data;
//			ptr->data = d;
//			sortList();
//		}
//		else
//		{
//			cout << "Node is not exists with key value" << endl;
//		}
//	}
//
//	void ShowList()
	/*{
		Node* ptr = head;
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
};*/
//
//void MoveItem(int n, SingleLinkedList from, SingleLinkedList to)
//{
//	if (from.FindeItem(n))
//	{
//		from.DeleteItem(n);
//		from.ShowList();
//		to.InsertItem(n);
//		to.ShowList();
//	}
//	else
//	{
//		cout << "the item is not exist" << endl;
//	}
//}
//
//void DeleteCommon(SingleLinkedList& first, SingleLinkedList& second)
//{
//	Node* current = first.head;
//
//	while (current != nullptr)
//	{
//		if (second.FindeItem(current->data))
//		{
//			second.DeleteItem(current->data);
//		}
//		current = current->next;
//	}
//}
//
//SingleLinkedList CommonItems(SingleLinkedList* first, SingleLinkedList* second)
//{
//	SingleLinkedList merged_list;
//	Node* current = second->head;
//	
//	while (current != nullptr)
//	{
//		if (first->FindeItem(current->data))
//		{
//			merged_list.InsertItem(current->data);
//		}
//		current = current->next;
//	}
//	return merged_list;
//}
//
//SingleLinkedList MergeLists(SingleLinkedList* first, SingleLinkedList* second)
//{
//	Node* current = second->head;
//	SingleLinkedList merged;
//	while (current != nullptr)
//	{
//		merged.InsertItem(current->data);
//		current = current->next;
//	}
//
//	Node* current2 = first->head;
//	while (current != nullptr)
//	{
//		merged.InsertItem(current2->data);
//		current2 = current2->next;
//	}
//	return merged;
//}
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