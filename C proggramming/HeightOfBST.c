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

    struct Node *root = createNode(10);
    root -> left = createNode(20) ; 
    root -> right = createNode(30) ; 

  
    printf("height of tree = %d" , height(root));
    
    return 0;
}
