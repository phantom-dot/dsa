#include<bits/stdc++.h>
using namespace std;


int trap(int arr[],int size)
{
int res=0;
int lmin=0;
lmin=min(arr[0],arr[size-1]);
for (int i = 1; i < size-1; i++)
{
    /* code */
    res=res+(lmin-arr[i]);
}

cout<<res;
}



int main()
{
    int arr[]={7,0,4,2,5,0,6,4,0,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    trap(arr,size);
    return 0;
}