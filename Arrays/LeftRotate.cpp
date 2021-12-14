#include<bits/stdc++.h>
using namespace std;

void leftRotate(int array[], int size, int rotateBy)
{
    int temp[rotateBy];
    int i,j=0;
    
    for(i=0;i<rotateBy;i++)
    temp[i] = array[i];
    
    for(i=0;i<size-rotateBy;i++)
    array[i] = array[i+rotateBy];
    
    for(;i<size;i++,j++)
    array[i] = temp[j];
    
}


int main()
{
    int array[] = {5,4,3,2,1};
    int n = sizeof(array)/sizeof(int);
    leftRotate(array,n,4);
    
    for(int i=0;i<n;i++)
    cout<<array[i]<<" ";
}
