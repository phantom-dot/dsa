#include<bits/stdc++.h>
using namespace std;

int stock(int price[],int size)
{
    int profit=0;

    for(int i=1;i<size;i++)
    {
        if(price[i]>price[i-1])
        {
            profit=profit+price[i]-price[i-1];
        }
    }

    return profit;
}

int main()
{
    int arr[]={100,180,260,310,40,535,695};
    int size=7;

    cout<<stock(arr,size);



    return 0;
}