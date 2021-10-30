#include <bits/stdc++.h>

using namespace  std;



//declaring memebers of a node

struct node
{
    /* data */
    int data;
    node * next;
    
};


void printlist(node *n)
{

    while (n!=NULL)
    {

        cout<<n->data<<" ";
        n=n->next;
        
    }
    

}



int main()
{


    //allocating memory to nodes in heap using pointers;
    node *node1=new node();
    node *node2=new node();
    node *node3=new node();



    //SETTING DATA FOR NODES
    
    node1->data=1;
    node1->next=node2;


    node2->data=2;
    node2->next=node3;

    node3->data=3;
    node3->next=NULL;


printlist(node1);





}