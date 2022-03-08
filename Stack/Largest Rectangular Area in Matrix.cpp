#include <bits/stdc++.h>
using namespace std;

#define R 4 
#define C 4

int largestRectangularArea(int array[],int n)
{
    int result = 0;
    stack<int> st;
    int tp=0,currentArea=0;
    
    for(int i=0;i<n;i++)
    {
        while(st.empty() == false && array[st.top()] >= array[i])
        {
            tp = st.top();
            st.pop();
            currentArea = array[tp]*(st.empty() ? i : i-st.top()-1);
            result = max(result,currentArea);
        }
        st.push(i);
    }
        while(st.empty() == false)
        {
            tp = st.top();
            st.pop();
            currentArea = array[tp]*(st.empty() ? n : n-st.top()-1);
            result = max(result,currentArea);
        }
    return result;
}

int maxRectangle(int mat[][C]) 
{ 
    int res = largestRectangularArea(mat[0],C); 
  
    for (int i = 1; i < R; i++) { 
  
        for (int j = 0; j < C; j++) 
            if (mat[i][j]) 
                mat[i][j] += mat[i - 1][j]; 

        res = max(res, largestRectangularArea(mat[i],C)); 
    } 
        return res;
}

int main() 
{ 
    int mat[][C] = { 
        { 0, 1, 1, 0 }, 
        { 1, 1, 1, 1 }, 
        { 1, 1, 1, 1 }, 
        { 1, 1, 0, 0 }, 
    }; 
  
    cout << "Area of maximum rectangle is " << maxRectangle(mat); 
  
    return 0;  
}
