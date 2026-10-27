#include <stdio.h>
# define MAX 5 
int stack [MAX];
int top = -1 ; 

void push(int value){
    if(top == MAX-1){
        printf("stack is overflow");
        
    }
    else{
        top++;
        stack[top]= value ;
    }
}

void pop(){
    if(top == -1){
        printf("stack is underflow");
    }
    else{
        printf("%d is removerd \n" , stack[top]);
        top -- ;
    }
}
void peek(){
    if(top == -1){
        printf("stack is empty");
        
    }
    else{
        printf("top is %d \n", stack[top]);
    }
}
void display(){
    if(top == -1){
        
    }
    else{
        for(int i = top  ; i >= 0 ; i--){
            printf("%d \n" , stack[top]);
        }
    }
}
int main() {
   push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();
}
