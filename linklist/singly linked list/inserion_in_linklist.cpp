#include <bits/stdc++.h>

using namespace std;

struct node
{
    /* data */
    int data;
    node *next;
};

void insert_at_any_pos(node **n, int data, int pos)
{
    node *temp = *n;
    while (pos != 0)
    {
        /* code */
        temp = temp->next;
        pos--;
    }

    node *newnode = new node();
    newnode->data=data;
    newnode->next=temp->next;
    temp->next=newnode;
    
}

void insert_at_begg(node **a)
{

    node *newnode = new node();

    newnode->data = 0;
    newnode->next = *a;

    *a = newnode;
}

void insert_at_end(node **a)
{
    node *newnode = new node();

    newnode->data = 4;
    newnode->next = NULL;

    node *temp = *a;

    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;
    }

    temp->next = newnode;
}

void printlist(node *n)
{

    while (n != NULL)
    {

        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{

    //allocating memory to nodes in heap using pointers;
    node *node1 = new node();
    node *node2 = new node();
    node *node3 = new node();

    //SETTING DATA FOR NODES

    node1->data = 1;
    node1->next = node2;

    node2->data = 2;
    node2->next = node3;

    node3->data = 3;
    node3->next = NULL;

    cout << "Befor insertion"<<endl;

    printlist(node1);

    cout<<endl;

    cout << "After insertion"<<endl;

    insert_at_any_pos(&node1,0,1);

    printlist(node1);
    
}