#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

struct node *insertatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *insertatnode(struct node *head,struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next= ptr;

    return head;

}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    //link first and second nodes
    head->data = 7;
    head->next = second;

    //link second and third nodes
    second->data = 11;
    second->next = third;

    //terminate the list at third node.
    third->data = 47;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    head = insertatnode(head,second, 11234);
    
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    return 0;
}