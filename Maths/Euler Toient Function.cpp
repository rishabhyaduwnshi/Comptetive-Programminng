#include<bits/stdc++.h>
using namespace std;

void eulerToitentFunction(int n)
{
    int result = 0;
    for(int i=1;i<n;i++)
        if(__gcd(i,n) == 1)
            result += 1;
    cout<<result;
}


int main()
{
    eulerToitentFunction(6);
}
