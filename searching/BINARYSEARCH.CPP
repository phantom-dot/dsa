#include<bits/stdc++.h>
using namespace std;


int binarysearch(int arr[], int size,int n)
{
int low,high;
low=0;
high=size-1;

while(low<=high)
{
    int mid=(low+high)/2;


    if (arr[mid]==n)
    {
        /* code */
        return mid;
    }
    

    else if (arr[mid]>n)
    {
        high=mid-1;
    }

    else
    low=mid+1;
    

    
}


return -1;
}




int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<binarysearch(arr,size,6);
    return 0;
}