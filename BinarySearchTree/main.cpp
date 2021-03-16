//#include <iostream>
//using namespace std;
//
//class BST
//{
//private:	
//	struct Node
//	{
//		int data;
//		Node* left;
//		Node* right;
//	};
//	Node* rootptr;
//	static int Count;
//
//	void PrintInOrderPrivet(Node* ptr)
//	{
//		if (isEmpty())
//		{
//			cout << "nothing to print" << endl;
//		}
//		if (ptr->left != nullptr)
//		{
//			PrintInOrderPrivet(ptr->left);
//		}
//		cout << ptr->data << " ";
//		if (ptr->right != nullptr)
//		{
//			PrintInOrderPrivet(ptr->right);
//		}
//	}
//
//	void AddNodePrivet(int val, Node* ptr)
//	{
//		if (isEmpty())
//		{
//			rootptr = CreateNode(val);
//			Count++;
//			cout << val << " top" << endl;
//		}
//		else if (val < ptr->data) // left insert
//		{
//			if (ptr->left == nullptr)
//			{
//				ptr->left = CreateNode(val);
//				Count++;
//				cout << val << " left" << endl;
//			}
//			else
//			{
//				AddNodePrivet(val, ptr->left);
//			}
//		}
//		else if (val > ptr->data) // right insert
//		{
//			if (ptr->right == nullptr)
//			{
//				ptr->right = CreateNode(val);
//				Count++;
//				cout << val << " right" << endl;
//			}
//			else
//			{
//				AddNodePrivet(val, ptr->right);
//			}
//		}
//		else
//		{
//			cout << val << " has been already inserted to the tree" << endl;
//		}
//	}
//
//	Node* searchPrivet(Node* ptr, int key)
//	{
//		if (ptr != NULL)
//		{
//			// Base Cases: root is null or key is present at root
//			if (ptr->data == key)
//			{
//				cout << key << " found" << endl;
//				return ptr;
//			}
//			// Key is greater than root's key
//			if (ptr->data < key)
//			{
//				return searchPrivet(ptr->right, key);
//			}
//			// Key is smaller than root's key
//			return searchPrivet(ptr->left, key);
//		}
//		else
//		{
//			return NULL;
//		}
//	}
//
//	int FindSmallestPrivet(Node* ptr)
//	{
//		if (isEmpty())
//		{
//			return -1000;
//		}
//		else
//		{
//			if (ptr->left != nullptr)
//			{
//				return FindSmallestPrivet(rootptr->left);
//			}
//			else
//			{
//				return ptr->data;
//			}
//		}
//	}
//
//	void RemoveNodePrivet(int val, Node* ptr)
//	{
//		if (!isEmpty())
//		{
//			if (ptr->data == rootptr->data)
//			{
//				if (rootptr->data == val)
//				{
//					RemoveRootMatch();
//				}
//				else
//				{
//					if (ptr->data > val && ptr->left != nullptr)
//					{
//						/*ptr->left->data == val ?*/
//						RemoveMatch(ptr, ptr->left, true);
//						RemoveNodePrivet(val, ptr->left);
//					}
//					else if (ptr->data > val && ptr->right != nullptr)
//					{
//						/*ptr->left->data == val ?*/
//						RemoveMatch(ptr, ptr->right, false);
//						RemoveNodePrivet(val, ptr->right);
//					}
//					else
//					{
//						cout << "The val" << val << " were not found" << endl;
//					}
//				}
//			}
//		}
//		else
//		{
//			cout << "tree is empty" << endl;
//		}
//	}
//public:
//
//	BST()
//	{
//		rootptr = nullptr;
//	}
//
//	bool isEmpty()
//	{
//		if (rootptr == nullptr)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	
//	Node* CreateNode(int val)
//	{
//		Node* NewNode = new Node;
//		NewNode->data = val;
//		NewNode->left = nullptr;
//		NewNode->right = nullptr;
//		return NewNode;
//	}
//
//	void AddNode(int val)
//	{
//		AddNodePrivet(val, rootptr);
//	}
//
//	void PrintInOrder()
//	{
//		PrintInOrderPrivet(rootptr);
//	}
//
//	bool checkptr(Node* ptr)
//	{
//		if (ptr != nullptr)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	void NodeInfo(int val)
//	{
//		Node* ptr = Search(val);
//		if (ptr == NULL)
//		{
//			cout << " not in tree" << endl;
//		}
//		else
//		{
//			cout << "    " << ptr->data << endl;
//			
//			cout << (checkptr(ptr->left) ? ptr->left->data : NULL) << "      " << (checkptr(ptr->right) ? ptr->right->data : NULL)  << endl;
//		}
//		
//	}
//	
//	Node* Search(int val)
//	{
//		return searchPrivet(rootptr, val);
//	}
//
//	void RemoveNode(int val)
//	{
//		RemoveNodePrivet(val, rootptr);
//	}
//
//	int count()
//	{
//		return Count;
//	}
//
//	void RemoveMatch(Node* parent, Node* match, bool left)
//	{
//		if (!isEmpty())
//		{
//			Node* delptr;
//			int MatchKey = match->data;
//			int SmallestIntRightSubTree;
//			
//			if (match->left == nullptr && match->right == nullptr)
//			{
//				delptr = match;
//				left == true ? parent->left = nullptr : parent->right = nullptr;
//				delete delptr;
//				cout << MatchKey << " removed" << endl;
//			}
//			else if (match->left == nullptr && match->right != nullptr)
//			{
//				left == true ? parent->left = match->right : parent->right = match->right;
//				match->right = nullptr;
//				delptr = match;
//				delete delptr;
//				cout << MatchKey << " removed" << endl;
//			}
//			else if (match->left != nullptr && match->right == nullptr)
//			{
//				left == true ? parent->left = match->left : parent->right = match->left;
//				match->left = nullptr;
//				delptr = match;
//				delete delptr;
//				cout << MatchKey << " removed" << endl;
//			}
//			else
//			{
//				SmallestIntRightSubTree = FindSmallestPrivet(match->right);
//				RemoveNodePrivet(SmallestIntRightSubTree, match);
//				match->data = SmallestIntRightSubTree;
//			}
//		}
//		else
//		{
//			cout << "tree empty" << endl;
//		}
//	}
//
//	void RemoveRootMatch()
//	{
//		if (rootptr != nullptr)
//		{
//			Node* delptr = rootptr;
//			int RootKey = rootptr->data;
//			int SmallestIntRightSubTree;
//
//			if (rootptr->left == nullptr && rootptr->right == nullptr)
//			{
//				rootptr = nullptr;
//				delete delptr;
//				cout << RootKey << " removed" << endl;
//			}
//			else if (rootptr->left == nullptr && rootptr->right != nullptr)
//			{
//				rootptr = rootptr->right;
//				delptr->right = nullptr;
//				delete delptr;
//				cout << RootKey << " deleted" << endl;
//			}
//			else if (rootptr->left != nullptr && rootptr->right == nullptr)
//			{
//				rootptr = rootptr->left;
//				delptr->left = nullptr;
//				delete delptr;
//				cout << RootKey << " deleted" << endl;
//			}
//			else
//			{
//				SmallestIntRightSubTree = FindSmallestPrivet(rootptr->right);
//				RemoveNodePrivet(SmallestIntRightSubTree, rootptr);
//				rootptr->data = SmallestIntRightSubTree;
//			}
//		}
//		else
//		{
//			cout << "tree is empty" << endl;
//		}
//	}
//};
//
//int BST::Count = 0;
//
//int main()
//{
//	BST t;
//
//	t.AddNode(50);
//	t.AddNode(40);
//	t.AddNode(60);
//	t.AddNode(36);
//	t.AddNode(73);
//	t.AddNode(11);
//	t.AddNode(23);
//	t.AddNode(34);
//	t.AddNode(32);
//	t.AddNode(64);
//
//	t.NodeInfo(36);
//
//	t.PrintInOrder();
//	cout << endl;
//
//	t.Search(40);
//	t.RemoveNode(36);
//
//	t.PrintInOrder();
//	cout << endl;
//
//	cout << "Number of nodes: " << t.count() << endl;
//	
//	return 0;
//}