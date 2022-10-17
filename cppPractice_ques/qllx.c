#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*head=NULL,*tail=NULL;

struct node* insert(int val){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head){
        temp->next=head;
        head=temp;
    }
    else{
        head=temp;
    }
    return head;
}

void display(){
    struct node *headt=malloc(sizeof(struct node));
    headt=head;
    while(headt->next)
    {
        printf("%d->",headt->data);
        headt=headt->next;
    }
    printf("%d\n",headt->data);
}
void deque(){
    struct node *headt,*temp2=malloc(sizeof(struct node));
    headt=head;
    while(headt->next->next)
    {
    headt=headt->next;
    }
    temp2=headt->next;
    headt->next=NULL;
    printf("dequed: %d\n",temp2->data);
    free(temp2);
}



int main(){
    for(int i=0;i<3;i++)
    head=insert(4+i);
    head=insert(5);
    head=insert(4);
    display();
    // deque();
    // display();
    return 0;
}