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

void traversal(struct node *head)

{
    struct node *ptr = head;
    do
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

//insertion
struct node *insertatfirst(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // emptry node
    ptr->data = data;                                              // us empty node me data jo function ke argument se liye vo store kr do.

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p points to last node of this linked list.
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node *inseratindex(struct node *head, int data, int index)
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
    // now the p is at index - 1;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertatlast(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // emptry node
    ptr->data = data;                                              // us empty node me data jo function ke argument se liye vo store kr do.
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p points to last node of this linked list.
    p->next = ptr;
    ptr->next = head;
    return head;
}

struct node *inserafternode(struct node *head, int data, struct node *prevnode)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}

//deletion
struct node *deleteatfirst(struct node *head)
{
    struct node *p = head;
    struct node *q = head;
    while (p->next != head)
    {
        p = p->next;
    }
    // at this point p points to last node of this linked list.
    head = q->next;    // head = head ->next
    p->next = q->next; // p->next = head;
    free(q);
    return head;
}

struct node *deleteatlast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    // now p is in second last element and q is in last element
    p->next = head;
    free(q);
    return head;
}

struct node *deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct node *deletedata(struct node *head, int data)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != data && q->next != head)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == data)
    {
        p->next = q->next;
        free(q);
    }

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
    third->data = 2;
    third->next = fourth;

    fourth->data = 1337;
    fourth->next = head;

    //Insertion
    // head = insertatfirst(head , 1234);
    // head = insertatlast(head , 3451234);
    // head = inseratindex(head, 1234, 2);
    // head = inserafternode(head , 1234 , second);

    //Deletion
    // head = deleteatfirst(head);
    // head = deleteatlast(head);
    // head = deleteatindex(head , 2);
    // head = deletedata(head , 2);
    traversal(head);

    return 0;
}
