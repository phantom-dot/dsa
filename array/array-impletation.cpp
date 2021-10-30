#include <bits/stdc++.h>

using namespace std;

int main()
{
    // syntax 
    // (data-type)(array-name)([sizeofarray]);

    int array[5];
    //now memory of 5 int is allocated 

    cout<<"enter array values"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"enter"<< i <<" "<< "elment value"<<endl;
        cin>>array[i];
        
    }
    
    cout<<"the array is"<<endl;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<array[i];
    }
    
    
    
}