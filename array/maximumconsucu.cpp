#include <bits/stdc++.h>
using namespace std;

int maxones(int arr[], int size)
{
    int res = 0;
   
    for (int i = 0; i < size; i++)
    {
        int curr = 0;
        for (int j = i; j < size; j++)
        {

            if (arr[j] == 1)
            {
                /* code */
                curr++;
            }
            else
                break;
        }

        res = max(res, curr);
    }

    return res;
}

int main()
{
    int arr[] = {0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    return 0;
}
