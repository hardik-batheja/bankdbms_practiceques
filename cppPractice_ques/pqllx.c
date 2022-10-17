#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    int priorty;
    struct node* next;
}*head=NULL,*tail=NULL;

void display(){
    struct node *headt=malloc(sizeof(struct node));
    headt=head;
    while(headt->next)
    {
        printf("%d(%d)->",headt->data,headt->priorty);
        headt=headt->next;
    }
    printf("%d(%d)\n",headt->data,headt->priorty);
}

struct node* insert(int val,int level){
    struct node *headt;
    headt=head;
    int bx=1;
    struct node *temp=malloc(sizeof(struct node));
    // struct node *temp2=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    temp->priorty=level;
    if(headt){
        if(head->next){
        while(level>headt->priorty && headt->next!=NULL){
            headt=headt->next;
            bx=0;
        }}
        if(bx){
            temp->next=head;
            head=temp;
        }
        else{
            temp->next=headt->next;
            headt->next=temp;
        }
    }
    else{
        head=temp;
    }
    // display();
    return head;
}


void deque(){
    struct node *headt,*temp2=malloc(sizeof(struct node));
    headt=head;
    while(headt->next->next)
    headt=headt->next;
    temp2=headt->next;
    headt->next=NULL;
    printf("dequed: %d\n",temp2->data);
    free(temp2);
}

int main(){
    head=insert(41,4);
    head=insert(42,3);
    head=insert(43,4);
    head=insert(44,5);
    display();
    deque();
    display();
    return 0;
}