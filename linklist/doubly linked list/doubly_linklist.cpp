#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node * prev;
    node * next;

};





void print(node *n)
{
    while (n!=NULL)
    {
        cout<<n->data<<" ";

        n=n->prev;
    }
    
}


int main()
{

//assigning memory for node in heap memory these node pointers are in stack memeory;
node * node1=new node();
node * node2=new node();
node * node3=new node();
node * node4=new node();




node1->data=1;
node1->prev=NULL;
node1->next=node2;

node2->data=2;
node2->prev=node1;
node2->next=node3;


node3->data=3;
node3->prev=node2;
node3->next=node4;


node4->data=4;
node4->prev=node3;
node4->next=NULL;

print(node4);


}