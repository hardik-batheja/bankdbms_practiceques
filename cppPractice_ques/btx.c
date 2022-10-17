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

void insert(struct btree *troot,int val){
    if(troot){
        if(troot->data>val){
            if(troot->left){
                insert(troot->left,val);
            }
            else{
                insertleft(troot,val);
            }
        }
        else{
            if(troot->right){
                insert(troot->right,val);
            }
            else{
                insertright(troot,val);
            }
        }
    }
    else{
        struct btree *troot=(struct btree *)malloc(sizeof(struct btree));
        troot->data=val;
        troot->left=NULL;
        troot->right=NULL;
        root=troot;
    }
}

// void delete(int val){
//     if 
// }

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
    root->data=5;
    root->left=NULL;
    root->right=NULL;
    insert(root,5);
    insert(root,2);
    insert(root,7);
    insert(root,1);
    insert(root,4);
    insert(root,3);
    insert(root,6);
    insert(root,8);
    // delete(3);
    printf("Preorder:- ");
    preordertraversal(root);
    printf("\nInorder:- ");
    inordertraversal(root);
    printf("\nPostorder:- ");
    postordertraversal(root);
    return 0;
}