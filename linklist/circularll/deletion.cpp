#include <bits/stdc++.h>
using namespace std;

struct node
{
    /* data */
    int data;
    node *next;
} * head;

void delete_(node **head, int key)
{

    node *befor = *head;
    node *temp = *head;
    node *up =*head;
    if (temp->data==key)
    {

        while (up->next!=*head)
        {
            up=up->next;

        }
        
        
        *head=temp->next;
        up->next=*head;
        temp->next = NULL;
        free(temp);


    }
    else
    {

    

    while (befor->next->data != key)
    {
        /* code */
        befor = befor->next;
    }

    /* code */

    while (temp->data != key)
    {
        /* code */
        temp = temp->next;
    }
        befor->next = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

void print(node *head)
{

    node *temp = head;
    do
    {
        cout << temp->data;
        temp = temp->next;
    } while (temp != head);
}

int main()
{

    node *node1 = new node();
    node *node2 = new node();
    node *node3 = new node();
    node *node4 = new node();
    node *node5 =new node();

    node1->data = 1;
    node1->next = node2;

    node2->data = 2;
    node2->next = node3;

    node3->data = 3;
    node3->next = node4;

    node4->data = 4;
    node4->next = node5;
    
    node5->data=5;
    node5->next=node1;

    head = node1;
   

    delete_(&head, 4);

    print(head);
}