#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int size)
{
int largest=0;
int secondlar=0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]>largest)
        largest=arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
       if(arr[i]!=largest)
       {
           if(arr[i]>secondlar)
           {
               secondlar=arr[i];
           }
       }
    }
    
    return secondlar;
}



int main()
{
    int arr[]={1,1,1,1,1};
    int size=5;

   cout<<"the second largest in array is "<<secondlargest(arr,size);

    

}