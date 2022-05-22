#include<bits/stdc++.h>
using namespace std;

void printFarthest(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        int smallest = -1;
        for(int j=i+1; j<n; j++)
        {
            if(array[j] < array[i])
                smallest = j;
        }
        cout<<smallest<<" ";
    }
}


int main()
{
    int array[] = {1, 2, 3, 4, 0};
    int n = sizeof(array)/sizeof(int);
    printFarthest(array,n);
}
