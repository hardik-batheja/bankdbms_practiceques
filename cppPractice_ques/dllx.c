#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *pre;
    struct node *next;
} *head=NULL,*last=NULL;

void addend(int data){
    struct node *temp=malloc(sizeof(struct node));
    temp->next=NULL;
    temp->val=data;
    if(head){
        last->next=temp;
        temp->pre=last;
        last=temp;
    }
    else
    {
        head=temp;
        last=head;
    }
}
void display(struct node *head){
    if (head)
    {
        while(head->next){
        printf("%d->",head->val);
        head=head->next;}
        printf("%d",head->val);
    }
    else
    printf("Khaali hai!");
}
void eliminate(int data){
    struct node *h,*p;
    if(head->val==data){
        head->next->pre=NULL;
        head=head->next;
    }
    h=head;
    while (h->next)
    {
        if(h->val==data){
            h->next->pre=h->pre;
            h->pre->next=h->next;
            free(h);
        }
        h=h->next;
        
    }
    if(h->val==data){
        h->pre->next=NULL;
        last=h->pre;
        free(h);
    }
    
}
int main(){
    for(int i=0;i<4;i++)
    addend(i+5);
    addend(7);
    eliminate(7);
    display(head);
    return 0;

}
