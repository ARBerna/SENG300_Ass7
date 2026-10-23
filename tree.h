#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);
        if (val < node->data)
            node->left = insert(node->left, val);
        else
            node->right = insert(node->right, val);
        return node;
    }

    void preorder(Node* node) {
        if (!node) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void postorder(Node* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

public:
    BST() : root(nullptr) {}

    void insert(int val) {
        root = insert(root, val);
    }

    void printPreorder() {
        preorder(root);
        cout << endl;
    }

    void printInorder() {
        inorder(root);
        cout << endl;
    }

    void printPostorder() {
        postorder(root);
        cout << endl;
    }
};

#endif