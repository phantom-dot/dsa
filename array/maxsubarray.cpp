#include<bits/stdc++.h>
using namespace std;


int maxsubarr(int arr[],int size)
{   int res=arr[0];
    for (int i = 0; i < size; i++)
    {
        int curr=0;
       for (int j = i; j < size; j++)
       {
           curr=curr+arr[j];
           res=max(res,curr);
       }
       
    }

    return res;
    
}





int main()
{
    int arr[]={1,-2,3,-1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<maxsubarr(arr,size);
    return 0;
}