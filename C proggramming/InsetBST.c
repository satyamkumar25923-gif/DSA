#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node *insert(struct Node *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(struct Node *root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct Node *root = NULL;
    int value;

    printf("Enter node values (999 to exit):\n");

    while (1) {
        if (scanf("%d", &value) != 1) {
            break;
        }

        if (value == 999) {
            break;
        }

        root = insert(root, value);
    }

    printf("\nInorder Traversal:\n");
    inorder(root);

    return 0;
}
