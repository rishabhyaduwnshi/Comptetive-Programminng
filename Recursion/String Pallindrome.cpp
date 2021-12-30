#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string str,int start,int end)
{
    if(end == 1)
    return true;
    
    if(str[start] == str[end])
        return isPallindrome(str,start+1,end-1);
    else
        return false;
}


int main()
{
    string str = "abcba";
    int length = str.length();
    int start = 0;
    cout<<isPallindrome(str,start,length-1);
}
