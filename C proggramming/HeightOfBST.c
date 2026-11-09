#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data ; 
    struct Node *left ;
    struct Node *right ; 
};
struct Node *createNode(int value){
    struct Node *newnode = malloc (sizeof(struct Node));
    if(newnode == NULL){
        printf("Memory allocation faild \n");
        exit(1);
        
    }
    newnode -> data = value ; 
    newnode -> left = NULL ;
    newnode -> right = NULL ;

    return newnode ;
    
}

int height(struct Node *root){
    if(root == NULL){
        return -1 ;
    }
    int leftheight = height(root -> left);
    int rightheight = height(root -> right);

    if(leftheight > rightheight){
        return leftheight + 1 ;
        
    }
    else {
        return rightheight + 1 ; 
    }
}

int main() {

   
int main() {
    struct Node *root = createNode(50);

    root->left = createNode(30);
    root->right = createNode(70);

    root->left->left = createNode(20);

    root->right->left = createNode(60);
    root->right->right = createNode(80);

    root->right->left->left = createNode(55);

    printf("height of tree = %d\n", height(root));

    return 0;
}

    
    return 0;
}
