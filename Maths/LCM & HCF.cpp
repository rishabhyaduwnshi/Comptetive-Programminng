#include<bits/stdc++.h>
using namespace std;


int findHCF(int a,int b)
{
    if(b == 0)
        return a;
    else
        return findHCF(b,a%b);
}


int main()
{
    
        long long a,b,lcm;
        cin>>a>>b;
        lcm = (a*b)/__gcd(a,b);
        cout<<__gcd(a,b)<<" "<<lcm<<" \n";
    
        cout<<findHCF(a,b);
}
