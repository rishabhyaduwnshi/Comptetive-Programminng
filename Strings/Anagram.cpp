#include<bits/stdc++.h>
using namespace std;

bool compareArray(int hash1[],int hash2[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(hash1[i] != hash2[i])
        return false;
    }
    
    return true;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,first,second;
        cin>>str;
        
        int length = str.length();
        int mid = length/2;
        
        first = str.substr(0,mid);
        
        if(length%2 == 0)
        second = str.substr(mid,length);
        else
        second = str.substr(mid+1,length);
        
        int hash1[26] = {0};
        int hash2[26] = {0};
        
       int i =0;
       while(i<first.length())
       {
           hash1[first[i]-'a']++;
           hash2[second[i]-'a']++;
           i++;
       }
       
       if(compareArray(hash1,hash2,26))
       cout<<"YES\n";
       else
       cout<<"NO\n";
      
       
    }
}
