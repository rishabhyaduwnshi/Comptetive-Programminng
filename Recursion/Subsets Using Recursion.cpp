#include<bits/stdc++.h>
using namespace std;

void printSubset(string str, int index = 0, string curr = "")
{
    int n = str.length();
    
    if(index == n)
    {
        cout<<curr<<endl;
        return;
    }
    
    printSubset(str,index+1,curr+str[index]);
    printSubset(str,index+1,curr);
    
}

int main()
{
    string str = "ABC";
    int size = str.length();
    
    
    printSubset(str);
}
