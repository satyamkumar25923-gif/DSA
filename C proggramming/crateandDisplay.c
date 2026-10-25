#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ; 
    struct Node *next ;
};


int main() {

    struct Node *head = NULL ;
    struct Node *temp = NULL ;
    struct Node *newNode = NULL ;

    for(int i = 0 ; i < 5 ; i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));


            printf("Enter a number :");
            scanf("%d" , &newNode -> data);
            newNode -> next = NULL ;
        if(head == NULL){
            head = newNode ;
            temp = newNode ;
        }
        else {
            temp -> next = newNode ;
            temp = newNode ;
            
        }
    }
    temp = head;
    while(temp != NULL){
        printf("%d", temp -> data);
        temp = temp -> next ;
        
    }

    
    return 0;
}
