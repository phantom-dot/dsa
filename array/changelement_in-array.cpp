#include <bits/stdc++.h>
using namespace std;
int main()
{
int size;

int array[5]={1,2,3,4,5};
//now we want to insert a elemt to a postion
//we can never change the size of an array
int pos,value;
cout<<"enter the pos you want to chnge"<<endl;
cin>>pos;
cout<<endl;
cout<<"enter the value you want at "<< pos << endl;
cin>>value;

array[pos-1]=value;


for (int i = 0; i < 5; i++)
{
    /* code */

    cout<<array[i];

}

 



}