#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// struct node *start = NULL;

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    
    //link first and second nodes
     

    //link second and third nodes
    second->data = 11;
    second->next = third;

    //terminate the list at third node.
    third->data = 47;
    third->next = fourth;

    fourth->data = 1337;
    fourth->next = NULL;


    linkedlisttraversal(head);
    // struct node *ptr = head;
    // while (ptr != NULL)
    // {
    //     cout << "Element : " << ptr->data << endl;
    //     ptr = ptr->next;
    // }
    // int choice;
    // while (1)
    // {
    //     cout << "1. Create" << endl;
    //     cout << "2. Display" << endl;
    //     cout << "3. Exit" << endl;
    //     cin >> choice;
    //     switch (choice)
    //     {
    //     case 1:
    //         create();
    //         break;
    //     case 2:
    //         display();
    //         break;
    //     case 3:
    //         exit(0);
    //         break;
    //     default:
    //         cout << "Wrong choice" << endl;
    //     }
    // }
    return 0;
}
