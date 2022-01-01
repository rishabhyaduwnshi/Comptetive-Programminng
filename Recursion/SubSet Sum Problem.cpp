#include<bits/stdc++.h>
using namespace std;

int subsetSumProblem(int array[],int size,int sum)
{
    if(size == 0)
        return (sum == 0)?1:0;
        
    return subsetSumProblem(array,size-1,sum)+subsetSumProblem(array,size-1,sum-array[size-1]);
}



int main()
{
    int array[] = {10,5,2,3,6};
    int n = sizeof(array)/sizeof(int);
    
    cout<<subsetSumProblem(array,n,8);
}
