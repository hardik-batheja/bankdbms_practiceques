#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL,*tail=NULL;

void push(int val){
    struct Node *temp=malloc(sizeof(struct Node));
    temp->data=val;
    // if (head){
        temp->next = head;
        head = temp;
    // }
    // else{
    //     temp->next=NULL;
    //     head=temp;
    // }
}

void display(){
    struct Node *headt;
    headt=head;
    while(headt->next){
        printf("%d->",headt->data);
        headt=headt->next;
    }
    printf("%d\n",headt->data);
}

void pop(){
    struct Node *headt;
    headt=head;
    if(headt){
    head=head->next;
    printf("Popped: %d\n",headt->data);
    }
    else
    printf("Empty");
    free(headt);
}

int main(){
    for(int i=0;i<6;i++)
    push(5+i);
    display();
    pop();
    display();
    return 0;
}