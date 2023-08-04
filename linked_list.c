#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

node *head = NULL;
node *temp = NULL;
node *p;
int data;

int create_ll()
{

    p = temp;
    temp = (node *)malloc(sizeof(struct node)); // create and assign memory location of temporary node

    // Asking data from user
    printf("Enter data:");
    scanf("%d", &data);
    temp->data = data;
    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
        // printf("Head value %d\n Data is %d , Link is %d\n", head,temp->data, temp->link);
    }
    else
    {
        p->link = temp;
        // printf("Address is %d , Data is %d , Link is %d\n",p, temp->data, p->link);
    }
}

int traverse()
{
    // Linked List Traversal
    p = head;
    printf("\nHead is %d", p);
    while (p != NULL)
    {
        printf("\nAddress is %d , Data is %d , Link is %d\n", p, p->data, p->link);
        p = p->link;
    }
}

// Linked List Updation
int update()
{

    p = head;
    int old, new;
    printf("Enter the data that has to be updated:");
    scanf("%d", &old);
    printf("Enter new data:");
    scanf("%d", &new);
    printf("%d", p);
    while (p != NULL)
    {
        if (p->data == old)
        {
            p->data = new;
            printf("Data updated");
            break;
        }
        p = p->link;
    }
    if (p == NULL)
    {
        printf("Value not found");
    }
}

// Linked List Insertion at given Position

int insert(int pos, int d)
{
    node *inst=malloc(sizeof(node));
    inst->data = d;
    int count = 0;
    p = head;
    if (pos == 0)
    {
        inst->link = head;
        head = inst;
    }
    else
    {
        while (count < pos) // pos-1 in old code
        {
            inst->link=p;    // not in old code
            p = p->link;
            count++;
        }
        
        inst->link->link = inst; // old code -- inst->link=p->link
        inst->link=p; // old code p->link=inst
    }
}

int add_at_end(){

}

int delete_node(int pos)
{
    p = head;
    node *x;
    int count = 0;
    if (pos == 0)
    {
        head = p->link;
        printf("Node deleted");
    }
    else
    {
        while (count < pos)
        {
            x = p;
            p = p->link;
            count++;
        }
        x->link = p->link;
        printf("Node deleted");
    }
}

int main()
{
    int i = 0, pos, d;
    while (i < 5)
    {
        create_ll();
        i++;
    }
    traverse();
    // update();
    // traverse();
    printf("Enter the position to delete:");
    scanf("%d", &pos);
    // printf("Enter data to be inserted:");
    // scanf("%d", &d);
    insert(pos, d);
    traverse();
    delete_node(pos);
    traverse();
}
