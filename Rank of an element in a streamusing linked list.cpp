// CPP program to find rank of an
// element in a stream.
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
	int leftSize;
};

Node* newNode(int data)
{
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	temp->leftSize = 0;
	return temp;
}

// Inserting a new Node.
Node* insert(Node*& root, int data)
{
	if (!root)
		return newNode(data);

	// Updating size of left subtree.
	if (data <= root->data) {
		root->left = insert(root->left, data);
		root->leftSize++;
	}
	else
		root->right = insert(root->right, data);

	return root;
}

// Function to get Rank of a Node x.
int getRank(Node* root, int x)
{
	// Step 1.
	if (root->data == x)
		return root->leftSize;

	// Step 2.
	if (x < root->data) {
		if (!root->left)
			return -1;
		else
			return getRank(root->left, x);
	}

	// Step 3.
	else {
		if (!root->right)
			return -1;
		else {
			int rightSize = getRank(root->right, x);
			if(rightSize == -1 ) return -1;
			return root->leftSize + 1 + rightSize;
		}
	}
}

// Driver code
int main()
{
	int arr[] = { 5, 1, 4, 4, 5, 9, 7, 13, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 4;

	Node* root = NULL;
	for (int i = 0; i < n; i++)
		root = insert(root, arr[i]);

	cout << "Rank of " << x << " in stream is: "
		<< getRank(root, x) << endl;

	x = 13;
	cout << "Rank of " << x << " in stream is: "
		<< getRank(root, x) << endl;

	x = 8;
	cout << "Rank of " << x << " in stream is: "
		<< getRank(root, x) << endl;
	return 0;
}
