#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} nd;

nd *head = NULL;
nd *temp = NULL;
nd *p = NULL;

int create(int data)
{

    temp = malloc(sizeof(nd));

    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        p->next = temp;
        temp->prev = p;
    }
    p = temp;
}

int traverse()
{
    p = head;
    while (p != NULL)
    {
        printf("%d %d %d\n", p->prev, p->data, p->next);
        p = p->next;
    }
}
int update(int old, int new)
{
    p = head;
    while (p != NULL)
    {
        if (p->data == old)
        {
            p->data = new;
            printf("Value Updated\n");
            break;
        }
        p = p->next;
    }
    if (p == NULL)
    {
        printf("\nData not found\n");
    }
}
int insert(int pos,int d){
    p=head;
    nd *x=malloc(sizeof(nd));
    x->data=d;
    int count=0;
    if(pos==0){
        x->next=head;
        x->prev=NULL;
        head=x;
    }
    while(count<pos){
        p=p->next;
        count++;
    }
    x->next=p;
    x->prev=p->prev;
    p->prev=x;
    x->prev->next=x;

}

int delete(int pos){
    p=head;
    nd *n;
    int count=0;
    if(pos==0){
        head=p->next;
        p=p->next;
        p->prev=NULL;
    }
    while(count<pos){
        n=p;
        p=p->next;
        count++;
    }
    p=p->next;
    p->prev=n;
    n->next=p;
}

int add_at_end(){}
int delete_end(){}
int main()
{
    int count = 0, data, old, new,d,pos;

    while (count < 5)
    {
        printf("Enter data:");
        scanf("%d", &data);
        create(data);
        count++;
    }
    printf("%d\n", head);
    traverse();
    // printf("Enter data to be updated:");
    // scanf("%d", &old);
    // printf("Enter new data:");
    // scanf("%d", &new);
    // update(old, new);
    // traverse();
    // printf("Enter data to be inserted:");
    // scanf("%d", &d);
    printf("Enter index to be deleted:");
    scanf("%d", &pos);
    // insert(pos,d);
    // traverse();
    delete(pos);
    traverse();

}