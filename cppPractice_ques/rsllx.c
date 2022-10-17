#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node *head=NULL;
struct Node *head2=NULL;
struct Node *last=NULL;
struct Node *last2=NULL;
struct Node *head3=NULL;
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
void insertLast2(int data)
{
    struct Node *node =(struct Node*)malloc(sizeof(struct Node)) ;
    node->data=data;
    node->next=NULL;
    if(head2==NULL)
    {
        head2=node;
        last2=node;
    }
    else
    {
        last2->next=node;
        last2=node;
    }
}

void reverse(){
    struct Node *pt,*n;
    pt=head;
    last=head;
    while (pt->next!=NULL)
    {
        n=pt->next;
        pt->next=n->next;
        n->next=head;
        head=n;
    }
}

void insertInOreder(int data){
    struct  Node *ptr,*temp;
    temp=malloc(sizeof(struct Node));
    temp->data=data;
    if(head3==NULL || data< head3->data)
    {
        temp->next=head3;
        head3=temp;
        return;
    }
    ptr=head3;
    while(ptr->next!=NULL && ptr->next->data <=data)
    {
        ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void breakcir()
{
    int xbool=2;
    struct Node *nd=head;
    while(xbool){
        //printf("%d  ",nd->data);
        nd=nd->next;
    if (nd->next==head){
        nd->next=NULL;
        xbool=0;
    }
    }
}

void print(struct Node* head)
{
    do{
        printf("%d->",head->data);
        head=head->next;
    }
    while(head!=NULL);
    printf("\n");
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
    insertLast2(130);
    insertLast2(101);
    print(head2); 
    last->next=head2;
    last=last2;
    print(head);
    reverse();
    print(head);
    last->next=head;
    breakcir();
    print(head);
    return 0;
}