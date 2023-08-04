#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* left;
    int data;
    struct node* right;
};
typedef struct node Node;
Node* create(int data){
    Node* newnode=(Node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

Node* insert(Node* root){
    int data;
    printf("Enter data:");
    scanf("%d",&data);

    Node* newnode=create(data);
    int choice;
    printf("Do you want left child (1/0):");
    scanf("%d",&choice);
    if(choice==1){
        newnode->left=insert(newnode->left);
    }
    
    printf("Do you want right child (1/0):");
    scanf("%d",&choice);
    if(choice==1){
        newnode->right=insert(newnode->right);
    }

    return newnode;
}

Node* display(Node* root){
    if(root == NULL){
        return root;
    }
    display(root->left);
    printf("%d",root->data);
    display(root->right);
    
}

int main(){
    Node* root=NULL;
    printf("Tree creation");
    root=insert(root);

    display(root);

}