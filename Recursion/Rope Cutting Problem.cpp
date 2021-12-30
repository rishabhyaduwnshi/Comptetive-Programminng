#include<bits/stdc++.h>
using namespace std;


int max(int a,int b)
{
    if(a < b)
        return b;
    else if(a > b)
        return a;
    else
        return a;
}

int ropeCuttingProblem(int ropeSize, int a, int b, int c)
{
    if(ropeSize == 0)
        return 0;
        
    if(ropeSize<0)
        return -1;
    
    int result = max(max(ropeCuttingProblem(ropeSize-a,a,b,c),ropeCuttingProblem(ropeSize-b,a,b,c)),
                ropeCuttingProblem(ropeSize-c,a,b,c));
                
    if(result == -1)
        return -1;
        
    return result+1;
    
}


int main()
{
    cout<<ropeCuttingProblem(5,2,5,1);
    
}
