#include <bits/stdc++.h>

using namespace std;

int checksort(int arr[],int size)
{


for (int i = 0; i < size; i++)
{
    
    if(arr[i]>arr[i+1])
    {
        return false;
    }

   
}

return true;

}

int main()
{
    int arr[]{1,2,3,4,5};
    int size=5;

    cout<<checksort(arr,size);

}