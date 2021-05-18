#include<iostream>
using namespace std;
struct node {
	int value;
	node* left;
	node* right;
	node(int x) {
		value = x;
		left = 0;
		right = 0;
	}
};
class BT {
private:
	node* root;
public:
	BT() {
		root = 0;
	}
	void populate() {
		root = new node(5);
		root->left = new node(4);
		root->right = new node(3);
		(root->left)->left = new node(8);
		(root->left)->right = new node(10);
//		(root->right)->left = new node(14);
//		(root->right)->right = new node(17);
	}
	void inorder_traversal() {
		inorder(root);
	}
	void inorder(node*ptr) {
		if (ptr != 0) {
			    inorder(ptr->left);
				cout << ptr->value << " " << endl;
				inorder(ptr->right);
		}
	}
	void preorder_traversal() {
		preorder(root);
	}
	void preorder(node*ptr) {
	if (ptr != 0) {
		cout << ptr->value << " " << endl;
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
    //cout << endl;
    void postorder_traversal() {
	    postorder(root);
}
void postorder(node*ptr) {
	if (ptr != 0) {
		postorder(ptr->left);
		postorder(ptr->right);
		cout << ptr->value << " " << endl;
	}
}
};
int main() {
	BT t1;
	t1.populate();
	t1.inorder_traversal();
	BT t2;
	t2.populate();
	t2.preorder_traversal();
	BT t3;
	t3.populate();
	t3.postorder_traversal();
	return 0;
}
