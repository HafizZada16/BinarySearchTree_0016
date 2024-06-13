#include <iostream>
#include <string>
using namespace std;


class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree {
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr;
    }

    void insert(string element) // Insert a node in the binary search tree
    {
        Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory for the new node
        newNode->info = element; // Assign value to the data field  of the new node
        newNode->leftchild = nullptr; // Make the left child of the new node point to the NULL
        newNode->rightchild = nullptr; // Make the right child of the new node point to the NULL

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode); // Locate the node which will be the parent of the node to be insert

        if (parent == nullptr) // If the parent is NULL (Tree is empty)
        {
            ROOT = newNode; // Mark the new node as ROOT
            return; // Exit
        }

        if (element < parent->info) // If the value in the data field of the new node is less than that of the
        {
            parent->leftchild = newNode; // Make the left child of the parent point to the new node
        }
        else if(element > parent->info) // If the value in the data field of the new node is greater than that of the
        {
            parent->rightchild = newNode; // Make the right child of the parent point to the new node
        }
    }

    void search(string element, Node*& parent, Node*& currentNode)
    {
        // This Function searches the currentNode of the specified Node as well as the current Node of its per
        currentNode = ROOT;
        parent = NULL;
    }

};