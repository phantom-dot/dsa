#include <bits/stdc++.h>

using namespace std;

void push(int number, int top,int stack[])
{
    cout << "enter the number you want push" << endl;
    if (top == 5)
        cout << "overflow conditions";
    else
    {
        top++;
        stack[top]=number;
    }
}

int main()
{
    int stack[5];
    int top = -1;
}