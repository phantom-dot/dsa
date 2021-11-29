#include <bits/stdc++.h>

using namespace std;

int remdupli(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size - 1; j++)
    {
      if (arr[i] == arr[j])
      {
        for (int k = j; k < size - 1; k++)
        {
          arr[k] = arr[k + 1];
        }

        size--;
      }
    }
  }

  for (int i = 0; i < size - 1; i++)
  {
    /* code */
    cout << arr[i];
  }
}

int main()
{
  int arr[] = {2,1,1,6,4,6,4,0,8,8,0};
  int size = sizeof(arr) / sizeof(arr[0]);
  remdupli(arr, size);

  return 0;
}