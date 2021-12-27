#include<bits/stdc++.h>
using namespace std;

int countTrailingZeros(int n)
{
    int result = 0;
    for(int i=5;i<=n;i=i*5)
    result = result+n/i;
    
    return result;
}


int main()
{
    cout<<countTrailingZeros(25);
}
