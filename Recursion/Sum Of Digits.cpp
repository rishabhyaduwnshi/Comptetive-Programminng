#include<bits/stdc++.h>
using namespace std;

int digitsSum(int n)
{
    if(n<0)
    return 0;
    
    
    if(n == 0 || n == 1)
        return n;
        
    return (n%10)+digitsSum(n/10);
}

int main()
{
    cout<<digitsSum(10);
}
