#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
};

void del_at_beg(node**head)
{

node*tail=*head;
node*start=*head;

while (tail->next!=*head)
{
    /* code */
    tail=tail->next;
}

tail->next=start->next;

start->next=NULL;

free(start);




}

void print(node*head)
{

node*tail=head;

while (tail->next!=head)
{
    /* code */
    cout<<tail->data<<" ";
    tail=tail->next;
}


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

    del_at_beg(&head);
    print(head);
}