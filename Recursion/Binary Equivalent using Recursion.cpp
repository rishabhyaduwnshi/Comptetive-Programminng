#include<bits/stdc++.h>
using namespace std;

void printBinary(int n)
{
    if(n == 0)
    {
        cout<<0;
        return;
    }
    
    if(n == 1)
    {
        cout<<1;
        return;
    }
    printBinary(n/2);
    cout<<n%2;
}



int main()
{
    for(int i=0;i<=7;i++)
    {
        printBinary(i);
        cout<<endl;
    }
}
