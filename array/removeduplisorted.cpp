#include<bits/stdc++.h>
using namespace std;

int remdupli(int arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            for (int j = i+1; j < size-1; j++)
            {
                arr[j]=arr[j+1];
            }

            size--;
            
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i];
    }
    
    
}

int main()
{
    int arr[]={1,2,2,3,4,5,5,6,6,7,9,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    remdupli(arr,size);
    return 0;
}