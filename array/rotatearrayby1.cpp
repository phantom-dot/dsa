#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;

   
    
        /* code */
        int temp=arr[0];
        for (int j = 0; j < size; j++)
        {
            arr[j]=arr[j+1];
        }
        
        arr[size-1]==temp;

        for (int i = 0; i < size; i++)
        {
            /* code */
            cout<<arr[i];
        }
        
    
    
    return 0;
}