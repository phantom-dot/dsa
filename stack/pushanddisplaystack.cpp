#include <bits/stdc++.h>

using namespace std;

void push(int top, int stack[])
{

    int number;
    char c;

    do
    {
        cout << "enter the number you want push" << endl;

        cin >> number;
        if (top == 4)
        {
            cout << "overflow conditions";
            break;
        }

        else
        {
            top++;
            stack[top] = number;
        }
        cout << "number pushed succesfully"<<endl;
        cout << "enter y to continue"<<endl;
        cin >> c;

    } while (c == 'y');

    for(int i=top; i>=0; i--)
    {
        cout<<stack[i]<<" ";
    }
}


int main()
{
    int stack[5];
     int top = -1;
    push(top, stack);
    
}