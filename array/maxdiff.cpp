#include<bits/stdc++.h>
using namespace std;

int maxdiff(int arr[],int size)
{
    int res=0;
for (int i = 0; i < size-1; i++)
{
    /* code */
    for (int j = i+1; j < size; j++)
    {
        /* code */
        
       if (arr[j]-arr[i]>res)
       {
           res=arr[j]-arr[i];
       }
       
        
    }
    
}

return res;
}


int main()
{
    
    int arr[]={2,3,10,6,4,8,1};
    int size=7;

cout<<maxdiff(arr,size);

}