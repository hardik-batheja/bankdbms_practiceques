#include<stdio.h>
#include<stdlib.h>


struct btree{
    int data;
    struct btree *left;
    struct btree *right;
}*root=NULL;

void insertleft (struct btree *node,int val){
    struct btree *temp=(struct btree *)malloc(sizeof(struct btree));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    node->left=temp;
}
void insertright (struct btree *node,int val){
    struct btree *temp=(struct btree *)malloc(sizeof(struct btree));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    node->right=temp;
}

void preordertraversal(struct btree *node){
    printf("%d  ",node->data);
    if(node->left)
    preordertraversal(node->left);
    if(node->right)
    preordertraversal(node->right);
}

void inordertraversal(struct btree *node){
    if(node->left)
    inordertraversal(node->left);
    printf("%d  ",node->data);
    if(node->right)
    inordertraversal(node->right);
}

void postordertraversal(struct btree *node){
    if(node->left)
    postordertraversal(node->left);
    if(node->right)
    postordertraversal(node->right);
    printf("%d  ",node->data);
}

int main(){
    struct btree *root=(struct btree *)malloc(sizeof(struct btree));
    root->data=1;
    root->left=NULL;
    root->right=NULL;
    insertleft(root,2);
    insertright(root,3);
    insertleft(root->left,4);
    insertright(root->left,5);
    insertleft(root->right,6);
    insertright(root->right,7);
    preordertraversal(root);
    printf("\n");
    inordertraversal(root);
    printf("\n");
    postordertraversal(root);
    return 0;
}