#include <bits/stdc++.h>

using namespace std;

int search(int arr[],int size,int find)
{

for (int i = 0; i <size; i++)
{
    /* code */
    if(arr[i]==find)
    
    return i;

   
}

 

return -1;


}

int main()
{
    int arr[]={1,2,3,4,5,6};

    int sizeofarray=6;

    cout<<search(arr,sizeofarray,90);

}
