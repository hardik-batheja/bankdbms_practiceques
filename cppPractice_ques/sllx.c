#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node *head=NULL;
struct Node *last=NULL;
int getCurrSize(struct Node* node){
    int size=0;
    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}
void insertMiddle(int n, int data, struct Node** head)
{
    int size = getCurrSize(*head);
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if(n < 0 || n > size)
        printf("Invalid position to insert\n");
    else if(n == 0){
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        struct Node* temp = *head;
        while(--n)
            temp=temp->next;
        newNode->next= temp->next;
        temp->next = newNode;
    }
}
void insertFirst(int data) {
   struct Node *link = (struct Node*) malloc(sizeof(struct Node));
   link->data = data;
   link->next = head;
   head = link;
}
void insertLast(int data)
{
    struct Node *node =(struct Node*)malloc(sizeof(struct Node)) ;
    node->data=data;
    node->next=NULL;
    if(head==NULL)
    {
        head=node;
        last=node;
    }
    else
    {
        last->next=node;
        last=node;
    }
}
void print(struct Node* head)
{
    do{
        printf("%d->",head->data);
        head=head->next;
    }
    while(head!=NULL);
}
int main()
{
    insertLast(10);
    insertFirst(20);
    insertLast(30);
    insertLast(1);
    insertLast(40);
    insertFirst(56);
    insertMiddle(3, 15, &head);
    print(head);    
    return 0;
}