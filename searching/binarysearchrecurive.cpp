#include<bits/stdc++.h>
using namespace std;

int binaryrec(int arr[],int size,int x,int low,int high)
{
    

    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==x)
        {
            /* code */
            return mid;
        }
        
        else if (arr[mid]>x)
        {
          binaryrec(arr,size,x,low,mid-1);
        }
        
        else
        binaryrec(arr,size,x,mid+1,high);
    }
    
}



int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low,high;
    low=0;
    high=size-1;
    binaryrec(arr,size,6,low,high);
    return 0;
}