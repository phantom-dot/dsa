#include <bits/stdc++.h>
using namespace std;

int findleaders(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        /* code */
        bool flag = false;
        for (int j = i + 1; j < size; j++)
        {
            /* code */
            if (arr[i] <= arr[j])
            {
                /* code */
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << arr[i];
        }
    }
}


int method2(int arr[],int siz)
{
    int curr_leader=arr[siz-1];
    cout<<curr_leader;
    for (int i = siz-2; i >=0; i--)
    {

     if (curr_leader<arr[i])
     {
         /* code */
         curr_leader=arr[i];
         cout<<curr_leader;
     }


    }
    
}

int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    method2(arr,size);
    return 0;
}