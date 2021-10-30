#include <bits/stdc++.h>
using namespace std;

struct node
{
    /* data */
    int data;
    node * prev;
    node * next;
};


void delete_front(node**head_ref)
{
    node *temp = *head_ref;

    temp->next->prev=NULL;

    *head_ref = temp->next;

    delete (temp);
}


void delete_end(node**head_ref)
{
    node*temp=* head_ref;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->prev->next=NULL;
    free(temp);
}


void delete_at_pos(node**head_ref,int data)
{

    node*temp=*head_ref;
    int d;

    while (d!=data)
    {
        /* code */
        temp=temp->next;
    }
    
    cout<<temp->data;
    
    delete(temp);

}

void print(node *n)
{
    while (n!=NULL)
    {
        /* code */
        cout<<n->data<<" ";
        n=n->next;
    }
    
}


int main()
{


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

cout<<"Befor deletion"<<endl;

print(node1);

cout<<endl;

cout<<"After Deletion"<< endl;

delete_at_pos(&node1,3);

print(node1);


}