#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data ; 
    struct Node *next ;
};

int main(){ 
    
struct Node *head = NULL ;
struct Node *temp = NULL;
struct Node *newnode = NULL ; 

for(int i = 0 ; i < 5 ; i++){
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the value : ");
    scanf("%d" , &newnode -> data );

    newnode -> next = NULL ; 

    if(head == NULL){
        head = newnode ;
        temp = newnode ;
        
    }
    else{
        temp -> next = newnode ; 
        temp = newnode ;
        
    }
}
temp = head ; 
    int sum = 0 ; 
while(temp != NULL){
    if(temp -> data % 2 == 0){
        sum = sum + temp -> data ; 
        temp = temp -> next ; 
    }
    else{
        temp = temp -> next ;
    }
}
temp = head ;
while(temp != NULL){
    printf("%d -> " , temp -> data);
    temp = temp -> next ;
      
}
printf("\n");
printf("Even Sum = %d", sum) ;
    return 0;
}
