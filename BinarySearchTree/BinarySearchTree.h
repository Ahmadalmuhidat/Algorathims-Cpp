#ifndef __BINARY_SEARCH_TREE
#define __BINARY_SEARCH_TREE
#include <vector>

class BST
{

private:
	struct Node
	{
		int data;
		Node *left;
		Node *right;
	};
	Node *rootptr;
	static int Count;

	virtual void PrintInOrderPrivet(Node *ptr);

	virtual void AddNodePrivet(int val, Node *ptr);

	virtual Node *searchPrivet(Node *ptr, int key);

	virtual int FindSmallestPrivet(Node *ptr);

	virtual void RemoveNodePrivet(int val, Node *ptr);

	virtual void printLevelOrder(struct Node *root);

	virtual void printGivenLevel(struct Node *root, int level);

public:
	// main methods
	BST();

	bool isEmpty();

	Node *CreateNode(int val);

	void AddNode(int val);

	void PrintInOrder();

	bool checkptr(Node *ptr);

	void NodeInfo(int val);

	Node *Search(int val);

	int count();

	//Remove methods
	void RemoveNode(int val);

	void RemoveMatch(Node *parent, Node *match, bool left);

	void RemoveRootMatch();

	// Printing methods
	int height(Node *root);

	void reverseLevelOrder();

	void PrintAsTree();
};

#endif