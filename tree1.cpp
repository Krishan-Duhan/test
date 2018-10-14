#include<iostream>
using namespace std;

//NODE structure for a binary tree
struct Node {
    int value;
    Node* left;
    Node* right;
    Node(){
        this->value = (int)NULL;
	left = right = NULL;
    }
    Node(int x){
        this->value = x;
	left = right = NULL;
    }
};

//Function for Inorder traversal of a tree.
void printInorder(Node* troot){
    if(troot->left != NULL)
	printInorder(troot->left);
    cout << troot->value << "\t";
    if(troot->right != NULL)
	printInorder(troot->right);
}

//Function for Preorder traversal of a tree.
void printPreorder(Node * troot){
    cout << troot->value << "\t";
    if(troot->left != NULL)
	printPreorder(troot->left);
    if(troot->right != NULL)
	printPreorder(troot->right);
}

//Function for Postorder traversal of a tree.
void printPostorder(Node *troot){
    if(troot->left != NULL)
	printPostorder(troot->left);
    if(troot->right != NULL)
        printPostorder(troot->right);
    cout << troot->value << "\t";
}

//Function to insert a given value in a given tree,as per binary search tree.
void insert(int data,Node* troot){
    Node *tmp;
    tmp->value = data;
    tmp->left = NULL;
    tmp->right = NULL;

    if(troot == NULL)
        troot = tmp;
        exit(1);
    if(data < troot->value)
        insert(data,troot->left);
    if(data > troot->value)
        insert(data,troot->right);
}

int main(){
    //Node s(2);
    //cout << "checking struct constructor,node s has value:" << s.value << endl;
    struct Node* root = new Node(1);
    struct Node* iroot = new Node;                   //iroot is node object created to test insert function

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Printing tree in Inorder:\n";
    printInorder(root);
    cout << endl;
    cout << "Printing tree in Preorder:\n";
    printPreorder(root);
    cout << endl;
    cout << "Printing tree in Postorder:\n";
    printPostorder(root);
    cout << endl;

    cout << "Checking insert function ..." << endl;
    insert(8,iroot);
    printInorder(iroot);
    cout << endl;

    return 0;
}
