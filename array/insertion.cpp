#include <bits/stdc++.h>

using namespace std;

void insert(int array[],int data,int pos,int size,int cap)
{
    if(size==cap)
    cout<<"max limit reached";

    else
    {
        for (int i = size-1; i >=pos-1; i--)
        {
            array[i+1]=array[i];

        }
        
    }

    array[pos-1]=data;

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<array[i];
    }
    
}

int main()
{
    int arr[10]={1,2,3,4,5,6};

    int size=sizeof(arr)/sizeof(arr[0]);
    int cap=10;

  insert(arr,5,2,size,cap);



}