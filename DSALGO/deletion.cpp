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


struct node * deletefirst(struct node *head)
{
    struct node * ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}



struct node * deleteatindex(struct node* head , int index)
{
    struct node *p = head;
    int i =0;
    while(i!=index-1)
    {
        p = p->next;
        i++;
    } 
    struct node * q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct node * deleteatindex1(struct node* head , int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i =0;
    while(i!=index-1)
    {
        p = p->next;
        q = q ->next;
        i++;
    } 
    p->next = q->next;
    free(q);
    return head;
}



struct node * deleteatlast(struct node* head)
{
    struct node *p = head;
    struct node *q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    // struct node *q = p->next;
    p->next=NULL;
    free(q);
    return head; 
}

// struct node * deleteatlast1(struct node* head)
// {
//     struct node *p = head;
//     // struct node *q = head->next;
//     while(p->next != NULL)
//     {
//         p = p->next;
//     }
//     struct node *q = p;
//     p=NULL;
//     free(q);
//     return head;
// }



struct node * deletevalue(struct node* head , int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while(q->data != value && q->next!=NULL )
    {
        p = p->next;
        q = q->next;
        
    } 

    if (q->data == value)
    {
        p->next=q->next;
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
    head->data = 100;
    head->next = second;

    //link second and third nodes
    second->data = 1331;
    second->next = third;

    //terminate the list at third node.
    third->data = 102;
    third->next = fourth;

    fourth->data = 103;
    fourth->next = NULL;


    head = deletefirst(head); 

    // head = deleteatindex(head ,1);
    //  head = deleteatindex1(head ,1);
    // head = deleteatlast(head);
    // head = deletevalue(head,103);
   
    
    
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
  
  
    
 
    return 0;
}