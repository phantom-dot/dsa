#include <bits/stdc++.h>
using namespace std;

int largest(int arr[],int size)
{
int largest=0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]>largest)
        largest=arr[i];
    }
    
    return largest;
}

int main()
{
    int arr[]={1,5,3,90,2};
    int size=5;

   cout<<"the largest in array is "<<largest(arr,size);

    

}