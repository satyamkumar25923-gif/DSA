#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ; 
    struct Node *next ; 
};

int main(){

struct Node *head = NULL ;
struct Node *temp = NULL ;
struct Node *newnode = NULL ;

for(int i = 0 ; i < 5 ; i++ ){

    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("enter the value : ");
    scanf("%d" , &newnode -> data);
    newnode -> next = NULL ;

    if(head == NULL){
        head = newnode ;
        temp = newnode ;
    }
    else{
        temp -> next = newnode ;
        temp =newnode ;
        
    }
    
}
int large =0 ;
temp = head ; 
while(temp != NULL ){  
    if(large < temp-> data){
        large = temp-> data ;
    }
    temp = temp -> next ; 
  
}
      printf("large = %d" , large);
 
    return 0;
}
