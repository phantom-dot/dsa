#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[]={1,2,3,4,7,11};
    int target=11;
    int low=0;
    int high=5;

    while (low<high)
    {
        /* code */
        if (array[high]+array[low]==target)
        {
            /* code */
            cout<<"found at "<<array[high]<<" "<<array[low];
            break;
        }

        else if (array[high]+array[low]<target)
        {
            /* code */
            low++;
        }
        else
        high++;

        
    }
    

    return 0;
}