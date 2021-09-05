#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void frontThenReverse(struct node *head)
{
    struct node *ptr = head;
    struct node *ptr1 = head;
    do{
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    while (ptr->next != NULL);
    cout << "Element : " << ptr->data << endl;
    do{
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->prev;
    }
    while(ptr->prev !=NULL);
    cout << "Element : " << ptr->data << endl;
   
    
    
    
}


int main()
{
    //creation of nodes
    struct node *n1 = (struct node *) malloc(sizeof(struct node));
    struct node *n2 = (struct node *) malloc(sizeof(struct node));
    struct node *n3 = (struct node *) malloc(sizeof(struct node));
    struct node *n4 = (struct node *) malloc(sizeof(struct node));

    //link of nodes
    n1->data = 123;
    n1->next = n2;
    n1->prev = NULL;

    n2->data = 456;
    n2->next = n3;
    n2->prev= n1;

    n3->data = 789;
    n3->next = n4;
    n3->prev= n2;

    n4->data = 1337;
    n4->next = NULL;
    n4->prev= n3;

    frontThenReverse(n1);
    return 0;
}
