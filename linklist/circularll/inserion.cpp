#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node * next;

}*tail,*head;


void insert_beg()
{
    
    node* newnode=new node();
    cout<<"Enter the value you want to insert"<<endl;
    cin>>newnode->data;
    newnode->next=head;
    tail->next=newnode;
    head=newnode;



}


void insert_end()
{
    int data;

    node*newnode=new node();
     cout<<"Enter the value you want to insert"<<endl;
     cin>>newnode->data;
     newnode->next=head;
     tail->next=newnode;
     tail=newnode;
    

}

void insert_bw(node**head)
{

int pos;
node *temp=*head;
cout<<"Enter the pos at u want to insert"<<endl;
cin>>pos;
node*newnode=new node();
cout<<"enter the data"<<endl;
cin>>newnode->data;
 while (pos-1!=0)
 {
     /* code */
     temp=temp->next;
     pos--;

 }

newnode->next=temp->next;
temp->next=newnode;







}

void print(node *head)
{
    node*temp=head;
do
{
    cout<<temp->data;
    temp=temp->next;
} while (temp!=head);

}

int main()
{

node *node1=new node();
node *node2=new node();
node *node3=new node();
node *node4=new node();

node1->data=1;
node1->next=node2;

node2->data=2;
node2->next=node3;


node3->data=3;
node3->next=node4;

node4->data=4;
node4->next=node1;

head=node1;
tail=node4;

insert_bw(&head);
print(head);


}