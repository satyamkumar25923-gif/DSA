#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ; 
    struct Node *next ;
};
int main() {
struct Node *head = NULL ;
struct Node *temp = NULL ;
struct Node *newnode = NULL ;

    for(int i = 0 ; i < 5 ; i++){

        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("enter the value :");
        scanf("%d", &newnode -> data);
        newnode -> next = NULL ; 
        if(head==NULL){
            head = newnode ; 
            temp = newnode ;
        }
        else{
            temp -> next = newnode ;
            temp = newnode ; 
        }
        
    }
    temp = head ; 
    while(temp!=NULL){
        printf("%d -> " , temp-> data);
        temp = temp -> next ; 
    }
    printf("NULL");
    temp = head ;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the value of new Node");
    scanf("%d" , &newnode-> data);
    int pos ;
    printf("\nEnter the position where u want to insert");
    scanf("%d" , &pos);
    int i = 1;
    while(i < pos-1 ){
    temp =  temp -> next;
        i++;
    }
   newnode->next = temp->next;
   temp->next = newnode;

    temp = head ;
    while(temp != NULL){
        printf(" %d -> " , temp -> data);
        temp = temp -> next ;
    }
        printf("NULL");
    
    return 0;
}
