#include <bits/stdc++.h>

using namespace std;

struct node
{
    /* data */
    int data;
    node *next;
};



void del_end(node**n)
{

node *temp=*n;

while (temp->next->next!=NULL)
{
    /* code */
    temp=temp->next;


}

delete(temp->next);
temp->next=NULL;



}




void del_at_pos(node**n,int d)
{

node *temp =*n;
node *befor=*n;
node *after=*n;


    while (befor->next->data!=d)
    {
        befor=befor->next;

    }

    while (temp->data!=d)
    {
        temp=temp->next;

    }

    after=temp->next;


    befor->next=after;
    delete(temp);




    
}







void del_begg(node **n)
{
    node *temp = *n;

    *n = temp->next;

    delete (temp);
}






void printlist(node *n)
{

    while (n != NULL)
    {
        /* code */
        cout << n->data << " ";
        n = n->next;
    }
}







int main()
{

    node *node1 = new node();
    node *node2 = new node();
    node *node3 = new node();

    node1->data = 1;
    node1->next = node2;

    node2->data = 2;
    node2->next = node3;

    node3->data = 3;
    node3->next = NULL;

    cout << "BEFORE DELETION"<<endl;

    printlist(node1);

    cout<<endl;

    cout << "AFTER DELETION"<<endl;
    
    del_at_pos(&node1,2);

    printlist(node1);
}