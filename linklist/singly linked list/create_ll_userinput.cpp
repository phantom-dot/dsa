#include <bits/stdc++.h>

using namespace std;

struct node
{
    /* data */
    char data;
    node * next;
};



void create(node ** n)
{
    node *temp=*n;
    int num=0;
    cout<<"ENTER E TO EXIT ELSE PRESS ANY BUTTON"<<endl;
    char c;
    c=getchar();
    if(c=='e')
    {
    free(n);
    exit(0);
    }

    do
    {
        /* code */
        cout<<"input the values of the nodes"<<endl;
        cin>>temp->data;
        cout<<"want to continue (y/n) ?"<<endl;
        cin>>c;
        
        if(c=='y')
        {
            temp->next=new node();
            temp=temp->next;
        }
        num++;
        

    } 

    while (c=='y');
    temp->next=NULL;

    cout<<"total no of nodes ="<<num<<endl;
    
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

node *start=new node();

create(&start);

cout<<"link list"<<endl;

print(start);

}