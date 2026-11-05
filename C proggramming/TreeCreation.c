#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data ;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int value){
    struct Node * newNode = malloc(sizeof(struct Node));
    if(newNode == NULL ){
        printf("Allcoation failed \n");
            exit(1);
    }
    newNode -> data = value ; 
    newNode -> left = NULL ; 
    newNode -> right = NULL ;

    return newNode ;
}
int main() {

   struct Node *root = createNode(10);
    
    root->left = createNode(20);
    root->right = createNode(30);

    root->left->left = createNode(40);
    root->left->right = createNode(50);

    return 0;
}
