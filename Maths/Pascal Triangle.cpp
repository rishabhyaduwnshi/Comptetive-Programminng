#include <bits/stdc++.h>
using namespace std;

void printPascalTriangle(int n)
{
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j == 0)
                matrix[i][j] = 0;
            else if(i == j)
                matrix[i][j] = 1;
            else
                matrix[i][j] = matrix[i-1][j]+matrix[i-1][j-1];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        
        cout<<endl;
    }
}


int main()
{
    printPascalTriangle(15);
}
