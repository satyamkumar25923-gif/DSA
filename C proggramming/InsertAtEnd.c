
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newnode = NULL;

   
    for (int i = 0; i < 5; i++) {

        newnode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter the value: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

   
    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

  
    newnode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the new node value: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;

  
    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
