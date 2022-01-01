#include<bits/stdc++.h>
using namespace std;

void swap(string i, string j)
{
    string x;
    x = i;
    i = j;
    j = x;
    
}

void printPermutations(string str,int i=0)
{
    if(i == str.length())
    {
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        printPermutations(str,i+1);
        swap(str[i],str[j]);
    }
}



int main()
{
    string str = "ABC";
    printPermutations(str);
    
}
