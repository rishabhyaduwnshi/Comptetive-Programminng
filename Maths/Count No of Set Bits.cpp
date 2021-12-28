#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x = 5;
    int y = 1;
    
    int count = 0;
    
    while(x>0)
    {
        if(x&y != 0)
        count++;
        x = x>>1;
    }
    
    cout<<count;
    
}
