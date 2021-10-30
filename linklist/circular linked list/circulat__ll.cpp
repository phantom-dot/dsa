#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node * next;
};



void print(node*head)
{
    node * temp=head;
   do
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   } while (temp!=head);
   

}




int main()
{

    node * head=new node();
    node * second=new node();
    node * third=new node();
    node * fourth=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=head;


print(head);


}