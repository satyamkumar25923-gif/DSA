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
int identical(struct Node *root1, struct Node *root2) {
    if (root1 == NULL && root2 == NULL)
        return 1;

    if (root1 == NULL || root2 == NULL)
        return 0;

    return (root1->data == root2->data &&
            identical(root1->left, root2->left) &&
            identical(root1->right, root2->right));
}

int main() {

    struct Node *root1 = createNode(10);
    root1 -> left = createNode(20) ; 
    root1 -> right = createNode(30) ; 

    struct Node *root2 = createNode(10);
    root2 -> left = createNode(20) ; 
    root2 -> right = createNode(30) ;

    if (identical(root1, root2)) {
    printf("Both trees are identical\n");
}
    else {
    printf("Trees are not identical\n");
}
    
    return 0;
}
