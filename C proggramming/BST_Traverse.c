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
void preorder(struct Node *root){

    if(root == NULL)
        return ; 
    
    printf(" %d ", root -> data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Node *root){
     if(root == NULL)
        return ; 
    inorder(root -> left);
    printf(" %d ", root -> data);
    inorder(root -> right);
}
void postorder(struct Node *root){
     if(root == NULL)
        return ; 
    postorder(root -> left);
    postorder(root -> right);
    printf(" %d " , root -> data);
}
int main() {

   struct Node *root = createNode(10);
    
    root->left = createNode(20);
    root->right = createNode(30);

    root->left->left = createNode(40);
    root->left->right = createNode(50);

    printf("preorder\n");
    preorder(root);
    printf("\ninorder\n");
    inorder(root);
    printf("\npostorder\n");
    postorder(root);
    

    return 0;
}
