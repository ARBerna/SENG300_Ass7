#include "tree.h"

int main() {
    BST tree;

    int values[] = {12, 56, 31, -10, 8, 7, 4, 2, 11};

    for (int v : values)
        tree.insert(v);

    cout << "Preorder: ";
    tree.printPreorder();

    cout << "Inorder: ";
    tree.printInorder();

    cout << "Postorder: ";
    tree.printPostorder();

    return 0;
}