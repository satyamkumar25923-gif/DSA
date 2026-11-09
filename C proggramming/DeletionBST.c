#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *search(struct Node *root , int key){
    if(root == NULL || root -> data == key){
        return root ;
    }
    if(key < root -> data){
        return search(root->left , key);
    }
    return search(root -> right , key);
    
}

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


struct Node* findMin(struct Node *root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct Node* deleteNode(struct Node *root, int key) {
    if (root == NULL)
        return NULL;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {

        if (root->left == NULL) {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }

        if (root->right == NULL) {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

      
        struct Node *temp = findMin(root->right);

        root->data = temp->data;

        root->right = deleteNode(
            root->right, temp->data
        );
    }

    return root;
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
int key ; 
    printf("\nenter the key u want to search :");
        scanf("%d", &key);
    struct Node *result = search (root , key );
    if(result != NULL){
        printf("Element Found");
        
    }
    else{
        printf("Element Not Found");
    }
    return 0;
}
