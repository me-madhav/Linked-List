#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insertAtBegining(struct Node* head, int value){
    struct Node* newNode = (struct Node*)malloc(sizeof (struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    return head;
}

void display(struct Node* head){
    struct Node* temp = head;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}

void main(){
    struct Node* head = NULL;
    head = insertAtBegining(head, 110);
    head = insertAtBegining(head, 100);
    head = insertAtBegining(head, 90);
    head = insertAtBegining(head, 80);
    head = insertAtBegining(head, 70);
    head = insertAtBegining(head, 60);
    head = insertAtBegining(head, 50);
    head = insertAtBegining(head, 40);
    head = insertAtBegining(head, 30);
    head = insertAtBegining(head, 20);
    head = insertAtBegining(head, 10);

    printf("Linked List: ");
    display(head);

}