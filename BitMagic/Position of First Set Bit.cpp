#include<bits/stdc++.h>
using namespace std;

void printBinary(int n)
{
    cout<<ffs(n)<<endl;
}


int main()
{
    for(int i=0;i<=7;i++)
    {
        printBinary(i);
    }
}
