#include <bits/stdc++.h>

using namespace std;



int main()
{

int arr[5]={1,2,3,4,5};
int size=5;
int pos;

cout<<"Enter the pos u want to delete";

cin>>pos;

if (pos>size || pos<0)
{
    cout<<"wrong position";
 
}

else
{
for (int i = pos-1; i < size-1; i++)
{
    /* code */
    arr[i]=arr[i+1];
}



size--;


}


for (int i = 0; i < size; i++)
{
    /* code */
    cout<<arr[i];
}


}