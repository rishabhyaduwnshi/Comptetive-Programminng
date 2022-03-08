//bruteforce approach
long long getMaxArea(long long array[], int n)
    {
        long long result = 0;
        for(int i=0;i<n;i++)
        {
            long long currentArea = array[i];
            for(int j=i-1;j>=0;j--)
            {
                if(array[j]>=array[i])
                    currentArea = currentArea+array[i];
                else 
                    break;
            }
        
            for(int k=i+1;k<n;k++)
            {
                if(array[k]>=array[i])
                    currentArea = currentArea+array[i];
                else
                    break;
            }
        
            result = max(result,currentArea);
        }
        return result;
    }

//efficient solution

#include<bits/stdc++.h>
using namespace std;

void largestRectangularArea(int array[],int n)
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
    cout<<"Largest Area : "<< result;
}

int main()
{
    int array[] = {6,2,5,4,1,5,6};
    int size = sizeof(array)/sizeof(int);
    largestRectangularArea(array,size);
}
