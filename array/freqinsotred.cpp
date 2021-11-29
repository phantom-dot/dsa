#include <bits/stdc++.h>
using namespace std;

int freq(int arr[], int size)
{
 int i=1,counter=1;   
   while(i<size)
   {
       while (i<size && arr[i]==arr[i-1])
       {
           counter++;
           i++;
       }
       
       cout<<arr[i-1]<<" "<<counter<<endl;
       i++;
       counter=1;
   }

    if (size==1 || arr[size-1]!=arr[size-2])
    {
        /* code */
        cout<<arr[size-1]<<" "<<1;
    }
    
    
    

    
}

int main()
{
    int arr[] = {10, 10, 10, 25, 30, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    freq(arr, size);

    return 0;
}