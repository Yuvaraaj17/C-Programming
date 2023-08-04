#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}nd;

nd *head=NULL;
nd *temp=NULL; 
nd *p=NULL;
int data;
int create(){
    p=temp;
    temp=(nd *)malloc(sizeof(nd));
    printf("Enter data:");
    scanf("%d",&data);
    temp->data=data;
    if(head==NULL){
        head=temp;
        temp->link=head;
    }
    else{
        p->link=temp;
        temp->link=head;
    }

}

int traverse(){
    p=head;
    temp=p;
    while(p->link!=NULL){
        printf("%d %d %d\n",p,p->data,p->link);
        if(p->link==head){
            break;
        }
        p=p->link;
    }
}

int main(){
    int count=0;
    while(count<5){
        // printf("l");
        create();
        count++;
    }
    traverse();
}