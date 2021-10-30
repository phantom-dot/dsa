#include <bits/stdc++.h>

using namespace std;

struct node
{

int data;
node *prev;
node*next;

};



void insert_at_end(node**n)
{

node *temp= *n;

while (temp->next!=NULL)
{
 temp=temp->next;       
}


node *newnode=new node();
newnode->data=0;
newnode->next=NULL;
newnode->prev=temp;

temp->next=newnode;


}









void insert_at_begg(node**n)
{



node *newnode=new node();
newnode->data=0;

newnode->prev=NULL;

newnode->next=*n;

*n=newnode;




}




void insert_at_pos(node**n,int pos)
{

node * temp=*n;

int a=0;
while (a!=pos)
{
    temp=temp->next;
    a++;
}

node *newnode= new node();

newnode->data=0;
temp->next->prev=newnode;

newnode->next=temp->next;

temp->next=newnode;
newnode->prev=temp;





}







void print(node *n)
{
    while (n!=NULL)
    {
        cout<<n->data<<" ";

        n=n->next;
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

cout<<"BEFOR insertion"<<endl;

print(node1);

cout<<endl;

cout<<"AFTER inserion"<<endl;

cout<<endl;

insert_at_pos(&node1,2);

print(node1);




}