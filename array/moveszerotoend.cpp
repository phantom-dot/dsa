#include <bits/stdc++.h>
using namespace std;

int movezero(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        /* code */
        if (arr[i] == 0)
        {
            for (int j = i; j < size ; j++)
            {
                arr[j] = arr[j + 1];
               
            }

             arr[size - 1] = 0;
        }
    }
  

    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << arr[i];
    }
}

int method2(int arr[],int sze)
{

    for (int i = 0; i < sze; i++)
    {
        /* code */
        if (arr[i]==0)
        {
            /* code */
            for (int j = i+1; j < sze; j++)
            {
                /* code */
                if (arr[j]!=0)
                {
                    /* code */
                    swap(arr[i],arr[j]);
                }
                
            }
            
        }
        
    }
    
       for (int i = 0; i < sze; i++)
    {
        /* code */
        cout << arr[i];
    }
    
}

int main()
{
    int arr[] = { 1,2,3,0,4,0,5,0,6,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    method2(arr, size);

    return 0;
}