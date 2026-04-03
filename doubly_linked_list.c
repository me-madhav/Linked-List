#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node* next;   
    int data;
    struct Node* previous;    
};

struct Node* create(struct Node* head, int value){
    struct Node* newNode = (struct Node*)malloc(sizeof (struct Node));
    newNode->next = NULL;
    newNode->data = value;

    if (head == NULL){
        newNode->previous = NULL;
        head = newNode;
        return head;
    }

    struct Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->previous = temp;

    return head;
    
}

void displayForward(struct Node* head){
    struct Node* temp = head;

    if (head == NULL){
        printf("List is Empty\n");
        return;
    }

    printf("Forward: ");
    while(temp != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayBackward(struct Node* head){
    struct Node* temp = head;

    if (head == NULL){
        printf("List is Empty\n");
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    printf("Backward: ");
    while(temp != NULL){
        printf("%d <-> ", temp->data);
        temp = temp->previous;
    }
    printf("NULL\n");
}

void main(){
    struct Node* head = NULL;
    int n, value;

    printf("Enter no. of nodes: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        printf("Enter value: ");
        scanf("%d",&value);
        head = create(head,value);
    }

    displayForward(head);
    displayBackward(head);
}